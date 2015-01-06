//creado : Cristian Tornador
//22-10-2002 - Universidad Politecnica Catalunya (Barcelona)

#include "EmphasizingMark.h"

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

void EmphasizingMarkFlowObj::traceSubObjects(Collector &c) const
{
 c.trace(emphmark_);
 CompoundFlowObj::traceSubObjects(c);
}

void EmphasizingMarkFlowObj::processInner(ProcessContext &context)
{

  FOTBuilder &fotb = context.currentFOTBuilder();
  FOTBuilder* markfotb[1];
  fotb.startEmphasizingMark(*nic_, markfotb);

   if (emphmark_) {
      context.pushPrincipalPort(markfotb[0]);
      emphmark_->process(context);
      context.popPrincipalPort();
  }
  fotb.endEmphasizingMarkEM();
  CompoundFlowObj::processInner(context);
  fotb.endEmphasizingMark();
}

FlowObj *EmphasizingMarkFlowObj::copy(Collector &c) const
{
  return new (c) EmphasizingMarkFlowObj(*this);
}

bool EmphasizingMarkFlowObj::hasNonInheritedC(const Identifier *ident) const
{
  Identifier::SyntacticKey key;
  if (ident->syntacticKey(key)) {
    switch (key) {
    case Identifier::keyBreakBeforePriority:
    case Identifier::keyBreakAfterPriority:
    case Identifier::keyMark:
     return 1;
    default:
      break;
    }
  }
  return 0;
}

void EmphasizingMarkFlowObj::setNonInheritedC(const Identifier *ident,
                                                 ELObj *obj,
                                                 const Location &loc,
                                                 Interpreter &interp)
{
 SosofoObj *sosofo = obj->asSosofo();
 Identifier::SyntacticKey key;
 if (ident->syntacticKey(key)) {
  switch (key) {
   case Identifier::keyBreakBeforePriority:
      interp.convertIntegerC(obj, ident, loc, nic_->breakBeforePriority);
      return;
   case Identifier::keyBreakAfterPriority:
      interp.convertIntegerC(obj, ident, loc, nic_->breakAfterPriority);
      return;
   case Identifier::keyMark:
      if (!sosofo) {
         interp.setNextLocation(loc);
         interp.message(InterpreterMessages::invalidCharacteristicValue,
                        StringMessageArg(ident->name()));
         return;
      }
      emphmark_ = sosofo;
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
