//creado : Cristian Tornador
//22-10-2002 - Universidad Politecnica Catalunya (Barcelona)

#include "GlyphAnnotation.h"

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

void GlyphAnnotationFlowObj::processInner(ProcessContext &context)
{
  FOTBuilder &fotb = context.currentFOTBuilder();
  fotb.startGlyphAnnotation(*nic_);
  CompoundFlowObj::processInner(context);
  fotb.endGlyphAnnotation();
}

FlowObj *GlyphAnnotationFlowObj::copy(Collector &c) const
{
  return new (c) GlyphAnnotationFlowObj(*this);
}

bool GlyphAnnotationFlowObj::hasNonInheritedC(const Identifier *ident) const
{
  Identifier::SyntacticKey key;
  if (ident->syntacticKey(key)) {
    switch (key) {
    case Identifier::keyBreakBeforePriority:
    case Identifier::keyBreakAfterPriority:
     return 1;
    default:
      break;
    }
  }
  return 0;
}

void GlyphAnnotationFlowObj::setNonInheritedC(const Identifier *ident,
                                                 ELObj *obj,
                                                 const Location &loc,
                                                 Interpreter &interp)
{
 Identifier::SyntacticKey key;
 if (ident->syntacticKey(key)) {
  switch (key) {
   case Identifier::keyBreakBeforePriority:
      interp.convertIntegerC(obj, ident, loc, nic_->breakBeforePriority);
      return;
   case Identifier::keyBreakAfterPriority:
      interp.convertIntegerC(obj, ident, loc, nic_->breakAfterPriority);
      return;
   default:
    break;
  }
 }
 CANNOT_HAPPEN();
}

#ifdef DSSSL_NAMESPACE
}
#endif
