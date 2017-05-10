/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-10T00:18:35-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_8 9
#define LABEL_1_10 11
#define TAG_1_11 4
#define LABEL_1_13 13
#define ENVIRONMENT_LABEL_1_3 28
#define DEBUGGING_LABEL_1_2 27
#define OBJECT_1_1 26
#define OBJECT_1_0 25
#define EXECUTE_CACHE_1_15 15
#define EXECUTE_CACHE_1_14 17
#define EXECUTE_CACHE_1_12 19
#define EXECUTE_CACHE_1_9 21
#define EXECUTE_CACHE_1_7 23
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
propagators_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_1_4);
      goto propagator_5;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_9;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (propagator_8)
DEFLABEL (propagator_5)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [3]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_13);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 9
#define DEBUGGING_LABEL_2_2 8
#define OBJECT_2_0 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
propagators_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_2_4);
      goto propagatorP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (propagatorP_3)
DEFLABEL (propagatorP_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_10 11
#define LABEL_3_12 13
#define LABEL_3_14 15
#define LABEL_3_16 17
#define ENVIRONMENT_LABEL_3_3 36
#define DEBUGGING_LABEL_3_2 35
#define OBJECT_3_3 34
#define OBJECT_3_2 33
#define OBJECT_3_1 32
#define OBJECT_3_0 31
#define EXECUTE_CACHE_3_17 19
#define EXECUTE_CACHE_3_15 21
#define EXECUTE_CACHE_3_13 23
#define EXECUTE_CACHE_3_11 25
#define EXECUTE_CACHE_3_9 27
#define EXECUTE_CACHE_3_6 29
#define FREE_REFERENCES_LABEL_3_0 18
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
propagators_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_3_4);
      goto propagator_constructorP_8;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (propagator_constructorP_11)
DEFLABEL (propagator_constructorP_8)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (current_block [OBJECT_3_3]);
  goto label_18;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define OBJECT_4_1 10
#define OBJECT_4_0 9
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
propagators_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_4_4);
      goto propagator_constructorB_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (propagator_constructorB_4)
DEFLABEL (propagator_constructorB_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_7 5
#define LABEL_5_8 7
#define LABEL_5_5 9
#define LABEL_5_11 11
#define LABEL_5_13 13
#define LABEL_5_9 15
#define TAG_5_10 6
#define LABEL_5_16 17
#define LABEL_5_17 19
#define LABEL_5_22 21
#define LABEL_5_24 23
#define LABEL_5_25 25
#define LABEL_5_19 27
#define LABEL_5_29 29
#define LABEL_5_20 31
#define LABEL_5_28 33
#define LABEL_5_26 35
#define TAG_5_27 16
#define LABEL_5_31 37
#define LABEL_5_35 39
#define TAG_5_36 18
#define LABEL_5_42 41
#define LABEL_5_33 43
#define TAG_5_34 20
#define LABEL_5_43 45
#define LABEL_5_44 47
#define LABEL_5_45 49
#define LABEL_5_38 51
#define LABEL_5_40 53
#define LABEL_5_41 55
#define ENVIRONMENT_LABEL_5_3 100
#define DEBUGGING_LABEL_5_2 99
#define OBJECT_5_9 98
#define OBJECT_5_8 97
#define OBJECT_5_7 96
#define OBJECT_5_6 95
#define OBJECT_5_5 94
#define OBJECT_5_4 93
#define OBJECT_5_3 92
#define OBJECT_5_2 91
#define OBJECT_5_1 90
#define OBJECT_5_0 89
#define EXECUTE_CACHE_5_47 57
#define EXECUTE_CACHE_5_46 59
#define EXECUTE_CACHE_5_39 61
#define EXECUTE_CACHE_5_37 63
#define EXECUTE_CACHE_5_32 65
#define EXECUTE_CACHE_5_30 67
#define EXECUTE_CACHE_5_23 69
#define EXECUTE_CACHE_5_21 71
#define EXECUTE_CACHE_5_18 73
#define EXECUTE_CACHE_5_15 75
#define EXECUTE_CACHE_5_14 77
#define EXECUTE_CACHE_5_12 79
#define EXECUTE_CACHE_5_6 81
#define FREE_REFERENCE_5_2 84
#define FREE_REFERENCE_5_1 85
#define FREE_REFERENCE_5_0 86
#define FREE_ASSIGNMENT_5_0 88
#define FREE_REFERENCES_LABEL_5_0 56
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
propagators_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd16;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd44;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_5_4);
      goto function__propagator_constructor_33;

    case 1:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_35;

    case 5:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_5_9);
      goto the_constructor_44;

    case 7:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_5_22);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_5_24);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_5_25);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_5_29);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_5_28);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_5_26);
      goto the_propagator_45;

    case 17:
      current_block = (Rpc - LABEL_5_31);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_5_35);
      goto lambda_47;

    case 19:
      current_block = (Rpc - LABEL_5_42);
      goto label_38;

    case 20:
      current_block = (Rpc - LABEL_5_33);
      goto swapB_46;

    case 21:
      current_block = (Rpc - LABEL_5_43);
      goto label_39;

    case 22:
      current_block = (Rpc - LABEL_5_44);
      goto label_40;

    case 23:
      current_block = (Rpc - LABEL_5_45);
      goto label_41;

    case 24:
      current_block = (Rpc - LABEL_5_38);
      goto continuation_17;

    case 25:
      current_block = (Rpc - LABEL_5_40);
      goto continuation_19;

    case 26:
      current_block = (Rpc - LABEL_5_41);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (function__propagator_constructor_43)
