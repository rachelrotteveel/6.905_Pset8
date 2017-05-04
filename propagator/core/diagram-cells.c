/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-03T22:03:37-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_13 17
#define TAG_1_14 7
#define LABEL_1_27 19
#define LABEL_1_16 21
#define LABEL_1_19 23
#define LABEL_1_20 25
#define LABEL_1_21 27
#define TAG_1_22 12
#define LABEL_1_25 29
#define LABEL_1_24 31
#define LABEL_1_38 33
#define LABEL_1_39 35
#define LABEL_1_26 37
#define LABEL_1_29 39
#define LABEL_1_31 41
#define LABEL_1_32 43
#define LABEL_1_33 45
#define TAG_1_34 21
#define LABEL_1_35 47
#define LABEL_1_36 49
#define LABEL_1_37 51
#define LABEL_1_51 53
#define LABEL_1_42 55
#define LABEL_1_45 57
#define LABEL_1_53 59
#define LABEL_1_46 61
#define LABEL_1_47 63
#define LABEL_1_48 65
#define LABEL_1_56 67
#define LABEL_1_49 69
#define LABEL_1_55 71
#define ENVIRONMENT_LABEL_1_3 111
#define DEBUGGING_LABEL_1_2 110
#define OBJECT_1_3 109
#define OBJECT_1_2 108
#define OBJECT_1_1 107
#define OBJECT_1_0 106
#define EXECUTE_CACHE_1_54 73
#define EXECUTE_CACHE_1_52 75
#define EXECUTE_CACHE_1_50 77
#define EXECUTE_CACHE_1_44 79
#define EXECUTE_CACHE_1_43 81
#define EXECUTE_CACHE_1_41 83
#define EXECUTE_CACHE_1_40 85
#define EXECUTE_CACHE_1_30 87
#define EXECUTE_CACHE_1_28 89
#define EXECUTE_CACHE_1_23 91
#define EXECUTE_CACHE_1_18 93
#define EXECUTE_CACHE_1_17 95
#define EXECUTE_CACHE_1_15 97
#define EXECUTE_CACHE_1_12 99
#define EXECUTE_CACHE_1_7 101
#define FREE_REFERENCE_1_1 104
#define FREE_REFERENCE_1_0 105
#define FREE_REFERENCES_LABEL_1_0 72
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
diagram_cells_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_1_4);
      goto merge_diagram_36;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_30;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_29;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_28;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_27;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto lambda_46;

    case 8:
      current_block = (Rpc - LABEL_1_27);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_32;

    case 10:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_20;

    case 11:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_19;

    case 12:
      current_block = (Rpc - LABEL_1_21);
      goto lambda_47;

    case 13:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_1_38);
      goto label_39;

    case 16:
      current_block = (Rpc - LABEL_1_39);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_1;

    case 18:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_33;

    case 19:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_12;

    case 20:
      current_block = (Rpc - LABEL_1_32);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_1_33);
      goto lambda_48;

    case 22:
      current_block = (Rpc - LABEL_1_35);
      goto continuation_24;

    case 23:
      current_block = (Rpc - LABEL_1_36);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_1_37);
      goto continuation_22;

    case 25:
      current_block = (Rpc - LABEL_1_51);
      goto label_41;

    case 26:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_34;

    case 27:
      current_block = (Rpc - LABEL_1_45);
      goto continuation_10;

    case 28:
      current_block = (Rpc - LABEL_1_53);
      goto label_42;

    case 29:
      current_block = (Rpc - LABEL_1_46);
      goto continuation_16;

    case 30:
      current_block = (Rpc - LABEL_1_47);
      goto continuation_15;

    case 31:
      current_block = (Rpc - LABEL_1_48);
      goto continuation_14;

    case 32:
      current_block = (Rpc - LABEL_1_56);
      goto label_43;

    case 33:
      current_block = (Rpc - LABEL_1_49);
      goto continuation_21;

    case 34:
      current_block = (Rpc - LABEL_1_55);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_diagram_45)
DEFLABEL (merge_diagram_36)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_13])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [4]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_21])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [4]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_33])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [7]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_45);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_50;
  Wrd5 = Wrd9;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_44]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_53])), (Wrd6.pObj));

DEFLABEL (label_42)
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_1_42);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_1_13);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_58;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_41]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd35.uLng) == 1)
    goto label_51;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_51)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Rvl));
  ((Wrd32.pObj) [0]) = (Wrd27.Obj);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_56)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_55;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_53;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_52)
  (Rsp [2]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_40]));

DEFLABEL (label_53)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_40)
  (Wrd17.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_39)
  (Wrd8.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_24);
  goto label_56;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_1_21);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_37);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_63;
  Wrd5 = Wrd9;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_52]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_50]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_1_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_41]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  Rvl = (current_block [OBJECT_1_3]);
  goto label_59;

DEFLABEL (label_60)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_59)
DEFLABEL (label_61)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_51])), (Wrd6.pObj));

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_62;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_1_33);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_48);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_68;
  Wrd5 = Wrd9;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_52]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_47);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_50]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_55);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_41]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  Rvl = (current_block [OBJECT_1_3]);
  goto label_64;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_64)
DEFLABEL (label_66)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_56])), (Wrd6.pObj));

DEFLABEL (label_43)
  (Wrd5.Obj) = Rvl;
  goto label_67;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_9 7
