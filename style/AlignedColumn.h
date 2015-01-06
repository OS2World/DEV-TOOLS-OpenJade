//creado : Cristian Tornador
//22-10-2002 - Universidad Politecnica Catalunya (Barcelona)

#include "stylelib.h"
#include "ProcessContext.h"
#include "Interpreter.h"
#include "InterpreterMessages.h"
#include "SosofoObj.h"
#include "macros.h"


//aligned-column
/**
 *@class AlignedColumnFlowObj
 *@brief Class which creates the aligned-column flow object
 */

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

class AlignedColumnFlowObj : public CompoundFlowObj {
public:
  void *operator new(size_t, Collector &c) {
    return c.allocateObject(1);
  }
  AlignedColumnFlowObj()
   : nic_(new FOTBuilder::DisplayNIC) { }
  AlignedColumnFlowObj(const AlignedColumnFlowObj &fo)
   : CompoundFlowObj(fo), nic_(new FOTBuilder::DisplayNIC(*fo.nic_)) { }
  void processInner(ProcessContext &);
  FlowObj *copy(Collector &) const;
  bool hasNonInheritedC(const Identifier *) const;
  void setNonInheritedC(const Identifier *, ELObj *,
                        const Location &, Interpreter &);
private:
  Owner<FOTBuilder::DisplayNIC> nic_;
};

#ifdef DSSSL_NAMESPACE
}
#endif
