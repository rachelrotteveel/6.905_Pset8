/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-03T22:04:43-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define LABEL_1_9 9
#define LABEL_1_14 11
#define LABEL_1_11 13
#define LABEL_1_12 15
#define LABEL_1_19 17
#define LABEL_1_16 19
#define LABEL_1_17 21
#define LABEL_1_18 23
#define LABEL_1_21 25
#define LABEL_1_22 27
#define ENVIRONMENT_LABEL_1_3 50
#define DEBUGGING_LABEL_1_2 49
#define OBJECT_1_1 48
#define OBJECT_1_0 47
#define EXECUTE_CACHE_1_25 29
#define EXECUTE_CACHE_1_24 31
#define EXECUTE_CACHE_1_23 33
#define EXECUTE_CACHE_1_20 35
#define EXECUTE_CACHE_1_15 37
#define EXECUTE_CACHE_1_13 39
#define EXECUTE_CACHE_1_10 41
#define EXECUTE_CACHE_1_7 43
#define FREE_REFERENCE_1_0 46
#define FREE_REFERENCES_LABEL_1_0 28
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
carrying_cells_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto function__cell_carrier_constructor_13;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_19;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_1_14);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_1_19);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (function__cell_carrier_constructor_18)
DEFLABEL (function__cell_carrier_constructor_13)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_23;
  Wrd5 = Wrd9;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_21;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_21);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_10 7
#define LABEL_2_13 9
#define LABEL_2_8 11
#define LABEL_2_16 13
#define LABEL_2_14 15
#define LABEL_2_15 17
#define LABEL_2_11 19
#define ENVIRONMENT_LABEL_2_3 28
#define DEBUGGING_LABEL_2_2 27
#define EXECUTE_CACHE_2_12 21
#define EXECUTE_CACHE_2_9 23
#define EXECUTE_CACHE_2_7 25
#define FREE_REFERENCES_LABEL_2_0 20
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
carrying_cells_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_2_4);
      goto early_access_hack_8;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (early_access_hack_11)
DEFLABEL (early_access_hack_8)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_8 11
#define LABEL_3_9 13
#define LABEL_3_10 15
#define LABEL_3_12 17
#define LABEL_3_13 19
#define LABEL_3_14 21
#define LABEL_3_15 23
#define LABEL_3_21 25
#define LABEL_3_22 27
#define LABEL_3_23 29
#define LABEL_3_24 31
#define LABEL_3_25 33
#define LABEL_3_19 35
#define TAG_3_20 16
#define LABEL_3_17 37
#define TAG_3_18 17
#define LABEL_3_27 39
#define LABEL_3_28 41
#define LABEL_3_30 43
#define LABEL_3_31 45
#define LABEL_3_34 47
#define LABEL_3_42 49
#define LABEL_3_35 51
#define LABEL_3_36 53
#define LABEL_3_43 55
#define LABEL_3_38 57
#define LABEL_3_45 59
#define LABEL_3_46 61
#define LABEL_3_40 63
#define LABEL_3_41 65
#define LABEL_3_47 67
#define LABEL_3_50 69
#define LABEL_3_51 71
#define LABEL_3_49 73
#define LABEL_3_52 75
#define LABEL_3_53 77
#define LABEL_3_54 79
#define ENVIRONMENT_LABEL_3_3 118
#define DEBUGGING_LABEL_3_2 117
#define OBJECT_3_15 116
#define OBJECT_3_14 115
#define OBJECT_3_13 114
#define OBJECT_3_12 113
#define OBJECT_3_11 112
#define OBJECT_3_10 111
#define OBJECT_3_9 110
#define OBJECT_3_8 109
#define OBJECT_3_7 108
#define OBJECT_3_6 107
#define OBJECT_3_5 106
#define OBJECT_3_4 105
#define OBJECT_3_3 104
#define OBJECT_3_2 103
#define OBJECT_3_1 102
#define OBJECT_3_0 101
#define EXECUTE_CACHE_3_44 81
#define EXECUTE_CACHE_3_39 83
#define EXECUTE_CACHE_3_37 85
#define EXECUTE_CACHE_3_33 87
#define EXECUTE_CACHE_3_29 89
#define EXECUTE_CACHE_3_48 91
#define EXECUTE_CACHE_3_32 93
#define EXECUTE_CACHE_3_26 95
#define EXECUTE_CACHE_3_16 97
#define EXECUTE_CACHE_3_11 99
#define FREE_REFERENCES_LABEL_3_0 80
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
carrying_cells_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_69;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_71;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_72;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_73;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto label_74;

    case 5:
      current_block = (Rpc - LABEL_3_9);
      goto label_75;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto label_76;

    case 8:
      current_block = (Rpc - LABEL_3_13);
      goto label_77;

    case 9:
      current_block = (Rpc - LABEL_3_14);
      goto label_78;

    case 10:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_25;

    case 12:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_24;

    case 13:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_23;

    case 14:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_3_25);
      goto attach___28;

    case 16:
      current_block = (Rpc - LABEL_3_19);
      goto accessor_definition_90;

    case 17:
      current_block = (Rpc - LABEL_3_17);
      goto early_access_hack_definition_89;

    case 18:
      current_block = (Rpc - LABEL_3_27);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_3_30);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_3_31);
      goto continuation_20;

    case 22:
      current_block = (Rpc - LABEL_3_34);
      goto continuation_34;

    case 23:
      current_block = (Rpc - LABEL_3_42);
      goto label_79;

    case 24:
      current_block = (Rpc - LABEL_3_35);
      goto continuation_33;

    case 25:
      current_block = (Rpc - LABEL_3_36);
      goto continuation_38;

    case 26:
      current_block = (Rpc - LABEL_3_43);
      goto label_80;

    case 27:
      current_block = (Rpc - LABEL_3_38);
      goto continuation_43;

    case 28:
      current_block = (Rpc - LABEL_3_45);
      goto label_81;

    case 29:
      current_block = (Rpc - LABEL_3_46);
      goto label_82;

    case 30:
      current_block = (Rpc - LABEL_3_40);
      goto continuation_17;

    case 31:
      current_block = (Rpc - LABEL_3_41);
      goto name_fix_definition_63;

    case 32:
      current_block = (Rpc - LABEL_3_47);
      goto continuation_46;

    case 33:
      current_block = (Rpc - LABEL_3_50);
      goto label_83;

    case 34:
      current_block = (Rpc - LABEL_3_51);
      goto label_84;

    case 35:
      current_block = (Rpc - LABEL_3_49);
      goto continuation_59;

    case 36:
      current_block = (Rpc - LABEL_3_52);
      goto label_85;

    case 37:
      current_block = (Rpc - LABEL_3_53);
      goto continuation_57;

    case 38:
      current_block = (Rpc - LABEL_3_54);
      goto label_86;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_88)
DEFLABEL (lambda_69)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_108;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_107)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_106;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_105)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_104;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_103)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_102;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_101)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_100;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_99)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_98;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_97)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_96;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_95)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_94;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_93)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_17])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_19])));
  Rhp += 2;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  Wrd25 = Wrd30;
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  ((Wrd25.pObj) [3]) = Rvl;
  Wrd28 = Wrd32;
  (Wrd29.Obj) = (Rsp [6]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_32]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_3_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_31);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_41]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_32]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_39]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_48]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_39]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_3_21);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_3_4]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_3_6]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_77)
  (Wrd14.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_76)
  (Wrd5.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_74)
  (Wrd30.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_73)
  (Wrd21.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_71)
  (Wrd5.Obj) = Rvl;
  goto label_107;

DEFLABEL (attach___91)
DEFLABEL (attach___28)
  INTERRUPT_CHECK (26, LABEL_3_25);
  (Wrd5.Obj) = (current_block [OBJECT_3_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_33]));

DEFLABEL (accessor_definition_90)
  CLOSURE_HEADER (LABEL_3_19);

