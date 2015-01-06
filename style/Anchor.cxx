//creado : Cristian Tornador
//22-10-2002 - Universidad Politecnica Catalunya (Barcelona)

#include "Anchor.h"

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

void AnchorFlowObj::processInner(ProcessContext &context)
{
context.currentFOTBuilder().anchor(*nic_);
}

FlowObj *AnchorFlowObj::copy(Collector &c)const
{
 return new (c) AnchorFlowObj(*this);
}

bool AnchorFlowObj::hasNonInheritedC(const Identifier *ident) const
{
  Identifier::SyntacticKey key;
  if (ident->syntacticKey(key)) {
    switch (key) {
    case Identifier::keyIsDisplay:
    case Identifier::keyBreakBeforePriority:
    case Identifier::keyBreakAfterPriority:
      return 1;
    default:
      break;
    }
  }
  return 0;
}

void AnchorFlowObj::setNonInheritedC(const Identifier *ident,
                                                 ELObj *obj,
                                                 const Location &loc,
                                                 Interpreter &interp)
{
 Identifier::SyntacticKey key;
 if (ident->syntacticKey(key)) {
  switch (key) {
   case Identifier::keyIsDisplay:
     interp.convertBooleanC(obj, ident, loc, nic_->IsDisplay);
     return;
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
