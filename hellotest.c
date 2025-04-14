/*
** Automatically generated from `hellotest.m'
** by the Mercury compiler,
** version 22.01.8-1~jammy
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=3
** UNBOXED_FLOAT=yes
** UNBOXED_INT64S=yes
** PREGENERATED_DIST=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__hellotest__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "hellotest.c"
#include "array.mh"

#line 31 "hellotest.c"
#line 32 "hellotest.c"
#include "bitmap.mh"

#line 35 "hellotest.c"
#line 36 "hellotest.c"
#include "hellotest.mh"

#line 39 "hellotest.c"
#line 40 "hellotest.c"
#include "io.mh"

#line 43 "hellotest.c"
#line 44 "hellotest.c"
#include "string.mh"

#line 47 "hellotest.c"
#line 48 "hellotest.c"
#include "time.mh"

#line 51 "hellotest.c"
#line 52 "hellotest.c"
#ifndef HELLOTEST_DECL_GUARD
#define HELLOTEST_DECL_GUARD

#line 56 "hellotest.c"
#line 57 "hellotest.c"

#endif
#line 60 "hellotest.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_def_extern_entry(main_2_0)



MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(hellotest_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("Hello, World!\n", 14));
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hellotest_maybe_bunch_0(void)
{
	hellotest_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hellotest__init(void);
void mercury__hellotest__init_type_tables(void);
void mercury__hellotest__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hellotest__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hellotest__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hellotest__init_threadscope_string_table(void);
#endif
const char *mercury__hellotest__grade_check(void);

void mercury__hellotest__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hellotest_maybe_bunch_0();
	mercury__hellotest__init_debugger();
}

void mercury__hellotest__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hellotest__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hellotest__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__hellotest);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hellotest__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hellotest__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__hellotest__grade_check(void)
{
    return &MR_GRADE_VAR;
}
