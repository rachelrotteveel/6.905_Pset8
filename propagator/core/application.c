/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-10T00:18:35-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_7 7
#define TAG_1_8 2
#define LABEL_1_10 9
#define ENVIRONMENT_LABEL_1_3 22
#define DEBUGGING_LABEL_1_2 21
#define EXECUTE_CACHE_1_14 11
#define EXECUTE_CACHE_1_13 13
#define EXECUTE_CACHE_1_12 15
#define EXECUTE_CACHE_1_11 17
#define EXECUTE_CACHE_1_9 19
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_1_4);
      goto application_3;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (application_6)
DEFLABEL (application_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (label_9)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_9 5
#define TAG_2_10 1
#define LABEL_2_11 7
#define LABEL_2_7 9
#define TAG_2_8 3
#define LABEL_2_19 11
#define LABEL_2_5 13
#define TAG_2_6 5
#define LABEL_2_13 15
#define LABEL_2_14 17
#define TAG_2_15 7
#define LABEL_2_17 19
#define LABEL_2_21 21
#define LABEL_2_22 23
#define LABEL_2_23 25
#define LABEL_2_25 27
#define LABEL_2_27 29
#define LABEL_2_28 31
#define LABEL_2_30 33
#define LABEL_2_31 35
#define LABEL_2_32 37
#define LABEL_2_36 39
#define LABEL_2_38 41
#define LABEL_2_40 43
#define LABEL_2_42 45
#define LABEL_2_45 47
#define LABEL_2_46 49
#define LABEL_2_49 51
#define LABEL_2_43 53
#define LABEL_2_52 55
#define LABEL_2_50 57
#define TAG_2_51 27
#define LABEL_2_53 59
#define LABEL_2_55 61
#define LABEL_2_56 63
#define LABEL_2_57 65
#define LABEL_2_58 67
#define LABEL_2_59 69
#define LABEL_2_60 71
#define LABEL_2_61 73
#define LABEL_2_62 75
#define LABEL_2_63 77
#define ENVIRONMENT_LABEL_2_3 125
#define DEBUGGING_LABEL_2_2 124
#define OBJECT_2_6 123
#define OBJECT_2_5 122
#define OBJECT_2_4 121
#define OBJECT_2_3 120
#define OBJECT_2_2 119
#define OBJECT_2_1 118
#define OBJECT_2_0 117
#define EXECUTE_CACHE_2_64 79
#define EXECUTE_CACHE_2_54 81
#define EXECUTE_CACHE_2_48 83
#define EXECUTE_CACHE_2_47 85
#define EXECUTE_CACHE_2_44 87
#define EXECUTE_CACHE_2_41 89
#define EXECUTE_CACHE_2_39 91
#define EXECUTE_CACHE_2_37 93
#define EXECUTE_CACHE_2_34 95
#define EXECUTE_CACHE_2_35 97
#define EXECUTE_CACHE_2_33 99
#define EXECUTE_CACHE_2_29 101
#define EXECUTE_CACHE_2_26 103
#define EXECUTE_CACHE_2_24 105
#define EXECUTE_CACHE_2_20 107
#define EXECUTE_CACHE_2_18 109
#define EXECUTE_CACHE_2_16 111
#define EXECUTE_CACHE_2_12 113
#define FREE_REFERENCE_2_0 116
#define FREE_REFERENCES_LABEL_2_0 78
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_2_4);
      goto general_propagator_apply_44;

    case 1:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_52;

    case 2:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto doneP_10;

    case 4:
      current_block = (Rpc - LABEL_2_19);
      goto label_46;

    case 5:
      current_block = (Rpc - LABEL_2_5);
      goto attach_43;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_2_14);
      goto lambda_53;

    case 8:
      current_block = (Rpc - LABEL_2_17);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_37;

    case 10:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_36;

    case 11:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_35;

    case 12:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_0;

    case 13:
      current_block = (Rpc - LABEL_2_27);
      goto continuation_1;

    case 14:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_2_30);
      goto continuation_34;

    case 16:
      current_block = (Rpc - LABEL_2_31);
      goto continuation_33;

    case 17:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_32;

    case 18:
      current_block = (Rpc - LABEL_2_36);
      goto continuation_38;

    case 19:
      current_block = (Rpc - LABEL_2_38);
      goto continuation_39;

    case 20:
      current_block = (Rpc - LABEL_2_40);
      goto continuation_40;

    case 21:
      current_block = (Rpc - LABEL_2_42);
      goto continuation_41;

    case 22:
      current_block = (Rpc - LABEL_2_45);
      goto continuation_20;

    case 23:
      current_block = (Rpc - LABEL_2_46);
      goto continuation_19;

    case 24:
      current_block = (Rpc - LABEL_2_49);
      goto arg_copier_18;

    case 25:
      current_block = (Rpc - LABEL_2_43);
      goto continuation_23;

    case 26:
      current_block = (Rpc - LABEL_2_52);
      goto label_47;

    case 27:
      current_block = (Rpc - LABEL_2_50);
      goto lambda_55;

    case 28:
      current_block = (Rpc - LABEL_2_53);
      goto continuation_22;

    case 29:
      current_block = (Rpc - LABEL_2_55);
      goto continuation_13;

    case 30:
      current_block = (Rpc - LABEL_2_56);
      goto continuation_12;

    case 31:
      current_block = (Rpc - LABEL_2_57);
      goto continuation_11;

    case 32:
      current_block = (Rpc - LABEL_2_58);
      goto continuation_28;

    case 33:
      current_block = (Rpc - LABEL_2_59);
      goto continuation_27;

    case 34:
      current_block = (Rpc - LABEL_2_60);
      goto continuation_26;

    case 35:
      current_block = (Rpc - LABEL_2_61);
      goto continuation_25;

    case 36:
      current_block = (Rpc - LABEL_2_62);
      goto continuation_15;

    case 37:
      current_block = (Rpc - LABEL_2_63);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (general_propagator_apply_49)
DEFLABEL (general_propagator_apply_44)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 3;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 1;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-1]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  ((Wrd34.pObj) [2]) = (Wrd32.Obj);
  Wrd28 = Wrd36;
  ((Wrd28.pObj) [2]) = (Wrd32.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd28.pObj) [3]) = (Wrd26.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [4]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_9])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  ((Wrd11.pObj) [2]) = (Wrd37.Obj);
  ((Wrd11.pObj) [3]) = (Wrd35.Obj);
  ((Wrd11.pObj) [4]) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (Wrd13.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_29]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_28);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_35]));

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_2_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_14])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (doneP_51)
DEFLABEL (doneP_10)
  INTERRUPT_CHECK (26, LABEL_2_7);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_57;
  Wrd7 = Wrd11;

DEFLABEL (label_56)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd17.pObj) [0]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_19])), (Wrd8.pObj));

DEFLABEL (label_46)
  (Wrd7.Obj) = Rvl;
  goto label_56;

DEFLABEL (attach_50)
DEFLABEL (attach_43)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  ((Wrd12.pObj) [0]) = (Wrd5.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_33]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_2_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_2_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_33]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_2_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_37]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_2_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_39]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_2_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_2_40);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_42]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_45]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_46]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  goto arg_copier_18;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_46);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_48]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_45);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_47]));