DEFLABEL (accessor_definition_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_3_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_37]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_3_36);
  (* (--Rsp)) = Rvl;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 10))
    goto label_110;
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_110;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd18.Lng))))
    goto label_110;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd9.pObj) = (& ((Wrd16.pObj) [(Wrd6.Lng)]));
  (Wrd10.Obj) = (current_block [OBJECT_3_10]);
  ((Wrd9.pObj) [1]) = (Wrd10.Obj);

DEFLABEL (label_109)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_44]));

DEFLABEL (label_110)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (Rsp [7]);
  (Wrd23.Obj) = (current_block [OBJECT_3_10]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_43]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_13]), 3);

DEFLABEL (label_80)
  goto label_109;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_3_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_39]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_3_34);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_112;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_111)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_3_10]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_3_11]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_3_12]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_112)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_42]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_79)
  (Wrd5.Obj) = Rvl;
  goto label_111;

DEFLABEL (early_access_hack_definition_89)
  CLOSURE_HEADER (LABEL_3_17);

DEFLABEL (early_access_hack_definition_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_3_38);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_120;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_119)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_118;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_117)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_47]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_3_47);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_116;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_115)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_114;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_113)
  (Wrd23.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_3_14]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd45.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd50.Obj) = (current_block [OBJECT_3_15]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_114)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_51]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_84)
  (Wrd13.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_50]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_83)
  (Wrd6.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_46]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_45]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_81)
  (Wrd6.Obj) = Rvl;
  goto label_119;

DEFLABEL (name_fix_definition_92)
DEFLABEL (name_fix_definition_63)
  INTERRUPT_CHECK (26, LABEL_3_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_3_49);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_124;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_123)
  (Wrd16.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_53]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_3_53);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_122;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_121)
  (Wrd13.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_3_15]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_122)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_54]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_86)
  (Wrd6.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_52]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_85)
  (Wrd6.Obj) = Rvl;
  goto label_123;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define ENVIRONMENT_LABEL_4_3 20
#define DEBUGGING_LABEL_4_2 19
#define OBJECT_4_1 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_9 11
#define EXECUTE_CACHE_4_6 13
#define FREE_REFERENCE_4_0 16
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
carrying_cells_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_8;
  Wrd8 = Wrd12;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_8])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define ENVIRONMENT_LABEL_5_3 20
#define DEBUGGING_LABEL_5_2 19
#define OBJECT_5_1 18
#define OBJECT_5_0 17
#define EXECUTE_CACHE_5_9 11
#define EXECUTE_CACHE_5_6 13
#define FREE_REFERENCE_5_0 16
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
carrying_cells_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_8])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define ENVIRONMENT_LABEL_6_3 16
#define DEBUGGING_LABEL_6_2 15
#define OBJECT_6_1 14
#define OBJECT_6_0 13
#define EXECUTE_CACHE_6_8 9
#define EXECUTE_CACHE_6_6 11
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
carrying_cells_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_6 5
#define LABEL_7_8 7
#define LABEL_7_4 9
#define LABEL_7_9 11
#define LABEL_7_7 13
#define LABEL_7_11 15
#define LABEL_7_12 17
#define LABEL_7_13 19
#define ENVIRONMENT_LABEL_7_3 29
#define DEBUGGING_LABEL_7_2 28
#define OBJECT_7_4 27
#define OBJECT_7_3 26
#define OBJECT_7_2 25
#define OBJECT_7_1 24
#define OBJECT_7_0 23
#define EXECUTE_CACHE_7_10 21
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
carrying_cells_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_7_5);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_7_4);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_7_11);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_26)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (label_28)
  if (! ((Wrd6.uLng) == 1))
    goto label_30;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_29)
  goto lambda_7;

DEFLABEL (label_30)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (lambda_25)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_7_5);
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == (current_block [OBJECT_7_0]))
    goto label_34;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_31;
  Rsp = (& (Rsp [1]));
  goto label_27;

DEFLABEL (label_31)
  if (! ((Wrd21.uLng) == 1))
    goto label_33;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd23.Obj);
  goto label_29;

DEFLABEL (label_33)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_21)
  (Wrd23.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_38;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_37)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_36;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_35)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define LABEL_8_10 11
#define LABEL_8_11 13
#define ENVIRONMENT_LABEL_8_3 26
#define DEBUGGING_LABEL_8_2 25
#define OBJECT_8_1 24
#define OBJECT_8_0 23
#define EXECUTE_CACHE_8_12 15
#define EXECUTE_CACHE_8_9 17
#define EXECUTE_CACHE_8_6 19
#define FREE_REFERENCE_8_0 22
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
carrying_cells_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_13;
  Wrd7 = Wrd11;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_11;
  Wrd14 = Wrd18;