#define LABEL_2_6 9
#define LABEL_2_7 11
#define LABEL_2_10 13
#define LABEL_2_17 15
#define LABEL_2_11 17
#define LABEL_2_12 19
#define LABEL_2_13 21
#define LABEL_2_24 23
#define LABEL_2_16 25
#define LABEL_2_26 27
#define LABEL_2_18 29
#define LABEL_2_19 31
#define LABEL_2_20 33
#define LABEL_2_22 35
#define LABEL_2_29 37
#define LABEL_2_23 39
#define LABEL_2_30 41
#define LABEL_2_28 43
#define LABEL_2_31 45
#define ENVIRONMENT_LABEL_2_3 65
#define DEBUGGING_LABEL_2_2 64
#define OBJECT_2_0 63
#define EXECUTE_CACHE_2_27 47
#define EXECUTE_CACHE_2_25 49
#define EXECUTE_CACHE_2_21 51
#define EXECUTE_CACHE_2_15 53
#define EXECUTE_CACHE_2_14 55
#define EXECUTE_CACHE_2_8 57
#define FREE_REFERENCE_2_2 60
#define FREE_REFERENCE_2_1 61
#define FREE_REFERENCE_2_0 62
#define FREE_REFERENCES_LABEL_2_0 46
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
diagram_cells_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_4);
      goto diagram_equivalentP_16;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_2_9);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_2_17);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_2_24);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_2_26);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_2_29);
      goto label_22;

    case 18:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_5;

    case 19:
      current_block = (Rpc - LABEL_2_30);
      goto label_23;

    case 20:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_2_31);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (diagram_equivalentP_26)
DEFLABEL (diagram_equivalentP_16)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_46;
  Wrd5 = Wrd9;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_44;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd27.Lng) == 0)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_43;
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_41;
  Wrd5 = Wrd9;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_39;
  Wrd5 = Wrd9;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_37;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd24.Lng) == 0)
    goto label_30;

DEFLABEL (label_29)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_28);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_36;
  Wrd5 = Wrd9;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_31;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_31)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd10.Lng) == 0)
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_32;

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_2_0]);

DEFLABEL (label_32)
DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_31])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_29])), (Wrd6.pObj));

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_30])), (Wrd6.pObj));

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_24])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_26])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_10 11
#define ENVIRONMENT_LABEL_3_3 24
#define DEBUGGING_LABEL_3_2 23
#define OBJECT_3_1 22
#define OBJECT_3_0 21
#define EXECUTE_CACHE_3_13 13
#define EXECUTE_CACHE_3_12 15
#define EXECUTE_CACHE_3_11 17
#define EXECUTE_CACHE_3_9 19
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
diagram_cells_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_3_4);
      goto diagram_cell_inserter_6;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (diagram_cell_inserter_9)
DEFLABEL (diagram_cell_inserter_6)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x203, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == (current_block [OBJECT_3_1]))
    goto label_11;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (label_11)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_5 7
#define ENVIRONMENT_LABEL_4_3 14
#define DEBUGGING_LABEL_4_2 13
#define EXECUTE_CACHE_4_7 9
#define FREE_REFERENCE_4_0 12
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
diagram_cells_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      goto register_diagram_1;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_diagram_5)
DEFLABEL (register_diagram_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_7;
  Wrd8 = Wrd12;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_8 9
#define LABEL_5_10 11
#define LABEL_5_13 13
#define LABEL_5_11 15
#define LABEL_5_16 17
#define LABEL_5_12 19
#define LABEL_5_15 21
#define LABEL_5_19 23
#define LABEL_5_17 25
#define TAG_5_18 11
#define LABEL_5_24 27
#define LABEL_5_25 29
#define LABEL_5_26 31
#define LABEL_5_21 33
#define LABEL_5_27 35
#define LABEL_5_29 37
#define LABEL_5_22 39
#define LABEL_5_31 41
#define LABEL_5_32 43
#define LABEL_5_28 45
#define LABEL_5_33 47
#define LABEL_5_34 49
#define LABEL_5_35 51
#define ENVIRONMENT_LABEL_5_3 81
#define DEBUGGING_LABEL_5_2 80
#define OBJECT_5_2 79
#define OBJECT_5_1 78
#define OBJECT_5_0 77
#define EXECUTE_CACHE_5_36 53
#define EXECUTE_CACHE_5_30 55
#define EXECUTE_CACHE_5_23 57
#define EXECUTE_CACHE_5_20 59
#define EXECUTE_CACHE_5_14 61
#define EXECUTE_CACHE_5_9 63
#define EXECUTE_CACHE_5_7 65
#define FREE_REFERENCE_5_3 68
#define FREE_REFERENCE_5_2 69
#define FREE_REFERENCE_5_1 70
#define FREE_REFERENCE_5_0 71
#define FREE_ASSIGNMENT_5_3 73
#define FREE_ASSIGNMENT_5_2 74
#define FREE_ASSIGNMENT_5_1 75
#define FREE_ASSIGNMENT_5_0 76
#define FREE_REFERENCES_LABEL_5_0 52
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
diagram_cells_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      goto reset_diagramsB_19;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_5_13);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_5_16);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_5_19);
      goto lambda_7;

    case 11:
      current_block = (Rpc - LABEL_5_17);
      goto swapB_37;

    case 12:
      current_block = (Rpc - LABEL_5_24);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_5_25);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_5_26);
      goto label_27;

    case 15:
      current_block = (Rpc - LABEL_5_21);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_5_27);
      goto label_28;

    case 17:
      current_block = (Rpc - LABEL_5_29);
      goto label_29;

    case 18:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_4;

    case 19:
      current_block = (Rpc - LABEL_5_31);
      goto label_30;

    case 20:
      current_block = (Rpc - LABEL_5_32);
      goto label_31;

    case 21:
      current_block = (Rpc - LABEL_5_28);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_5_33);
      goto label_32;

    case 23:
      current_block = (Rpc - LABEL_5_34);
      goto label_33;

    case 24:
      current_block = (Rpc - LABEL_5_35);
      goto label_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_diagramsB_36)
DEFLABEL (reset_diagramsB_19)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_45;
  Wrd8 = Wrd12;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_41)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_40;
  Wrd24 = Wrd28;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_17])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd13.pObj)));
  (Rsp [1]) = (Wrd14.Obj);
  ((Wrd16.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_20]));

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd25.pObj));

DEFLABEL (label_23)
  (Wrd24.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_22)
  goto label_41;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd9.pObj));

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_44;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_59;
  Wrd8 = Wrd12;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_5_21);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_55)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_54;
  Wrd21 = Wrd25;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_30]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_5_28);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_50)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_49;
  Wrd18 = Wrd22;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_47;
  Wrd24 = Wrd28;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_36]));

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_35])), (Wrd25.pObj));

DEFLABEL (label_34)
  (Wrd24.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_34])), (Wrd19.pObj));

