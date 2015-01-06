//creado : Cristian Tornador
//22-10-2002 - Universidad Politecnica Catalunya (Barcelona)

#include "stylelib.h"
#include "ProcessContext.h"
#include "Interpreter.h"
#include "InterpreterMessages.h"
#include "SosofoObj.h"
#include "macros.h"


//embedded-text
/**
 *@class EmbeddedTextFlowObj
 *@brief Class which creates the "embedded-text" flow object
 */

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

class EmbeddedTextFlowObj : public CompoundFlowObj {
public:
  void *operator new(size_t, Collector &c) {
    return c.allocateObject(1);
  }
  EmbeddedTextFlowObj()
   : nic_(new FOTBuilder::EmbeddedTextNIC) { }
  EmbeddedTextFlowObj(const EmbeddedTextFlowObj &fo)
   : CompoundFlowObj(fo), nic_(new FOTBuilder::EmbeddedTextNIC(*fo.nic_)) { }
  void processInner(ProcessContext &);
  FlowObj *copy(Collector &) const;
  bool hasNonInheritedC(const Identifier *) const;
  void setNonInheritedC(const Identifier *, ELObj *,
                        const Location &, Interpreter &);
private:
  Owner<FOTBuilder::EmbeddedTextNIC> nic_;
};

#ifdef DSSSL_NAMESPACE
}
#endif
