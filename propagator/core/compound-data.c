/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-10T00:18:40-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_12 5
#define LABEL_1_11 7
#define LABEL_1_15 9
#define LABEL_1_9 11
#define TAG_1_10 4
#define LABEL_1_7 13
#define TAG_1_8 5
#define LABEL_1_5 15
#define TAG_1_6 6
#define LABEL_1_14 17
#define LABEL_1_26 19
#define LABEL_1_16 21
#define LABEL_1_28 23
#define LABEL_1_17 25
#define TAG_1_18 11
#define LABEL_1_20 27
#define LABEL_1_21 29
#define TAG_1_22 13
#define LABEL_1_23 31
#define LABEL_1_33 33
#define LABEL_1_24 35
#define TAG_1_25 16
#define LABEL_1_29 37
#define LABEL_1_30 39
#define LABEL_1_37 41
#define LABEL_1_31 43
#define TAG_1_32 20
#define LABEL_1_35 45
#define LABEL_1_36 47
#define LABEL_1_40 49
#define TAG_1_41 23
#define ENVIRONMENT_LABEL_1_3 72
#define DEBUGGING_LABEL_1_2 71
#define OBJECT_1_0 70
#define EXECUTE_CACHE_1_42 51
#define EXECUTE_CACHE_1_39 53
#define EXECUTE_CACHE_1_34 55
#define EXECUTE_CACHE_1_38 57
#define EXECUTE_CACHE_1_19 59
#define EXECUTE_CACHE_1_27 61
#define EXECUTE_CACHE_1_13 63
#define FREE_REFERENCE_1_3 66
#define FREE_REFERENCE_1_2 67
#define FREE_REFERENCE_1_1 68
#define FREE_REFERENCE_1_0 69
#define FREE_REFERENCES_LABEL_1_0 50
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
compound_data_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
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
      goto slotful_information_type_19;

    case 1:
      current_block = (Rpc - LABEL_1_12);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_15);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto slotful_equivalentP_31;

    case 5:
      current_block = (Rpc - LABEL_1_7);
      goto slotful_merge_30;

    case 6:
      current_block = (Rpc - LABEL_1_5);
      goto slotful_contradictionP_29;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_1_26);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_1_28);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_1_17);
      goto lambda_32;

    case 12:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_1_21);
      goto lambda_33;

    case 14:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_1_33);
      goto label_25;

    case 16:
      current_block = (Rpc - LABEL_1_24);
      goto lambda_34;

    case 17:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_10;

    case 19:
      current_block = (Rpc - LABEL_1_37);
      goto label_26;

    case 20:
      current_block = (Rpc - LABEL_1_31);
      goto lambda_35;

    case 21:
      current_block = (Rpc - LABEL_1_35);
      goto continuation_2;

    case 22:
      current_block = (Rpc - LABEL_1_36);
      goto continuation_11;

    case 23:
      current_block = (Rpc - LABEL_1_40);
      goto lambda_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (slotful_information_type_28)
DEFLABEL (slotful_information_type_19)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 2;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  Wrd18 = Wrd29;
  (Wrd19.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  Wrd24 = Wrd31;
  ((Wrd24.pObj) [2]) = (Wrd19.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  ((Wrd24.pObj) [3]) = (Wrd22.Obj);
  ((Wrd33.pObj) [2]) = (Wrd19.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_42;
  Wrd11 = Wrd15;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_40;
  Wrd11 = Wrd15;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_38;
  Wrd8 = Wrd12;

DEFLABEL (label_37)
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_26])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd12.pObj));

DEFLABEL (label_22)
  (Wrd11.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd12.pObj));

DEFLABEL (label_21)
  (Wrd11.Obj) = Rvl;
  goto label_41;

DEFLABEL (slotful_equivalentP_31)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (slotful_equivalentP_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_17])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Rsp [2]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_44;
  Wrd7 = Wrd11;

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_28])), (Wrd8.pObj));

DEFLABEL (label_24)
  (Wrd7.Obj) = Rvl;
  goto label_43;

DEFLABEL (slotful_merge_30)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (slotful_merge_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_21])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_31])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [5]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_46;
  Wrd10 = Wrd14;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_36);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_40])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_42]));

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_37])), (Wrd11.pObj));

DEFLABEL (label_26)
  (Wrd10.Obj) = Rvl;
  goto label_45;

DEFLABEL (slotful_contradictionP_29)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (slotful_contradictionP_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_24])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_48;
  Wrd7 = Wrd11;

DEFLABEL (label_47)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_34]));

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_33])), (Wrd8.pObj));

DEFLABEL (label_25)
  (Wrd7.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_1_17);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_35);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_1_21);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_1_24);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_1_31);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_1_40);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define ENVIRONMENT_LABEL_3 32
