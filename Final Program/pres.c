/*
** Automatically generated from `pres.m'
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
INIT mercury__pres__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "pres.c"
#include "array.mh"

#line 31 "pres.c"
#line 32 "pres.c"
#include "bitmap.mh"

#line 35 "pres.c"
#line 36 "pres.c"
#include "io.mh"

#line 39 "pres.c"
#line 40 "pres.c"
#include "pres.mh"

#line 43 "pres.c"
#line 44 "pres.c"
#include "string.mh"

#line 47 "pres.c"
#line 48 "pres.c"
#include "time.mh"

#line 51 "pres.c"
#line 52 "pres.c"
#ifndef PRES_DECL_GUARD
#define PRES_DECL_GUARD

#line 56 "pres.c"
#line 57 "pres.c"

#endif
#line 60 "pres.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label2(pres__loop_4_0, 3,13)
MR_decl_label10(main_2_0, 2,3,4,5,6,9,14,15,18,17)
MR_decl_label10(main_2_0, 21,11,12,13,26,27,33,34,35,36)
MR_decl_label2(main_2_0, 38,31)
MR_def_extern_entry(main_2_0)
MR_def_extern_entry(pres__loop_4_0)



MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__read_line_as_string_3_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(fn__string__strip_1_0);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(fn__string__to_lower_1_0);

MR_BEGIN_MODULE(pres_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,4,5,6,9,14,15,18,17)
	MR_init_label10(main_2_0,21,11,12,13,26,27,33,34,35,36)
	MR_init_label2(main_2_0,38,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = ((MR_Word) MR_succip);
	MR_r1 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("Hey I would like to go fishing!!!!\n", 35));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i3);
MR_def_label(main_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("How many fish should I catch\?\n", 30));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i4);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		main_2_0_i6);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),2)) {
		MR_GOTO_LAB(main_2_0_i11);
	}
	if (MR_INT_EQ(MR_tag(MR_r1),1)) {
		MR_GOTO_LAB(main_2_0_i14);
	}
	MR_r1 = ((MR_Word) MR_string_const("What are you ignoring me \n", 26));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i9);
MR_def_label(main_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i13);
MR_def_label(main_2_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__strip_1_0,
		main_2_0_i15);
MR_def_label(main_2_0, 15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		main_2_0_i18);
MR_def_label(main_2_0, 18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(main_2_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(pres__loop_4_0,
		main_2_0_i13);
MR_def_label(main_2_0, 17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("That\'s not even a number  \n", 27));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i21);
MR_def_label(main_2_0, 21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i13);
MR_def_label(main_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("You must love kanye \n", 21));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i12);
MR_def_label(main_2_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i13);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("I Caught the fish now call me a Good Boy !!\n", 44));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i26);
MR_def_label(main_2_0, 26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		main_2_0_i27);
MR_def_label(main_2_0, 27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),2)) {
		MR_GOTO_LAB(main_2_0_i31);
	}
	if (MR_INT_EQ(MR_tag(MR_r1),1)) {
		MR_GOTO_LAB(main_2_0_i33);
	}
	MR_r1 = ((MR_Word) MR_string_const("What are you ignoring me \n", 26));
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0, 33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__strip_1_0,
		main_2_0_i34);
MR_def_label(main_2_0, 34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__to_lower_1_0,
		main_2_0_i35);
MR_def_label(main_2_0, 35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Word) MR_string_const("good program", 12));
	if ((strcmp((char *) ((MR_Word *) MR_r1), MR_string_const("good boy", 8)) != 0)) {
		MR_GOTO_LAB(main_2_0_i36);
	}
	MR_r1 = ((MR_Word) MR_string_const("Omg I\'m gonna ferk \360\237\222\246\n", 24));
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0, 36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) ((MR_Word *) MR_r1), (char *) ((MR_Word *) MR_r3)) != 0)) {
		MR_GOTO_LAB(main_2_0_i38);
	}
	MR_r1 = ((MR_Word) MR_string_const("Good Enough :)\n", 15));
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0, 38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("Lame\n", 5));
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0, 31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("oopsie \n", 8));
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pres_module1)
	MR_init_entry1(pres__loop_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pres__loop_4_0);
	MR_init_label2(pres__loop_4_0,3,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'loop'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pres__loop_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	if ((((MR_Integer) MR_r1) > ((MR_Integer) MR_r2))) {
		MR_GOTO_LAB(pres__loop_4_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = ((MR_Word) MR_string_const("\360\237\220\237\n", 5));
	MR_np_call_localret_ent(io__write_string_3_0,
		pres__loop_4_0_i3);
MR_def_label(pres__loop_4_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_sv(1)) + (MR_Unsigned) (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if ((((MR_Integer) MR_r1) > ((MR_Integer) MR_r2))) {
		MR_GOTO_LAB(pres__loop_4_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = ((MR_Word) MR_string_const("\360\237\220\237\n", 5));
	MR_np_call_localret_ent(io__write_string_3_0,
		pres__loop_4_0_i3);
MR_def_label(pres__loop_4_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__pres_maybe_bunch_0(void)
{
	pres_module0();
	pres_module1();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__pres__init(void);
void mercury__pres__init_type_tables(void);
void mercury__pres__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__pres__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__pres__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__pres__init_threadscope_string_table(void);
#endif
const char *mercury__pres__grade_check(void);

void mercury__pres__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__pres_maybe_bunch_0();
	mercury__pres__init_debugger();
}

void mercury__pres__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__pres__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__pres__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__pres);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__pres__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__pres__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__pres__grade_check(void)
{
    return &MR_GRADE_VAR;
}