DEFLABEL (label_10)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_11])), (Wrd15.pObj));

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_10])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define ENVIRONMENT_LABEL_9_3 21
#define DEBUGGING_LABEL_9_2 20
#define OBJECT_9_2 19
#define OBJECT_9_1 18
#define OBJECT_9_0 17
#define EXECUTE_CACHE_9_10 11
#define EXECUTE_CACHE_9_9 13
#define EXECUTE_CACHE_9_6 15
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
carrying_cells_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_9_2]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_12 9
#define LABEL_7 11
#define LABEL_8 13
#define LABEL_10 15
#define LABEL_19 17
#define LABEL_11 19
#define LABEL_14 21
#define LABEL_25 23
#define LABEL_15 25
#define LABEL_16 27
#define LABEL_17 29
#define LABEL_18 31
#define LABEL_21 33
#define LABEL_34 35
#define LABEL_22 37
#define LABEL_23 39
#define LABEL_24 41
#define LABEL_30 43
#define LABEL_40 45
#define LABEL_31 47
#define LABEL_32 49
#define LABEL_33 51
#define LABEL_36 53
#define LABEL_37 55
#define LABEL_38 57
#define LABEL_39 59
#define LABEL_41 61
#define LABEL_51 63
#define LABEL_42 65
#define LABEL_43 67
#define LABEL_44 69
#define LABEL_45 71
#define LABEL_47 73
#define LABEL_48 75
#define LABEL_49 77
#define LABEL_50 79
#define LABEL_53 81
#define LABEL_62 83
#define LABEL_54 85
#define LABEL_55 87
#define LABEL_56 89
#define LABEL_57 91
#define LABEL_58 93
#define LABEL_66 95
#define LABEL_59 97
#define LABEL_60 99
#define LABEL_61 101
#define LABEL_63 103
#define LABEL_70 105
#define LABEL_64 107
#define LABEL_65 109
#define LABEL_67 111
#define LABEL_75 113
#define LABEL_76 115
#define LABEL_77 117
#define LABEL_68 119
#define LABEL_69 121
#define LABEL_71 123
#define LABEL_83 125
#define LABEL_84 127
#define LABEL_85 129
#define LABEL_72 131
#define LABEL_73 133
#define LABEL_74 135
#define LABEL_79 137
#define LABEL_87 139
#define LABEL_80 141
#define LABEL_81 143
#define LABEL_82 145
#define LABEL_86 147
#define LABEL_89 149
#define LABEL_88 151
#define LABEL_91 153
#define LABEL_90 155
#define LABEL_93 157
#define LABEL_92 159
#define LABEL_95 161
#define LABEL_94 163
#define LABEL_97 165
#define LABEL_96 167
#define LABEL_99 169
#define LABEL_98 171
#define LABEL_101 173
#define LABEL_100 175
#define LABEL_104 177
#define LABEL_102 179
#define LABEL_110 181
#define LABEL_103 183
#define LABEL_105 185
#define LABEL_115 187
#define LABEL_106 189
#define LABEL_107 191
#define LABEL_108 193
#define LABEL_109 195
#define LABEL_111 197
#define LABEL_117 199
#define LABEL_112 201
#define LABEL_113 203
#define LABEL_114 205
#define LABEL_116 207
#define LABEL_119 209
#define LABEL_118 211
#define LABEL_124 213
#define LABEL_120 215
#define LABEL_129 217
#define LABEL_121 219
#define LABEL_122 221
#define LABEL_123 223
#define LABEL_125 225
#define LABEL_126 227
#define LABEL_127 229
#define LABEL_128 231
#define LABEL_130 233
#define LABEL_139 235
#define LABEL_131 237
#define LABEL_132 239
#define LABEL_133 241
#define LABEL_134 243
#define LABEL_135 245
#define LABEL_144 247
#define LABEL_145 249
#define LABEL_146 251
#define LABEL_136 253
#define LABEL_137 255
#define LABEL_138 257
#define LABEL_140 259
#define LABEL_141 261
#define LABEL_142 263
#define LABEL_143 265
#define LABEL_147 267
#define LABEL_148 269
#define LABEL_149 271
#define LABEL_151 273
#define LABEL_160 275
#define LABEL_152 277
#define LABEL_153 279
#define LABEL_154 281
#define LABEL_155 283
#define LABEL_156 285
#define LABEL_157 287
#define LABEL_158 289
#define LABEL_159 291
#define LABEL_161 293
#define LABEL_169 295
#define LABEL_162 297
#define LABEL_163 299
#define LABEL_164 301
#define LABEL_165 303
#define LABEL_166 305
#define LABEL_167 307
#define LABEL_168 309
#define LABEL_170 311
#define LABEL_171 313
#define LABEL_172 315
#define ENVIRONMENT_LABEL_3 428
#define DEBUGGING_LABEL_2 427
#define PURIFICATION_ROOT 426
#define OBJECT_54 425
#define OBJECT_53 424
#define OBJECT_52 423
#define OBJECT_51 422
#define OBJECT_50 421
#define OBJECT_49 420
#define OBJECT_48 419
#define OBJECT_47 418
#define OBJECT_46 417
#define OBJECT_45 416
#define OBJECT_44 415
#define OBJECT_43 414
#define OBJECT_42 413
#define OBJECT_41 412
#define OBJECT_40 411
#define OBJECT_39 410
#define OBJECT_38 409
#define OBJECT_37 408
#define OBJECT_36 407
#define OBJECT_35 406
#define OBJECT_34 405
#define OBJECT_33 404
#define OBJECT_32 403
#define OBJECT_31 402
#define OBJECT_30 401
#define OBJECT_29 400
#define OBJECT_28 399
#define OBJECT_27 398
#define OBJECT_26 397
#define OBJECT_25 396
#define OBJECT_24 395
#define OBJECT_23 394
#define OBJECT_22 393
#define OBJECT_21 392
#define OBJECT_20 391
#define OBJECT_19 390
#define OBJECT_18 389
#define OBJECT_17 388
#define OBJECT_16 387
#define OBJECT_15 386
#define OBJECT_14 385
#define OBJECT_13 384
#define OBJECT_12 383
#define OBJECT_11 382
#define OBJECT_10 381
#define OBJECT_9 380
#define OBJECT_8 379
#define OBJECT_7 378
#define OBJECT_6 377
#define OBJECT_5 376
#define OBJECT_4 375
#define OBJECT_3 374
#define OBJECT_2 373
#define OBJECT_1 372
#define OBJECT_0 371
#define EXECUTE_CACHE_78 317
#define EXECUTE_CACHE_52 319
#define EXECUTE_CACHE_46 321
#define EXECUTE_CACHE_35 323
#define EXECUTE_CACHE_29 325
#define EXECUTE_CACHE_28 327
#define EXECUTE_CACHE_27 329
#define EXECUTE_CACHE_26 331
#define EXECUTE_CACHE_20 333
#define EXECUTE_CACHE_13 335
#define FREE_REFERENCE_27 338
#define FREE_REFERENCE_26 339
#define FREE_REFERENCE_25 340
#define FREE_REFERENCE_24 341
#define FREE_REFERENCE_23 342
#define FREE_REFERENCE_22 343
#define FREE_REFERENCE_21 344
#define FREE_REFERENCE_20 345
#define FREE_REFERENCE_19 346
#define FREE_REFERENCE_18 347
#define FREE_REFERENCE_17 348
#define FREE_REFERENCE_16 349
#define FREE_REFERENCE_15 350
#define FREE_REFERENCE_14 351
#define FREE_REFERENCE_13 352
#define FREE_REFERENCE_12 353
#define FREE_REFERENCE_11 354
#define FREE_REFERENCE_10 355
#define FREE_REFERENCE_9 356
#define FREE_REFERENCE_8 357
#define FREE_REFERENCE_7 358
#define FREE_REFERENCE_6 359
#define FREE_REFERENCE_5 360
#define FREE_REFERENCE_4 361
#define FREE_REFERENCE_3 362
#define FREE_REFERENCE_2 363
#define FREE_REFERENCE_1 364
#define FREE_REFERENCE_0 365
#define GLOBAL_EXECUTE_CACHE_150 367
#define GLOBAL_EXECUTE_CACHE_9 369
#define FREE_REFERENCES_LABEL_0 316
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
carrying_cells_so_992472d38a563074 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_12);
      goto label_127;

    case 4:
      current_block = (Rpc - LABEL_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_19);
      goto label_128;

    case 8:
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_25);
      goto label_129;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_17);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_34);
      goto label_130;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_14;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_13;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_40);
      goto label_131;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_19;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto continuation_18;

    case 24:
      current_block = (Rpc - LABEL_33);
      goto continuation_17;

    case 25:
      current_block = (Rpc - LABEL_36);
      goto continuation_24;

    case 26:
      current_block = (Rpc - LABEL_37);
      goto continuation_23;

    case 27:
      current_block = (Rpc - LABEL_38);
      goto continuation_22;

    case 28:
      current_block = (Rpc - LABEL_39);
      goto continuation_21;

    case 29:
      current_block = (Rpc - LABEL_41);
      goto continuation_30;

    case 30:
      current_block = (Rpc - LABEL_51);
      goto label_132;

    case 31:
      current_block = (Rpc - LABEL_42);
      goto continuation_29;

    case 32:
      current_block = (Rpc - LABEL_43);
      goto continuation_28;

    case 33:
      current_block = (Rpc - LABEL_44);
      goto continuation_27;

    case 34:
      current_block = (Rpc - LABEL_45);
      goto continuation_25;

    case 35:
      current_block = (Rpc - LABEL_47);
      goto continuation_34;

    case 36:
      current_block = (Rpc - LABEL_48);
      goto continuation_33;

    case 37:
      current_block = (Rpc - LABEL_49);
      goto continuation_32;

    case 38:
      current_block = (Rpc - LABEL_50);
      goto continuation_31;

    case 39:
      current_block = (Rpc - LABEL_53);
      goto continuation_40;

    case 40:
      current_block = (Rpc - LABEL_62);
      goto label_133;

    case 41:
      current_block = (Rpc - LABEL_54);
      goto continuation_39;

    case 42:
      current_block = (Rpc - LABEL_55);
      goto continuation_38;

    case 43:
      current_block = (Rpc - LABEL_56);
      goto continuation_37;

    case 44:
      current_block = (Rpc - LABEL_57);
      goto continuation_35;

    case 45:
      current_block = (Rpc - LABEL_58);
      goto continuation_44;

    case 46:
      current_block = (Rpc - LABEL_66);
      goto label_134;

    case 47:
      current_block = (Rpc - LABEL_59);
      goto continuation_43;

    case 48:
      current_block = (Rpc - LABEL_60);
      goto continuation_42;

    case 49:
      current_block = (Rpc - LABEL_61);
      goto continuation_41;

    case 50:
      current_block = (Rpc - LABEL_63);
      goto continuation_47;

    case 51:
      current_block = (Rpc - LABEL_70);
      goto label_135;

    case 52:
      current_block = (Rpc - LABEL_64);
      goto continuation_46;

    case 53:
      current_block = (Rpc - LABEL_65);
      goto continuation_45;

    case 54:
      current_block = (Rpc - LABEL_67);
      goto continuation_50;

    case 55:
      current_block = (Rpc - LABEL_75);
      goto label_136;

    case 56:
      current_block = (Rpc - LABEL_76);
      goto label_137;

    case 57:
      current_block = (Rpc - LABEL_77);
      goto label_138;

    case 58:
      current_block = (Rpc - LABEL_68);
      goto continuation_49;

    case 59:
      current_block = (Rpc - LABEL_69);
      goto continuation_48;

    case 60:
      current_block = (Rpc - LABEL_71);
      goto continuation_54;

    case 61:
      current_block = (Rpc - LABEL_83);
      goto label_139;

    case 62:
      current_block = (Rpc - LABEL_84);
      goto label_140;

    case 63:
      current_block = (Rpc - LABEL_85);
      goto label_141;

    case 64:
      current_block = (Rpc - LABEL_72);
      goto continuation_53;

    case 65:
      current_block = (Rpc - LABEL_73);
      goto continuation_52;

    case 66:
      current_block = (Rpc - LABEL_74);
      goto continuation_51;

    case 67:
      current_block = (Rpc - LABEL_79);
      goto continuation_58;

    case 68:
      current_block = (Rpc - LABEL_87);
      goto label_142;

    case 69:
      current_block = (Rpc - LABEL_80);
      goto continuation_57;

    case 70:
      current_block = (Rpc - LABEL_81);
      goto continuation_56;

    case 71:
      current_block = (Rpc - LABEL_82);
      goto continuation_55;

    case 72:
      current_block = (Rpc - LABEL_86);
      goto continuation_59;

    case 73:
      current_block = (Rpc - LABEL_89);
      goto label_143;

    case 74:
      current_block = (Rpc - LABEL_88);
      goto continuation_60;

    case 75:
      current_block = (Rpc - LABEL_91);
      goto label_144;

    case 76:
      current_block = (Rpc - LABEL_90);
      goto continuation_61;

    case 77:
      current_block = (Rpc - LABEL_93);
      goto label_145;

    case 78:
      current_block = (Rpc - LABEL_92);
      goto continuation_62;

    case 79:
      current_block = (Rpc - LABEL_95);
      goto label_146;

    case 80:
      current_block = (Rpc - LABEL_94);
      goto continuation_63;

    case 81:
      current_block = (Rpc - LABEL_97);
      goto label_147;

    case 82:
      current_block = (Rpc - LABEL_96);
      goto continuation_64;

    case 83:
      current_block = (Rpc - LABEL_99);
      goto label_148;

    case 84:
      current_block = (Rpc - LABEL_98);
      goto continuation_65;

    case 85:
      current_block = (Rpc - LABEL_101);
      goto label_149;

    case 86:
      current_block = (Rpc - LABEL_100);
      goto continuation_66;

    case 87:
      current_block = (Rpc - LABEL_104);
      goto label_150;

    case 88:
      current_block = (Rpc - LABEL_102);
      goto continuation_68;

    case 89:
      current_block = (Rpc - LABEL_110);
      goto label_151;

    case 90:
      current_block = (Rpc - LABEL_103);
      goto continuation_67;

    case 91:
      current_block = (Rpc - LABEL_105);
      goto continuation_73;

    case 92:
      current_block = (Rpc - LABEL_115);
      goto label_152;

    case 93:
      current_block = (Rpc - LABEL_106);
      goto continuation_72;

    case 94:
      current_block = (Rpc - LABEL_107);
      goto continuation_71;

    case 95:
      current_block = (Rpc - LABEL_108);
      goto continuation_70;

    case 96:
      current_block = (Rpc - LABEL_109);
      goto continuation_69;

    case 97:
      current_block = (Rpc - LABEL_111);
      goto continuation_77;

    case 98:
      current_block = (Rpc - LABEL_117);
      goto label_153;

    case 99:
      current_block = (Rpc - LABEL_112);
      goto continuation_76;

    case 100:
      current_block = (Rpc - LABEL_113);
      goto continuation_75;

    case 101:
      current_block = (Rpc - LABEL_114);
      goto continuation_74;

    case 102:
      current_block = (Rpc - LABEL_116);
      goto continuation_78;

    case 103:
      current_block = (Rpc - LABEL_119);
      goto label_154;

    case 104:
      current_block = (Rpc - LABEL_118);
      goto continuation_79;

    case 105:
      current_block = (Rpc - LABEL_124);
      goto label_155;

    case 106:
      current_block = (Rpc - LABEL_120);
      goto continuation_83;

    case 107:
      current_block = (Rpc - LABEL_129);
      goto label_156;

    case 108:
      current_block = (Rpc - LABEL_121);
      goto continuation_82;

    case 109:
      current_block = (Rpc - LABEL_122);
      goto continuation_81;

    case 110:
      current_block = (Rpc - LABEL_123);
      goto continuation_80;

    case 111:
      current_block = (Rpc - LABEL_125);
      goto continuation_87;

    case 112:
      current_block = (Rpc - LABEL_126);
      goto continuation_86;

    case 113:
      current_block = (Rpc - LABEL_127);
      goto continuation_85;

    case 114:
      current_block = (Rpc - LABEL_128);
      goto continuation_84;

    case 115:
      current_block = (Rpc - LABEL_130);
      goto continuation_93;

    case 116:
      current_block = (Rpc - LABEL_139);
      goto label_157;

    case 117:
      current_block = (Rpc - LABEL_131);
      goto continuation_92;

    case 118:
      current_block = (Rpc - LABEL_132);
      goto continuation_91;

    case 119:
      current_block = (Rpc - LABEL_133);
      goto continuation_90;

    case 120:
      current_block = (Rpc - LABEL_134);
      goto continuation_88;

    case 121:
      current_block = (Rpc - LABEL_135);
      goto continuation_97;

    case 122:
      current_block = (Rpc - LABEL_144);
      goto label_158;

    case 123:
      current_block = (Rpc - LABEL_145);
      goto label_159;

    case 124:
      current_block = (Rpc - LABEL_146);
      goto label_160;

    case 125:
      current_block = (Rpc - LABEL_136);
      goto continuation_96;

    case 126:
      current_block = (Rpc - LABEL_137);
      goto continuation_95;

    case 127:
      current_block = (Rpc - LABEL_138);
      goto continuation_94;

    case 128:
      current_block = (Rpc - LABEL_140);
      goto continuation_101;

    case 129:
      current_block = (Rpc - LABEL_141);
      goto continuation_100;

    case 130:
      current_block = (Rpc - LABEL_142);
      goto continuation_99;

    case 131:
      current_block = (Rpc - LABEL_143);
      goto continuation_98;

    case 132:
      current_block = (Rpc - LABEL_147);
      goto continuation_105;

    case 133:
      current_block = (Rpc - LABEL_148);
      goto continuation_104;

    case 134:
      current_block = (Rpc - LABEL_149);
      goto continuation_102;

    case 135:
      current_block = (Rpc - LABEL_151);
      goto continuation_111;

    case 136:
      current_block = (Rpc - LABEL_160);
      goto label_161;

    case 137:
      current_block = (Rpc - LABEL_152);
      goto continuation_110;

    case 138:
      current_block = (Rpc - LABEL_153);
      goto continuation_109;

    case 139:
      current_block = (Rpc - LABEL_154);
      goto continuation_108;

    case 140:
      current_block = (Rpc - LABEL_155);
      goto continuation_106;

    case 141:
      current_block = (Rpc - LABEL_156);
      goto continuation_115;

    case 142:
      current_block = (Rpc - LABEL_157);
      goto continuation_114;

    case 143:
      current_block = (Rpc - LABEL_158);
      goto continuation_113;

    case 144:
      current_block = (Rpc - LABEL_159);
      goto continuation_112;

    case 145:
      current_block = (Rpc - LABEL_161);
      goto continuation_121;

    case 146:
      current_block = (Rpc - LABEL_169);
      goto label_162;

    case 147:
      current_block = (Rpc - LABEL_162);
      goto continuation_120;

    case 148:
      current_block = (Rpc - LABEL_163);
      goto continuation_119;

    case 149:
      current_block = (Rpc - LABEL_164);
      goto continuation_118;

    case 150:
      current_block = (Rpc - LABEL_165);
      goto continuation_116;

    case 151:
      current_block = (Rpc - LABEL_166);
      goto continuation_124;

    case 152:
      current_block = (Rpc - LABEL_167);
      goto continuation_123;

    case 153:
      current_block = (Rpc - LABEL_168);
      goto continuation_122;

    case 154:
      current_block = (Rpc - LABEL_170);
      goto label_165;

    case 155:
      current_block = (Rpc - LABEL_171);
      goto label_166;

    case 156:
      current_block = (Rpc - LABEL_172);
      goto expression_126;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_126)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_171])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_166)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_165)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	1,
	1,
	2,
	2,
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 9)
      goto label_164;
    blocks = (current_block [OBJECT_54]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_170])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_164)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_238;
  Wrd11 = Wrd15;

