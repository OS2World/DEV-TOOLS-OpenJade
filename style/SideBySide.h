//creado : Cristian Tornador
//22-10-2002 - Universidad Politecnica Catalunya (Barcelona)

#include "stylelib.h"
#include "ProcessContext.h"
#include "Interpreter.h"
#include "InterpreterMessages.h"
#include "SosofoObj.h"
#include "macros.h"

/**
 *@class SideBySideFlowObj
 *@brief Class which implements the "side-by-side" flow object
 */
#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

class SideBySideFlowObj : public CompoundFlowObj {
public:
  void *operator new(size_t, Collector &c) {
    return c.allocateObject(1);
  }
  SideBySideFlowObj();
  SideBySideFlowObj(const SideBySideFlowObj &);
  void processInner(ProcessContext &);
  FlowObj *copy(Collector &) const;
  void setNonInheritedC(const Identifier *, ELObj *,
                        const Location &, Interpreter &);
  bool hasNonInheritedC(const Identifier *) const;
protected:
  Owner<FOTBuilder::DisplayNIC> nic_;
  
};

#ifdef DSSSL_NAMESPACE
}
#endif
