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
MR_decl_label2(hellotest__loop_4_0, 3,13)
MR_decl_label10(main_2_0, 2,3,4,5,11,12,13,9,10,19)
MR_def_extern_entry(main_2_0)
MR_decl_static(hellotest__loop_4_0)



MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__read_line_as_string_3_0);
MR_decl_entry(fn__string__strip_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hellotest_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,4,5,11,12,13,9,10,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(hellotest__loop_4_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("Lets go Gambling!!!!!!! \n", 25));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i3);
MR_def_label(main_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("Call me a good boy first though \n", 33));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i4);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Word) MR_string_const("Good Boy", 8));
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),2)) {
		MR_GOTO_LAB(main_2_0_i9);
	}
	if (MR_INT_EQ(MR_tag(MR_r1),1)) {
		MR_GOTO_LAB(main_2_0_i11);
	}
	MR_r1 = ((MR_Word) MR_string_const("Say something please \n", 22));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i10);
MR_def_label(main_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__strip_1_0,
		main_2_0_i12);
MR_def_label(main_2_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) ((MR_Word *) MR_r1), (char *) ((MR_Word *) MR_sv(1))) != 0)) {
		MR_GOTO_LAB(main_2_0_i13);
	}
	MR_r1 = ((MR_Word) MR_string_const("Omg im gonna ferk \n", 19));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i10);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("Yous a bitch \n", 14));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i10);
MR_def_label(main_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("oopsie \n", 8));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i10);
MR_def_label(main_2_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("ferker i hardly know her \n", 26));
	MR_r2 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i19);
MR_def_label(main_2_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hellotest_module1)
	MR_init_entry1(hellotest__loop_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hellotest__loop_4_0);
	MR_init_label2(hellotest__loop_4_0,3,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'loop'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hellotest__loop_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	if ((((MR_Integer) MR_r1) > ((MR_Integer) MR_r2))) {
		MR_GOTO_LAB(hellotest__loop_4_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(io__write_string_3_0,
		hellotest__loop_4_0_i3);
MR_def_label(hellotest__loop_4_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_sv(1)) + (MR_Unsigned) (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if ((((MR_Integer) MR_r1) > ((MR_Integer) MR_r2))) {
		MR_GOTO_LAB(hellotest__loop_4_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(io__write_string_3_0,
		hellotest__loop_4_0_i3);
MR_def_label(hellotest__loop_4_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hellotest_maybe_bunch_0(void)
{
	hellotest_module0();
	hellotest_module1();
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