DEFLABEL (label_237)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_236;
  Wrd21 = Wrd25;

DEFLABEL (label_235)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_234;
  Wrd18 = Wrd22;

DEFLABEL (label_233)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_232;
  Wrd18 = Wrd22;

DEFLABEL (label_231)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_230;
  Wrd18 = Wrd22;

DEFLABEL (label_229)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_228;
  Wrd18 = Wrd22;

DEFLABEL (label_227)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_48);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_226;
  Wrd18 = Wrd22;

DEFLABEL (label_225)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_61);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_60);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_59);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_224;
  Wrd15 = Wrd19;

DEFLABEL (label_223)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_64);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_222;
  Wrd15 = Wrd19;

DEFLABEL (label_221)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_69);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_68);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_220;
  Wrd18 = Wrd22;

DEFLABEL (label_219)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_218;
  Wrd24 = Wrd28;

DEFLABEL (label_217)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_216;
  Wrd30 = Wrd34;

DEFLABEL (label_215)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_73);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_72);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_214;
  Wrd18 = Wrd22;

DEFLABEL (label_213)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_212;
  Wrd24 = Wrd28;

DEFLABEL (label_211)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_210;
  Wrd30 = Wrd34;

DEFLABEL (label_209)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_82);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_81);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_80);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_208;
  Wrd8 = Wrd12;

