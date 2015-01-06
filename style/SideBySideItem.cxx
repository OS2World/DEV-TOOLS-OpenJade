
#include "SideBySideItem.h"

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

void SideBySideItemFlowObj::processInner(ProcessContext &context)
{
  FOTBuilder &fotb = context.currentFOTBuilder();
  fotb.startSideBySideItem();
  CompoundFlowObj::processInner(context);
  fotb.endSideBySideItem();
}

FlowObj *SideBySideItemFlowObj::copy(Collector &c) const
{
  return new (c) SideBySideItemFlowObj(*this);
}

#ifdef DSSSL_NAMESPACE
}
#endif