DEFLABEL (label_58)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_42]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_43]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_44]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_2_43);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_60;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_59)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_53]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_54]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_2_53);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_59]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_60]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_61]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto arg_copier_18;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_2_61);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_48]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_2_60);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_47]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_2_59);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_2_58);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_64]));

DEFLABEL (label_60)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_52]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_2_42);
  Rvl = (current_block [OBJECT_2_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_2_14);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto doneP_10;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  Rvl = (current_block [OBJECT_2_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  goto attach_43;

DEFLABEL (arg_copier_54)
DEFLABEL (arg_copier_18)
  INTERRUPT_CHECK (26, LABEL_2_49);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_50])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_2_50);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_56]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_57]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_57);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_56);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_33]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_55);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_63]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_63);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_64]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_62);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define TAG_3_8 2
#define ENVIRONMENT_LABEL_3_3 16
#define DEBUGGING_LABEL_3_2 15
#define EXECUTE_CACHE_3_10 9
#define EXECUTE_CACHE_3_9 11
#define EXECUTE_CACHE_3_6 13
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto eager_diagram_apply_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eager_diagram_apply_5)
DEFLABEL (eager_diagram_apply_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (label_7)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_8 7
#define LABEL_4_10 9
#define TAG_4_11 3
#define LABEL_4_7 11
#define LABEL_4_14 13
#define TAG_4_15 5
#define LABEL_4_16 15
#define TAG_4_17 6
#define ENVIRONMENT_LABEL_4_3 30
#define DEBUGGING_LABEL_4_2 29
#define EXECUTE_CACHE_4_18 17
#define EXECUTE_CACHE_4_13 19
#define EXECUTE_CACHE_4_12 21
#define EXECUTE_CACHE_4_9 23
#define EXECUTE_CACHE_4_6 25
#define FREE_REFERENCE_4_0 28
#define FREE_REFERENCES_LABEL_4_0 16
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto eager_expression_apply_5;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_4_14);
      goto lambda_11;

    case 6:
      current_block = (Rpc - LABEL_4_16);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eager_expression_apply_9)
DEFLABEL (eager_expression_apply_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_10])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (label_13)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_16;
  Wrd17 = Wrd21;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_14])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_8])), (Wrd18.pObj));

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_4_10);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_4_14);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_16])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_4_16);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define EXECUTE_CACHE_5_7 7
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto directly_applicableP_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directly_applicableP_5)
DEFLABEL (directly_applicableP_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_9 7
#define LABEL_6_10 9
#define LABEL_6_7 11
#define LABEL_6_12 13
#define LABEL_6_13 15
#define ENVIRONMENT_LABEL_6_3 26
#define DEBUGGING_LABEL_6_2 25
#define EXECUTE_CACHE_6_14 17
#define EXECUTE_CACHE_6_11 19
#define EXECUTE_CACHE_6_8 21
#define EXECUTE_CACHE_6_6 23
#define FREE_REFERENCES_LABEL_6_0 16
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto try_eager_application_6;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (try_eager_application_9)
DEFLABEL (try_eager_application_6)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_11)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define LABEL_7_10 11
#define ENVIRONMENT_LABEL_7_3 21
#define DEBUGGING_LABEL_7_2 20
#define OBJECT_7_0 19
#define EXECUTE_CACHE_7_11 13
#define EXECUTE_CACHE_7_9 15
#define EXECUTE_CACHE_7_7 17
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_7_4);
      goto handle_explicit_output_4;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_explicit_output_8)
DEFLABEL (handle_explicit_output_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (label_10)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_7 5
#define LABEL_8_8 7
#define LABEL_8_5 9
#define TAG_8_6 3
#define LABEL_8_10 11
#define LABEL_8_19 13
#define LABEL_8_20 15
#define LABEL_8_22 17
#define LABEL_8_11 19
#define TAG_8_12 8
#define LABEL_8_14 21
#define LABEL_8_15 23
#define LABEL_8_17 25
#define LABEL_8_18 27
#define LABEL_8_21 29
#define LABEL_8_29 31
#define LABEL_8_32 33
#define LABEL_8_33 35
#define LABEL_8_26 37
#define LABEL_8_34 39
#define LABEL_8_35 41
#define LABEL_8_31 43
#define LABEL_8_36 45
#define LABEL_8_28 47
#define LABEL_8_37 49
#define ENVIRONMENT_LABEL_8_3 79
#define DEBUGGING_LABEL_8_2 78
#define OBJECT_8_7 77
#define OBJECT_8_6 76
#define OBJECT_8_5 75
#define OBJECT_8_4 74
#define OBJECT_8_3 73
#define OBJECT_8_2 72
#define OBJECT_8_1 71
#define OBJECT_8_0 70
#define EXECUTE_CACHE_8_30 51
#define EXECUTE_CACHE_8_27 53
#define EXECUTE_CACHE_8_25 55
#define EXECUTE_CACHE_8_24 57
#define EXECUTE_CACHE_8_23 59
#define EXECUTE_CACHE_8_16 61
#define EXECUTE_CACHE_8_13 63
#define EXECUTE_CACHE_8_9 65
#define FREE_REFERENCE_8_1 68
#define FREE_REFERENCE_8_0 69
#define FREE_REFERENCES_LABEL_8_0 50
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_8_4);
      goto handle_implicit_cells_27;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8_5);
      goto manufacture_cell_25;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_8_19);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_8_20);
      goto loop_17;

    case 7:
      current_block = (Rpc - LABEL_8_22);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_8_11);
      goto lambda_41;

    case 9:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_24;

    case 10:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_8_18);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_8_21);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_8_29);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_8_32);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_8_33);
      goto label_32;

    case 17:
      current_block = (Rpc - LABEL_8_26);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_8_34);
      goto label_34;

    case 19:
      current_block = (Rpc - LABEL_8_35);
      goto label_35;

    case 20:
      current_block = (Rpc - LABEL_8_31);
      goto continuation_16;

    case 21:
      current_block = (Rpc - LABEL_8_36);
      goto label_36;

    case 22:
      current_block = (Rpc - LABEL_8_28);
      goto continuation_11;

    case 23:
      current_block = (Rpc - LABEL_8_37);
      goto label_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_implicit_cells_39)
DEFLABEL (handle_implicit_cells_27)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd41.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd39.pObj) = (& (Rhp [-1]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd39.pObj)));
  (Rsp [2]) = (Wrd40.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 1;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  Wrd34 = Wrd36;
  (Wrd35.Obj) = (Rsp [3]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  Wrd18 = Wrd39;
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  if (! ((Wrd19.Obj) == (current_block [OBJECT_8_0])))
    goto label_51;
  (Wrd32.Obj) = (current_block [OBJECT_8_1]);
  ((Wrd18.pObj) [0]) = (Wrd32.Obj);

DEFLABEL (label_51)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [7]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_11])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd7.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto loop_17;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  ((Wrd6.pObj) [0]) = Rvl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_50;
  Wrd16 = Wrd20;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_8_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_8_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_8_26);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_48;
  if (Rvl == (current_block [OBJECT_8_1]))
    goto label_46;

DEFLABEL (label_45)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_44;
  Wrd14 = Wrd18;

DEFLABEL (label_43)
  (Rsp [4]) = (Wrd14.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);
  (Rsp [5]) = (Wrd20.Obj);
  Rsp = (& (Rsp [4]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_35])), (Wrd15.pObj));

