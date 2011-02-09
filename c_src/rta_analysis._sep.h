/* This C header file is generated by NIT to compile modules and programs that requires rta_analysis. */
#ifndef rta_analysis_sep
#define rta_analysis_sep
#include "instantiated_type_analysis._sep.h"
#include "reachable_method_analysis._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_RtaContext[];

extern const classtable_elt_t VFT_RtaBuilder[];

extern const classtable_elt_t VFT_RtaVisitor[];
extern const char *LOCATE_rta_analysis;
extern const int SFT_rta_analysis[];
#define ID_RtaContext (SFT_rta_analysis[0])
#define COLOR_RtaContext (SFT_rta_analysis[1])
#define ATTR_rta_analysis___RtaContext____instanciated_classes(recv) ATTR(recv, (SFT_rta_analysis[2] + 0))
#define ATTR_rta_analysis___RtaContext____reachable_iroutines(recv) ATTR(recv, (SFT_rta_analysis[2] + 1))
#define INIT_TABLE_POS_RtaContext (SFT_rta_analysis[3] + 0)
#define CALL_rta_analysis___RtaContext___init(recv) ((rta_analysis___RtaContext___init_t)CALL((recv), (SFT_rta_analysis[3] + 1)))
#define CALL_rta_analysis___RtaContext___instanciated_classes(recv) ((rta_analysis___RtaContext___instanciated_classes_t)CALL((recv), (SFT_rta_analysis[3] + 2)))
#define CALL_rta_analysis___RtaContext___reachable_iroutines(recv) ((rta_analysis___RtaContext___reachable_iroutines_t)CALL((recv), (SFT_rta_analysis[3] + 3)))
#define ID_RtaBuilder (SFT_rta_analysis[4])
#define COLOR_RtaBuilder (SFT_rta_analysis[5])
#define ATTR_rta_analysis___RtaBuilder____context(recv) ATTR(recv, (SFT_rta_analysis[6] + 0))
#define ATTR_rta_analysis___RtaBuilder____program(recv) ATTR(recv, (SFT_rta_analysis[6] + 1))
#define ATTR_rta_analysis___RtaBuilder____iroutine_to_search(recv) ATTR(recv, (SFT_rta_analysis[6] + 2))
#define ATTR_rta_analysis___RtaBuilder____call_sites(recv) ATTR(recv, (SFT_rta_analysis[6] + 3))
#define ATTR_rta_analysis___RtaBuilder____called_methods(recv) ATTR(recv, (SFT_rta_analysis[6] + 4))
#define INIT_TABLE_POS_RtaBuilder (SFT_rta_analysis[7] + 0)
#define CALL_rta_analysis___RtaBuilder___context(recv) ((rta_analysis___RtaBuilder___context_t)CALL((recv), (SFT_rta_analysis[7] + 1)))
#define CALL_rta_analysis___RtaBuilder___program(recv) ((rta_analysis___RtaBuilder___program_t)CALL((recv), (SFT_rta_analysis[7] + 2)))
#define CALL_rta_analysis___RtaBuilder___iroutine_to_search(recv) ((rta_analysis___RtaBuilder___iroutine_to_search_t)CALL((recv), (SFT_rta_analysis[7] + 3)))
#define CALL_rta_analysis___RtaBuilder___call_sites(recv) ((rta_analysis___RtaBuilder___call_sites_t)CALL((recv), (SFT_rta_analysis[7] + 4)))
#define CALL_rta_analysis___RtaBuilder___called_methods(recv) ((rta_analysis___RtaBuilder___called_methods_t)CALL((recv), (SFT_rta_analysis[7] + 5)))
#define CALL_rta_analysis___RtaBuilder___init(recv) ((rta_analysis___RtaBuilder___init_t)CALL((recv), (SFT_rta_analysis[7] + 6)))
#define CALL_rta_analysis___RtaBuilder___check_method(recv) ((rta_analysis___RtaBuilder___check_method_t)CALL((recv), (SFT_rta_analysis[7] + 7)))
#define CALL_rta_analysis___RtaBuilder___check_call_sites(recv) ((rta_analysis___RtaBuilder___check_call_sites_t)CALL((recv), (SFT_rta_analysis[7] + 8)))
#define CALL_rta_analysis___RtaBuilder___add_instantiated_class(recv) ((rta_analysis___RtaBuilder___add_instantiated_class_t)CALL((recv), (SFT_rta_analysis[7] + 9)))
#define CALL_rta_analysis___RtaBuilder___add_reachable_call(recv) ((rta_analysis___RtaBuilder___add_reachable_call_t)CALL((recv), (SFT_rta_analysis[7] + 10)))
#define CALL_rta_analysis___RtaBuilder___add_reachable_iroutine(recv) ((rta_analysis___RtaBuilder___add_reachable_iroutine_t)CALL((recv), (SFT_rta_analysis[7] + 11)))
#define CALL_rta_analysis___RtaBuilder___force_some_type_analysis(recv) ((rta_analysis___RtaBuilder___force_some_type_analysis_t)CALL((recv), (SFT_rta_analysis[7] + 12)))
#define CALL_rta_analysis___RtaBuilder___work(recv) ((rta_analysis___RtaBuilder___work_t)CALL((recv), (SFT_rta_analysis[7] + 13)))
#define ID_RtaVisitor (SFT_rta_analysis[8])
#define COLOR_RtaVisitor (SFT_rta_analysis[9])
#define ATTR_rta_analysis___RtaVisitor____builder(recv) ATTR(recv, (SFT_rta_analysis[10] + 0))
#define INIT_TABLE_POS_RtaVisitor (SFT_rta_analysis[11] + 0)
#define CALL_rta_analysis___RtaVisitor___builder(recv) ((rta_analysis___RtaVisitor___builder_t)CALL((recv), (SFT_rta_analysis[11] + 1)))
#define CALL_SUPER_rta_analysis___RtaVisitor___visit_icode(recv) ((rta_analysis___RtaVisitor___visit_icode_t)CALL((recv), (SFT_rta_analysis[11] + 2)))
#define CALL_rta_analysis___RtaVisitor___init(recv) ((rta_analysis___RtaVisitor___init_t)CALL((recv), (SFT_rta_analysis[11] + 3)))
static const char * const LOCATE_rta_analysis___RtaContext___init = "rta_analysis::RtaContext::init";
void rta_analysis___RtaContext___init(val_t p0, int* init_table);
typedef void (*rta_analysis___RtaContext___init_t)(val_t p0, int* init_table);
val_t NEW_RtaContext_rta_analysis___RtaContext___init();
static const char * const LOCATE_rta_analysis___RtaContext___instanciated_classes = "rta_analysis::RtaContext::instanciated_classes";
val_t rta_analysis___RtaContext___instanciated_classes(val_t p0);
typedef val_t (*rta_analysis___RtaContext___instanciated_classes_t)(val_t p0);
static const char * const LOCATE_rta_analysis___RtaContext___is_class_instantiated = "rta_analysis::RtaContext::(instantiated_type_analysis::InstantiatedTypeAnalysis::is_class_instantiated)";
val_t rta_analysis___RtaContext___is_class_instantiated(val_t p0, val_t p1);
typedef val_t (*rta_analysis___RtaContext___is_class_instantiated_t)(val_t p0, val_t p1);
static const char * const LOCATE_rta_analysis___RtaContext___reachable_iroutines = "rta_analysis::RtaContext::reachable_iroutines";
val_t rta_analysis___RtaContext___reachable_iroutines(val_t p0);
typedef val_t (*rta_analysis___RtaContext___reachable_iroutines_t)(val_t p0);
static const char * const LOCATE_rta_analysis___RtaContext___is_iroutine_reachable = "rta_analysis::RtaContext::(reachable_method_analysis::ReachableMethodAnalysis::is_iroutine_reachable)";
val_t rta_analysis___RtaContext___is_iroutine_reachable(val_t p0, val_t p1);
typedef val_t (*rta_analysis___RtaContext___is_iroutine_reachable_t)(val_t p0, val_t p1);
static const char * const LOCATE_rta_analysis___RtaContext___is_method_reachable = "rta_analysis::RtaContext::(reachable_method_analysis::ReachableMethodAnalysis::is_method_reachable)";
val_t rta_analysis___RtaContext___is_method_reachable(val_t p0, val_t p1);
typedef val_t (*rta_analysis___RtaContext___is_method_reachable_t)(val_t p0, val_t p1);
static const char * const LOCATE_rta_analysis___RtaBuilder___context = "rta_analysis::RtaBuilder::context";
val_t rta_analysis___RtaBuilder___context(val_t p0);
typedef val_t (*rta_analysis___RtaBuilder___context_t)(val_t p0);
static const char * const LOCATE_rta_analysis___RtaBuilder___program = "rta_analysis::RtaBuilder::program";
val_t rta_analysis___RtaBuilder___program(val_t p0);
typedef val_t (*rta_analysis___RtaBuilder___program_t)(val_t p0);
static const char * const LOCATE_rta_analysis___RtaBuilder___iroutine_to_search = "rta_analysis::RtaBuilder::iroutine_to_search";
val_t rta_analysis___RtaBuilder___iroutine_to_search(val_t p0);
typedef val_t (*rta_analysis___RtaBuilder___iroutine_to_search_t)(val_t p0);
static const char * const LOCATE_rta_analysis___RtaBuilder___call_sites = "rta_analysis::RtaBuilder::call_sites";
val_t rta_analysis___RtaBuilder___call_sites(val_t p0);
typedef val_t (*rta_analysis___RtaBuilder___call_sites_t)(val_t p0);
static const char * const LOCATE_rta_analysis___RtaBuilder___called_methods = "rta_analysis::RtaBuilder::called_methods";
val_t rta_analysis___RtaBuilder___called_methods(val_t p0);
typedef val_t (*rta_analysis___RtaBuilder___called_methods_t)(val_t p0);
static const char * const LOCATE_rta_analysis___RtaBuilder___init = "rta_analysis::RtaBuilder::init";
void rta_analysis___RtaBuilder___init(val_t p0, val_t p1, int* init_table);
typedef void (*rta_analysis___RtaBuilder___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_RtaBuilder_rta_analysis___RtaBuilder___init(val_t p0);
static const char * const LOCATE_rta_analysis___RtaBuilder___check_method = "rta_analysis::RtaBuilder::check_method";
val_t rta_analysis___RtaBuilder___check_method(val_t p0, val_t p1);
typedef val_t (*rta_analysis___RtaBuilder___check_method_t)(val_t p0, val_t p1);
  typedef void (*CLOS_OC_rta_analysis___RtaBuilder___check_method_2_0)(struct stack_frame_t *);
  void OC_rta_analysis___RtaBuilder___check_method_2(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_rta_analysis___RtaBuilder___check_method_2_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_rta_analysis___RtaBuilder___check_call_sites = "rta_analysis::RtaBuilder::check_call_sites";
void rta_analysis___RtaBuilder___check_call_sites(val_t p0);
typedef void (*rta_analysis___RtaBuilder___check_call_sites_t)(val_t p0);
  typedef void (*CLOS_OC_rta_analysis___RtaBuilder___check_call_sites_1_0)(struct stack_frame_t *);
  void OC_rta_analysis___RtaBuilder___check_call_sites_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_rta_analysis___RtaBuilder___check_call_sites_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
    typedef void (*CLOS_OC_rta_analysis___RtaBuilder___check_call_sites_2_0)(struct stack_frame_t *);
    void OC_rta_analysis___RtaBuilder___check_call_sites_2(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
    typedef void (*OC_rta_analysis___RtaBuilder___check_call_sites_2_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*CLOS_OC_rta_analysis___RtaBuilder___check_call_sites_4_0)(struct stack_frame_t *);
  void OC_rta_analysis___RtaBuilder___check_call_sites_4(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_rta_analysis___RtaBuilder___check_call_sites_4_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_rta_analysis___RtaBuilder___add_instantiated_class = "rta_analysis::RtaBuilder::add_instantiated_class";
void rta_analysis___RtaBuilder___add_instantiated_class(val_t p0, val_t p1);
typedef void (*rta_analysis___RtaBuilder___add_instantiated_class_t)(val_t p0, val_t p1);
static const char * const LOCATE_rta_analysis___RtaBuilder___add_reachable_call = "rta_analysis::RtaBuilder::add_reachable_call";
void rta_analysis___RtaBuilder___add_reachable_call(val_t p0, val_t p1);
typedef void (*rta_analysis___RtaBuilder___add_reachable_call_t)(val_t p0, val_t p1);
static const char * const LOCATE_rta_analysis___RtaBuilder___add_reachable_iroutine = "rta_analysis::RtaBuilder::add_reachable_iroutine";
void rta_analysis___RtaBuilder___add_reachable_iroutine(val_t p0, val_t p1);
typedef void (*rta_analysis___RtaBuilder___add_reachable_iroutine_t)(val_t p0, val_t p1);
static const char * const LOCATE_rta_analysis___RtaBuilder___force_some_type_analysis = "rta_analysis::RtaBuilder::force_some_type_analysis";
void rta_analysis___RtaBuilder___force_some_type_analysis(val_t p0);
typedef void (*rta_analysis___RtaBuilder___force_some_type_analysis_t)(val_t p0);
    typedef void (*CLOS_OC_rta_analysis___RtaBuilder___force_some_type_analysis_15_0)(struct stack_frame_t *);
    void OC_rta_analysis___RtaBuilder___force_some_type_analysis_15(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
    typedef void (*OC_rta_analysis___RtaBuilder___force_some_type_analysis_15_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
    typedef void (*CLOS_OC_rta_analysis___RtaBuilder___force_some_type_analysis_18_0)(struct stack_frame_t *);
    void OC_rta_analysis___RtaBuilder___force_some_type_analysis_18(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
    typedef void (*OC_rta_analysis___RtaBuilder___force_some_type_analysis_18_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*CLOS_OC_rta_analysis___RtaBuilder___force_some_type_analysis_19_0)(struct stack_frame_t *);
  void OC_rta_analysis___RtaBuilder___force_some_type_analysis_19(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_rta_analysis___RtaBuilder___force_some_type_analysis_19_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_rta_analysis___RtaBuilder___work = "rta_analysis::RtaBuilder::work";
void rta_analysis___RtaBuilder___work(val_t p0);
typedef void (*rta_analysis___RtaBuilder___work_t)(val_t p0);
static const char * const LOCATE_rta_analysis___RtaVisitor___builder = "rta_analysis::RtaVisitor::builder";
val_t rta_analysis___RtaVisitor___builder(val_t p0);
typedef val_t (*rta_analysis___RtaVisitor___builder_t)(val_t p0);
static const char * const LOCATE_rta_analysis___RtaVisitor___visit_icode = "rta_analysis::RtaVisitor::(icode_tools::ICodeVisitor::visit_icode)";
void rta_analysis___RtaVisitor___visit_icode(val_t p0, val_t p1);
typedef void (*rta_analysis___RtaVisitor___visit_icode_t)(val_t p0, val_t p1);
        typedef void (*CLOS_OC_rta_analysis___RtaVisitor___visit_icode_1_0)(struct stack_frame_t *);
        void OC_rta_analysis___RtaVisitor___visit_icode_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
        typedef void (*OC_rta_analysis___RtaVisitor___visit_icode_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_rta_analysis___RtaVisitor___init = "rta_analysis::RtaVisitor::init";
void rta_analysis___RtaVisitor___init(val_t p0, val_t p1, int* init_table);
typedef void (*rta_analysis___RtaVisitor___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_RtaVisitor_rta_analysis___RtaVisitor___init(val_t p0);
#endif