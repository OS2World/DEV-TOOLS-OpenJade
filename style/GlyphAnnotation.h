//creado : Cristian Tornador
//22-10-2002 - Universidad Politecnica Catalunya (Barcelona) 

#include "stylelib.h"
#include "ProcessContext.h"
#include "Interpreter.h"
#include "InterpreterMessages.h"
#include "SosofoObj.h"
#include "macros.h"

//glyph-annotation
/**
 *@class GlyphAnnotationFlowObj
 *@brief Class which creates the "glyph-annotation" flow object
 */

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

class GlyphAnnotationFlowObj : public CompoundFlowObj {
public:
  void *operator new(size_t, Collector &c) {
    return c.allocateObject(1);
  }
  GlyphAnnotationFlowObj()
   : nic_(new FOTBuilder::GlyphAnnotationNIC) { }
  GlyphAnnotationFlowObj(const GlyphAnnotationFlowObj &fo)
   : CompoundFlowObj(fo), nic_(new FOTBuilder::GlyphAnnotationNIC(*fo.nic_)) {
 }
  void processInner(ProcessContext &);
  FlowObj *copy(Collector &) const;
  bool hasNonInheritedC(const Identifier *) const;
  void setNonInheritedC(const Identifier *, ELObj *,
                        const Location &, Interpreter &);
private:
  Owner<FOTBuilder::GlyphAnnotationNIC> nic_;
};

#ifdef DSSSL_NAMESPACE
}
#endif