DEFLABEL (label_207)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_206;
  Wrd8 = Wrd12;

DEFLABEL (label_205)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_204;
  Wrd8 = Wrd12;

DEFLABEL (label_203)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_202;
  Wrd8 = Wrd12;

DEFLABEL (label_201)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_200;
  Wrd8 = Wrd12;

DEFLABEL (label_199)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_198;
  Wrd8 = Wrd12;

DEFLABEL (label_197)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_196;
  Wrd8 = Wrd12;

DEFLABEL (label_195)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_194;
  Wrd8 = Wrd12;

DEFLABEL (label_193)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_192;
  Wrd11 = Wrd15;

DEFLABEL (label_191)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_103);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_190;
  Wrd21 = Wrd25;

DEFLABEL (label_189)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_109);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_108);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_107);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_106);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_188;
  Wrd18 = Wrd22;

DEFLABEL (label_187)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_114);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_113);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_112);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_186;
  Wrd8 = Wrd12;

DEFLABEL (label_185)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_184;
  Wrd8 = Wrd12;

DEFLABEL (label_183)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_182;
  Wrd18 = Wrd22;

DEFLABEL (label_181)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_123);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_122);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_121);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_180;
  Wrd18 = Wrd22;

DEFLABEL (label_179)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_128);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_127);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_126);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_134);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_133);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_132);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_131);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_178;
  Wrd18 = Wrd22;

DEFLABEL (label_177)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_138);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_137);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_136);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_176;
  Wrd18 = Wrd22;

DEFLABEL (label_175)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_174;
  Wrd24 = Wrd28;

DEFLABEL (label_173)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_172;
  Wrd30 = Wrd34;

DEFLABEL (label_171)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_143);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_142);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_141);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_150]));

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 2);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_148);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_155);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_154);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_153);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_152);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_151);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_170;
  Wrd18 = Wrd22;

DEFLABEL (label_169)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_159);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_158);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_157);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_156);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_165);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_164);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_163);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_162);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd5.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_168;
  Wrd17 = Wrd21;

DEFLABEL (label_167)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_168);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_167);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_166);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_169])), (Wrd18.pObj));

DEFLABEL (label_162)
  (Wrd17.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_160])), (Wrd19.pObj));

DEFLABEL (label_161)
  (Wrd18.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_146])), (Wrd31.pObj));

DEFLABEL (label_160)
  (Wrd30.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_145])), (Wrd25.pObj));

DEFLABEL (label_159)
  (Wrd24.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_144])), (Wrd19.pObj));

DEFLABEL (label_158)
  (Wrd18.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_139])), (Wrd19.pObj));

DEFLABEL (label_157)
  (Wrd18.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_129])), (Wrd19.pObj));

DEFLABEL (label_156)
  (Wrd18.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_124])), (Wrd19.pObj));

DEFLABEL (label_155)
  (Wrd18.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119])), (Wrd9.pObj));

DEFLABEL (label_154)
  (Wrd8.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_117])), (Wrd9.pObj));

DEFLABEL (label_153)
  (Wrd8.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115])), (Wrd19.pObj));

DEFLABEL (label_152)
  (Wrd18.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110])), (Wrd22.pObj));

DEFLABEL (label_151)
  (Wrd21.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104])), (Wrd12.pObj));

DEFLABEL (label_150)
  (Wrd11.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101])), (Wrd9.pObj));

DEFLABEL (label_149)
  (Wrd8.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd9.pObj));

DEFLABEL (label_148)
  (Wrd8.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_97])), (Wrd9.pObj));

DEFLABEL (label_147)
  (Wrd8.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_200)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95])), (Wrd9.pObj));

DEFLABEL (label_146)
  (Wrd8.Obj) = Rvl;
  goto label_199;

DEFLABEL (label_202)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd9.pObj));

DEFLABEL (label_145)
  (Wrd8.Obj) = Rvl;
  goto label_201;

DEFLABEL (label_204)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91])), (Wrd9.pObj));

DEFLABEL (label_144)
  (Wrd8.Obj) = Rvl;
  goto label_203;

DEFLABEL (label_206)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89])), (Wrd9.pObj));

DEFLABEL (label_143)
  (Wrd8.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_208)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd9.pObj));

DEFLABEL (label_142)
  (Wrd8.Obj) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd31.pObj));

DEFLABEL (label_141)
  (Wrd30.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_212)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84])), (Wrd25.pObj));

DEFLABEL (label_140)
  (Wrd24.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83])), (Wrd19.pObj));

DEFLABEL (label_139)
  (Wrd18.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77])), (Wrd31.pObj));

DEFLABEL (label_138)
  (Wrd30.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76])), (Wrd25.pObj));

DEFLABEL (label_137)
  (Wrd24.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd19.pObj));

DEFLABEL (label_136)
  (Wrd18.Obj) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70])), (Wrd16.pObj));

DEFLABEL (label_135)
  (Wrd15.Obj) = Rvl;
  goto label_221;

DEFLABEL (label_224)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd16.pObj));

DEFLABEL (label_134)
  (Wrd15.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd19.pObj));

DEFLABEL (label_133)
  (Wrd18.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51])), (Wrd19.pObj));

DEFLABEL (label_132)
  (Wrd18.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_230)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd19.pObj));

DEFLABEL (label_131)
  (Wrd18.Obj) = Rvl;
  goto label_229;

DEFLABEL (label_232)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd19.pObj));

DEFLABEL (label_130)
  (Wrd18.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_234)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd19.pObj));

DEFLABEL (label_129)
  (Wrd18.Obj) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd22.pObj));

DEFLABEL (label_128)
  (Wrd21.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_238)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd12.pObj));