DEFLABEL (label_35)
  (Wrd14.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [0]);
  (Rsp [5]) = (Wrd24.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_47;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  Rvl = ((Wrd29.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_48)
  (Wrd7.Obj) = (current_block [OBJECT_8_1]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_46;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_19])), (Wrd17.pObj));

DEFLABEL (label_29)
  (Wrd16.Obj) = Rvl;
  goto label_49;

DEFLABEL (manufacture_cell_40)
DEFLABEL (manufacture_cell_25)
  INTERRUPT_CHECK (26, LABEL_8_5);
  (Wrd5.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_8_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_25]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_8_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_24]));

DEFLABEL (loop_42)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_8_20);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_8_3])))
    goto label_52;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_62;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  (Wrd7.Obj) = (Rsp [1]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_8_3])))
    goto label_53;
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_8_6]);
  (Rsp [0]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_30]));

DEFLABEL (label_53)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_58;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_57)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_55;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_54)
  goto loop_17;

DEFLABEL (label_55)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_33]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_32)
DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_59)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_60;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_54;

DEFLABEL (label_60)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_29]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_33)
  goto label_56;

DEFLABEL (label_62)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_8_31);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_64;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_63)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_63;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_28);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_66;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_65)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_65;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_8_11);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto manufacture_cell_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 10
#define DEBUGGING_LABEL_9_2 9
#define OBJECT_9_0 8
#define FREE_REFERENCE_9_0 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_9_4);
      goto implicit_cellP_0;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (implicit_cellP_4)
DEFLABEL (implicit_cellP_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  if ((Wrd13.Obj) == (Wrd6.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_9_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define TAG_10_8 2
#define ENVIRONMENT_LABEL_10_3 16
#define DEBUGGING_LABEL_10_2 15
#define EXECUTE_CACHE_10_11 9
#define EXECUTE_CACHE_10_10 11
#define EXECUTE_CACHE_10_9 13
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_10_4);
      goto p_application_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (p_application_5)
DEFLABEL (p_application_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define TAG_11_7 2
#define LABEL_11_10 9
#define TAG_11_11 3
#define ENVIRONMENT_LABEL_11_3 23
#define DEBUGGING_LABEL_11_2 22
#define OBJECT_11_4 21
#define OBJECT_11_3 20
#define OBJECT_11_2 19
#define OBJECT_11_1 18
#define OBJECT_11_0 17
#define EXECUTE_CACHE_11_12 11
#define EXECUTE_CACHE_11_9 13
#define EXECUTE_CACHE_11_8 15
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_11_4);
      goto functionalize_3;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_11_10);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (functionalize_6)
DEFLABEL (functionalize_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_6])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [6]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_11_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_10])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd15.Obj) = ((Wrd8.pObj) [3]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_11_10);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_5 7
#define LABEL_12_8 9
#define LABEL_12_12 11
#define TAG_12_13 4
#define LABEL_12_14 13
#define LABEL_12_18 15
#define LABEL_12_19 17
#define LABEL_12_10 19
#define LABEL_12_22 21
#define LABEL_12_16 23
#define LABEL_12_20 25
#define ENVIRONMENT_LABEL_12_3 49
#define DEBUGGING_LABEL_12_2 48
#define OBJECT_12_1 47
#define OBJECT_12_0 46
#define EXECUTE_CACHE_12_23 27
#define EXECUTE_CACHE_12_21 29
#define EXECUTE_CACHE_12_17 31
#define EXECUTE_CACHE_12_15 33
#define EXECUTE_CACHE_12_11 35
#define EXECUTE_CACHE_12_9 37
#define EXECUTE_CACHE_12_7 39
#define FREE_REFERENCE_12_3 42
#define FREE_REFERENCE_12_2 43
#define FREE_REFERENCE_12_1 44
#define FREE_REFERENCE_12_0 45
#define FREE_REFERENCES_LABEL_12_0 26
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto do_apply_prop_9;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_12_12);
      goto lambda_17;

    case 5:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_12_18);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_12_19);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_12_22);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_12_20);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (do_apply_prop_16)
DEFLABEL (do_apply_prop_9)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_29;
  Wrd9 = Wrd13;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_12])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_20;
  Wrd7 = Wrd11;

DEFLABEL (label_19)
  Wrd13 = Wrd7;

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_20);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_19])), (Wrd8.pObj));

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_23;
  Wrd18 = Wrd22;

DEFLABEL (label_22)
  Wrd13 = Wrd18;
  goto label_18;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_18])), (Wrd19.pObj));

DEFLABEL (label_13)
  (Wrd18.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_25)
  (Wrd9.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_27;
  Wrd11 = Wrd15;

DEFLABEL (label_26)
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_23]));

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_22])), (Wrd12.pObj));

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_6])), (Wrd10.pObj));

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_12_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_5 7
#define LABEL_13_6 9
#define LABEL_13_9 11
#define LABEL_13_10 13
#define TAG_13_11 5
#define LABEL_13_21 15
#define LABEL_13_12 17
#define LABEL_13_16 19
#define TAG_13_17 8
#define LABEL_13_14 21
#define TAG_13_15 9
#define LABEL_13_27 23
#define LABEL_13_28 25
#define LABEL_13_29 27
#define LABEL_13_20 29
#define LABEL_13_24 31
#define TAG_13_25 14
#define LABEL_13_22 33
#define TAG_13_23 15
#define LABEL_13_31 35
#define LABEL_13_32 37
#define LABEL_13_33 39
#define LABEL_13_34 41
#define LABEL_13_35 43
#define LABEL_13_36 45
#define LABEL_13_30 47
#define LABEL_13_37 49
#define ENVIRONMENT_LABEL_13_3 76
#define DEBUGGING_LABEL_13_2 75
#define OBJECT_13_1 74
#define OBJECT_13_0 73
#define EXECUTE_CACHE_13_39 51
#define EXECUTE_CACHE_13_38 53
#define EXECUTE_CACHE_13_26 55
#define EXECUTE_CACHE_13_19 57
#define EXECUTE_CACHE_13_18 59
#define EXECUTE_CACHE_13_13 61
#define EXECUTE_CACHE_13_8 63
#define FREE_REFERENCE_13_3 66
#define FREE_REFERENCE_13_2 67
#define FREE_REFERENCE_13_1 68
#define FREE_REFERENCE_13_0 69
#define FREE_ASSIGNMENT_13_1 71
#define FREE_ASSIGNMENT_13_0 72
#define FREE_REFERENCES_LABEL_13_0 50
#define NUMBER_OF_LINKER_SECTIONS_13_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
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
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto diagram_style_with_diagram_35;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto label_37;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto lambda_50;

    case 6:
      current_block = (Rpc - LABEL_13_21);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_13_16);
      goto lambda_52;

    case 9:
      current_block = (Rpc - LABEL_13_14);
      goto swapB_51;

    case 10:
      current_block = (Rpc - LABEL_13_27);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_13_28);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_13_29);
      goto label_41;

    case 13:
      current_block = (Rpc - LABEL_13_20);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_13_24);
      goto lambda_54;

    case 15:
      current_block = (Rpc - LABEL_13_22);
      goto swapB_53;

    case 16:
      current_block = (Rpc - LABEL_13_31);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_13_32);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_13_33);
      goto label_44;

    case 19:
      current_block = (Rpc - LABEL_13_34);
      goto label_45;

    case 20:
      current_block = (Rpc - LABEL_13_35);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_13_36);
      goto label_47;

    case 22:
      current_block = (Rpc - LABEL_13_30);
      goto continuation_16;

    case 23:
      current_block = (Rpc - LABEL_13_37);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (diagram_style_with_diagram_49)