DEFLABEL (function__propagator_constructor_33)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd52.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_9])));
  Rhp += 2;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  Wrd50 = Wrd52;
  (Wrd51.Obj) = (Rsp [2]);
  ((Wrd50.pObj) [2]) = (Wrd51.Obj);
  ((Wrd50.pObj) [3]) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd36.Obj) = (current_block [OBJECT_5_0]);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd39.Lng))))
    goto label_56;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_55;

DEFLABEL (label_54)
  (Wrd13.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_48;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_48)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_50;
  (Wrd15.Obj) = (current_block [OBJECT_5_4]);
  goto label_49;

DEFLABEL (label_50)
  (Wrd15.Obj) = (current_block [OBJECT_5_3]);

DEFLABEL (label_49)
DEFLABEL (label_53)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_52;

DEFLABEL (label_51)
  (Wrd25.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (label_52)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_7);
  goto label_51;

DEFLABEL (label_55)
  Rsp = (& (Rsp [2]));
  goto label_52;

DEFLABEL (label_56)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_55;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (the_constructor_44)
  CLOSURE_HEADER (LABEL_5_9);

DEFLABEL (the_constructor_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_17);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_68;
  Wrd5 = Wrd9;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_30]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd67.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_26])));
  Rhp += 4;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd67.pObj)));
  (* (--Rsp)) = (Wrd68.Obj);
  Wrd63 = Wrd67;
  (Wrd64.Obj) = (Rsp [4]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [2]);
  ((Wrd63.pObj) [2]) = (Wrd66.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  ((Wrd63.pObj) [3]) = (Wrd61.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  ((Wrd63.pObj) [4]) = (Wrd58.Obj);
  ((Wrd63.pObj) [5]) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd65.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_5_0]);
  (Wrd46.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd46.Lng))))
    goto label_66;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd43.Obj));
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_65;

DEFLABEL (label_64)
  (Wrd21.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd31.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng)))
    goto label_57;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_57)
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_59;
  (Wrd23.Obj) = (current_block [OBJECT_5_4]);
  goto label_58;

DEFLABEL (label_59)
  (Wrd23.Obj) = (current_block [OBJECT_5_3]);

DEFLABEL (label_58)
DEFLABEL (label_63)
  Rsp = (& (Rsp [3]));
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;

DEFLABEL (label_61)
  (Wrd38.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [7]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_5_25);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_60)
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_5_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (current_block [OBJECT_5_7]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_39]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_5_38);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [5]) = (Wrd8.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_46]));