DEFLABEL (label_33)
  (Wrd18.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_52)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_33])), (Wrd6.pObj), Rvl);

DEFLABEL (label_32)
  goto label_50;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_29])), (Wrd22.pObj));

DEFLABEL (label_29)
  (Wrd21.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_57)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_27])), (Wrd6.pObj), Rvl);

DEFLABEL (label_28)
  goto label_55;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_16])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_58;

DEFLABEL (lambda_38)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_5_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  Wrd5 = Wrd9;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_3]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_60)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_62)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_61;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_32])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_31)
  goto label_60;

DEFLABEL (label_65)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_31])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_63;

DEFLABEL (swapB_37)
  CLOSURE_HEADER (LABEL_5_17);

DEFLABEL (swapB_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  Wrd5 = Wrd9;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_69)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_68;

DEFLABEL (label_67)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_66)
  Rvl = (current_block [OBJECT_5_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_68)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_67;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_26])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_27)
  goto label_66;

DEFLABEL (label_71)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_70;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_25])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_26)
  goto label_69;

DEFLABEL (label_74)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_73;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_24])), (Wrd6.pObj));

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_72;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_7 5
#define LABEL_6_5 7
#define LABEL_6_6 9
#define LABEL_6_9 11
#define LABEL_6_10 13
#define LABEL_6_14 15
#define LABEL_6_12 17
#define TAG_6_13 7
#define LABEL_6_18 19
#define LABEL_6_19 21
#define LABEL_6_20 23
#define ENVIRONMENT_LABEL_6_3 43
#define DEBUGGING_LABEL_6_2 42
#define OBJECT_6_1 41
#define OBJECT_6_0 40
#define EXECUTE_CACHE_6_17 25
#define EXECUTE_CACHE_6_16 27
#define EXECUTE_CACHE_6_15 29
#define EXECUTE_CACHE_6_11 31
#define EXECUTE_CACHE_6_8 33
#define FREE_REFERENCE_6_1 36
#define FREE_REFERENCE_6_0 37
#define FREE_ASSIGNMENT_6_0 39
#define FREE_REFERENCES_LABEL_6_0 24
#define NUMBER_OF_LINKER_SECTIONS_6_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
diagram_cells_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_6_4);
      goto empty_diagram_cell_14;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto lambda_2;

    case 7:
      current_block = (Rpc - LABEL_6_12);
      goto swapB_22;

    case 8:
      current_block = (Rpc - LABEL_6_18);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_6_19);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_6_20);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (empty_diagram_cell_21)
DEFLABEL (empty_diagram_cell_14)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_25;
  Wrd11 = Wrd15;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_12])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd13.pObj)));
  (Rsp [1]) = (Wrd14.Obj);
  ((Wrd16.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_7])), (Wrd12.pObj));

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_24;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_23)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_6_14);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (swapB_22)
  CLOSURE_HEADER (LABEL_6_12);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  Wrd5 = Wrd9;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_29)
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
    goto label_28;

DEFLABEL (label_27)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_20])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_19)
  goto label_26;