DEFLABEL (diagram_style_with_diagram_35)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_56;
  Wrd11 = Wrd15;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_14])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd17.Obj);
  ((Wrd19.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_16])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_18]));

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_7])), (Wrd12.pObj));

DEFLABEL (label_37)
  (Wrd11.Obj) = Rvl;
  goto label_55;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_10])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_22])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd23.pObj) = (& (Rhp [-1]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd23.pObj)));
  (Rsp [1]) = (Wrd24.Obj);
  Wrd20 = Wrd26;
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  ((Wrd20.pObj) [3]) = (Wrd24.Obj);
  (Rsp [2]) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_24])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [7]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [0]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_13_10);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_58;
  Wrd9 = Wrd13;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  ((Wrd8.pObj) [0]) = Rvl;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_21])), (Wrd10.pObj));

DEFLABEL (label_38)
  (Wrd9.Obj) = Rvl;
  goto label_57;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_13_16);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_26]));

DEFLABEL (swapB_51)
  CLOSURE_HEADER (LABEL_13_14);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  Wrd5 = Wrd9;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_62)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_59)
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_61)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_29])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_41)
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_28])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_40)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_13_27])), (Wrd6.pObj));

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_65;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_13_24);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_13_30);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_37]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_38]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_13_37);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_39]));

DEFLABEL (swapB_53)
  CLOSURE_HEADER (LABEL_13_22);

DEFLABEL (swapB_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_86;

DEFLABEL (label_85)
  Wrd5 = Wrd9;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_83;

DEFLABEL (label_82)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_81)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_78)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_3]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  Wrd57 = Wrd61;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_72)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_69)
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_71)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_70;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_36])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_47)
  goto label_69;

DEFLABEL (label_74)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_35])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_46)
  goto label_72;

DEFLABEL (label_77)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_13_34])), (Wrd58.pObj));

DEFLABEL (label_45)
  (Wrd57.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_80)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_79;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_33])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_44)
  goto label_78;

DEFLABEL (label_83)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_82;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_32])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_43)
  goto label_81;

DEFLABEL (label_86)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_85;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_13_31])), (Wrd6.pObj));

DEFLABEL (label_42)
  (Wrd5.Obj) = Rvl;
  goto label_84;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_7 5
#define LABEL_14_5 7
#define LABEL_14_6 9
#define LABEL_14_9 11
#define LABEL_14_10 13
#define LABEL_14_14 15
#define TAG_14_15 6
#define LABEL_14_12 17
#define TAG_14_13 7
#define LABEL_14_25 19
#define LABEL_14_26 21
#define LABEL_14_27 23
#define LABEL_14_17 25
#define LABEL_14_18 27
#define LABEL_14_22 29
#define TAG_14_23 13
#define LABEL_14_20 31
#define TAG_14_21 14
#define LABEL_14_30 33
#define LABEL_14_31 35
#define LABEL_14_32 37
#define LABEL_14_29 39
#define LABEL_14_33 41
#define LABEL_14_34 43
#define ENVIRONMENT_LABEL_14_3 66
#define DEBUGGING_LABEL_14_2 65
#define OBJECT_14_0 64
#define EXECUTE_CACHE_14_35 45
#define EXECUTE_CACHE_14_28 47
#define EXECUTE_CACHE_14_24 49
#define EXECUTE_CACHE_14_19 51
#define EXECUTE_CACHE_14_16 53
#define EXECUTE_CACHE_14_11 55
#define EXECUTE_CACHE_14_8 57
#define FREE_REFERENCE_14_1 60
#define FREE_REFERENCE_14_0 61
#define FREE_ASSIGNMENT_14_0 63
#define FREE_REFERENCES_LABEL_14_0 44
#define NUMBER_OF_LINKER_SECTIONS_14_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_14_4);
      goto expression_style_with_diagram_30;

    case 1:
      current_block = (Rpc - LABEL_14_7);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_14_14);
      goto lambda_42;

    case 7:
      current_block = (Rpc - LABEL_14_12);
      goto swapB_41;

    case 8:
      current_block = (Rpc - LABEL_14_25);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_14_26);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_14_27);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_27;

    case 12:
      current_block = (Rpc - LABEL_14_18);
      goto continuation_26;

    case 13:
      current_block = (Rpc - LABEL_14_22);
      goto lambda_44;

    case 14:
      current_block = (Rpc - LABEL_14_20);
      goto swapB_43;

    case 15:
      current_block = (Rpc - LABEL_14_30);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_14_31);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_14_32);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_14_29);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_14_33);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_14_34);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_style_with_diagram_40)
DEFLABEL (expression_style_with_diagram_30)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_46;
  Wrd11 = Wrd15;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_12])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd17.Obj);
  ((Wrd19.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_14])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_7])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_45;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_20])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd19.Obj);
  ((Wrd21.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (Rsp [2]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_22])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [6]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_19]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_14_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_28]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_14_17);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_14_14);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_24]));

DEFLABEL (swapB_41)
  CLOSURE_HEADER (LABEL_14_12);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  Wrd5 = Wrd9;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_50)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_47)
  Rvl = (current_block [OBJECT_14_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_49)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_27])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_35)
  goto label_47;

DEFLABEL (label_52)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_26])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_34)
  goto label_50;

DEFLABEL (label_55)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_14_25])), (Wrd6.pObj));

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_14_22);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_14_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_19]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_14_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_35]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_14_33);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (swapB_43)
  CLOSURE_HEADER (LABEL_14_20);

DEFLABEL (swapB_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  Wrd5 = Wrd9;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_59)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_56)
  Rvl = (current_block [OBJECT_14_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_58)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_32])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_38)
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_31])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_37)
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_14_30])), (Wrd6.pObj));

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_62;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_11 9
#define ENVIRONMENT_LABEL_15_3 25
#define DEBUGGING_LABEL_15_2 24
#define OBJECT_15_2 23
#define OBJECT_15_1 22
#define OBJECT_15_0 21
#define EXECUTE_CACHE_15_12 11
#define EXECUTE_CACHE_15_10 13
#define EXECUTE_CACHE_15_9 15
#define EXECUTE_CACHE_15_8 17
#define EXECUTE_CACHE_15_6 19
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_15_4);
      goto diagram_styleP_3;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (diagram_styleP_6)
DEFLABEL (diagram_styleP_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd12.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_15_2]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define ENVIRONMENT_LABEL_16_3 19
#define DEBUGGING_LABEL_16_2 18
#define OBJECT_16_2 17
#define OBJECT_16_1 16
#define OBJECT_16_0 15
#define EXECUTE_CACHE_16_9 9
#define EXECUTE_CACHE_16_8 11
#define EXECUTE_CACHE_16_6 13
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_16_4);
      goto prefers_diagram_styleP_4;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prefers_diagram_styleP_7)