DEFLABEL (label_62)
  (Wrd35.Obj) = (Rsp [6]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_60;

DEFLABEL (label_65)
  Rsp = (& (Rsp [2]));
  goto label_61;

DEFLABEL (label_66)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_29]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_22])), (Wrd6.pObj));

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_67;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_61;

DEFLABEL (the_propagator_45)
  CLOSURE_HEADER (LABEL_5_26);

DEFLABEL (the_propagator_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_33])));
  Rhp += 1;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  ((Wrd34.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_35])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd27 = Wrd16;
  (Wrd30.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd27.pObj) [2]) = (Wrd30.Obj);
  ((Wrd27.pObj) [3]) = (Wrd8.Obj);
  (Wrd24.Obj) = ((Wrd9.pObj) [4]);
  ((Wrd27.pObj) [4]) = (Wrd24.Obj);
  (Wrd20.Obj) = ((Wrd9.pObj) [5]);
  ((Wrd27.pObj) [5]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_37]));

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_5_35);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_70;
  Wrd14 = Wrd18;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_5_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_9]), 2);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_5_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_47]));

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_42])), (Wrd15.pObj));

DEFLABEL (label_38)
  (Wrd14.Obj) = Rvl;
  goto label_69;

DEFLABEL (swapB_46)
  CLOSURE_HEADER (LABEL_5_33);

DEFLABEL (swapB_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  Wrd5 = Wrd9;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_74)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_71)
  Rvl = (current_block [OBJECT_5_8]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_73)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_45])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_41)
  goto label_71;

DEFLABEL (label_76)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_44])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_40)
  goto label_74;

DEFLABEL (label_79)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_43])), (Wrd6.pObj));

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_9 7
#define LABEL_6_8 9
#define LABEL_6_11 11
#define LABEL_6_12 13
#define TAG_6_13 5
#define LABEL_6_15 15
#define LABEL_6_17 17
#define TAG_6_18 7
#define LABEL_6_21 19
#define TAG_6_22 8
#define LABEL_6_19 21
#define TAG_6_20 9
#define LABEL_6_27 23
#define LABEL_6_28 25
#define LABEL_6_29 27
#define LABEL_6_25 29
#define ENVIRONMENT_LABEL_6_3 53
#define DEBUGGING_LABEL_6_2 52
#define OBJECT_6_1 51
#define OBJECT_6_0 50
#define EXECUTE_CACHE_6_26 31
#define EXECUTE_CACHE_6_24 33
#define EXECUTE_CACHE_6_23 35
#define EXECUTE_CACHE_6_16 37
#define EXECUTE_CACHE_6_14 39
#define EXECUTE_CACHE_6_10 41
#define EXECUTE_CACHE_6_7 43
#define FREE_REFERENCE_6_1 46
#define FREE_REFERENCE_6_0 47
#define FREE_ASSIGNMENT_6_0 49
#define FREE_REFERENCES_LABEL_6_0 30
#define NUMBER_OF_LINKER_SECTIONS_6_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
propagators_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_6_4);
      goto delayed_propagator_constructor_18;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_26;

    case 2:
      current_block = (Rpc - LABEL_6_9);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_6_12);
      goto lambda_27;

    case 6:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_6_17);
      goto lambda_28;

    case 8:
      current_block = (Rpc - LABEL_6_21);
      goto lambda_30;

    case 9:
      current_block = (Rpc - LABEL_6_19);
      goto swapB_29;

    case 10:
      current_block = (Rpc - LABEL_6_27);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_6_28);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_6_29);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_6_25);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delayed_propagator_constructor_25)
DEFLABEL (delayed_propagator_constructor_18)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_32;
  Wrd13 = Wrd17;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_12])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  ((Wrd20.pObj) [4]) = Rvl;
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd7.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6_15);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [4]) = (Wrd8.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_9])), (Wrd14.pObj));

DEFLABEL (label_20)
  (Wrd13.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_6_12);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x203, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_17])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_19])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  ((Wrd29.pObj) [2]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_21])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd22 = Wrd17;
  (Wrd25.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd9.pObj) [4]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_6_17);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_25);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_6_21);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

DEFLABEL (swapB_29)
  CLOSURE_HEADER (LABEL_6_19);