DEFLABEL (label_31)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_19])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_18)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_6_18])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_8 7
#define LABEL_7_13 9
#define LABEL_7_9 11
#define LABEL_7_11 13
#define LABEL_7_18 15
#define LABEL_7_12 17
#define LABEL_7_14 19
#define LABEL_7_16 21
#define TAG_7_17 9
#define LABEL_7_27 23
#define LABEL_7_22 25
#define TAG_7_23 11
#define LABEL_7_30 27
#define LABEL_7_20 29
#define TAG_7_21 13
#define LABEL_7_31 31
#define LABEL_7_32 33
#define LABEL_7_33 35
#define LABEL_7_25 37
#define LABEL_7_38 39
#define LABEL_7_26 41
#define LABEL_7_29 43
#define LABEL_7_34 45
#define LABEL_7_40 47
#define LABEL_7_35 49
#define LABEL_7_36 51
#define LABEL_7_47 53
#define LABEL_7_37 55
#define LABEL_7_41 57
#define LABEL_7_42 59
#define LABEL_7_43 61
#define LABEL_7_45 63
#define LABEL_7_48 65
#define LABEL_7_49 67
#define LABEL_7_50 69
#define LABEL_7_51 71
#define TAG_7_52 34
#define LABEL_7_53 73
#define TAG_7_54 35
#define LABEL_7_55 75
#define LABEL_7_58 77
#define TAG_7_59 37
#define LABEL_7_67 79
#define LABEL_7_60 81
#define TAG_7_61 39
#define LABEL_7_69 83
#define LABEL_7_62 85
#define LABEL_7_70 87
#define LABEL_7_63 89
#define LABEL_7_65 91
#define LABEL_7_66 93
#define LABEL_7_72 95
#define LABEL_7_73 97
#define ENVIRONMENT_LABEL_7_3 142
#define DEBUGGING_LABEL_7_2 141
#define OBJECT_7_6 140
#define OBJECT_7_5 139
#define OBJECT_7_4 138
#define OBJECT_7_3 137
#define OBJECT_7_2 136
#define OBJECT_7_1 135
#define OBJECT_7_0 134
#define EXECUTE_CACHE_7_71 99
#define EXECUTE_CACHE_7_68 101
#define EXECUTE_CACHE_7_64 103
#define EXECUTE_CACHE_7_57 105
#define EXECUTE_CACHE_7_56 107
#define EXECUTE_CACHE_7_46 109
#define EXECUTE_CACHE_7_44 111
#define EXECUTE_CACHE_7_39 113
#define EXECUTE_CACHE_7_28 115
#define EXECUTE_CACHE_7_24 117
#define EXECUTE_CACHE_7_19 119
#define EXECUTE_CACHE_7_15 121
#define EXECUTE_CACHE_7_10 123
#define EXECUTE_CACHE_7_7 125
#define FREE_REFERENCE_7_3 128
#define FREE_REFERENCE_7_2 129
#define FREE_REFERENCE_7_1 130
#define FREE_REFERENCE_7_0 131
#define FREE_ASSIGNMENT_7_0 133
#define FREE_REFERENCES_LABEL_7_0 98
#define NUMBER_OF_LINKER_SECTIONS_7_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
diagram_cells_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd25;
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
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7_4);
      goto do_make_diagram_for_compound_constructor_48;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_67;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7_13);
      goto label_50;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto lambda_1;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_7_18);
      goto label_51;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_7_16);
      goto lambda_69;

    case 10:
      current_block = (Rpc - LABEL_7_27);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_7_22);
      goto lambda_71;

    case 12:
      current_block = (Rpc - LABEL_7_30);
      goto label_53;

    case 13:
      current_block = (Rpc - LABEL_7_20);
      goto swapB_70;

    case 14:
      current_block = (Rpc - LABEL_7_31);
      goto label_54;

    case 15:
      current_block = (Rpc - LABEL_7_32);
      goto label_55;

    case 16:
      current_block = (Rpc - LABEL_7_33);
      goto label_56;

    case 17:
      current_block = (Rpc - LABEL_7_25);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_7_38);
      goto label_57;

    case 19:
      current_block = (Rpc - LABEL_7_26);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_7_29);
      goto continuation_5;

    case 21:
      current_block = (Rpc - LABEL_7_34);
      goto continuation_23;

    case 22:
      current_block = (Rpc - LABEL_7_40);
      goto label_58;

    case 23:
      current_block = (Rpc - LABEL_7_35);
      goto continuation_22;

    case 24:
      current_block = (Rpc - LABEL_7_36);
      goto continuation_21;

    case 25:
      current_block = (Rpc - LABEL_7_47);
      goto label_59;

    case 26:
      current_block = (Rpc - LABEL_7_37);
      goto continuation_20;

    case 27:
      current_block = (Rpc - LABEL_7_41);
      goto continuation_43;

    case 28:
      current_block = (Rpc - LABEL_7_42);
      goto continuation_42;

    case 29:
      current_block = (Rpc - LABEL_7_43);
      goto continuation_41;

    case 30:
      current_block = (Rpc - LABEL_7_45);
      goto lambda_19;

    case 31:
      current_block = (Rpc - LABEL_7_48);
      goto continuation_34;

    case 32:
      current_block = (Rpc - LABEL_7_49);
      goto continuation_33;

    case 33:
      current_block = (Rpc - LABEL_7_50);
      goto continuation_32;

    case 34:
      current_block = (Rpc - LABEL_7_51);
      goto lambda_72;

    case 35:
      current_block = (Rpc - LABEL_7_53);
      goto lambda_73;

    case 36:
      current_block = (Rpc - LABEL_7_55);
      goto continuation_18;

    case 37:
      current_block = (Rpc - LABEL_7_58);
      goto lambda_75;

    case 38:
      current_block = (Rpc - LABEL_7_67);
      goto label_60;

    case 39:
      current_block = (Rpc - LABEL_7_60);
      goto lambda_76;

    case 40:
      current_block = (Rpc - LABEL_7_69);
      goto label_61;

    case 41:
      current_block = (Rpc - LABEL_7_62);
      goto continuation_36;

    case 42:
      current_block = (Rpc - LABEL_7_70);
      goto label_62;

    case 43:
      current_block = (Rpc - LABEL_7_63);
      goto continuation_35;

    case 44:
      current_block = (Rpc - LABEL_7_65);
      goto continuation_39;

    case 45:
      current_block = (Rpc - LABEL_7_66);
      goto continuation_27;

    case 46:
      current_block = (Rpc - LABEL_7_72);
      goto label_63;

    case 47:
      current_block = (Rpc - LABEL_7_73);
      goto label_64;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (do_make_diagram_for_compound_constructor_66)
DEFLABEL (do_make_diagram_for_compound_constructor_48)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_47)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_78;
  Wrd12 = Wrd16;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_20])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd20.pObj) = (& (Rhp [-1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd20.pObj)));
  (Rsp [1]) = (Wrd21.Obj);
  ((Wrd23.pObj) [2]) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (Rsp [2]) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_22])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_24]));

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_13])), (Wrd13.pObj));

DEFLABEL (label_50)
  (Wrd12.Obj) = Rvl;
  goto label_77;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_16])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_80;
  Wrd14 = Wrd18;

DEFLABEL (label_79)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd20.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_18])), (Wrd15.pObj));

DEFLABEL (label_51)
  (Wrd14.Obj) = Rvl;
  goto label_79;

DEFLABEL (lambda_68)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_7_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_7_16);

DEFLABEL (lambda_45)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_89;
  Wrd11 = Wrd15;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_28]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_39]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_25);
  if (! (Rvl == (current_block [OBJECT_7_1])))
    goto label_81;
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_35]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_36]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_37]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_87;
  Wrd19 = Wrd23;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_28]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_7_37);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_39]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_7_36);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_85;
  Wrd5 = Wrd9;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_7_35);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_45]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_46]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_7_34);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_83;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_82)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_41]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_42]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_43]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_44]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_7_43);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_54);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_53])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_46]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_7_42);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_52);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_51])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_7_41);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_50]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_39]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_7_50);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_60])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_46]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_7_49);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_59);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_58])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_7_48);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_57]));

DEFLABEL (label_83)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_40]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_47])), (Wrd6.pObj));

DEFLABEL (label_59)
  (Wrd5.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_38])), (Wrd20.pObj));

DEFLABEL (label_57)
  (Wrd19.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_27])), (Wrd12.pObj));

DEFLABEL (label_52)
  (Wrd11.Obj) = Rvl;
  goto label_88;

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_7_22);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_91;
  Wrd14 = Wrd18;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_29);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_30])), (Wrd15.pObj));

DEFLABEL (label_53)
  (Wrd14.Obj) = Rvl;
  goto label_90;

DEFLABEL (swapB_70)
  CLOSURE_HEADER (LABEL_7_20);

DEFLABEL (swapB_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_100;

DEFLABEL (label_99)
  Wrd5 = Wrd9;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_97;

DEFLABEL (label_96)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_95)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_92)
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_94)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_93;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_33])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_56)
  goto label_92;

DEFLABEL (label_97)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_96;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_32])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_55)
  goto label_95;

