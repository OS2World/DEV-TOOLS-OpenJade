//creado : Cristian Tornador
//22-10-2002 - Universidad Politecnica Catalunya (Barcelona)

#include "ColumnSetSequence.h"

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

void ColumnSetSequenceFlowObj::processInner(ProcessContext &context)
{
  FOTBuilder &fotb = context.currentFOTBuilder();
  fotb.startColumnSetSequence(*nic_);
  CompoundFlowObj::processInner(context);
  fotb.endColumnSetSequence();
}

FlowObj *ColumnSetSequenceFlowObj::copy(Collector &c) const
{
  return new (c) ColumnSetSequenceFlowObj(*this);
}

bool ColumnSetSequenceFlowObj::hasNonInheritedC(const Identifier *ident) const
{
 return isDisplayNIC(ident);
}

void ColumnSetSequenceFlowObj::setNonInheritedC(const Identifier *ident,
                                                 ELObj *obj,
                                                 const Location &loc,
                                                 Interpreter &interp)
{
  if (!setDisplayNIC(*nic_, ident, obj, loc, interp)) {
    const Char *s;
    size_t n;
    if (!obj->stringData(s, n)) {  
      interp.setNextLocation(loc);
      interp.message(InterpreterMessages::invalidCharacteristicValue,
                     StringMessageArg(ident->name()));
    }
 }
}

#ifdef DSSSL_NAMESPACE
}
#endif
