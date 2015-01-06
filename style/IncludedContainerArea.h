//creado : Cristian Tornador
//22-10-2002 - Universidad Politecnica Catalunya (Barcelona)

#include "stylelib.h"
#include "ProcessContext.h"
#include "Interpreter.h"
#include "InterpreterMessages.h"
#include "SosofoObj.h"
#include "macros.h"


//included-container-area
/**
 *@class IncludedContainerAreaFlowObj
 *@brief Class which creates the "included-container-area" flow object
 */
#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

class IncludedContainerAreaFlowObj : public CompoundFlowObj {
public:
  void *operator new(size_t, Collector &c) {
    return c.allocateObject(1);
  }
  IncludedContainerAreaFlowObj()
   : nic_(new FOTBuilder::IncludedContainerAreaNIC) { }
  IncludedContainerAreaFlowObj(const IncludedContainerAreaFlowObj &fo)
   : CompoundFlowObj(fo), nic_(new FOTBuilder::IncludedContainerAreaNIC(*fo.nic_)) { }
  void processInner(ProcessContext &);
  FlowObj *copy(Collector &) const;
  bool hasNonInheritedC(const Identifier *) const;
  void setNonInheritedC(const Identifier *, ELObj *,
                        const Location &, Interpreter &);
private:
  Owner<FOTBuilder::IncludedContainerAreaNIC> nic_;
};

#ifdef DSSSL_NAMESPACE
}
#endif