DEFLABEL (label_100)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_99;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_7_31])), (Wrd6.pObj));

DEFLABEL (label_54)
  (Wrd5.Obj) = Rvl;
  goto label_98;

DEFLABEL (lambda_74)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_7_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_56]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_7_55);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_102;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_101;

DEFLABEL (label_102)
  Rvl = (current_block [OBJECT_7_5]);

DEFLABEL (label_101)
DEFLABEL (label_103)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_7_51);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_63]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_64]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_7_63);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_68]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_7_62);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_105;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_104)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_71]));

DEFLABEL (label_105)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_70]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_6]), 1);

DEFLABEL (label_62)
  (Wrd6.Obj) = Rvl;
  goto label_104;

DEFLABEL (lambda_73)
  CLOSURE_HEADER (LABEL_7_53);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_64]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_7_65);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_68]));

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_7_58);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_111;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_110)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_68]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_7_66);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_109;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_108)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_107;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_106)
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_73]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_64)
  (Wrd13.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_72]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_6]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_67]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_6]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_7_60);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_113;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_112)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_68]));

DEFLABEL (label_113)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_69]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_6]), 1);

DEFLABEL (label_61)
  (Wrd8.Obj) = Rvl;
  goto label_112;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_8 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_6 13
#define LABEL_13 15
#define LABEL_14 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_12 23
#define LABEL_17 25
#define LABEL_23 27
#define LABEL_18 29
#define LABEL_20 31
#define LABEL_26 33
#define LABEL_27 35
#define LABEL_21 37
#define LABEL_22 39
#define LABEL_25 41
#define LABEL_31 43
#define LABEL_29 45
#define TAG_30 21
#define LABEL_34 47
#define LABEL_35 49
#define LABEL_36 51
#define LABEL_37 53
#define LABEL_38 55
#define LABEL_39 57
#define ENVIRONMENT_LABEL_3 98
#define DEBUGGING_LABEL_2 97
#define PURIFICATION_ROOT 96
#define OBJECT_9 95
#define OBJECT_8 94
#define OBJECT_7 93
#define OBJECT_6 92
#define OBJECT_5 91
#define OBJECT_4 90
#define OBJECT_3 89
#define OBJECT_2 88
#define OBJECT_1 87
#define OBJECT_0 86
#define EXECUTE_CACHE_33 59
#define EXECUTE_CACHE_32 61
#define EXECUTE_CACHE_28 63
#define EXECUTE_CACHE_24 65
#define EXECUTE_CACHE_19 67
#define EXECUTE_CACHE_11 69
#define FREE_REFERENCE_8 72
#define FREE_REFERENCE_7 73
#define FREE_REFERENCE_6 74
#define FREE_REFERENCE_5 75
#define FREE_REFERENCE_4 76
#define FREE_REFERENCE_3 77
#define FREE_REFERENCE_2 78
#define FREE_REFERENCE_1 79
#define FREE_REFERENCE_0 80
#define FREE_ASSIGNMENT_0 82
#define GLOBAL_EXECUTE_CACHE_5 84
#define FREE_REFERENCES_LABEL_0 58
#define NUMBER_OF_LINKER_SECTIONS_1 4

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
diagram_cells_so_2bba20dba8286b26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_8);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_12);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_23);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_3;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_26);
      goto label_29;

    case 16:
      current_block = (Rpc - LABEL_27);
      goto label_30;

    case 17:
      current_block = (Rpc - LABEL_21);
      goto continuation_6;

    case 18:
      current_block = (Rpc - LABEL_22);
      goto continuation_5;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto continuation_17;

    case 20:
      current_block = (Rpc - LABEL_31);
      goto lambda_7;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto swapB_35;

    case 22:
      current_block = (Rpc - LABEL_34);
      goto label_31;

    case 23:
      current_block = (Rpc - LABEL_35);
      goto label_32;

    case 24:
      current_block = (Rpc - LABEL_36);
      goto label_33;

    case 25:
      current_block = (Rpc - LABEL_37);
      goto label_38;

    case 26:
      current_block = (Rpc - LABEL_38);
      goto label_39;

    case 27:
      current_block = (Rpc - LABEL_39);
      goto expression_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_19)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_38])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_39)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_38)
  {
    static const short sections [] =
      {
	0,
	3,
	3,
	3,
	2,
	1,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 7)
      goto label_37;
    blocks = (current_block [OBJECT_9]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_37])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_37)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_57;
  Wrd8 = Wrd12;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_55;
  Wrd14 = Wrd18;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_53;
  Wrd20 = Wrd24;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_51;
  Wrd26 = Wrd30;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_49;
  Wrd8 = Wrd12;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_47;
  Wrd14 = Wrd18;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_45;
  Wrd20 = Wrd24;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_43;
  Wrd26 = Wrd30;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_41;
  Wrd14 = Wrd18;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd13.pObj)));
  (Rsp [1]) = (Wrd14.Obj);
  ((Wrd16.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd15.pObj));

DEFLABEL (label_28)
  (Wrd14.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd27.pObj));

DEFLABEL (label_27)
  (Wrd26.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd21.pObj));

DEFLABEL (label_26)
  (Wrd20.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd15.pObj));

DEFLABEL (label_25)
  (Wrd14.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd27.pObj));

DEFLABEL (label_23)
  (Wrd26.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd21.pObj));

DEFLABEL (label_22)
  (Wrd20.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd15.pObj));

DEFLABEL (label_21)
  (Wrd14.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_56;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_61;
  Wrd8 = Wrd12;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_59;
  Wrd14 = Wrd18;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_7]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd15.pObj));

DEFLABEL (label_30)
  (Wrd14.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd9.pObj));

DEFLABEL (label_29)
  (Wrd8.Obj) = Rvl;
  goto label_60;

DEFLABEL (lambda_36)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_31);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (swapB_35)
  CLOSURE_HEADER (LABEL_29);

