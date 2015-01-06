
#include "EmbeddedText.h"

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

void EmbeddedTextFlowObj::processInner(ProcessContext &context)
{
  FOTBuilder &fotb = context.currentFOTBuilder();
  fotb.startEmbeddedText(*nic_);
  CompoundFlowObj::processInner(context);
  fotb.endEmbeddedText();
}

FlowObj *EmbeddedTextFlowObj::copy(Collector &c) const
{
  return new (c) EmbeddedTextFlowObj(*this);
}

bool EmbeddedTextFlowObj::hasNonInheritedC(const Identifier *ident) const
{
  Identifier::SyntacticKey key;
  if (ident->syntacticKey(key)) {
    switch (key) {
    case Identifier::keyDirection:
      return 1;
    default:
      break;
    }
  }
  return 0;
}

void EmbeddedTextFlowObj::setNonInheritedC(const Identifier *ident,
                                                 ELObj *obj,
                                                 const Location &loc,
                                                 Interpreter &interp)
{
 Identifier::SyntacticKey key;
 if (ident->syntacticKey(key)) {
  switch (key) {
   case Identifier::keyDirection:
    {
     static FOTBuilder::Symbol vals[] = {
      //FOTBuilder::symbolFalse, hay que definir uno de los dos obligatoriamente
      FOTBuilder::symbolRightToLeft,
      FOTBuilder::symbolLeftToRight
     };
     interp.convertEnumC(vals, SIZEOF(vals), obj, ident, loc, nic_->Direction);
     return;
    }
   default:
    break;
  }
 }
 CANNOT_HAPPEN();
}

#ifdef DSSSL_NAMESPACE
}
#endif