#define DEBUGGING_LABEL_2 31
#define PURIFICATION_ROOT 30
#define OBJECT_3 29
#define OBJECT_2 28
#define OBJECT_1 27
#define OBJECT_0 26
#define EXECUTE_CACHE_9 19
#define FREE_REFERENCE_3 22
#define FREE_REFERENCE_2 23
#define FREE_REFERENCE_1 24
#define FREE_REFERENCE_0 25
#define FREE_REFERENCES_LABEL_0 18
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
compound_data_so_5b4dc7a9d5fe0f6a (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd6;
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
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto expression_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_2)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_11])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_9)
  {
    SCHEME_OBJECT * sub_block = (OBJECT_ADDRESS (current_block [OBJECT_3]));
    (sub_block [72]) = (Rrb [REGBLOCK_ENV]);
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), sub_block, (& (sub_block [50])), 2);
  }

DEFLABEL (label_8)
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
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_15;
  Wrd11 = Wrd15;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_13;
  Wrd17 = Wrd21;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_11;
  Wrd24 = Wrd28;

DEFLABEL (label_10)
  (Rsp [3]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd25.pObj));

DEFLABEL (label_6)
  (Wrd24.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd18.pObj));

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

int
decl_compound_data_so_5b4dc7a9d5fe0f6a (void)
{
  DECLARE_SUBCODE ("compound_data_so_code_1", 24, compound_data_so_code_1);
  return (0);
}

DECLARE_COMPILED_CODE ("compound-data.so", 8, decl_compound_data_so_5b4dc7a9d5fe0f6a, compound_data_so_5b4dc7a9d5fe0f6a)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_compound_data_so_data_5b4dc7a9d5fe0f6a [489] =
  "\x4c\x03\x77\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x0d\x0d\xb8\x0d"
  "\x0d\x24\x28\x0d\xb9\x28\xb1\x28\x0d\xb9\x28\xb1\x28\x0d\x28\xb0"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xb9\x98\x88\xb1\xc3\x0d\xb8\xb1\x2a\x0d"
  "\x0d\x0d\x0d\x24\x28\xb0\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x12\x63\x6f\x6d\x70\x6f"
  "\x75\x6e\x64\x2d\x64\x61\x74\x61\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x06\x61\x70\x70\x6c\x79\x06\x6d\x65\x72\x67\x65\x0c\x65"
  "\x71\x75\x69\x76\x61\x6c\x65\x6e\x74\x3f\x0f\x63\x6f\x6e\x74\x72"
  "\x61\x64\x69\x63\x74\x6f\x72\x79\x3f\x0c\x62\x6f\x6f\x6c\x65\x61"
  "\x6e\x2f\x61\x6e\x64\x05\x06\x0b\x64\x65\x66\x68\x61\x6e\x64\x6c"
  "\x65\x72\x05\x04\x04\x6d\x61\x70\x05\x04\x04\x61\x6e\x79\x04\x04"
  "\x14\x65\x66\x66\x65\x63\x74\x66\x75\x6c\x2d\x6c\x69\x73\x74\x2d"
  "\x62\x69\x6e\x64\x08\x20\x32\x81\x85\x02\x1f\x30\x81\x8b\x02\x1e"
  "\x2e\x81\x87\x02\x1d\x2c\x81\x85\x02\x1c\x2a\x81\x91\x02\x1b\x28"
  "\x81\x89\x02\x1a\x26\x81\x85\x02\x19\x24\x81\x85\x02\x18\x22\x81"
  "\x85\x02\x17\x20\x81\x85\x02\x16\x1e\x81\x85\x02\x15\x1c\x81\x87"
  "\x02\x14\x1a\x81\x85\x02\x13\x18\x81\x87\x02\x12\x16\x81\x87\x02"
  "\x11\x14\x81\x8d\x02\x10\x12\x81\x8d\x02\x0f\x10\x81\x85\x02\x0e"
  "\x0e\x81\x87\x02\x0d\x0c\x81\x87\x02\x0c\x0a\x81\x95\x02\x0b\x08"
  "\x81\x8d\x02\x0a\x06\x81\x95\x02\x09\x04\xfd\x07\x31\x49\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x19"
  "\x73\x6c\x6f\x74\x66\x75\x6c\x2d\x69\x6e\x66\x6f\x72\x6d\x61\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x04\x04\x63\x61\x72\x05\x63\x6f"
  "\x6e\x73\x06\x70\x61\x69\x72\x3f\x04\x63\x64\x72\x05\x06\x02\x08"
  "\x12\x80\x80\x04\x07\x10\x81\x81\x02\x06\x0e\x81\x81\x02\x05\x0c"
  "\x81\x89\x02\x04\x0a\x81\x87\x02\x03\x08\x81\x85\x02\x02\x06\x81"
  "\x83\x02\x01\x04\x81\x83\x02\x11\x21";

SCHEME_OBJECT *
compound_data_so_data_5b4dc7a9d5fe0f6a (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_compound_data_so_data_5b4dc7a9d5fe0f6a [0]))), (sizeof (prog_compound_data_so_data_5b4dc7a9d5fe0f6a)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_12]));
}

DECLARE_COMPILED_DATA_NS ("compound-data.so", compound_data_so_data_5b4dc7a9d5fe0f6a)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("compound-data.so", "1c010f53b425bc55")
