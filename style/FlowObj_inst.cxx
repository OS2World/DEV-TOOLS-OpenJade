#ifdef SP_NAMESPACE
namespace SP_NAMESPACE {
#endif


#ifdef SP_NAMESPACE
}
#endif
// Copyright (c) 1996 James Clark
// See the file copying.txt for copying permission.

#include "stylelib.h"

#ifdef SP_MANUAL_INST

#define SP_DEFINE_TEMPLATES
#include "Owner.h"
#include "CopyOwner.h"
#undef SP_DEFINE_TEMPLATES

#if _MSC_VER >= 1100

#ifdef SP_NAMESPACE
namespace SP_NAMESPACE {
#endif

#ifdef DSSSL_NAMESPACE
using namespace DSSSL_NAMESPACE;
#endif

#ifdef GROVE_NAMESPACE
using namespace GROVE_NAMESPACE;
#endif

#else

#ifdef DSSSL_NAMESPACE
namespace DSSSL_NAMESPACE {
#endif

#endif

#ifdef __DECCXX
#pragma define_template Owner<SimplePageSequenceFlowObj::HeaderFooter>
#else
#ifdef __xlC__
#pragma define(Owner<SimplePageSequenceFlowObj::HeaderFooter>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<SimplePageSequenceFlowObj::HeaderFooter>;
#else
typedef Owner<SimplePageSequenceFlowObj::HeaderFooter> Dummy_0;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::EmbeddedTextNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::EmbeddedTextNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::EmbeddedTextNIC>;
#else
typedef Owner<FOTBuilder::EmbeddedTextNIC> Dummy_1;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::AnchorNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::AnchorNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::AnchorNIC>;
#else
typedef Owner<FOTBuilder::AnchorNIC> Dummy_2;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::IncludedContainerAreaNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::IncludedContainerAreaNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::IncludedContainerAreaNIC>;
#else
typedef Owner<FOTBuilder::IncludedContainerAreaNIC> Dummy_3;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<MultiLineInlineNoteFlowObj::NIC>
#else
#ifdef __xlC__
#pragma define(Owner<MultiLineInlineNoteFlowObj::NIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<MultiLineInlineNoteFlowObj::NIC>;
#else
typedef Owner<MultiLineInlineNoteFlowObj::NIC> Dummy_4;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::MultiLineInlineNoteNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::MultiLineInlineNoteNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::MultiLineInlineNoteNIC>;
#else
typedef Owner<FOTBuilder::MultiLineInlineNoteNIC> Dummy_5;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::EmphasizingMarkNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::EmphasizingMarkNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::EmphasizingMarkNIC>;
#else
typedef Owner<FOTBuilder::EmphasizingMarkNIC> Dummy_6;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::GlyphAnnotationNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::GlyphAnnotationNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::GlyphAnnotationNIC>;
#else
typedef Owner<FOTBuilder::GlyphAnnotationNIC> Dummy_7;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template CopyOwner<ScoreFlowObj::Type>
#else
#ifdef __xlC__
#pragma define(CopyOwner<ScoreFlowObj::Type>)
#else
#ifdef SP_ANSI_CLASS_INST
template class CopyOwner<ScoreFlowObj::Type>;
#else
typedef CopyOwner<ScoreFlowObj::Type> Dummy_8;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<TableFlowObj::NIC>
#else
#ifdef __xlC__
#pragma define(Owner<TableFlowObj::NIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<TableFlowObj::NIC>;
#else
typedef Owner<TableFlowObj::NIC> Dummy_9;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<ScoreFlowObj::Type>
#else
#ifdef __xlC__
#pragma define(Owner<ScoreFlowObj::Type>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<ScoreFlowObj::Type>;
#else
typedef Owner<ScoreFlowObj::Type> Dummy_10;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<TableColumnFlowObj::NIC>
#else
#ifdef __xlC__
#pragma define(Owner<TableColumnFlowObj::NIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<TableColumnFlowObj::NIC>;
#else
typedef Owner<TableColumnFlowObj::NIC> Dummy_11;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<TableCellFlowObj::NIC>
#else
#ifdef __xlC__
#pragma define(Owner<TableCellFlowObj::NIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<TableCellFlowObj::NIC>;
#else
typedef Owner<TableCellFlowObj::NIC> Dummy_12;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::BoxNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::BoxNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::BoxNIC>;
#else
typedef Owner<FOTBuilder::BoxNIC> Dummy_13;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::LeaderNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::LeaderNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::LeaderNIC>;
#else
typedef Owner<FOTBuilder::LeaderNIC> Dummy_14;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::RuleNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::RuleNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::RuleNIC>;
#else
typedef Owner<FOTBuilder::RuleNIC> Dummy_15;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::DisplayNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::DisplayNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::DisplayNIC>;
#else
typedef Owner<FOTBuilder::DisplayNIC> Dummy_16;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::InlineNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::InlineNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::InlineNIC>;
#else
typedef Owner<FOTBuilder::InlineNIC> Dummy_17;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::CharacterNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::CharacterNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::CharacterNIC>;
#else
typedef Owner<FOTBuilder::CharacterNIC> Dummy_18;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::ExternalGraphicNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::ExternalGraphicNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::ExternalGraphicNIC>;
#else
typedef Owner<FOTBuilder::ExternalGraphicNIC> Dummy_19;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<MultiModeFlowObj::NIC>
#else
#ifdef __xlC__
#pragma define(Owner<MultiModeFlowObj::NIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<MultiModeFlowObj::NIC>;
#else
typedef Owner<MultiModeFlowObj::NIC> Dummy_20;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::GridNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::GridNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::GridNIC>;
#else
typedef Owner<FOTBuilder::GridNIC> Dummy_21;
#endif
#endif
#endif
#ifdef __DECCXX
#pragma define_template Owner<FOTBuilder::GridCellNIC>
#else
#ifdef __xlC__
#pragma define(Owner<FOTBuilder::GridCellNIC>)
#else
#ifdef SP_ANSI_CLASS_INST
template class Owner<FOTBuilder::GridCellNIC>;
#else
typedef Owner<FOTBuilder::GridCellNIC> Dummy_22;
#endif
#endif
#endif

#ifdef SP_NAMESPACE
}
#endif

#endif /* SP_MANUAL_INST */