DEFLABEL (label_127)
  (Wrd11.Obj) = Rvl;
  goto label_237;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_carrying_cells_so_992472d38a563074 [9] =
  {
    { "carrying_cells_so_code_1", 13, carrying_cells_so_code_1 },
    { "carrying_cells_so_code_2", 9, carrying_cells_so_code_2 },
    { "carrying_cells_so_code_3", 39, carrying_cells_so_code_3 },
    { "carrying_cells_so_code_4", 4, carrying_cells_so_code_4 },
    { "carrying_cells_so_code_5", 4, carrying_cells_so_code_5 },
    { "carrying_cells_so_code_6", 3, carrying_cells_so_code_6 },
    { "carrying_cells_so_code_7", 9, carrying_cells_so_code_7 },
    { "carrying_cells_so_code_8", 6, carrying_cells_so_code_8 },
    { "carrying_cells_so_code_9", 4, carrying_cells_so_code_9 }
  };

int
decl_carrying_cells_so_992472d38a563074 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_carrying_cells_so_992472d38a563074);
  return (0);
}

DECLARE_COMPILED_CODE ("carrying-cells.so", 157, decl_carrying_cells_so_992472d38a563074, carrying_cells_so_992472d38a563074)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_carrying_cells_so_data_992472d38a563074 [3675] =
  "\xad\x03\x20\xda\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\xc2"
  "\x0d\xba\x24\x28\x0d\xbb\x28\x0d\x28\x0d\x28\x0d\xbc\x28\xb2\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbd\x1d\xb0\x82\x88\x28\xb3\x28\x0d\xbb\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x83\x88\x0d\x0d\xbf\xc3\x0d\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x08\x88\x0d\x0d\x1c\x0d\x0d\x0d\x1c\x08"
  "\xb1\xc1\xb9\x28\x0d\x28\x0d\x28\xb4\x28\xb4\x28\xb4\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x84\x88\x1b\x1b"
  "\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1b\x1b\x1b\x24\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\x0d\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x0d\xb1\x08\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x1b"
  "\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x0d\x1b\x2a\x0d\x1c\x0d\x0d"
  "\x1b\x2a\x0d\x1c\xb1\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x0d\x1b\x0d\x0d"
  "\x0d\xb9\x0d\xb8\x1b\x0d\x1c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x2a\x0d\x1c\x0d\x1c\x1b"
  "\x2a\x08\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x1b\xc2\x02\x02\x1b"
  "\x0d\x1c\xb4\x2a\xb7\xb6\x2a\xc3\x1b\xb5\x2a\x28\x0d\x28\x0d\x26"
  "\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x0d\x1b\x0d\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\xb0\x1b\xb1\x0d\x1b\x1b\x1b\xb3\x1b\x1b\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x1b\x28\xb2\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28"
  "\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x13"
  "\x63\x61\x72\x72\x79\x69\x6e\x67\x2d\x63\x65\x6c\x6c\x73\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x63\x61\x72\x06\x61\x70\x70"
  "\x6c\x79\x0c\x65\x6e\x73\x75\x72\x65\x2d\x63\x65\x6c\x6c\x02\x03"
  "\x18\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x2d\x63\x6f\x6e\x73"
  "\x74\x72\x75\x63\x74\x6f\x72\x21\x03\x11\x65\x78\x63\x65\x70\x74"
  "\x2d\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x03\x0a\x6c\x61\x73\x74"
  "\x2d\x70\x61\x69\x72\x04\x04\x6d\x61\x70\x03\x03\x11\x64\x69\x61"
  "\x67\x72\x61\x6d\x2d\x69\x64\x65\x6e\x74\x69\x74\x79\x03\x09\x63"
  "\x6f\x6e\x73\x74\x61\x6e\x74\x03\x13\x65\x78\x65\x63\x75\x74\x65"
  "\x2d\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x09\xaa\x01\x1c\x81"
  "\x85\x02\xa9\x01\x1a\x81\x83\x02\xa8\x01\x18\x81\x8f\x02\xa7\x01"
  "\x16\x81\x8d\x02\xa6\x01\x14\x81\x89\x02\xa5\x01\x12\x81\x89\x02"
  "\xa4\x01\x10\x81\x89\x02\xa3\x01\x0e\x81\x87\x02\xa2\x01\x0c\x81"
  "\x89\x02\xa1\x01\x0a\x81\x87\x02\xa0\x01\x08\x81\x85\x02\x9f\x01"
  "\x06\x81\x85\x02\x9e\x01\x04\x83\x04\x1b\x33\x02\x03\x03\x06\x63"
  "\x65\x6c\x6c\x3f\x03\x08\x63\x6f\x6e\x74\x65\x6e\x74\x04\xb3\x01"
  "\x14\x81\x85\x02\xb2\x01\x12\x81\x89\x02\xb1\x01\x10\x81\x87\x02"
  "\xb0\x01\x0e\x81\x87\x02\xaf\x01\x0c\x81\x85\x02\xae\x01\x0a\x81"
  "\x85\x02\xad\x01\x08\x81\x85\x02\xac\x01\x06\x81\x85\x02\xab\x01"
  "\x04\x85\x08\x13\x1d\x02\x0c\x64\x65\x66\x69\x6e\x65\x2d\x63\x65"
  "\x6c\x6c\x12\x65\x61\x72\x6c\x79\x2d\x61\x63\x63\x65\x73\x73\x2d"
  "\x68\x61\x63\x6b\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21"
  "\x12\x64\x65\x66\x69\x6e\x65\x2d\x70\x72\x6f\x70\x61\x67\x61\x74"
  "\x6f\x72\x0f\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x63\x65\x6c"
  "\x6c\x09\x07\x6f\x75\x74\x70\x75\x74\x0a\x08\x6e\x6f\x74\x68\x69"
  "\x6e\x67\x0b\x09\x02\x25\x06\x62\x65\x67\x69\x6e\x0c\x0c\x70\x72"
  "\x6f\x70\x61\x67\x61\x74\x69\x66\x79\x1a\x64\x65\x66\x69\x6e\x65"
  "\x2d\x62\x79\x2d\x64\x69\x61\x67\x72\x61\x6d\x2d\x76\x61\x72\x69"
  "\x61\x6e\x74\x23\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x3e\x63\x65"
  "\x6c\x6c\x2d\x63\x61\x72\x72\x69\x65\x72\x2d\x63\x6f\x6e\x73\x74"
  "\x72\x75\x63\x74\x6f\x72\x0d\x04\x63\x64\x72\x03\x1d\x70\x72\x6f"
  "\x70\x61\x67\x61\x74\x6f\x72\x2d\x6e\x61\x6d\x69\x6e\x67\x2d\x63"
  "\x6f\x6e\x76\x65\x6e\x74\x69\x6f\x6e\x03\x07\x6c\x65\x6e\x67\x74"
  "\x68\x04\x05\x06\x03\x05\x69\x6f\x74\x61\x04\x07\x73\x79\x6d\x62"
  "\x6f\x6c\x04\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x04"
  "\x07\x61\x70\x70\x65\x6e\x64\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x3e\x6c\x69\x73\x74\x0b\xda\x01\x50\x81\x87\x02\xd9\x01\x4e\x81"
  "\x87\x02\xd8\x01\x4c\x81\x85\x02\xd7\x01\x4a\x81\x85\x02\xd6\x01"
  "\x48\x81\x89\x02\xd5\x01\x46\x81\x89\x02\xd4\x01\x44\x81\x89\x02"
  "\xd3\x01\x42\x84\x06\xd2\x01\x40\x81\x9d\x02\xd1\x01\x3e\x81\x87"
  "\x02\xd0\x01\x3c\x81\x87\x02\xcf\x01\x3a\x81\x87\x02\xce\x01\x38"
  "\x81\x83\x02\xcd\x01\x36\x81\x81\x02\xcc\x01\x34\x81\x8d\x02\xcb"
  "\x01\x32\x81\x8b\x02\xca\x01\x30\x81\x89\x02\xc9\x01\x2e\x81\x9d"
  "\x02\xc8\x01\x2c\x81\x99\x02\xc7\x01\x2a\x81\x99\x02\xc6\x01\x28"
  "\x81\x97\x02\xc5\x01\x26\x81\x87\x02\xc4\x01\x24\x81\x89\x02\xc3"
  "\x01\x22\x83\x04\xc2\x01\x20\x81\x9b\x02\xc1\x01\x1e\x81\x97\x02"
  "\xc0\x01\x1c\x81\x95\x02\xbf\x01\x1a\x81\x93\x02\xbe\x01\x18\x81"
  "\x8d\x02\xbd\x01\x16\x81\x8b\x02\xbc\x01\x14\x81\x8b\x02\xbb\x01"
  "\x12\x81\x8b\x02\xba\x01\x10\x81\x89\x02\xb9\x01\x0e\x81\x87\x02"
  "\xb8\x01\x0c\x81\x87\x02\xb7\x01\x0a\x81\x87\x02\xb6\x01\x08\x81"
  "\x85\x02\xb5\x01\x06\x81\x85\x02\xb4\x01\x04\x84\x06\x4f\x77\x02"
  "\x0a\x09\x0b\x02\x04\x11\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x64"
  "\x69\x61\x67\x72\x61\x6d\x0e\x05\x07\x70\x3a\x63\x6f\x6e\x73\x0f"
  "\x03\xde\x01\x0a\x81\x87\x02\xdd\x01\x08\x81\x85\x02\xdc\x01\x06"
  "\x81\x85\x02\xdb\x01\x04\x84\x06\x09\x15\x10\x02\x0a\x09\x0b\x02"
  "\x04\x0e\x05\x0f\x03\xe2\x01\x0a\x81\x85\x02\xe1\x01\x08\x81\x85"
  "\x02\xe0\x01\x06\x81\x85\x02\xdf\x01\x04\x84\x06\x09\x15\x0a\x02"
  "\x05\x63\x65\x6c\x6c\x06\x70\x6c\x61\x63\x65\x04\x0e\x04\x0a\x70"
  "\x3a\x64\x65\x70\x6f\x73\x69\x74\x09\x03\xe5\x01\x08\x81\x85\x02"
  "\xe4\x01\x06\x81\x85\x02\xe3\x01\x04\x84\x06\x07\x11\x11\x02\x08"
  "\x0c\x1d\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75"
  "\x72\x65\x2d\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x73\x0c\x19"
  "\x73\x6c\x6f\x74\x66\x75\x6c\x2d\x69\x6e\x66\x6f\x72\x6d\x61\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x03\x12\x69\x6c\x6c\x2d\x66\x6f"
  "\x72\x6d\x65\x64\x2d\x73\x79\x6e\x74\x61\x78\x02\xee\x01\x14\x81"
  "\x89\x02\xed\x01\x12\x81\x8b\x02\xec\x01\x10\x81\x89\x02\xeb\x01"
  "\x0e\x81\x89\x02\xea\x01\x0c\x81\x87\x02\xe9\x01\x0a\x85\x08\xe8"
  "\x01\x08\x81\x89\x02\xe7\x01\x06\x81\x87\x02\xe6\x01\x04\x81\x89"
  "\x02\x13\x1e\x02\x09\x06\x74\x72\x75\x74\x68\x12\x06\x74\x68\x69"
  "\x6e\x67\x13\x0b\x02\x04\x0e\x04\x08\x70\x3a\x70\x61\x69\x72\x3f"
  "\x0b\x05\x09\x70\x3a\x73\x77\x69\x74\x63\x68\x14\x04\xf4\x01\x0e"
  "\x81\x89\x02\xf3\x01\x0c\x81\x87\x02\xf2\x01\x0a\x81\x85\x02\xf1"
  "\x01\x08\x81\x85\x02\xf0\x01\x06\x81\x85\x02\xef\x01\x04\x84\x06"
  "\x0d\x1b\x15\x02\x0a\x12\x13\x04\x0e\x04\x08\x70\x3a\x6e\x75\x6c"
  "\x6c\x3f\x13\x05\x14\x04\xf8\x01\x0a\x81\x85\x02\xf7\x01\x08\x81"
  "\x85\x02\xf6\x01\x06\x81\x85\x02\xf5\x01\x04\x84\x06\x09\x16\x14"
  "\x0a\x12\x12\x09\x63\x65\x3a\x6e\x75\x6c\x6c\x3f\x14\x04\x08\x63"
  "\x3a\x6e\x75\x6c\x6c\x3f\x14\x09\x63\x65\x3a\x70\x61\x69\x72\x3f"
  "\x1c\x64\x65\x66\x69\x6e\x65\x2d\x70\x72\x6f\x70\x61\x67\x61\x74"
  "\x6f\x72\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x15\x04\x08\x63"
  "\x3a\x70\x61\x69\x72\x3f\x15\x0a\x0a\x65\x3a\x65\x78\x61\x6d\x69"
  "\x6e\x65\x12\x11\x04\x0a\x70\x3a\x65\x78\x61\x6d\x69\x6e\x65\x11"
  "\x0a\x65\x3a\x64\x65\x70\x6f\x73\x69\x74\x09\x0e\x65\x3a\x63\x61"
  "\x72\x72\x79\x2d\x6e\x75\x6c\x6c\x3f\x0e\x70\x3a\x63\x61\x72\x72"
  "\x79\x2d\x6e\x75\x6c\x6c\x3f\x08\x65\x3a\x6e\x75\x6c\x6c\x3f\x0e"
  "\x67\x65\x6e\x65\x72\x69\x63\x2d\x6e\x75\x6c\x6c\x3f\x13\x06\x6e"
  "\x75\x6c\x6c\x3f\x16\x0c\x65\x3a\x63\x61\x72\x72\x79\x2d\x63\x64"
  "\x72\x0c\x70\x3a\x63\x61\x72\x72\x79\x2d\x63\x64\x72\x0c\x65\x3a"
  "\x63\x61\x72\x72\x79\x2d\x63\x61\x72\x0c\x70\x3a\x63\x61\x72\x72"
  "\x79\x2d\x63\x61\x72\x0e\x65\x3a\x63\x61\x72\x72\x79\x2d\x70\x61"
  "\x69\x72\x3f\x0e\x70\x3a\x63\x61\x72\x72\x79\x2d\x70\x61\x69\x72"
  "\x3f\x0d\x65\x3a\x63\x61\x72\x72\x79\x2d\x63\x6f\x6e\x73\x0d\x70"
  "\x3a\x63\x61\x72\x72\x79\x2d\x63\x6f\x6e\x73\x06\x65\x3a\x63\x64"
  "\x72\x17\x06\x65\x3a\x63\x61\x72\x18\x06\x70\x3a\x63\x64\x72\x19"
  "\x06\x70\x3a\x63\x61\x72\x1a\x07\x65\x3a\x25\x63\x64\x72\x1b\x0a"
  "\x04\x07\x70\x3a\x25\x63\x64\x72\x0a\x07\x65\x3a\x25\x63\x61\x72"
  "\x1c\x10\x04\x07\x70\x3a\x25\x63\x61\x72\x10\x07\x65\x3a\x63\x6f"
  "\x6e\x73\x1d\x0f\x08\x65\x3a\x70\x61\x69\x72\x3f\x1e\x0e\x67\x65"
  "\x6e\x65\x72\x69\x63\x2d\x70\x61\x69\x72\x3f\x1f\x0b\x1a\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73"
  "\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x0c\x06\x70\x61\x69\x72\x3f"
  "\x0c\x04\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x0d\x04\x04\x20\x72\x73\x63\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x04\x1f\x65\x72\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x03\x0c\x1f\x0b\x05\x63\x6f\x6e\x73"
  "\x0f\x10\x0a\x1c\x04\x63\x61\x72\x1b\x04\x63\x64\x72\x1d\x1e\x1a"
  "\x18\x19\x17\x16\x13\x09\x69\x64\x65\x6e\x74\x69\x74\x79\x09\x11"
  "\x12\x15\x14\x1d\x04\x1e\x6d\x61\x6b\x65\x2d\x61\x72\x69\x74\x79"
  "\x2d\x64\x65\x74\x65\x63\x74\x69\x6e\x67\x2d\x6f\x70\x65\x72\x61"
  "\x74\x6f\x72\x03\x0d\x6e\x61\x72\x79\x2d\x6d\x61\x70\x70\x69\x6e"
  "\x67\x03\x19\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x73\x74"
  "\x79\x6c\x65\x2d\x76\x61\x72\x69\x61\x6e\x74\x04\x0e\x03\x03\x21"
  "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x3e\x70\x72\x6f\x70\x61\x67"
  "\x61\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72"
  "\x03\x0d\x04\x0d\x6d\x61\x6b\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65"
  "\x04\x06\x6e\x61\x6d\x65\x21\x05\x0b\x9d\x01\xbc\x02\x80\x80\x04"
  "\x9c\x01\xba\x02\x81\x81\x02\x9b\x01\xb8\x02\x81\x81\x02\x9a\x01"
  "\xb6\x02\x81\x8d\x02\x99\x01\xb4\x02\x81\x8b\x02\x98\x01\xb2\x02"
  "\x81\x87\x02\x97\x01\xb0\x02\x81\x8f\x02\x96\x01\xae\x02\x81\x8b"
  "\x02\x95\x01\xac\x02\x81\x89\x02\x94\x01\xaa\x02\x81\x85\x02\x93"
  "\x01\xa8\x02\x81\x8f\x02\x92\x01\xa6\x02\x81\x83\x02\x91\x01\xa4"
  "\x02\x81\x8b\x02\x90\x01\xa2\x02\x81\x89\x02\x8f\x01\xa0\x02\x81"
  "\x85\x02\x8e\x01\x9e\x02\x81\x83\x02\x8d\x01\x9c\x02\x81\x8f\x02"
  "\x8c\x01\x9a\x02\x81\x8b\x02\x8b\x01\x98\x02\x81\x89\x02\x8a\x01"
  "\x96\x02\x81\x85\x02\x89\x01\x94\x02\x81\x8d\x02\x88\x01\x92\x02"
  "\x81\x83\x02\x87\x01\x90\x02\x81\x87\x02\x86\x01\x8e\x02\x81\x85"
  "\x02\x85\x01\x8c\x02\x81\x83\x02\x84\x01\x8a\x02\x81\x8b\x02\x83"
  "\x01\x88\x02\x81\x89\x02\x82\x01\x86\x02\x81\x85\x02\x81\x01\x84"
  "\x02\x81\x83\x02\x80\x01\x82\x02\x81\x8b\x02\x7f\x80\x02\x81\x89"
  "\x02\x7e\xfe\x01\x81\x85\x02\x7d\xfc\x01\x81\x91\x02\x7c\xfa\x01"
  "\x81\x8f\x02\x7b\xf8\x01\x81\x8d\x02\x7a\xf6\x01\x81\x83\x02\x79"
  "\xf4\x01\x81\x8f\x02\x78\xf2\x01\x81\x8b\x02\x77\xf0\x01\x81\x89"
  "\x02\x76\xee\x01\x81\x85\x02\x75\xec\x01\x81\x8d\x02\x74\xea\x01"
  "\x81\x83\x02\x73\xe8\x01\x81\x8b\x02\x72\xe6\x01\x81\x89\x02\x71"
  "\xe4\x01\x81\x85\x02\x70\xe2\x01\x81\x83\x02\x6f\xe0\x01\x81\x8b"
  "\x02\x6e\xde\x01\x81\x89\x02\x6d\xdc\x01\x81\x85\x02\x6c\xda\x01"
  "\x81\x8d\x02\x6b\xd8\x01\x81\x83\x02\x6a\xd6\x01\x81\x8d\x02\x69"
  "\xd4\x01\x81\x83\x02\x68\xd2\x01\x81\x85\x02\x67\xd0\x01\x81\x83"
  "\x02\x66\xce\x01\x81\x8b\x02\x65\xcc\x01\x81\x89\x02\x64\xca\x01"
  "\x81\x85\x02\x63\xc8\x01\x81\x85\x02\x62\xc6\x01\x81\x83\x02\x61"
  "\xc4\x01\x81\x8d\x02\x60\xc2\x01\x81\x8b\x02\x5f\xc0\x01\x81\x89"
  "\x02\x5e\xbe\x01\x81\x85\x02\x5d\xbc\x01\x81\x8d\x02\x5c\xba\x01"
  "\x81\x83\x02\x5b\xb8\x01\x81\x85\x02\x5a\xb6\x01\x81\x8f\x02\x59"
  "\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x87\x02\x57\xb0\x01\x81\x83"
  "\x02\x56\xae\x01\x81\x85\x02\x55\xac\x01\x81\x83\x02\x54\xaa\x01"
  "\x81\x85\x02\x53\xa8\x01\x81\x83\x02\x52\xa6\x01\x81\x85\x02\x51"
  "\xa4\x01\x81\x83\x02\x50\xa2\x01\x81\x85\x02\x4f\xa0\x01\x81\x83"
  "\x02\x4e\x9e\x01\x81\x85\x02\x4d\x9c\x01\x81\x83\x02\x4c\x9a\x01"
  "\x81\x85\x02\x4b\x98\x01\x81\x83\x02\x4a\x96\x01\x81\x85\x02\x49"
  "\x94\x01\x81\x83\x02\x48\x92\x01\x81\x8b\x02\x47\x90\x01\x81\x89"
  "\x02\x46\x8e\x01\x81\x85\x02\x45\x8c\x01\x81\x85\x02\x44\x8a\x01"
  "\x81\x83\x02\x43\x88\x01\x81\x8b\x02\x42\x86\x01\x81\x89\x02\x41"
  "\x84\x01\x81\x85\x02\x40\x82\x01\x81\x91\x02\x3f\x80\x01\x81\x8f"
  "\x02\x3e\x7e\x81\x8d\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x89\x02"
  "\x3b\x78\x81\x85\x02\x3a\x76\x81\x91\x02\x39\x74\x81\x8f\x02\x38"
  "\x72\x81\x8d\x02\x37\x70\x81\x83\x02\x36\x6e\x81\x89\x02\x35\x6c"
  "\x81\x85\x02\x34\x6a\x81\x8b\x02\x33\x68\x81\x83\x02\x32\x66\x81"
  "\x8b\x02\x31\x64\x81\x89\x02\x30\x62\x81\x85\x02\x2f\x60\x81\x8b"
  "\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x8f\x02\x2c\x5a\x81\x8b\x02"
  "\x2b\x58\x81\x89\x02\x2a\x56\x81\x85\x02\x29\x54\x81\x8d\x02\x28"
  "\x52\x81\x83\x02\x27\x50\x81\x8b\x02\x26\x4e\x81\x89\x02\x25\x4c"
  "\x81\x85\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x8f\x02\x22\x46\x81"
  "\x8b\x02\x21\x44\x81\x89\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x8d"
  "\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x8b\x02\x1c\x3a\x81\x89\x02"
  "\x1b\x38\x81\x85\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x8b\x02\x18"
  "\x32\x81\x89\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x8d\x02\x15\x2c"
  "\x81\x83\x02\x14\x2a\x81\x8b\x02\x13\x28\x81\x89\x02\x12\x26\x81"
  "\x85\x02\x11\x24\x81\x8d\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x8d"
  "\x02\x0e\x1e\x81\x8b\x02\x0d\x1c\x81\x89\x02\x0c\x1a\x81\x85\x02"
  "\x0b\x18\x81\x8d\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x85\x02\x08"
  "\x12\x81\x8f\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x87\x02\x05\x0c"
  "\x81\x85\x02\x04\x0a\x81\x87\x02\x03\x08\x81\x83\x02\x02\x06\x81"
  "\x83\x02\x01\x04\x81\x83\x02\xbb\x02\xad\x03";

SCHEME_OBJECT *
carrying_cells_so_data_992472d38a563074 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_carrying_cells_so_data_992472d38a563074 [0]))), (sizeof (prog_carrying_cells_so_data_992472d38a563074)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_172]));
}

DECLARE_COMPILED_DATA_NS ("carrying-cells.so", carrying_cells_so_data_992472d38a563074)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("carrying-cells.so", "ecbc6903e77b1467")
