#include "SideBySide.h"

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

SideBySideFlowObj::SideBySideFlowObj()
: nic_(new FOTBuilder::DisplayNIC)
{
}

SideBySideFlowObj::SideBySideFlowObj(const SideBySideFlowObj &fo)
: CompoundFlowObj(fo), nic_(new FOTBuilder::DisplayNIC(*fo.nic_))
{
}

void SideBySideFlowObj::processInner(ProcessContext &context)
{
  FOTBuilder &fotb = context.currentFOTBuilder();
  fotb.startSideBySide(*nic_);
  CompoundFlowObj::processInner(context);
  fotb.endSideBySide();
}

bool SideBySideFlowObj::hasNonInheritedC(const Identifier *ident) const
{
  return isDisplayNIC(ident);
}

void SideBySideFlowObj::setNonInheritedC(const Identifier *ident, ELObj *obj,
                                           const Location &loc, Interpreter &interp)
{
  if (!setDisplayNIC(*nic_, ident, obj, loc, interp))
    CANNOT_HAPPEN();
}

FlowObj *SideBySideFlowObj::copy(Collector &c) const
{
  return new (c) SideBySideFlowObj(*this);
}

#ifdef DSSSL_NAMESPACE
}
#endif