DEFLABEL (swapB_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  Wrd5 = Wrd9;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_36)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_29])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_23)
  goto label_33;

DEFLABEL (label_38)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_28])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_22)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_6_27])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_11 9
#define LABEL_7_8 11
#define TAG_7_9 4
#define LABEL_7_15 13
#define LABEL_7_13 15
#define LABEL_7_14 17
#define LABEL_7_16 19
#define ENVIRONMENT_LABEL_7_3 36
#define DEBUGGING_LABEL_7_2 35
#define OBJECT_7_1 34
#define OBJECT_7_0 33
#define EXECUTE_CACHE_7_17 21
#define EXECUTE_CACHE_7_12 23
#define EXECUTE_CACHE_7_10 25
#define EXECUTE_CACHE_7_7 27
#define FREE_REFERENCE_7_2 30
#define FREE_REFERENCE_7_1 31
#define FREE_REFERENCE_7_0 32
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
propagators_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_7_4);
      goto one_shot_propagator_6;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7_11);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto test_13;

    case 5:
      current_block = (Rpc - LABEL_7_15);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (one_shot_propagator_12)
DEFLABEL (one_shot_propagator_6)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_8])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd19 = Wrd21;
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  ((Wrd19.pObj) [3]) = Rvl;
  ((Wrd19.pObj) [4]) = (Wrd7.Obj);
  (Rsp [3]) = Rvl;
  (Rsp [4]) = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_11])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (test_13)
  CLOSURE_HEADER (LABEL_7_8);

DEFLABEL (test_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_21;
  Wrd22 = Wrd26;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = (current_block [OBJECT_7_1]);
  ((Wrd12.pObj) [0]) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_16])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_15])), (Wrd23.pObj));

DEFLABEL (label_9)
  (Wrd22.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5 3
#define LABEL_6 5
#define LABEL_7 7
#define ENVIRONMENT_LABEL_3 16
#define DEBUGGING_LABEL_2 15
#define PURIFICATION_ROOT 14
#define OBJECT_2 13
#define OBJECT_1 12
#define OBJECT_0 11
#define GLOBAL_EXECUTE_CACHE_4 9
#define FREE_REFERENCES_LABEL_0 8
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
propagators_so_031f766a60985483 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_5);
      goto label_4;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto expression_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_1)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_6])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_5)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_4)
  {
    static const short sections [] =
      {
	0,
	2,
	3,
	3,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 7)
      goto label_3;
    blocks = (current_block [OBJECT_2]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_3)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_4]));

INVOKE_INTERFACE_TARGET_4
}

static const struct liarc_code_S arr_decl_propagators_so_031f766a60985483 [7] =
  {
    { "propagators_so_code_1", 6, propagators_so_code_1 },
    { "propagators_so_code_2", 1, propagators_so_code_2 },
    { "propagators_so_code_3", 8, propagators_so_code_3 },
    { "propagators_so_code_4", 2, propagators_so_code_4 },
    { "propagators_so_code_5", 27, propagators_so_code_5 },
    { "propagators_so_code_6", 14, propagators_so_code_6 },
    { "propagators_so_code_7", 9, propagators_so_code_7 }
  };

int
decl_propagators_so_031f766a60985483 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_propagators_so_031f766a60985483);
  return (0);
}

