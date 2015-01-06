
#include "AlignedColumn.h"

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

void AlignedColumnFlowObj::processInner(ProcessContext &context)
{
  FOTBuilder &fotb = context.currentFOTBuilder();
  fotb.startAlignedColumn(*nic_);
  CompoundFlowObj::processInner(context);
  fotb.endAlignedColumn();
}

FlowObj *AlignedColumnFlowObj::copy(Collector &c) const
{
  return new (c) AlignedColumnFlowObj(*this);
}

bool AlignedColumnFlowObj::hasNonInheritedC(const Identifier *ident) const
{
 return isDisplayNIC(ident);
}

void AlignedColumnFlowObj::setNonInheritedC(const Identifier *ident,
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