DEFLABEL (prefers_diagram_styleP_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_16_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  if (Rvl == (current_block [OBJECT_16_1]))
    goto label_11;
  Rvl = (current_block [OBJECT_16_2]);
  goto label_10;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define LABEL_17_7 7
#define LABEL_17_11 9
#define LABEL_17_9 11
#define LABEL_17_13 13
#define LABEL_17_17 15
#define TAG_17_18 6
#define LABEL_17_19 17
#define LABEL_17_15 19
#define LABEL_17_20 21
#define LABEL_17_21 23
#define LABEL_17_22 25
#define LABEL_17_24 27
#define LABEL_17_28 29
#define LABEL_17_26 31
#define LABEL_17_31 33
#define ENVIRONMENT_LABEL_17_3 61
#define DEBUGGING_LABEL_17_2 60
#define OBJECT_17_2 59
#define OBJECT_17_1 58
#define OBJECT_17_0 57
#define EXECUTE_CACHE_17_32 35
#define EXECUTE_CACHE_17_30 37
#define EXECUTE_CACHE_17_29 39
#define EXECUTE_CACHE_17_27 41
#define EXECUTE_CACHE_17_25 43
#define EXECUTE_CACHE_17_23 45
#define EXECUTE_CACHE_17_16 47
#define EXECUTE_CACHE_17_14 49
#define EXECUTE_CACHE_17_12 51
#define EXECUTE_CACHE_17_10 53
#define EXECUTE_CACHE_17_8 55
#define FREE_REFERENCES_LABEL_17_0 34
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_17_4);
      goto tag_preferred_style_17;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_21;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_17_17);
      goto lambda_22;

    case 7:
      current_block = (Rpc - LABEL_17_19);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_17_20);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_17_21);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_17_22);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_17_24);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_17_28);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_17_26);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_17_31);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tag_preferred_style_20)
DEFLABEL (tag_preferred_style_17)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_23]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_32]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_31);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_30]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_17_20);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_17])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_24);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_29]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_28);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_1]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_25]));

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_27]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_26);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_17_17);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 15
#define DEBUGGING_LABEL_18_2 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_8 9
#define EXECUTE_CACHE_18_7 11
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_18_4);
      goto diagram_style_variant_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (diagram_style_variant_5)
DEFLABEL (diagram_style_variant_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define ENVIRONMENT_LABEL_19_3 15
#define DEBUGGING_LABEL_19_2 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_8 9
#define EXECUTE_CACHE_19_7 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
application_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_19_4);
      goto expression_style_variant_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_style_variant_5)
DEFLABEL (expression_style_variant_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define TAG_8 2
#define LABEL_10 9
#define LABEL_9 11
#define LABEL_12 13
#define LABEL_14 15
#define LABEL_13 17
#define LABEL_16 19
#define LABEL_19 21
#define LABEL_17 23
#define LABEL_22 25
#define LABEL_18 27
#define LABEL_21 29
#define LABEL_24 31
#define LABEL_23 33
#define LABEL_26 35
#define LABEL_25 37
#define LABEL_28 39
#define LABEL_27 41
#define LABEL_29 43
#define LABEL_30 45
#define LABEL_31 47
#define ENVIRONMENT_LABEL_3 87
#define DEBUGGING_LABEL_2 86
#define PURIFICATION_ROOT 85
#define OBJECT_20 84
#define OBJECT_19 83
#define OBJECT_18 82
#define OBJECT_17 81
#define OBJECT_16 80
#define OBJECT_15 79
#define OBJECT_14 78
#define OBJECT_13 77
#define OBJECT_12 76
#define OBJECT_11 75
#define OBJECT_10 74
#define OBJECT_9 73
#define OBJECT_8 72
#define OBJECT_7 71
#define OBJECT_6 70
#define OBJECT_5 69
#define OBJECT_4 68
#define OBJECT_3 67
#define OBJECT_2 66
#define OBJECT_1 65
#define OBJECT_0 64
#define EXECUTE_CACHE_20 49
#define EXECUTE_CACHE_15 51
#define EXECUTE_CACHE_11 53
#define FREE_REFERENCE_4 56
#define FREE_REFERENCE_3 57
#define FREE_REFERENCE_2 58
#define FREE_REFERENCE_1 59
#define FREE_REFERENCE_0 60
#define GLOBAL_EXECUTE_CACHE_5 62
#define FREE_REFERENCES_LABEL_0 48
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
application_so_2a4d4a16316163dd (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto lambda_27;

    case 3:
      current_block = (Rpc - LABEL_10);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_16);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_19);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_22);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_24);
      goto label_23;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_26);
      goto label_24;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_28);
      goto label_25;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_29);
      goto label_29;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto label_30;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto expression_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_18)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_30])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_30)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_29)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	1,
	3,
	3,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	1,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 19)
      goto label_28;
    blocks = (current_block [OBJECT_20]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_29])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_28)
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
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5]);
  (Wrd12.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_42;
  Wrd9 = Wrd13;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_40;
  Wrd11 = Wrd15;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_38;
  Wrd8 = Wrd12;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_36;
  Wrd8 = Wrd12;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_34;
  Wrd8 = Wrd12;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_32;
  Wrd8 = Wrd12;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_19]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd12.pObj));

