
#include "IncludedContainerArea.h"

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

void IncludedContainerAreaFlowObj::processInner(ProcessContext &context)
{
  FOTBuilder &fotb = context.currentFOTBuilder();
  fotb.startIncludedContainerArea(*nic_);
  CompoundFlowObj::processInner(context);
  fotb.endIncludedContainerArea();
}

FlowObj *IncludedContainerAreaFlowObj::copy(Collector &c) const
{
  return new (c) IncludedContainerAreaFlowObj(*this);
}

bool IncludedContainerAreaFlowObj::hasNonInheritedC(const Identifier *ident) const
{
  Identifier::SyntacticKey key;
  if (ident->syntacticKey(key)) {
    switch (key) {
    case Identifier::keyIsDisplay:
    case Identifier::keyBreakBeforePriority:
    case Identifier::keyBreakAfterPriority:
    case Identifier::keyScale:
    case Identifier::keyPositionPointX:
    case Identifier::keyPositionPointY:
    case Identifier::keyHeight:
    case Identifier::keyWidth:
    case Identifier::keyEscapementDirection:
    case Identifier::keyContentsRotation:
      return 1;
    default:
      return isDisplayNIC(ident);
      break;
    }
  }
  return 0;
}

void IncludedContainerAreaFlowObj::setNonInheritedC(const Identifier *ident,
                                                 ELObj *obj,
                                                 const Location &loc,
                                                 Interpreter &interp)
{
      static FOTBuilder::Symbol kvals[] = {
       FOTBuilder::symbolTopToBottom,
       FOTBuilder::symbolBottomToTop,
       FOTBuilder::symbolRightToLeft,
       FOTBuilder::symbolLeftToRight,
      };

 if (!setDisplayNIC(*nic_, ident, obj, loc, interp)) {
  Identifier::SyntacticKey key;
  if (ident->syntacticKey(key)) {
   switch (key) {
    case Identifier::keyIsDisplay:
     interp.convertBooleanC(obj, ident, loc, nic_->IsDisplay);
     return;
     break;
    case Identifier::keyBreakBeforePriority:
      interp.convertIntegerC(obj, ident, loc, nic_->breakBeforePriority);
      return;
      break;
    case Identifier::keyBreakAfterPriority:
      interp.convertIntegerC(obj, ident, loc, nic_->breakAfterPriority);
      return;
      break;
    case Identifier::keyScale:
          double d;
          if (obj->realValue(d)) {
            nic_->scaleType = FOTBuilder::symbolFalse;
            nic_->scale[0] = nic_->scale[1] = d;
          }
          else if (obj->asSymbol()) {
            static FOTBuilder::Symbol vals[] = {
              FOTBuilder::symbolMax,
              FOTBuilder::symbolMaxUniform,
            };
            interp.convertEnumC(vals, 2, obj, ident, loc, nic_->scaleType);
          }
          else {
            PairObj *pair = obj->asPair();
            if (pair
                && pair->car()->realValue(nic_->scale[0])
                && (pair = pair->cdr()->asPair()) != 0
                && pair->car()->realValue(nic_->scale[1])
                && pair->cdr()->isNil()) {
              nic_->scaleType = FOTBuilder::symbolFalse;
            }
            else
              interp.invalidCharacteristicValue(ident, loc);
          }
      return;
      break;
    case Identifier::keyPositionPointX:
        interp.convertLengthSpecC(obj, ident, loc, nic_->positionPointX);
        return;
        break;
    case Identifier::keyPositionPointY:
        interp.convertLengthSpecC(obj, ident, loc, nic_->positionPointY);
        return;
        break;
    case Identifier::keyContentsRotation:
      interp.convertIntegerC(obj, ident, loc, nic_->contentsRotation);
      return;
      break;
    case Identifier::keyWidth:
      if (obj == interp.makeFalse())
        nic_->widthType = FOTBuilder::IncludedContainerAreaNIC::widthMinimum;
      else if (interp.convertLengthSpecC(obj, ident, loc, nic_->width))
        nic_->widthType = FOTBuilder::IncludedContainerAreaNIC::widthExplicit;
        return;
       break;
    case Identifier::keyHeight:
      if (obj == interp.makeFalse())
        nic_->heightType = FOTBuilder::IncludedContainerAreaNIC::heightMinimum;
      else if (interp.convertLengthSpecC(obj, ident, loc, nic_->height))
        nic_->heightType = FOTBuilder::IncludedContainerAreaNIC::heightExplicit;
	return;
       break;
    case Identifier::keyEscapementDirection:
      interp.convertEnumC(kvals, SIZEOF(kvals), obj, ident, loc, nic_->EscapementDirection);
      return;
     break;
     default:
     break;
   }
  }
  CANNOT_HAPPEN();
 }
}

#ifdef DSSSL_NAMESPACE
}
#endif
