//creado : Cristian Tornador
//22-10-2002 - Universidad Politecnica Catalunya (Barcelona)

#include "stylelib.h"
#include "ProcessContext.h"
#include "Interpreter.h"
#include "InterpreterMessages.h"
#include "SosofoObj.h"
#include "macros.h"


//multi-line-inline-note
/**
 *@class MultiLineInlineNoteFlowObj
 *@brief Class which implements the "multi-line-inline-note" flow object
 */
#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

class MultiLineInlineNoteFlowObj : public CompoundFlowObj {
public:
  void *operator new(size_t, Collector &c) {
    return c.allocateObject(1);
  }

  struct NIC : public FOTBuilder::InlineNIC {
      NIC();
      SosofoObj *openclose[2];
  };
  
  MultiLineInlineNoteFlowObj()
   : nic_(new FOTBuilder::MultiLineInlineNoteNIC), openclose_(new NIC) { }
  MultiLineInlineNoteFlowObj(const MultiLineInlineNoteFlowObj &fo)
   : CompoundFlowObj(fo), nic_(new FOTBuilder::MultiLineInlineNoteNIC(*fo.nic_)), openclose_(new NIC(*fo.openclose_)) { }

  void traceSubObjects(Collector &) const;
  void processInner(ProcessContext &);
  FlowObj *copy(Collector &) const;
  bool hasNonInheritedC(const Identifier *) const;
  void setNonInheritedC(const Identifier *, ELObj *,
                        const Location &, Interpreter &);
private:
  Owner<FOTBuilder::MultiLineInlineNoteNIC> nic_;
  Owner<NIC> openclose_; 
};

#ifdef DSSSL_NAMESPACE
}
#endif