DEFLABEL (label_21)
  (Wrd11.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd10.pObj));

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_44;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd26.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_44;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_43)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  ((Wrd30.pObj) [0]) = (Wrd13.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = ((Wrd30.pObj) [0]);
  (Rsp [1]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (label_44)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_19)
  (Wrd13.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_application_so_2a4d4a16316163dd [19] =
  {
    { "application_so_code_1", 4, application_so_code_1 },
    { "application_so_code_2", 38, application_so_code_2 },
    { "application_so_code_3", 3, application_so_code_3 },
    { "application_so_code_4", 7, application_so_code_4 },
    { "application_so_code_5", 2, application_so_code_5 },
    { "application_so_code_6", 7, application_so_code_6 },
    { "application_so_code_7", 5, application_so_code_7 },
    { "application_so_code_8", 24, application_so_code_8 },
    { "application_so_code_9", 2, application_so_code_9 },
    { "application_so_code_10", 3, application_so_code_10 },
    { "application_so_code_11", 4, application_so_code_11 },
    { "application_so_code_12", 12, application_so_code_12 },
    { "application_so_code_13", 24, application_so_code_13 },
    { "application_so_code_14", 21, application_so_code_14 },
    { "application_so_code_15", 4, application_so_code_15 },
    { "application_so_code_16", 3, application_so_code_16 },
    { "application_so_code_17", 16, application_so_code_17 },
    { "application_so_code_18", 3, application_so_code_18 },
    { "application_so_code_19", 3, application_so_code_19 }
  };

int
decl_application_so_2a4d4a16316163dd (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_application_so_2a4d4a16316163dd);
  return (0);
}

DECLARE_COMPILED_CODE ("application.so", 23, decl_application_so_2a4d4a16316163dd, application_so_2a4d4a16316163dd)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_application_so_data_2a4d4a16316163dd [3791] =
  "\x82\x01\x33\xe8\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9"
  "\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x28\x0d\xbd\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x82\x88\x0d\xc1\xbf"
  "\x1d\x0d\x0d\x0d\x1c\x08\x0d\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x84\x88\x0d\x1c\x24\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x85\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x28\x1b\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x0c\xc1\xb7\x08\x0d\x81\x1d\x1b\x0d"
  "\x24\x28\x0d\x28\x1b\x28\x0d\xbf\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c"
  "\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb1\x28"
  "\xb5\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x0d\x1c\x07\x0d\x1c\x0d\x1c\x28\x0d\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0c\x1b\x0d\x1c\x0d\x1c\x0d\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x0d\x1c\x25\x0d"
  "\x1c\x0d\x1b\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x1b\x25\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x0c\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x1b\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9f\x0d\x0d\x1b\xb2\x1b"
  "\x1b\x1b\x1b\x9f\x0d\x0d\x1c\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x99\x1b\x2a\x1b\x2a\x99\x1b\x1b\x99\x1b\x2a\x1b\x2a\x99\x0d\x1b"
  "\x08\x0d\xc3\xb7\x80\x1b\xb1\x1b\xb4\xb5\xb3\x1b\x9e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x9e\x28\x0d\x26\x1b"
  "\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x10\x61\x70"
  "\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x05\x16\x74\x72\x79\x2d\x65\x61\x67\x65\x72\x2d\x61"
  "\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x03\x17\x70\x72\x65\x66"
  "\x65\x72\x73\x2d\x64\x69\x61\x67\x72\x61\x6d\x2d\x73\x74\x79\x6c"
  "\x65\x3f\x04\x19\x67\x65\x6e\x65\x72\x61\x6c\x2d\x70\x72\x6f\x70"
  "\x61\x67\x61\x74\x6f\x72\x2d\x61\x70\x70\x6c\x79\x04\x17\x65\x61"
  "\x67\x65\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x61"
  "\x70\x70\x6c\x79\x04\x14\x65\x61\x67\x65\x72\x2d\x64\x69\x61\x67"
  "\x72\x61\x6d\x2d\x61\x70\x70\x6c\x79\x06\x1b\x0a\x81\x85\x02\x1a"
  "\x08\x81\x85\x02\x19\x06\x81\x85\x02\x18\x04\xfe\x05\x09\x17\x02"
  "\x09\x61\x72\x67\x2d\x63\x6f\x70\x79\x04\x63\x61\x72\x02\x04\x6b"
  "\x65\x79\x06\x70\x61\x73\x73\x3f\x0c\x61\x70\x70\x6c\x69\x63\x61"
  "\x74\x69\x6f\x6e\x09\x15\x65\x71\x75\x69\x76\x61\x6c\x65\x6e\x74"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x73\x3f\x02\x04\x06\x6e\x61\x6d"
  "\x65\x21\x0a\x03\x0e\x75\x6e\x61\x72\x79\x2d\x6d\x61\x70\x70\x69"
  "\x6e\x67\x04\x0b\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x05\x07"
  "\x6d\x65\x6d\x62\x65\x72\x03\x10\x6d\x61\x6b\x65\x2d\x6e\x61\x6d"
  "\x65\x64\x2d\x63\x65\x6c\x6c\x0b\x03\x08\x63\x6f\x6e\x74\x65\x6e"
  "\x74\x0c\x05\x1b\x6d\x61\x6b\x65\x2d\x61\x6e\x6f\x6e\x79\x6d\x6f"
  "\x75\x73\x2d\x69\x2f\x6f\x2d\x64\x69\x61\x67\x72\x61\x6d\x04\x11"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x64\x69\x61\x67\x72\x61\x6d"
  "\x0d\x03\x0d\x03\x0c\x65\x6e\x73\x75\x72\x65\x2d\x63\x65\x6c\x6c"
  "\x0e\x04\x0c\x61\x64\x64\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x0f\x05"
  "\x17\x70\x3a\x65\x71\x75\x69\x76\x61\x6c\x65\x6e\x74\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x73\x3f\x03\x0f\x64\x69\x61\x67\x72\x61\x6d"
  "\x2d\x73\x74\x79\x6c\x65\x3f\x10\x03\x0a\x6c\x61\x73\x74\x2d\x70"
  "\x61\x69\x72\x11\x04\x0e\x64\x6f\x2d\x61\x70\x70\x6c\x79\x2d\x70"
  "\x72\x6f\x70\x12\x04\x04\x6d\x61\x70\x13\x03\x11\x65\x78\x63\x65"
  "\x70\x74\x2d\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x14\x05\x11\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2d\x77\x69\x72\x65\x13"
  "\x41\x4e\x81\x8b\x02\x40\x4c\x81\x87\x02\x3f\x4a\x81\x93\x02\x3e"
  "\x48\x81\x8f\x02\x3d\x46\x81\x8d\x02\x3c\x44\x81\x8b\x02\x3b\x42"
  "\x81\x8b\x02\x3a\x40\x81\x89\x02\x39\x3e\x81\x85\x02\x38\x3c\x81"
  "\x89\x02\x37\x3a\x81\x85\x02\x36\x38\x81\x87\x02\x35\x36\x81\x87"
  "\x02\x34\x34\x81\x83\x02\x33\x32\x81\x8b\x02\x32\x30\x81\x87\x02"
  "\x31\x2e\x81\x89\x02\x30\x2c\x81\x89\x02\x2f\x2a\x81\x89\x02\x2e"
  "\x28\x81\x89\x02\x2d\x26\x81\x8d\x02\x2c\x24\x81\x8b\x02\x2b\x22"
  "\x81\x87\x02\x2a\x20\x81\x8d\x02\x29\x1e\x81\x85\x02\x28\x1c\x81"
  "\x85\x02\x27\x1a\x81\x8b\x02\x26\x18\x81\x89\x02\x25\x16\x81\x85"
  "\x02\x24\x14\x81\x8d\x02\x23\x12\x81\x85\x02\x22\x10\x81\x83\x02"
  "\x21\x0e\x81\x85\x02\x20\x0c\x81\x87\x02\x1f\x0a\x81\x85\x02\x1e"
  "\x08\x81\x8d\x02\x1d\x06\x81\x83\x02\x1c\x04\x84\x06\x4d\x7e\x15"
  "\x02\x03\x10\x04\x17\x68\x61\x6e\x64\x6c\x65\x2d\x65\x78\x70\x6c"
  "\x69\x63\x69\x74\x2d\x6f\x75\x74\x70\x75\x74\x16\x04\x12\x04\x44"
  "\x08\x81\x85\x02\x43\x06\x81\x85\x02\x42\x04\x84\x06\x07\x11\x17"
  "\x02\x0f\x69\x6d\x70\x6c\x69\x63\x69\x74\x2d\x63\x65\x6c\x6c\x3f"
  "\x18\x02\x03\x10\x04\x04\x61\x6e\x79\x04\x16\x68\x61\x6e\x64\x6c"
  "\x65\x2d\x69\x6d\x70\x6c\x69\x63\x69\x74\x2d\x63\x65\x6c\x6c\x73"
  "\x19\x04\x12\x04\x16\x06\x4b\x10\x81\x85\x02\x4a\x0e\x81\x85\x02"
  "\x49\x0c\x81\x85\x02\x48\x0a\x81\x85\x02\x47\x08\x81\x89\x02\x46"
  "\x06\x81\x85\x02\x45\x04\x84\x06\x0f\x1f\x1a\x02\x03\x09\x63\x6c"
  "\x6f\x73\x75\x72\x65\x3f\x1b\x03\x18\x70\x72\x6f\x70\x61\x67\x61"
  "\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x3f"
  "\x1c\x03\x4d\x06\x81\x83\x02\x4c\x04\x83\x04\x05\x0d\x1d\x02\x03"
  "\x06\x63\x65\x6c\x6c\x3f\x1e\x03\x15\x64\x69\x72\x65\x63\x74\x6c"
  "\x79\x2d\x61\x70\x70\x6c\x69\x63\x61\x62\x6c\x65\x3f\x1f\x03\x0c"
  "\x03\x0e\x05\x54\x10\x81\x87\x02\x53\x0e\x81\x87\x02\x52\x0c\x81"
  "\x87\x02\x51\x0a\x81\x89\x02\x50\x08\x81\x87\x02\x4f\x06\x81\x87"
  "\x02\x4e\x04\x85\x08\x0f\x1b\x20\x02\x08\x03\x14\x03\x11\x04\x05"
  "\x63\x3a\x3d\x3d\x04\x59\x0c\x81\x85\x02\x58\x0a\x81\x85\x02\x57"
  "\x08\x81\x87\x02\x56\x06\x81\x85\x02\x55\x04\x84\x06\x0b\x16\x14"
  "\x02\x09\x06\x61\x70\x70\x6c\x79\x11\x18\x54\x6f\x6f\x20\x6d\x61"
  "\x6e\x79\x20\x69\x6d\x70\x6c\x69\x63\x69\x74\x20\x63\x65\x6c\x6c"
  "\x73\x04\x63\x64\x72\x09\x73\x75\x62\x65\x78\x70\x72\x73\x08\x0e"
  "\x07\x76\x61\x6c\x75\x65\x73\x03\x03\x05\x69\x6f\x74\x61\x04\x13"
  "\x02\x13\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x63\x65\x6c\x6c\x2d"
  "\x6e\x61\x6d\x65\x03\x18\x05\x08\x65\x71\x2d\x70\x75\x74\x21\x21"
  "\x03\x0b\x03\x07\x6c\x65\x6e\x67\x74\x68\x04\x06\x65\x72\x72\x6f"
  "\x72\x0b\x09\x71\x32\x81\x87\x02\x70\x30\x81\x85\x02\x6f\x2e\x81"
  "\x87\x02\x6e\x2c\x81\x85\x02\x6d\x2a\x81\x8d\x02\x6c\x28\x81\x8d"
  "\x02\x6b\x26\x81\x8d\x02\x6a\x24\x81\x89\x02\x69\x22\x81\x87\x02"
  "\x68\x20\x81\x89\x02\x67\x1e\x81\x85\x02\x66\x1c\x81\x8f\x02\x65"
  "\x1a\x81\x8d\x02\x64\x18\x81\x87\x02\x63\x16\x81\x85\x02\x62\x14"
  "\x81\x85\x02\x61\x12\x81\x87\x02\x60\x10\x81\x85\x02\x5f\x0e\x81"
  "\x93\x02\x5e\x0c\x81\x8d\x02\x5d\x0a\x81\x83\x02\x5c\x08\x81\x8f"
  "\x02\x5b\x06\x81\x8d\x02\x5a\x04\x85\x06\x31\x50\x22\x02\x0a\x03"
  "\x25\x25\x23\x02\x73\x06\x81\x83\x02\x72\x04\x83\x04\x05\x0b\x24"
  "\x02\x0b\x05\x04\x04\x04\x76\x08\x81\x85\x02\x75\x06\x81\x85\x02"
  "\x74\x04\xfe\x05\x07\x11\x25\x02\x0c\x11\x11\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x2d\x73\x74\x79\x6c\x65\x26\x10\x70\x72\x65"
  "\x66\x65\x72\x72\x65\x64\x2d\x73\x74\x79\x6c\x65\x27\x0b\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x07\x0a\x65\x71\x2d\x6c\x61"
  "\x62\x65\x6c\x21\x03\x18\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72"
  "\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x21\x05\x19\x04"
  "\x7a\x0a\x81\x85\x02\x79\x08\x81\x85\x02\x78\x06\x81\x85\x02\x77"
  "\x04\x84\x04\x09\x18\x29\x02\x0d\x11\x1d\x4e\x6f\x74\x20\x61\x6e"
  "\x20\x61\x70\x70\x6c\x69\x63\x61\x62\x6c\x65\x20\x70\x72\x6f\x70"
  "\x61\x67\x61\x74\x6f\x72\x0e\x1e\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x2d\x73\x74\x79\x6c\x65\x2d\x77\x69\x74\x68\x2d\x64\x69"
  "\x61\x67\x72\x61\x6d\x2a\x1b\x64\x69\x61\x67\x72\x61\x6d\x2d\x73"
  "\x74\x79\x6c\x65\x2d\x77\x69\x74\x68\x2d\x64\x69\x61\x67\x72\x61"
  "\x6d\x2b\x06\x74\x68\x69\x6e\x67\x05\x04\x13\x03\x1b\x03\x1c\x03"
  "\x10\x03\x0d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x64\x65\x03"
  "\x13\x65\x6d\x70\x74\x79\x2d\x64\x69\x61\x67\x72\x61\x6d\x2d\x63"
  "\x65\x6c\x6c\x04\x0b\x08\x86\x01\x1a\x81\x87\x02\x85\x01\x18\x81"
  "\x83\x02\x84\x01\x16\x81\x87\x02\x83\x01\x14\x81\x87\x02\x82\x01"
  "\x12\x81\x87\x02\x81\x01\x10\x81\x87\x02\x80\x01\x0e\x81\x87\x02"
  "\x7f\x0c\x81\x83\x02\x7e\x0a\x81\x87\x02\x7d\x08\x81\x85\x02\x7c"
  "\x06\x81\x89\x02\x7b\x04\x84\x06\x19\x32\x13\x02\x0e\x02\x11\x0d"
  "\x08\x64\x69\x61\x67\x72\x61\x6d\x2c\x03\x0e\x2a\x6d\x65\x74\x61"
  "\x64\x69\x61\x67\x72\x61\x6d\x2a\x2d\x16\x6d\x61\x6b\x65\x2d\x63"
  "\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x64\x69\x61\x67\x72\x61\x6d\x0d"
  "\x2c\x05\x03\x11\x64\x69\x61\x67\x72\x61\x6d\x2d\x69\x6e\x73\x65"
  "\x72\x74\x65\x72\x2e\x03\x16\x64\x69\x61\x67\x72\x61\x6d\x2d\x63"
  "\x65\x6c\x6c\x2d\x69\x6e\x73\x65\x72\x74\x65\x72\x2f\x05\x13\x73"
  "\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e"
  "\x64\x30\x03\x0d\x03\x0e\x03\x0c\x03\x1a\x63\x6f\x6d\x70\x75\x74"
  "\x65\x2d\x64\x65\x72\x69\x76\x65\x64\x2d\x70\x72\x6f\x6d\x69\x73"
  "\x65\x73\x21\x31\x08\x9e\x01\x32\x81\x85\x02\x9d\x01\x30\x81\x83"
  "\x02\x9c\x01\x2e\x81\x83\x02\x9b\x01\x2c\x81\x85\x02\x9a\x01\x2a"
  "\x81\x83\x02\x99\x01\x28\x81\x83\x02\x98\x01\x26\x81\x85\x02\x97"
  "\x01\x24\x81\x83\x02\x96\x01\x22\x81\x83\x02\x95\x01\x20\x81\x83"
  "\x02\x94\x01\x1e\x81\x85\x02\x93\x01\x1c\x81\x83\x02\x92\x01\x1a"
  "\x81\x85\x02\x91\x01\x18\x81\x83\x02\x90\x01\x16\x81\x83\x02\x8f"
  "\x01\x14\x81\x83\x02\x8e\x01\x12\x81\x8d\x02\x8d\x01\x10\x81\x89"
  "\x02\x8c\x01\x0e\x81\x85\x02\x8b\x01\x0c\x81\x89\x02\x8a\x01\x0a"
  "\x81\x87\x02\x89\x01\x08\x81\x85\x02\x88\x01\x06\x81\x89\x02\x87"
  "\x01\x04\x84\x06\x31\x4d\x32\x02\x0f\x02\x0d\x02\x2d\x0d\x03\x03"
  "\x2e\x03\x2f\x05\x30\x03\x0c\x03\x0e\x03\x0d\x03\x31\x08\xb3\x01"
  "\x2c\x81\x87\x02\xb2\x01\x2a\x81\x85\x02\xb1\x01\x28\x81\x83\x02"
  "\xb0\x01\x26\x81\x83\x02\xaf\x01\x24\x81\x85\x02\xae\x01\x22\x81"
  "\x83\x02\xad\x01\x20\x81\x83\x02\xac\x01\x1e\x81\x83\x02\xab\x01"
  "\x1c\x81\x8b\x02\xaa\x01\x1a\x81\x89\x02\xa9\x01\x18\x81\x83\x02"
  "\xa8\x01\x16\x81\x85\x02\xa7\x01\x14\x81\x83\x02\xa6\x01\x12\x81"
  "\x83\x02\xa5\x01\x10\x81\x83\x02\xa4\x01\x0e\x81\x89\x02\xa3\x01"
  "\x0c\x81\x87\x02\xa2\x01\x0a\x81\x87\x02\xa1\x01\x08\x81\x85\x02"
  "\xa0\x01\x06\x81\x89\x02\x9f\x01\x04\x84\x06\x2b\x43\x31\x02\x10"
  "\x26\x29\x50\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x20\x73\x74\x79"
  "\x6c\x65\x20\x71\x75\x65\x73\x74\x69\x6f\x6e\x20\x6e\x6f\x74\x20"
  "\x61\x70\x70\x6c\x69\x63\x61\x62\x6c\x65\x03\x1b\x03\x1c\x03\x17"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x64\x69\x61\x67\x72\x61\x6d\x2d"
  "\x73\x74\x79\x6c\x65\x3f\x30\x04\x0b\x04\x07\x65\x71\x2d\x67\x65"
  "\x74\x2f\x06\xb7\x01\x0a\x81\x83\x02\xb6\x01\x08\x81\x83\x02\xb5"
  "\x01\x06\x81\x83\x02\xb4\x01\x04\x83\x04\x09\x1a\x2e\x02\x11\x28"
  "\x27\x04\x2f\x03\x1b\x03\x30\x04\xba\x01\x08\x81\x85\x02\xb9\x01"
  "\x06\x81\x83\x02\xb8\x01\x04\x83\x04\x07\x14\x30\x02\x12\x09\x49"
  "\x67\x6e\x6f\x72\x69\x6e\x67\x27\x11\x03\x1e\x03\x1c\x02\x0a\x6d"
  "\x61\x6b\x65\x2d\x63\x65\x6c\x6c\x04\x0a\x65\x71\x2d\x63\x6c\x6f"
  "\x6e\x65\x21\x03\x1b\x03\x0c\x05\x21\x04\x05\x77\x61\x72\x6e\x03"
  "\x0d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x70\x79\x04\x0f\x03"
  "\x14\x74\x61\x67\x2d\x70\x72\x65\x66\x65\x72\x72\x65\x64\x2d\x73"
  "\x74\x79\x6c\x65\x2f\x0c\xca\x01\x22\x81\x8d\x02\xc9\x01\x20\x81"
  "\x85\x02\xc8\x01\x1e\x81\x85\x02\xc7\x01\x1c\x81\x87\x02\xc6\x01"
  "\x1a\x81\x8b\x02\xc5\x01\x18\x81\x89\x02\xc4\x01\x16\x81\x87\x02"
  "\xc3\x01\x14\x81\x85\x02\xc2\x01\x12\x81\x87\x02\xc1\x01\x10\x81"
  "\x85\x02\xc0\x01\x0e\x81\x87\x02\xbf\x01\x0c\x81\x85\x02\xbe\x01"
  "\x0a\x81\x85\x02\xbd\x01\x08\x81\x85\x02\xbc\x01\x06\x81\x85\x02"
  "\xbb\x01\x04\x83\x04\x21\x3e\x2d\x02\x13\x2c\x03\x2f\x03\x0e\x03"
  "\xcd\x01\x08\x81\x87\x02\xcc\x01\x06\x81\x83\x02\xcb\x01\x04\x83"
  "\x04\x07\x10\x2c\x02\x14\x28\x03\x2f\x03\x0e\x03\xd0\x01\x08\x81"
  "\x87\x02\xcf\x01\x06\x81\x83\x02\xce\x01\x04\x83\x04\x07\x10\x28"
  "\x14\x27\x27\x28\x04\x2c\x04\x2d\x04\x30\x04\x2e\x04\x31\x04\x32"
  "\x04\x13\x04\x19\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x73"
  "\x74\x79\x6c\x65\x2d\x76\x61\x72\x69\x61\x6e\x74\x16\x64\x69\x61"
  "\x67\x72\x61\x6d\x2d\x73\x74\x79\x6c\x65\x2d\x76\x61\x72\x69\x61"
  "\x6e\x74\x2f\x10\x2a\x2b\x12\x03\x40\x65\x03\x65\x40\x32\x03\x40"
  "\x64\x0e\x65\x3a\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x31"
  "\x03\x64\x40\x30\x0e\x66\x75\x6e\x63\x74\x69\x6f\x6e\x61\x6c\x69"
  "\x7a\x65\x2f\x0e\x70\x3a\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2e\x29\x04\x25\x04\x18\x19\x24\x04\x22\x04\x05\x63\x65\x6c"
  "\x6c\x23\x12\x74\x68\x65\x2d\x69\x6d\x70\x6c\x69\x63\x69\x74\x2d"
  "\x63\x65\x6c\x6c\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x16\x1f\x09\x14\x04\x20\x04\x1d\x04\x1a\x04"
  "\x17\x04\x15\x04\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x02\x23\x2e\x30\x31\x32\x06\x04\x07\x73"
  "\x79\x6d\x62\x6f\x6c\x04\x0a\x03\x2f\x04\x17\x30\x80\x80\x04\x16"
  "\x2e\x81\x81\x02\x15\x2c\x81\x81\x02\x14\x2a\x81\x83\x02\x13\x28"
  "\x81\x85\x02\x12\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81"
  "\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x85"
  "\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x87\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x87\x02\x06"
  "\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08"
  "\x81\x83\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x2f\x58";

SCHEME_OBJECT *
application_so_data_2a4d4a16316163dd (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_application_so_data_2a4d4a16316163dd [0]))), (sizeof (prog_application_so_data_2a4d4a16316163dd)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_31]));
}

DECLARE_COMPILED_DATA_NS ("application.so", application_so_data_2a4d4a16316163dd)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("application.so", "f997cc01c8e59159")