DEFLABEL (swapB_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  Wrd5 = Wrd9;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_65)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_62)
  Rvl = (current_block [OBJECT_8]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_64)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_36])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_33)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_32)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_34])), (Wrd6.pObj));

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_68;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_diagram_cells_so_2bba20dba8286b26 [7] =
  {
    { "diagram_cells_so_code_1", 35, diagram_cells_so_code_1 },
    { "diagram_cells_so_code_2", 22, diagram_cells_so_code_2 },
    { "diagram_cells_so_code_3", 5, diagram_cells_so_code_3 },
    { "diagram_cells_so_code_4", 3, diagram_cells_so_code_4 },
    { "diagram_cells_so_code_5", 25, diagram_cells_so_code_5 },
    { "diagram_cells_so_code_6", 11, diagram_cells_so_code_6 },
    { "diagram_cells_so_code_7", 48, diagram_cells_so_code_7 }
  };

int
decl_diagram_cells_so_2bba20dba8286b26 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_diagram_cells_so_2bba20dba8286b26);
  return (0);
}

DECLARE_COMPILED_CODE ("diagram-cells.so", 28, decl_diagram_cells_so_2bba20dba8286b26, diagram_cells_so_2bba20dba8286b26)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_diagram_cells_so_data_2bba20dba8286b26 [2654] =
  "\x98\x01\x1c\x9a\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\xc1\xb9"
  "\xc2\xc1\xba\x0d\xbb\x0d\xbc\x24\x28\x0d\xbd\x28\x0d\xbe\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x07\xb3\xb4\x0d"
  "\x24\x28\xb6\x28\xb5\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x83\x88\x1d\x0d\x28\x0d\xbc\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x85\x88\x1d\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x1b\x25\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\xb4\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x86\x88\x1d\x08\x1b\x25\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb2\x07\xb1\xc2\x0d\x08\x1d\x0d\xba\x25\x0d\x1b"
  "\xb2\xb3\x24\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28"
  "\xb5\x28\xb6\x28\xb7\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x9e\x1c\x88\x1b\x1d\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9c\x0d\x0d\x0d\x1b\x1b\x9c\x1b\xc3\x1b\x1b\x0d\x1c"
  "\x0d\x1c\x99\x1b\x2a\x1b\x2a\x99\x28\x0d\x26\x1b\x25\x0d\x1b\x0d"
  "\x1b\x0d\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\xb4\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x12"
  "\x64\x69\x61\x67\x72\x61\x6d\x2d\x63\x65\x6c\x6c\x73\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x63\x61\x72\x09\x73\x65\x74\x2d"
  "\x63\x61\x72\x21\x04\x63\x64\x72\x04\x63\x64\x72\x17\x64\x69\x61"
  "\x67\x72\x61\x6d\x2d\x70\x72\x6f\x6d\x69\x73\x65\x2d\x65\x71\x75"
  "\x61\x6c\x3f\x03\x03\x0e\x64\x69\x61\x67\x72\x61\x6d\x2d\x70\x61"
  "\x72\x74\x73\x03\x11\x64\x69\x61\x67\x72\x61\x6d\x2d\x70\x72\x6f"
  "\x6d\x69\x73\x65\x73\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03"
  "\x15\x63\x6c\x65\x61\x72\x2d\x64\x69\x61\x67\x72\x61\x6d\x2d\x70"
  "\x61\x72\x74\x73\x21\x04\x16\x73\x65\x74\x2d\x64\x69\x61\x67\x72"
  "\x61\x6d\x2d\x70\x72\x6f\x6d\x69\x73\x65\x73\x21\x04\x07\x66\x69"
  "\x6c\x74\x65\x72\x03\x0e\x64\x69\x61\x67\x72\x61\x6d\x2d\x63\x6c"
  "\x75\x62\x73\x09\x03\x13\x6e\x65\x74\x77\x6f\x72\x6b\x2d\x75\x6e"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x05\x18\x61\x64\x64\x2d\x64\x69"
  "\x61\x67\x72\x61\x6d\x2d\x6e\x61\x6d\x65\x64\x2d\x70\x61\x72\x74"
  "\x21\x0a\x04\x05\x6d\x65\x6d\x71\x03\x18\x63\x6c\x65\x61\x72\x2d"
  "\x64\x69\x61\x67\x72\x61\x6d\x2d\x70\x72\x6f\x6d\x69\x73\x65\x73"
  "\x21\x05\x0b\x6c\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x03\x17\x64"
  "\x69\x61\x67\x72\x61\x6d\x2d\x70\x72\x6f\x6d\x69\x73\x65\x2d\x74"
  "\x61\x72\x67\x65\x74\x0b\x04\x04\x6d\x61\x70\x0c\x05\x12\x6c\x73"
  "\x65\x74\x2d\x69\x6e\x74\x65\x72\x73\x65\x63\x74\x69\x6f\x6e\x10"
  "\x3f\x48\x81\x89\x02\x3e\x46\x81\x89\x02\x3d\x44\x81\x8b\x02\x3c"
  "\x42\x81\x89\x02\x3b\x40\x81\x87\x02\x3a\x3e\x81\x85\x02\x39\x3c"
  "\x81\x95\x02\x38\x3a\x81\x93\x02\x37\x38\x81\x87\x02\x36\x36\x81"
  "\x8b\x02\x35\x34\x81\x89\x02\x34\x32\x81\x87\x02\x33\x30\x81\x85"
  "\x02\x32\x2e\x81\x85\x02\x31\x2c\x81\x91\x02\x30\x2a\x81\x8f\x02"
  "\x2f\x28\x81\x87\x02\x2e\x26\x81\x89\x02\x2d\x24\x81\x87\x02\x2c"
  "\x22\x81\x87\x02\x2b\x20\x81\x85\x02\x2a\x1e\x81\x87\x02\x29\x1c"
  "\x81\x85\x02\x28\x1a\x81\x8f\x02\x27\x18\x81\x8d\x02\x26\x16\x81"
  "\x87\x02\x25\x14\x81\x8b\x02\x24\x12\x81\x85\x02\x23\x10\x81\x8d"
  "\x02\x22\x0e\x81\x8b\x02\x21\x0c\x81\x89\x02\x20\x0a\x81\x87\x02"
  "\x1f\x08\x81\x89\x02\x1e\x06\x81\x87\x02\x1d\x04\x84\x06\x47\x70"
  "\x0d\x02\x04\x65\x71\x3f\x04\x03\x03\x03\x07\x6c\x65\x6e\x67\x74"
  "\x68\x03\x09\x04\x0c\x05\x09\x6c\x73\x65\x74\x2d\x78\x6f\x72\x07"
  "\x55\x2e\x81\x8d\x02\x54\x2c\x81\x8b\x02\x53\x2a\x81\x8f\x02\x52"
  "\x28\x81\x8d\x02\x51\x26\x81\x8d\x02\x50\x24\x81\x8b\x02\x4f\x22"
  "\x81\x89\x02\x4e\x20\x81\x87\x02\x4d\x1e\x81\x85\x02\x4c\x1c\x81"
  "\x8d\x02\x4b\x1a\x81\x8b\x02\x4a\x18\x81\x8d\x02\x49\x16\x81\x8b"
  "\x02\x48\x14\x81\x89\x02\x47\x12\x81\x87\x02\x46\x10\x81\x85\x02"
  "\x45\x0e\x81\x85\x02\x44\x0c\x81\x89\x02\x43\x0a\x81\x87\x02\x42"
  "\x08\x81\x85\x02\x41\x06\x81\x85\x02\x40\x04\x84\x06\x2d\x42\x09"
  "\x02\x08\x08\x77\x72\x61\x70\x70\x65\x72\x03\x0e\x65\x6d\x70\x74"
  "\x79\x2d\x64\x69\x61\x67\x72\x61\x6d\x04\x13\x6e\x6f\x74\x65\x2d"
  "\x64\x69\x61\x67\x72\x61\x6d\x2d\x70\x61\x72\x74\x21\x05\x0a\x04"
  "\x0c\x61\x64\x64\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x0a\x05\x5a\x0c"
  "\x81\x83\x02\x59\x0a\x81\x89\x02\x58\x08\x81\x87\x02\x57\x06\x81"
  "\x87\x02\x56\x04\x83\x04\x0b\x19\x0e\x02\x18\x2a\x74\x6f\x70\x6c"
  "\x65\x76\x65\x6c\x2d\x64\x69\x61\x67\x72\x61\x6d\x2d\x63\x65\x6c"
  "\x6c\x2a\x0f\x02\x03\x16\x64\x69\x61\x67\x72\x61\x6d\x2d\x63\x65"
  "\x6c\x6c\x2d\x69\x6e\x73\x65\x72\x74\x65\x72\x10\x02\x5d\x08\x81"
  "\x85\x02\x5c\x06\x81\x87\x02\x5b\x04\x84\x04\x07\x0f\x11\x02\x02"
  "\x09\x74\x6f\x70\x6c\x65\x76\x65\x6c\x0c\x6d\x65\x74\x61\x64\x69"
  "\x61\x67\x72\x61\x6d\x12\x0e\x2a\x6d\x65\x74\x61\x64\x69\x61\x67"
  "\x72\x61\x6d\x2a\x13\x11\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x64"
  "\x69\x61\x67\x72\x61\x6d\x14\x13\x2a\x74\x6f\x70\x6c\x65\x76\x65"
  "\x6c\x2d\x64\x69\x61\x67\x72\x61\x6d\x2a\x15\x0f\x05\x13\x15\x14"
  "\x0f\x05\x03\x11\x64\x65\x73\x74\x72\x6f\x79\x2d\x64\x69\x61\x67"
  "\x72\x61\x6d\x21\x03\x03\x11\x64\x69\x61\x67\x72\x61\x6d\x2d\x69"
  "\x6e\x73\x65\x72\x74\x65\x72\x16\x05\x13\x73\x68\x61\x6c\x6c\x6f"
  "\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x17\x02\x0a\x6d"
  "\x61\x6b\x65\x2d\x63\x65\x6c\x6c\x18\x03\x10\x04\x0a\x08\x76\x34"
  "\x81\x83\x02\x75\x32\x81\x81\x02\x74\x30\x81\x81\x02\x73\x2e\x81"
  "\x81\x02\x72\x2c\x81\x85\x02\x71\x2a\x81\x83\x02\x70\x28\x81\x81"
  "\x02\x6f\x26\x81\x83\x02\x6e\x24\x81\x81\x02\x6d\x22\x81\x81\x02"
  "\x6c\x20\x81\x83\x02\x6b\x1e\x81\x85\x02\x6a\x1c\x81\x83\x02\x69"
  "\x1a\x81\x83\x02\x68\x18\x82\x02\x67\x16\x81\x81\x02\x66\x14\x81"
  "\x83\x02\x65\x12\x81\x83\x02\x64\x10\x81\x81\x02\x63\x0e\x81\x85"
  "\x02\x62\x0c\x81\x81\x02\x61\x0a\x81\x81\x02\x60\x08\x81\x81\x02"
  "\x5f\x06\x81\x83\x02\x5e\x04\x82\x02\x33\x52\x19\x02\x02\x14\x02"
  "\x13\x14\x03\x03\x16\x05\x0e\x6d\x61\x6b\x65\x2d\x25\x64\x69\x61"
  "\x67\x72\x61\x6d\x1a\x05\x17\x04\x0a\x02\x18\x06\x81\x01\x18\x81"
  "\x83\x02\x80\x01\x16\x81\x85\x02\x7f\x14\x81\x83\x02\x7e\x12\x81"
  "\x83\x02\x7d\x10\x82\x02\x7c\x0e\x81\x87\x02\x7b\x0c\x81\x85\x02"
  "\x7a\x0a\x81\x85\x02\x79\x08\x81\x83\x02\x78\x06\x81\x87\x02\x77"
  "\x04\x83\x04\x17\x2c\x1b\x02\x08\x06\x61\x70\x70\x6c\x79\x03\x6f"
  "\x6b\x02\x14\x2a\x69\x6e\x74\x65\x72\x65\x73\x74\x69\x6e\x67\x2d"
  "\x63\x65\x6c\x6c\x73\x2a\x02\x04\x63\x61\x72\x0f\x05\x03\x1b\x77"
  "\x69\x74\x68\x2d\x69\x6e\x64\x65\x70\x65\x6e\x64\x65\x6e\x74\x2d"
  "\x73\x63\x68\x65\x64\x75\x6c\x65\x72\x04\x0c\x02\x18\x04\x0b\x70"
  "\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x05\x17\x03\x09\x63\x6f\x6e"
  "\x74\x65\x6e\x74\x73\x03\x03\x04\x03\x06\x63\x65\x6c\x6c\x3f\x05"
  "\x1a\x03\x0b\x04\x05\x61\x73\x73\x71\x04\x11\x72\x65\x74\x61\x72"
  "\x67\x65\x74\x2d\x70\x72\x6f\x6d\x69\x73\x65\x0f\xb1\x01\x62\x81"
  "\x87\x02\xb0\x01\x60\x81\x85\x02\xaf\x01\x5e\x81\x85\x02\xae\x01"
  "\x5c\x81\x87\x02\xad\x01\x5a\x81\x89\x02\xac\x01\x58\x81\x85\x02"
  "\xab\x01\x56\x81\x85\x02\xaa\x01\x54\x81\x87\x02\xa9\x01\x52\x81"
  "\x85\x02\xa8\x01\x50\x81\x89\x02\xa7\x01\x4e\x81\x85\x02\xa6\x01"
  "\x4c\x81\x83\x02\xa5\x01\x4a\x81\x85\x02\xa4\x01\x48\x81\x85\x02"
  "\xa3\x01\x46\x81\x8d\x02\xa2\x01\x44\x81\x8b\x02\xa1\x01\x42\x81"
  "\x89\x02\xa0\x01\x40\x83\x04\x9f\x01\x3e\x81\x8b\x02\x9e\x01\x3c"
  "\x81\x89\x02\x9d\x01\x3a\x81\x87\x02\x9c\x01\x38\x81\x89\x02\x9b"
  "\x01\x36\x81\x89\x02\x9a\x01\x34\x81\x87\x02\x99\x01\x32\x81\x85"
  "\x02\x98\x01\x30\x81\x83\x02\x97\x01\x2e\x81\x83\x02\x96\x01\x2c"
  "\x81\x85\x02\x95\x01\x2a\x81\x85\x02\x94\x01\x28\x81\x8b\x02\x93"
  "\x01\x26\x81\x83\x02\x92\x01\x24\x81\x83\x02\x91\x01\x22\x81\x85"
  "\x02\x90\x01\x20\x81\x83\x02\x8f\x01\x1e\x81\x83\x02\x8e\x01\x1c"
  "\x81\x89\x02\x8d\x01\x1a\x81\x83\x02\x8c\x01\x18\x81\x87\x02\x8b"
  "\x01\x16\x81\x83\x02\x8a\x01\x14\x81\x83\x02\x89\x01\x12\x81\x87"
  "\x02\x88\x01\x10\x81\x87\x02\x87\x01\x0e\x81\x85\x02\x86\x01\x0c"
  "\x83\x04\x85\x01\x0a\x81\x8b\x02\x84\x01\x08\x81\x83\x02\x83\x01"
  "\x06\x81\x83\x02\x82\x01\x04\x85\x08\x61\x8f\x01\x1a\x0c\x0c\x02"
  "\x1a\x04\x1b\x04\x19\x04\x11\x04\x0e\x04\x29\x64\x6f\x2d\x6d\x61"
  "\x6b\x65\x2d\x64\x69\x61\x67\x72\x61\x6d\x2d\x66\x6f\x72\x2d\x63"
  "\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63"
  "\x74\x6f\x72\x13\x65\x6d\x70\x74\x79\x2d\x64\x69\x61\x67\x72\x61"
  "\x6d\x2d\x63\x65\x6c\x6c\x10\x72\x65\x73\x65\x74\x2d\x64\x69\x61"
  "\x67\x72\x61\x6d\x73\x21\x14\x10\x0f\x11\x6c\x6f\x63\x61\x6c\x2d"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x13\x12\x14\x64\x69\x61"
  "\x67\x72\x61\x6d\x2d\x65\x71\x75\x69\x76\x61\x6c\x65\x6e\x74\x3f"
  "\x1b\x0e\x6d\x65\x72\x67\x65\x2d\x64\x69\x61\x67\x72\x61\x6d\x1a"
  "\x09\x04\x0d\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x14\x02\x0a\x25\x64\x69\x61\x67\x72\x61"
  "\x6d\x3f\x1a\x06\x6d\x65\x72\x67\x65\x1b\x0c\x65\x71\x75\x69\x76"
  "\x61\x6c\x65\x6e\x74\x3f\x13\x15\x0f\x14\x0a\x06\x0b\x64\x65\x66"
  "\x68\x61\x6e\x64\x6c\x65\x72\x03\x03\x16\x04\x0a\x05\x17\x02\x18"
  "\x07\x1c\x3a\x80\x80\x04\x1b\x38\x81\x81\x02\x1a\x36\x81\x81\x02"
  "\x19\x34\x81\x83\x02\x18\x32\x81\x85\x02\x17\x30\x81\x83\x02\x16"
  "\x2e\x81\x83\x02\x15\x2c\x82\x02\x14\x2a\x81\x83\x02\x13\x28\x81"
  "\x87\x02\x12\x26\x81\x85\x02\x11\x24\x81\x87\x02\x10\x22\x81\x85"
  "\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x89\x02"
  "\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x8b\x02\x09"
  "\x14\x81\x89\x02\x08\x12\x81\x87\x02\x07\x10\x81\x85\x02\x06\x0e"
  "\x81\x83\x02\x05\x0c\x81\x8b\x02\x04\x0a\x81\x89\x02\x03\x08\x81"
  "\x87\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\x39\x63";

SCHEME_OBJECT *
diagram_cells_so_data_2bba20dba8286b26 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_diagram_cells_so_data_2bba20dba8286b26 [0]))), (sizeof (prog_diagram_cells_so_data_2bba20dba8286b26)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_39]));
}

DECLARE_COMPILED_DATA_NS ("diagram-cells.so", diagram_cells_so_data_2bba20dba8286b26)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("diagram-cells.so", "29a0e05671a005a2")