DECLARE_COMPILED_CODE ("propagators.so", 3, decl_propagators_so_031f766a60985483, propagators_so_031f766a60985483)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_propagators_so_data_031f766a60985483 [1481] =
  "\x6c\x11\xef\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x07\x28"
  "\x0d\xba\x28\x0d\xbb\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88"
  "\xb1\x28\x0d\xbd\x23\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x83\x88\x07"
  "\x0c\x0d\x0d\xbf\x28\xb5\x28\x0d\x28\x0d\x28\x0d\xbd\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb7\x07\x28\xb3\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x85\x88\xc2\xbb\x1d\x08\x0d"
  "\x0d\x06\x07\x85\xc2\x02\x0d\x1c\x25\x0d\x1c\x0d\x1c\x1b\x24\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\xb1\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\xb3\x1b\x25"
  "\x1b\x1b\x24\x28\x0d\x28\x1b\x28\x0d\xbb\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1b\x1b\x0d\x24\x28\xb2\x28"
  "\xb1\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x9e\x1c\x88\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\x1b\x2a\xb6\x2a\xb4\x2a\x9e\xb3"
  "\x0d\x0d\x1b\x0d\xb5\xb1\x9e\x28\x0d\x26\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x10\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x73\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0b\x70\x72\x6f\x70\x61\x67"
  "\x61\x74\x6f\x72\x03\x08\x6c\x69\x73\x74\x69\x66\x79\x05\x08\x65"
  "\x71\x2d\x70\x75\x74\x21\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68"
  "\x03\x11\x61\x6c\x65\x72\x74\x2d\x70\x72\x6f\x70\x61\x67\x61\x74"
  "\x6f\x72\x04\x0e\x6e\x65\x77\x2d\x6e\x65\x69\x67\x68\x62\x6f\x72"
  "\x21\x06\x09\x0e\x81\x85\x02\x08\x0c\x81\x85\x02\x07\x0a\x81\x85"
  "\x02\x06\x08\x81\x87\x02\x05\x06\x81\x85\x02\x04\x04\x84\x06\x0d"
  "\x1d\x02\x04\x07\x65\x71\x2d\x67\x65\x74\x02\x0a\x04\x83\x04\x03"
  "\x0a\x02\x25\x49\x6d\x70\x75\x74\x69\x6e\x67\x20\x70\x72\x6f\x70"
  "\x61\x67\x61\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74"
  "\x6f\x72\x2d\x68\x6f\x6f\x64\x1b\x6e\x6f\x74\x2d\x70\x72\x6f\x70"
  "\x61\x67\x61\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74"
  "\x6f\x72\x17\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x2d\x63\x6f"
  "\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x04\x03\x0b\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x3f\x03\x06\x63\x65\x6c\x6c\x3f\x03\x0c\x70"
  "\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x3f\x03\x09\x63\x6c\x6f\x73"
  "\x75\x72\x65\x3f\x04\x05\x77\x61\x72\x6e\x07\x12\x12\x81\x85\x02"
  "\x11\x10\x81\x85\x02\x10\x0e\x81\x85\x02\x0f\x0c\x81\x85\x02\x0e"
  "\x0a\x81\x85\x02\x0d\x08\x81\x85\x02\x0c\x06\x81\x83\x02\x0b\x04"
  "\x83\x04\x11\x25\x09\x02\x05\x02\x14\x06\x81\x83\x02\x13\x04\x83"
  "\x04\x05\x0d\x02\x06\x61\x70\x70\x6c\x79\x02\x03\x3a\x70\x03\x70"
  "\x3a\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x11"
  "\x2a\x61\x63\x74\x69\x76\x65\x2d\x64\x69\x61\x67\x72\x61\x6d\x2a"
  "\x0a\x02\x0c\x65\x6e\x73\x75\x72\x65\x2d\x63\x65\x6c\x6c\x0b\x08"
  "\x63\x6f\x6e\x74\x65\x6e\x74\x0c\x0a\x04\x03\x05\x6e\x61\x6d\x65"
  "\x03\x18\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x2d\x63\x6f\x6e"
  "\x73\x74\x72\x75\x63\x74\x6f\x72\x21\x0a\x04\x07\x73\x79\x6d\x62"
  "\x6f\x6c\x04\x06\x6e\x61\x6d\x65\x21\x03\x11\x65\x78\x63\x65\x70"
  "\x74\x2d\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x03\x05\x6c\x61\x73"
  "\x74\x04\x04\x6d\x61\x70\x0d\x03\x0b\x04\x05\x13\x73\x68\x61\x6c"
  "\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x0e\x05"
  "\x1b\x6d\x61\x6b\x65\x2d\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2d"
  "\x69\x2f\x6f\x2d\x64\x69\x61\x67\x72\x61\x6d\x03\x11\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x64\x69\x61\x67\x72\x61\x6d\x0f\x05\x0c"
  "\x61\x64\x64\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x0e\x2f\x38\x81\x85"
  "\x02\x2e\x36\x81\x83\x02\x2d\x34\x81\x8d\x02\x2c\x32\x81\x83\x02"
  "\x2b\x30\x81\x85\x02\x2a\x2e\x81\x83\x02\x29\x2c\x81\x83\x02\x28"
  "\x2a\x81\x89\x02\x27\x28\x81\x83\x02\x26\x26\x81\x8d\x02\x25\x24"
  "\x81\x83\x02\x24\x22\x81\x8d\x02\x23\x20\x81\x8b\x02\x22\x1e\x81"
  "\x83\x02\x21\x1c\x81\x89\x02\x20\x1a\x81\x8f\x02\x1f\x18\x81\x91"
  "\x02\x1e\x16\x81\x8b\x02\x1d\x14\x81\x89\x02\x1c\x12\x81\x87\x02"
  "\x1b\x10\x81\x85\x02\x1a\x0e\x81\x89\x02\x19\x0c\x81\x83\x02\x18"
  "\x0a\x81\x83\x02\x17\x08\x81\x87\x02\x16\x06\x81\x87\x02\x15\x04"
  "\x83\x04\x37\x65\x10\x02\x02\x0f\x02\x0b\x0f\x03\x04\x0a\x65\x71"
  "\x2d\x63\x6c\x6f\x6e\x65\x21\x04\x0d\x04\x14\x6f\x6e\x65\x2d\x73"
  "\x68\x6f\x74\x2d\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x05\x26"
  "\x6d\x61\x6b\x65\x2d\x64\x69\x61\x67\x72\x61\x6d\x2d\x66\x6f\x72"
  "\x2d\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x63\x6f\x6e\x73\x74\x72"
  "\x75\x63\x74\x6f\x72\x05\x0e\x03\x0f\x04\x11\x72\x65\x70\x6c\x61"
  "\x63\x65\x2d\x64\x69\x61\x67\x72\x61\x6d\x21\x08\x3d\x1e\x81\x87"
  "\x02\x3c\x1c\x81\x83\x02\x3b\x1a\x81\x85\x02\x3a\x18\x81\x83\x02"
  "\x39\x16\x81\x83\x02\x38\x14\x81\x83\x02\x37\x12\x81\x87\x02\x36"
  "\x10\x81\x8b\x02\x35\x0e\x81\x83\x02\x34\x0c\x81\x8b\x02\x33\x0a"
  "\x81\x87\x02\x32\x08\x81\x8b\x02\x31\x06\x81\x85\x02\x30\x04\x83"
  "\x04\x1d\x36\x0f\x02\x08\x03\x6f\x6b\x0b\x0c\x09\x6e\x6f\x74\x68"
  "\x69\x6e\x67\x3f\x04\x03\x04\x04\x0d\x04\x06\x65\x76\x65\x72\x79"
  "\x05\x46\x14\x81\x87\x02\x45\x12\x81\x85\x02\x44\x10\x81\x83\x02"
  "\x43\x0e\x81\x89\x02\x42\x0c\x81\x83\x02\x41\x0a\x81\x89\x02\x40"
  "\x08\x81\x87\x02\x3f\x06\x81\x85\x02\x3e\x04\x84\x06\x13\x25\x0e"
  "\x0d\x0d\x0e\x04\x0f\x04\x10\x04\x04\x09\x04\x04\x04\x1f\x64\x65"
  "\x6c\x61\x79\x65\x64\x2d\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72"
  "\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x21\x66\x75\x6e"
  "\x63\x74\x69\x6f\x6e\x2d\x3e\x70\x72\x6f\x70\x61\x67\x61\x74\x6f"
  "\x72\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x0a\x18\x70"
  "\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x74\x72"
  "\x75\x63\x74\x6f\x72\x3f\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81"
  "\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
propagators_so_data_031f766a60985483 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_propagators_so_data_031f766a60985483 [0]))), (sizeof (prog_propagators_so_data_031f766a60985483)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("propagators.so", propagators_so_data_031f766a60985483)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("propagators.so", "14882ae0bb7accdf")
