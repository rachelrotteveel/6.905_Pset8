/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-03T22:04:47-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define LABEL_1_11 9
#define LABEL_1_10 11
#define LABEL_1_13 13
#define LABEL_1_15 15
#define LABEL_1_16 17
#define LABEL_1_14 19
#define LABEL_1_17 21
#define LABEL_1_18 23
#define LABEL_1_19 25
#define LABEL_1_21 27
#define LABEL_1_20 29
#define LABEL_1_24 31
#define LABEL_1_22 33
#define LABEL_1_25 35
#define LABEL_1_26 37
#define LABEL_1_27 39
#define LABEL_1_31 41
#define LABEL_1_29 43
#define ENVIRONMENT_LABEL_1_3 75
#define DEBUGGING_LABEL_1_2 74
#define OBJECT_1_14 73
#define OBJECT_1_13 72
#define OBJECT_1_12 71
#define OBJECT_1_11 70
#define OBJECT_1_10 69
#define OBJECT_1_9 68
#define OBJECT_1_8 67
#define OBJECT_1_7 66
#define OBJECT_1_6 65
#define OBJECT_1_5 64
#define OBJECT_1_4 63
#define OBJECT_1_3 62
#define OBJECT_1_2 61
#define OBJECT_1_1 60
#define OBJECT_1_0 59
#define EXECUTE_CACHE_1_30 45
#define EXECUTE_CACHE_1_28 47
#define EXECUTE_CACHE_1_23 49
#define EXECUTE_CACHE_1_12 51
#define EXECUTE_CACHE_1_9 53
#define EXECUTE_CACHE_1_7 55
#define FREE_REFERENCE_1_0 58
#define FREE_REFERENCES_LABEL_1_0 44
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd16;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      goto depends_printer_20;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_31;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_11);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_1_17);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_1_18);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_1_21);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_1_22);
      goto lambda_15;

    case 16:
      current_block = (Rpc - LABEL_1_25);
      goto label_27;

    case 17:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_1_31);
      goto label_28;

    case 20:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (depends_printer_30)
DEFLABEL (depends_printer_20)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_43;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_43;
  (Wrd13.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_41;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_41;
  (Wrd13.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_39;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_38)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_37;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd23.Lng) < 4L))
    goto label_34;

DEFLABEL (label_33)
  (Wrd31.Obj) = (current_block [OBJECT_1_8]);
  (Rsp [0]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_34)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_1_7]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_36;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_36;
  (Wrd16.Obj) = ((Wrd22.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_35)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_16);
  goto label_33;

DEFLABEL (label_36)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Wrd32.Obj) = (current_block [OBJECT_1_9]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd33.Obj) = (current_block [OBJECT_1_6]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (label_39)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_1_4]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_1_1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (lambda_32)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_1_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_1_10]);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd38.Lng))))
    goto label_54;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_53;

DEFLABEL (label_52)
  (Wrd13.Obj) = (current_block [OBJECT_1_12]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_44;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_11]), 2);

DEFLABEL (label_44)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_46;
  (Wrd15.Obj) = (current_block [OBJECT_1_14]);
  goto label_45;

DEFLABEL (label_46)
  (Wrd15.Obj) = (current_block [OBJECT_1_13]);

DEFLABEL (label_45)
DEFLABEL (label_51)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;

DEFLABEL (label_47)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_27);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_50;
  Wrd5 = Wrd9;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_31])), (Wrd6.pObj));

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));
  goto label_47;

DEFLABEL (label_54)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_11]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_53;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_47;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 6
#define DEBUGGING_LABEL_2_2 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto Z__supported_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__supported_3)
DEFLABEL (Z__supported_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (current_block [OBJECT_2_0]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define ENVIRONMENT_LABEL_3_3 16
#define DEBUGGING_LABEL_3_2 15
#define OBJECT_3_4 14
#define OBJECT_3_3 13
#define OBJECT_3_2 12
#define OBJECT_3_1 11
#define OBJECT_3_0 10
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd46;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_3_4);
      goto v_sP_4;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (v_sP_10)
DEFLABEL (v_sP_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_3_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_3_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_3_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 14
#define DEBUGGING_LABEL_4_2 13
#define OBJECT_4_1 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCE_4_0 10
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto supported_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (supported_6)
DEFLABEL (supported_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_4_0]))
    goto label_8;
  Wrd7 = Wrd5;

DEFLABEL (label_7)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (label_8)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_10;
  Wrd9 = Wrd13;

DEFLABEL (label_9)
  (Wrd17.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 9
#define DEBUGGING_LABEL_5_2 8
#define OBJECT_5_0 7
#define EXECUTE_CACHE_5_5 5
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 5
#define DEBUGGING_LABEL_6_2 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_8 7
#define LABEL_7_6 9
#define LABEL_7_9 11
#define LABEL_7_10 13
#define LABEL_7_12 15
#define LABEL_7_11 17
#define ENVIRONMENT_LABEL_7_3 28
#define DEBUGGING_LABEL_7_2 27
#define EXECUTE_CACHE_7_14 19
#define EXECUTE_CACHE_7_13 21
#define EXECUTE_CACHE_7_7 23
#define FREE_REFERENCE_7_0 26
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto more_informative_supportP_5;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto label_8;

    case 7:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (more_informative_supportP_10)
DEFLABEL (more_informative_supportP_5)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_13;
  Wrd9 = Wrd13;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_8])), (Wrd10.pObj));

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_12])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_6 9
#define LABEL_8_9 11
#define ENVIRONMENT_LABEL_8_3 21
#define DEBUGGING_LABEL_8_2 20
#define OBJECT_8_0 19
#define EXECUTE_CACHE_8_8 13
#define FREE_REFERENCE_8_2 16
#define FREE_REFERENCE_8_1 17
#define FREE_REFERENCE_8_0 18
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto merge_supports_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_supports_8)
DEFLABEL (merge_supports_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_12;
  Wrd15 = Wrd19;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [1]) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 2);

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_9])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_7])), (Wrd16.pObj));

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define LABEL_9_11 13
#define LABEL_9_14 15
#define LABEL_9_16 17
#define LABEL_9_22 19
#define LABEL_9_23 21
#define LABEL_9_25 23
#define LABEL_9_17 25
#define LABEL_9_18 27
#define LABEL_9_19 29
#define LABEL_9_28 31
#define LABEL_9_29 33
#define LABEL_9_33 35
#define LABEL_9_34 37
#define LABEL_9_36 39
#define ENVIRONMENT_LABEL_9_3 74
#define DEBUGGING_LABEL_9_2 73
#define EXECUTE_CACHE_9_37 41
#define EXECUTE_CACHE_9_35 43
#define EXECUTE_CACHE_9_32 45
#define EXECUTE_CACHE_9_31 47
#define EXECUTE_CACHE_9_30 49
#define EXECUTE_CACHE_9_27 51
#define EXECUTE_CACHE_9_26 53
#define EXECUTE_CACHE_9_24 55
#define EXECUTE_CACHE_9_21 57
#define EXECUTE_CACHE_9_20 59
#define EXECUTE_CACHE_9_15 61
#define EXECUTE_CACHE_9_13 63
#define EXECUTE_CACHE_9_12 65
#define EXECUTE_CACHE_9_10 67
#define EXECUTE_CACHE_9_6 69
#define FREE_REFERENCE_9_0 72
#define FREE_REFERENCES_LABEL_9_0 40
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd38;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd40;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd10;
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
      goto v_s_merge_23;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_9_22);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_9_23);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_9_25);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_9_19);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_9_28);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_9_29);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_9_33);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_9_34);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_9_36);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (v_s_merge_27)
DEFLABEL (v_s_merge_23)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_9_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_31]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_9_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (Rsp [6]);
  if (! ((Wrd8.Obj) == (Wrd9.Obj)))
    goto label_32;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd25.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_9_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_24]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_30)
  (Wrd38.Obj) = (Rsp [8]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_28;

DEFLABEL (label_29)
  (Wrd40.Obj) = (Rsp [7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_28)
DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_27]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (label_32)
  (Wrd11.Obj) = (Rsp [5]);
  if ((Wrd8.Obj) == (Wrd11.Obj))
    goto label_30;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_28]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_29]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_30]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_30]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_34);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_34;
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_37]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_35]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_25);
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_36])), (Wrd6.pObj));

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define EXECUTE_CACHE_10_8 9
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_10_4);
      goto attach_support_to_effect_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (attach_support_to_effect_5)
DEFLABEL (attach_support_to_effect_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_10 11
#define LABEL_11_11 13
#define LABEL_11_12 15
#define LABEL_11_14 17
#define ENVIRONMENT_LABEL_11_3 34
#define DEBUGGING_LABEL_11_2 33
#define EXECUTE_CACHE_11_19 19
#define EXECUTE_CACHE_11_18 21
#define EXECUTE_CACHE_11_17 23
#define EXECUTE_CACHE_11_16 25
#define EXECUTE_CACHE_11_15 27
#define EXECUTE_CACHE_11_13 29
#define EXECUTE_CACHE_11_8 31
#define FREE_REFERENCES_LABEL_11_0 18
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_19]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_8 9
#define LABEL_12_10 11
#define LABEL_12_12 13
#define LABEL_12_11 15
#define ENVIRONMENT_LABEL_12_3 28
#define DEBUGGING_LABEL_12_2 27
#define EXECUTE_CACHE_12_14 17
#define EXECUTE_CACHE_12_13 19
#define EXECUTE_CACHE_12_9 21
#define EXECUTE_CACHE_12_7 23
#define FREE_REFERENCE_12_0 26
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_12_4);
      goto v_s_equivalentP_5;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_12_12);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (v_s_equivalentP_9)
DEFLABEL (v_s_equivalentP_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_12])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 12
#define DEBUGGING_LABEL_13_2 11
#define EXECUTE_CACHE_13_7 7
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_8 7
#define LABEL_14_6 9
#define ENVIRONMENT_LABEL_14_3 18
#define DEBUGGING_LABEL_14_2 17
#define EXECUTE_CACHE_14_9 11
#define EXECUTE_CACHE_14_7 13
#define FREE_REFERENCE_14_0 16
#define FREE_REFERENCES_LABEL_14_0 10
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_14_4);
      goto v_s___2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (v_s___6)
DEFLABEL (v_s___2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_9;
  Wrd8 = Wrd12;

DEFLABEL (label_8)
  Rvl = (Wrd8.Obj);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_7 7
#define LABEL_15_8 9
#define LABEL_15_11 11
#define LABEL_15_12 13
#define LABEL_15_15 15
#define ENVIRONMENT_LABEL_15_3 26
#define DEBUGGING_LABEL_15_2 25
#define EXECUTE_CACHE_15_14 17
#define EXECUTE_CACHE_15_13 19
#define EXECUTE_CACHE_15_10 21
#define EXECUTE_CACHE_15_9 23
#define FREE_REFERENCES_LABEL_15_0 16
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_15_4);
      goto v_s_binary_map_6;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_15_15);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (v_s_binary_map_9)
DEFLABEL (v_s_binary_map_6)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_8 9
#define ENVIRONMENT_LABEL_16_3 20
#define DEBUGGING_LABEL_16_2 19
#define EXECUTE_CACHE_16_11 11
#define EXECUTE_CACHE_16_10 13
#define EXECUTE_CACHE_16_9 15
#define EXECUTE_CACHE_16_6 17
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 5
#define DEBUGGING_LABEL_17_2 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_17_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 9
#define DEBUGGING_LABEL_18_2 8
#define FREE_REFERENCE_18_0 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define ENVIRONMENT_LABEL_19_3 16
#define DEBUGGING_LABEL_19_2 15
#define EXECUTE_CACHE_19_9 9
#define EXECUTE_CACHE_19_8 11
#define EXECUTE_CACHE_19_6 13
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define LABEL_20_10 11
#define LABEL_20_11 13
#define ENVIRONMENT_LABEL_20_3 24
#define DEBUGGING_LABEL_20_2 23
#define EXECUTE_CACHE_20_13 15
#define EXECUTE_CACHE_20_12 17
#define EXECUTE_CACHE_20_9 19
#define EXECUTE_CACHE_20_8 21
#define FREE_REFERENCES_LABEL_20_0 14
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define ENVIRONMENT_LABEL_21_3 14
#define DEBUGGING_LABEL_21_2 13
#define EXECUTE_CACHE_21_8 9
#define EXECUTE_CACHE_21_6 11
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
supported_values_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_11 9
#define LABEL_7 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_16 17
#define LABEL_14 19
#define LABEL_20 21
#define LABEL_15 23
#define LABEL_18 25
#define LABEL_23 27
#define LABEL_19 29
#define LABEL_21 31
#define LABEL_26 33
#define LABEL_22 35
#define LABEL_24 37
#define LABEL_30 39
#define LABEL_25 41
#define LABEL_28 43
#define LABEL_33 45
#define LABEL_29 47
#define LABEL_31 49
#define LABEL_32 51
#define LABEL_34 53
#define LABEL_36 55
#define LABEL_35 57
#define LABEL_38 59
#define LABEL_37 61
#define LABEL_40 63
#define LABEL_39 65
#define LABEL_42 67
#define LABEL_41 69
#define LABEL_44 71
#define LABEL_43 73
#define LABEL_46 75
#define LABEL_45 77
#define LABEL_48 79
#define LABEL_47 81
#define LABEL_50 83
#define LABEL_49 85
#define LABEL_52 87
#define LABEL_51 89
#define LABEL_54 91
#define LABEL_53 93
#define LABEL_55 95
#define LABEL_56 97
#define LABEL_58 99
#define LABEL_62 101
#define LABEL_63 103
#define LABEL_59 105
#define LABEL_61 107
#define LABEL_66 109
#define LABEL_67 111
#define LABEL_68 113
#define LABEL_65 115
#define LABEL_71 117
#define LABEL_72 119
#define LABEL_70 121
#define LABEL_75 123
#define LABEL_76 125
#define LABEL_74 127
#define LABEL_78 129
#define LABEL_79 131
#define LABEL_77 133
#define LABEL_81 135
#define LABEL_82 137
#define LABEL_80 139
#define LABEL_84 141
#define LABEL_85 143
#define LABEL_83 145
#define LABEL_87 147
#define LABEL_88 149
#define LABEL_86 151
#define LABEL_90 153
#define LABEL_91 155
#define LABEL_89 157
#define LABEL_93 159
#define LABEL_94 161
#define LABEL_92 163
#define LABEL_95 165
#define LABEL_96 167
#define LABEL_100 169
#define LABEL_101 171
#define LABEL_97 173
#define LABEL_99 175
#define LABEL_103 177
#define LABEL_104 179
#define LABEL_105 181
#define LABEL_102 183
#define LABEL_107 185
#define LABEL_109 187
#define LABEL_110 189
#define LABEL_111 191
#define LABEL_108 193
#define LABEL_113 195
#define LABEL_114 197
#define LABEL_112 199
#define LABEL_115 201
#define LABEL_117 203
#define LABEL_118 205
#define LABEL_119 207
#define LABEL_116 209
#define LABEL_121 211
#define LABEL_122 213
#define LABEL_123 215
#define LABEL_120 217
#define LABEL_126 219
#define LABEL_127 221
#define LABEL_125 223
#define LABEL_129 225
#define LABEL_128 227
#define LABEL_130 229
#define LABEL_131 231
#define LABEL_132 233
#define LABEL_133 235
#define ENVIRONMENT_LABEL_3 352
#define DEBUGGING_LABEL_2 351
#define PURIFICATION_ROOT 350
#define OBJECT_54 349
#define OBJECT_53 348
#define OBJECT_52 347
#define OBJECT_51 346
#define OBJECT_50 345
#define OBJECT_49 344
#define OBJECT_48 343
#define OBJECT_47 342
#define OBJECT_46 341
#define OBJECT_45 340
#define OBJECT_44 339
#define OBJECT_43 338
#define OBJECT_42 337
#define OBJECT_41 336
#define OBJECT_40 335
#define OBJECT_39 334
#define OBJECT_38 333
#define OBJECT_37 332
#define OBJECT_36 331
#define OBJECT_35 330
#define OBJECT_34 329
#define OBJECT_33 328
#define OBJECT_32 327
#define OBJECT_31 326
#define OBJECT_30 325
#define OBJECT_29 324
#define OBJECT_28 323
#define OBJECT_27 322
#define OBJECT_26 321
#define OBJECT_25 320
#define OBJECT_24 319
#define OBJECT_23 318
#define OBJECT_22 317
#define OBJECT_21 316
#define OBJECT_20 315
#define OBJECT_19 314
#define OBJECT_18 313
#define OBJECT_17 312
#define OBJECT_16 311
#define OBJECT_15 310
#define OBJECT_14 309
#define OBJECT_13 308
#define OBJECT_12 307
#define OBJECT_11 306
#define OBJECT_10 305
#define OBJECT_9 304
#define OBJECT_8 303
#define OBJECT_7 302
#define OBJECT_6 301
#define OBJECT_5 300
#define OBJECT_4 299
#define OBJECT_3 298
#define OBJECT_2 297
#define OBJECT_1 296
#define OBJECT_0 295
#define EXECUTE_CACHE_106 237
#define EXECUTE_CACHE_98 239
#define EXECUTE_CACHE_73 241
#define EXECUTE_CACHE_69 243
#define EXECUTE_CACHE_124 245
#define EXECUTE_CACHE_64 247
#define EXECUTE_CACHE_60 249
#define EXECUTE_CACHE_57 251
#define FREE_REFERENCE_29 254
#define FREE_REFERENCE_28 255
#define FREE_REFERENCE_27 256
#define FREE_REFERENCE_26 257
#define FREE_REFERENCE_25 258
#define FREE_REFERENCE_24 259
#define FREE_REFERENCE_23 260
#define FREE_REFERENCE_22 261
#define FREE_REFERENCE_21 262
#define FREE_REFERENCE_20 263
#define FREE_REFERENCE_19 264
#define FREE_REFERENCE_18 265
#define FREE_REFERENCE_17 266
#define FREE_REFERENCE_16 267
#define FREE_REFERENCE_15 268
#define FREE_REFERENCE_14 269
#define FREE_REFERENCE_13 270
#define FREE_REFERENCE_12 271
#define FREE_REFERENCE_11 272
#define FREE_REFERENCE_10 273
#define FREE_REFERENCE_9 274
#define FREE_REFERENCE_8 275
#define FREE_REFERENCE_7 276
#define FREE_REFERENCE_6 277
#define FREE_REFERENCE_5 278
#define FREE_REFERENCE_4 279
#define FREE_REFERENCE_3 280
#define FREE_REFERENCE_2 281
#define FREE_REFERENCE_1 282
#define FREE_REFERENCE_0 283
#define GLOBAL_EXECUTE_CACHE_27 285
#define GLOBAL_EXECUTE_CACHE_17 287
#define GLOBAL_EXECUTE_CACHE_12 289
#define GLOBAL_EXECUTE_CACHE_9 291
#define GLOBAL_EXECUTE_CACHE_5 293
#define FREE_REFERENCES_LABEL_0 236
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
supported_values_so_2948a9b5f7387814 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_8);
      goto label_58;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_11);
      goto label_59;

    case 4:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_16);
      goto label_60;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_20);
      goto label_61;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_23);
      goto label_62;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_26);
      goto label_63;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_13;

    case 18:
      current_block = (Rpc - LABEL_30);
      goto label_64;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto continuation_12;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_15;

    case 21:
      current_block = (Rpc - LABEL_33);
      goto label_65;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_14;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_17;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_16;

    case 25:
      current_block = (Rpc - LABEL_34);
      goto continuation_18;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto label_66;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto continuation_19;

    case 28:
      current_block = (Rpc - LABEL_38);
      goto label_67;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto continuation_20;

    case 30:
      current_block = (Rpc - LABEL_40);
      goto label_68;

    case 31:
      current_block = (Rpc - LABEL_39);
      goto continuation_21;

    case 32:
      current_block = (Rpc - LABEL_42);
      goto label_69;

    case 33:
      current_block = (Rpc - LABEL_41);
      goto continuation_22;

    case 34:
      current_block = (Rpc - LABEL_44);
      goto label_70;

    case 35:
      current_block = (Rpc - LABEL_43);
      goto continuation_23;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto label_71;

    case 37:
      current_block = (Rpc - LABEL_45);
      goto continuation_24;

    case 38:
      current_block = (Rpc - LABEL_48);
      goto label_72;

    case 39:
      current_block = (Rpc - LABEL_47);
      goto continuation_25;

    case 40:
      current_block = (Rpc - LABEL_50);
      goto label_73;

    case 41:
      current_block = (Rpc - LABEL_49);
      goto continuation_26;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto label_74;

    case 43:
      current_block = (Rpc - LABEL_51);
      goto continuation_27;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto label_75;

    case 45:
      current_block = (Rpc - LABEL_53);
      goto continuation_28;

    case 46:
      current_block = (Rpc - LABEL_55);
      goto continuation_30;

    case 47:
      current_block = (Rpc - LABEL_56);
      goto continuation_29;

    case 48:
      current_block = (Rpc - LABEL_58);
      goto continuation_32;

    case 49:
      current_block = (Rpc - LABEL_62);
      goto label_76;

    case 50:
      current_block = (Rpc - LABEL_63);
      goto label_77;

    case 51:
      current_block = (Rpc - LABEL_59);
      goto continuation_31;

    case 52:
      current_block = (Rpc - LABEL_61);
      goto continuation_33;

    case 53:
      current_block = (Rpc - LABEL_66);
      goto label_78;

    case 54:
      current_block = (Rpc - LABEL_67);
      goto label_79;

    case 55:
      current_block = (Rpc - LABEL_68);
      goto label_80;

    case 56:
      current_block = (Rpc - LABEL_65);
      goto continuation_34;

    case 57:
      current_block = (Rpc - LABEL_71);
      goto label_81;

    case 58:
      current_block = (Rpc - LABEL_72);
      goto label_82;

    case 59:
      current_block = (Rpc - LABEL_70);
      goto continuation_35;

    case 60:
      current_block = (Rpc - LABEL_75);
      goto label_83;

    case 61:
      current_block = (Rpc - LABEL_76);
      goto label_84;

    case 62:
      current_block = (Rpc - LABEL_74);
      goto continuation_36;

    case 63:
      current_block = (Rpc - LABEL_78);
      goto label_85;

    case 64:
      current_block = (Rpc - LABEL_79);
      goto label_86;

    case 65:
      current_block = (Rpc - LABEL_77);
      goto continuation_37;

    case 66:
      current_block = (Rpc - LABEL_81);
      goto label_87;

    case 67:
      current_block = (Rpc - LABEL_82);
      goto label_88;

    case 68:
      current_block = (Rpc - LABEL_80);
      goto continuation_38;

    case 69:
      current_block = (Rpc - LABEL_84);
      goto label_89;

    case 70:
      current_block = (Rpc - LABEL_85);
      goto label_90;

    case 71:
      current_block = (Rpc - LABEL_83);
      goto continuation_39;

    case 72:
      current_block = (Rpc - LABEL_87);
      goto label_91;

    case 73:
      current_block = (Rpc - LABEL_88);
      goto label_92;

    case 74:
      current_block = (Rpc - LABEL_86);
      goto continuation_40;

    case 75:
      current_block = (Rpc - LABEL_90);
      goto label_93;

    case 76:
      current_block = (Rpc - LABEL_91);
      goto label_94;

    case 77:
      current_block = (Rpc - LABEL_89);
      goto continuation_41;

    case 78:
      current_block = (Rpc - LABEL_93);
      goto label_95;

    case 79:
      current_block = (Rpc - LABEL_94);
      goto label_96;

    case 80:
      current_block = (Rpc - LABEL_92);
      goto continuation_42;

    case 81:
      current_block = (Rpc - LABEL_95);
      goto continuation_43;

    case 82:
      current_block = (Rpc - LABEL_96);
      goto continuation_45;

    case 83:
      current_block = (Rpc - LABEL_100);
      goto label_97;

    case 84:
      current_block = (Rpc - LABEL_101);
      goto label_98;

    case 85:
      current_block = (Rpc - LABEL_97);
      goto continuation_44;

    case 86:
      current_block = (Rpc - LABEL_99);
      goto continuation_46;

    case 87:
      current_block = (Rpc - LABEL_103);
      goto label_99;

    case 88:
      current_block = (Rpc - LABEL_104);
      goto label_100;

    case 89:
      current_block = (Rpc - LABEL_105);
      goto label_101;

    case 90:
      current_block = (Rpc - LABEL_102);
      goto continuation_47;

    case 91:
      current_block = (Rpc - LABEL_107);
      goto continuation_48;

    case 92:
      current_block = (Rpc - LABEL_109);
      goto label_102;

    case 93:
      current_block = (Rpc - LABEL_110);
      goto label_103;

    case 94:
      current_block = (Rpc - LABEL_111);
      goto label_104;

    case 95:
      current_block = (Rpc - LABEL_108);
      goto continuation_49;

    case 96:
      current_block = (Rpc - LABEL_113);
      goto label_105;

    case 97:
      current_block = (Rpc - LABEL_114);
      goto label_106;

    case 98:
      current_block = (Rpc - LABEL_112);
      goto continuation_50;

    case 99:
      current_block = (Rpc - LABEL_115);
      goto continuation_51;

    case 100:
      current_block = (Rpc - LABEL_117);
      goto label_107;

    case 101:
      current_block = (Rpc - LABEL_118);
      goto label_108;

    case 102:
      current_block = (Rpc - LABEL_119);
      goto label_109;

    case 103:
      current_block = (Rpc - LABEL_116);
      goto continuation_52;

    case 104:
      current_block = (Rpc - LABEL_121);
      goto label_110;

    case 105:
      current_block = (Rpc - LABEL_122);
      goto label_111;

    case 106:
      current_block = (Rpc - LABEL_123);
      goto label_112;

    case 107:
      current_block = (Rpc - LABEL_120);
      goto continuation_53;

    case 108:
      current_block = (Rpc - LABEL_126);
      goto label_113;

    case 109:
      current_block = (Rpc - LABEL_127);
      goto label_114;

    case 110:
      current_block = (Rpc - LABEL_125);
      goto continuation_54;

    case 111:
      current_block = (Rpc - LABEL_129);
      goto label_115;

    case 112:
      current_block = (Rpc - LABEL_128);
      goto continuation_55;

    case 113:
      current_block = (Rpc - LABEL_130);
      goto label_116;

    case 114:
      current_block = (Rpc - LABEL_131);
      goto label_119;

    case 115:
      current_block = (Rpc - LABEL_132);
      goto label_120;

    case 116:
      current_block = (Rpc - LABEL_133);
      goto expression_57;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_57)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_132])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_120)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_119)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	2,
	1,
	2,
	1,
	1,
	2,
	2,
	2,
	0,
	1,
	2,
	0,
	0,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 21)
      goto label_118;
    blocks = (current_block [OBJECT_54]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_131])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_118)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_238;
  Wrd13 = Wrd17;

DEFLABEL (label_237)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd24.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd20.pObj) = (& (Rhp [-4]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_236;
  Wrd8 = Wrd12;

DEFLABEL (label_235)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_234;
  Wrd12 = Wrd16;

DEFLABEL (label_233)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_232;
  Wrd12 = Wrd16;

DEFLABEL (label_231)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_230;
  Wrd12 = Wrd16;

DEFLABEL (label_229)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_228;
  Wrd12 = Wrd16;

DEFLABEL (label_227)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_27]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_226;
  Wrd12 = Wrd16;

DEFLABEL (label_225)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_27]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_224;
  Wrd12 = Wrd16;

DEFLABEL (label_223)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_27]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_222;
  Wrd8 = Wrd12;

DEFLABEL (label_221)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_220;
  Wrd8 = Wrd12;

DEFLABEL (label_219)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_218;
  Wrd8 = Wrd12;

DEFLABEL (label_217)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_216;
  Wrd8 = Wrd12;

DEFLABEL (label_215)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_214;
  Wrd8 = Wrd12;

DEFLABEL (label_213)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_212;
  Wrd8 = Wrd12;

DEFLABEL (label_211)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_210;
  Wrd8 = Wrd12;

DEFLABEL (label_209)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_208;
  Wrd8 = Wrd12;

DEFLABEL (label_207)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_206;
  Wrd8 = Wrd12;

DEFLABEL (label_205)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_204;
  Wrd8 = Wrd12;

DEFLABEL (label_203)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_59);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_202;
  Wrd8 = Wrd12;

DEFLABEL (label_201)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_200;
  Wrd15 = Wrd19;

DEFLABEL (label_199)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_198;
  Wrd8 = Wrd12;

DEFLABEL (label_197)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_196;
  Wrd14 = Wrd18;

DEFLABEL (label_195)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_194;
  Wrd20 = Wrd24;

DEFLABEL (label_193)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_192;
  Wrd8 = Wrd12;

DEFLABEL (label_191)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_190;
  Wrd14 = Wrd18;

DEFLABEL (label_189)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_188;
  Wrd8 = Wrd12;

DEFLABEL (label_187)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_186;
  Wrd14 = Wrd18;

DEFLABEL (label_185)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_184;
  Wrd8 = Wrd12;

DEFLABEL (label_183)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_182;
  Wrd14 = Wrd18;

DEFLABEL (label_181)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_180;
  Wrd8 = Wrd12;

DEFLABEL (label_179)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_178;
  Wrd14 = Wrd18;

DEFLABEL (label_177)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_176;
  Wrd8 = Wrd12;

DEFLABEL (label_175)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_174;
  Wrd14 = Wrd18;

DEFLABEL (label_173)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_172;
  Wrd8 = Wrd12;

DEFLABEL (label_171)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_170;
  Wrd14 = Wrd18;

DEFLABEL (label_169)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_168;
  Wrd8 = Wrd12;

DEFLABEL (label_167)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_166;
  Wrd14 = Wrd18;

DEFLABEL (label_165)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_164;
  Wrd8 = Wrd12;

DEFLABEL (label_163)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_162;
  Wrd14 = Wrd18;

DEFLABEL (label_161)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_97);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_160;
  Wrd8 = Wrd12;

DEFLABEL (label_159)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_158;
  Wrd15 = Wrd19;

DEFLABEL (label_157)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_156;
  Wrd8 = Wrd12;

DEFLABEL (label_155)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_154;
  Wrd14 = Wrd18;

DEFLABEL (label_153)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_152;
  Wrd20 = Wrd24;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_150;
  Wrd8 = Wrd12;

DEFLABEL (label_149)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_148;
  Wrd14 = Wrd18;

DEFLABEL (label_147)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_146;
  Wrd20 = Wrd24;

DEFLABEL (label_145)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_144;
  Wrd8 = Wrd12;

DEFLABEL (label_143)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_142;
  Wrd15 = Wrd19;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_140;
  Wrd8 = Wrd12;

DEFLABEL (label_139)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_138;
  Wrd14 = Wrd18;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_136;
  Wrd20 = Wrd24;

DEFLABEL (label_135)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_134;
  Wrd8 = Wrd12;

DEFLABEL (label_133)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_132;
  Wrd14 = Wrd18;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_130;
  Wrd21 = Wrd25;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_124]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_128;
  Wrd8 = Wrd12;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_126;
  Wrd15 = Wrd19;

DEFLABEL (label_125)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_124;
  Wrd10 = Wrd14;

DEFLABEL (label_123)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd5.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_122;
  Wrd6 = Wrd10;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_53]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_130])), (Wrd7.pObj));

DEFLABEL (label_116)
  (Wrd6.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_129])), (Wrd11.pObj));

DEFLABEL (label_115)
  (Wrd10.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_127])), (Wrd16.pObj));

DEFLABEL (label_114)
  (Wrd15.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_126])), (Wrd9.pObj));

DEFLABEL (label_113)
  (Wrd8.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123])), (Wrd22.pObj));

DEFLABEL (label_112)
  (Wrd21.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122])), (Wrd15.pObj));

DEFLABEL (label_111)
  (Wrd14.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_121])), (Wrd9.pObj));

DEFLABEL (label_110)
  (Wrd8.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119])), (Wrd21.pObj));

DEFLABEL (label_109)
  (Wrd20.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_118])), (Wrd15.pObj));

DEFLABEL (label_108)
  (Wrd14.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_117])), (Wrd9.pObj));

DEFLABEL (label_107)
  (Wrd8.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_114])), (Wrd16.pObj));

DEFLABEL (label_106)
  (Wrd15.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_113])), (Wrd9.pObj));

DEFLABEL (label_105)
  (Wrd8.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_111])), (Wrd21.pObj));

DEFLABEL (label_104)
  (Wrd20.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110])), (Wrd15.pObj));

DEFLABEL (label_103)
  (Wrd14.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109])), (Wrd9.pObj));

DEFLABEL (label_102)
  (Wrd8.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105])), (Wrd21.pObj));

DEFLABEL (label_101)
  (Wrd20.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104])), (Wrd15.pObj));

DEFLABEL (label_100)
  (Wrd14.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103])), (Wrd9.pObj));

DEFLABEL (label_99)
  (Wrd8.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101])), (Wrd16.pObj));

DEFLABEL (label_98)
  (Wrd15.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100])), (Wrd9.pObj));

DEFLABEL (label_97)
  (Wrd8.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94])), (Wrd15.pObj));

DEFLABEL (label_96)
  (Wrd14.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd9.pObj));

DEFLABEL (label_95)
  (Wrd8.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91])), (Wrd15.pObj));

DEFLABEL (label_94)
  (Wrd14.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd9.pObj));

DEFLABEL (label_93)
  (Wrd8.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd15.pObj));

DEFLABEL (label_92)
  (Wrd14.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd9.pObj));

DEFLABEL (label_91)
  (Wrd8.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd15.pObj));

DEFLABEL (label_90)
  (Wrd14.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84])), (Wrd9.pObj));

DEFLABEL (label_89)
  (Wrd8.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82])), (Wrd15.pObj));

DEFLABEL (label_88)
  (Wrd14.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd9.pObj));

DEFLABEL (label_87)
  (Wrd8.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79])), (Wrd15.pObj));

DEFLABEL (label_86)
  (Wrd14.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78])), (Wrd9.pObj));

DEFLABEL (label_85)
  (Wrd8.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76])), (Wrd15.pObj));

DEFLABEL (label_84)
  (Wrd14.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd9.pObj));

DEFLABEL (label_83)
  (Wrd8.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd15.pObj));

DEFLABEL (label_82)
  (Wrd14.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71])), (Wrd9.pObj));

DEFLABEL (label_81)
  (Wrd8.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68])), (Wrd21.pObj));

DEFLABEL (label_80)
  (Wrd20.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd15.pObj));

DEFLABEL (label_79)
  (Wrd14.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd9.pObj));

DEFLABEL (label_78)
  (Wrd8.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_200)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63])), (Wrd16.pObj));

DEFLABEL (label_77)
  (Wrd15.Obj) = Rvl;
  goto label_199;

DEFLABEL (label_202)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd9.pObj));

DEFLABEL (label_76)
  (Wrd8.Obj) = Rvl;
  goto label_201;

DEFLABEL (label_204)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd9.pObj));

DEFLABEL (label_75)
  (Wrd8.Obj) = Rvl;
  goto label_203;

DEFLABEL (label_206)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd9.pObj));

DEFLABEL (label_74)
  (Wrd8.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_208)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd9.pObj));

DEFLABEL (label_73)
  (Wrd8.Obj) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd9.pObj));

DEFLABEL (label_72)
  (Wrd8.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_212)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd9.pObj));

DEFLABEL (label_71)
  (Wrd8.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd9.pObj));

DEFLABEL (label_70)
  (Wrd8.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd9.pObj));

DEFLABEL (label_69)
  (Wrd8.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd9.pObj));

DEFLABEL (label_68)
  (Wrd8.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd9.pObj));

DEFLABEL (label_67)
  (Wrd8.Obj) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd9.pObj));

DEFLABEL (label_66)
  (Wrd8.Obj) = Rvl;
  goto label_221;

DEFLABEL (label_224)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd13.pObj));

DEFLABEL (label_65)
  (Wrd12.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd13.pObj));

DEFLABEL (label_64)
  (Wrd12.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd13.pObj));

DEFLABEL (label_63)
  (Wrd12.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_230)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd13.pObj));

DEFLABEL (label_62)
  (Wrd12.Obj) = Rvl;
  goto label_229;

DEFLABEL (label_232)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd13.pObj));

DEFLABEL (label_61)
  (Wrd12.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_234)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd13.pObj));

DEFLABEL (label_60)
  (Wrd12.Obj) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd9.pObj));

DEFLABEL (label_59)
  (Wrd8.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_238)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd14.pObj));

DEFLABEL (label_58)
  (Wrd13.Obj) = Rvl;
  goto label_237;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_supported_values_so_2948a9b5f7387814 [21] =
  {
    { "supported_values_so_code_1", 21, supported_values_so_code_1 },
    { "supported_values_so_code_2", 1, supported_values_so_code_2 },
    { "supported_values_so_code_3", 4, supported_values_so_code_3 },
    { "supported_values_so_code_4", 2, supported_values_so_code_4 },
    { "supported_values_so_code_5", 1, supported_values_so_code_5 },
    { "supported_values_so_code_6", 1, supported_values_so_code_6 },
    { "supported_values_so_code_7", 8, supported_values_so_code_7 },
    { "supported_values_so_code_8", 5, supported_values_so_code_8 },
    { "supported_values_so_code_9", 19, supported_values_so_code_9 },
    { "supported_values_so_code_10", 3, supported_values_so_code_10 },
    { "supported_values_so_code_11", 8, supported_values_so_code_11 },
    { "supported_values_so_code_12", 7, supported_values_so_code_12 },
    { "supported_values_so_code_13", 2, supported_values_so_code_13 },
    { "supported_values_so_code_14", 4, supported_values_so_code_14 },
    { "supported_values_so_code_15", 7, supported_values_so_code_15 },
    { "supported_values_so_code_16", 4, supported_values_so_code_16 },
    { "supported_values_so_code_17", 1, supported_values_so_code_17 },
    { "supported_values_so_code_18", 2, supported_values_so_code_18 },
    { "supported_values_so_code_19", 3, supported_values_so_code_19 },
    { "supported_values_so_code_20", 6, supported_values_so_code_20 },
    { "supported_values_so_code_21", 3, supported_values_so_code_21 }
  };

int
decl_supported_values_so_2948a9b5f7387814 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_supported_values_so_2948a9b5f7387814);
  return (0);
}

DECLARE_COMPILED_CODE ("supported-values.so", 117, decl_supported_values_so_2948a9b5f7387814, supported_values_so_2948a9b5f7387814)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_supported_values_so_data_2948a9b5f7387814 [4082] =
  "\xe1\x02\x28\xf8\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x06\x07\x85"
  "\xc2\x02\x83\x0c\x0c\x84\xc1\xb9\x82\x0c\xc2\xba\x81\x0c\x0d\xbb"
  "\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbc\x28\x0d\x28\xb3\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82"
  "\x88\x0d\xbd\x22\x29\x21\x9d\x2b\xbe\x1d\xb0\x83\x88\x07\xb5\xb2"
  "\x80\xb1\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0"
  "\x84\x88\x08\x1d\x0d\xb9\x24\x28\x0d\xbf\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x85\x88\x08\x28\x0d\x1c\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x86\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x0d\x1c\x1b\x1b\x24\x28\xb4\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\xb4\x28\x0d"
  "\xbc\x28\xb5\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x28\xb5\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28"
  "\xb5\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x1b\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x28\x1b\x28\x1b\x28\xb5\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb8\x17\x1c"
  "\x88\x1b\xb0\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x0d\x1c"
  "\x1b\x99\x1b\x2a\x1b\x2a\x99\x1b\x2a\x0d\x1c\x1b\x2a\x1b\x1b\x2a"
  "\x81\x0d\xb4\x0d\x1c\x1b\x1b\x9b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x9b\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x0d\x0d\x0d\x0d\x1c\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x0d\xb5\xb1\x1b\x9a\x1b\x2a\x0d\xb2\x2a\x9a\x0d"
  "\x0d\x1b\x1b\x0d\x1c\x1b\x0d\x1c\x0d\x1c\xb7\xb6\x2a\xc3\x0d\x1c"
  "\x0d\x0c\x1b\x1b\x1b\x9a\x83\x82\x81\x9a\xb5\x84\x0d\x1c\x0d\x99"
  "\xb3\x2a\x06\x99\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b"
  "\x1b\xb5\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x24\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23"
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
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x15\x73\x75"
  "\x70\x70\x6f\x72\x74\x65\x64\x2d\x76\x61\x6c\x75\x65\x73\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x74\x79\x70\x65\x3f\x1e\x02\x29\x11\x2c\x0a\x20\x20\x20\x69\x6e"
  "\x66\x6f\x72\x6d\x61\x6e\x74\x73\x3d\x0e\x76\x65\x63\x74\x6f\x72"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x0f\x2c\x0a\x20\x20\x20\x70\x72\x65"
  "\x6d\x69\x73\x65\x73\x3d\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65"
  "\x66\x09\x23\x28\x76\x61\x6c\x75\x65\x3d\x05\x6e\x61\x6d\x65\x02"
  "\x04\x1c\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x04\x08\x64"
  "\x69\x73\x70\x6c\x61\x79\x04\x06\x77\x72\x69\x74\x65\x04\x04\x6d"
  "\x61\x70\x03\x0f\x64\x69\x61\x67\x72\x61\x6d\x2d\x69\x6e\x70\x75"
  "\x74\x73\x03\x07\x8a\x01\x2c\x81\x85\x02\x89\x01\x2a\x81\x87\x02"
  "\x88\x01\x28\x81\x85\x02\x87\x01\x26\x81\x83\x02\x86\x01\x24\x81"
  "\x83\x02\x85\x01\x22\x83\x04\x84\x01\x20\x81\x83\x02\x83\x01\x1e"
  "\x81\x89\x02\x82\x01\x1c\x81\x8b\x02\x81\x01\x1a\x81\x85\x02\x80"
  "\x01\x18\x81\x85\x02\x7f\x16\x81\x85\x02\x7e\x14\x81\x85\x02\x7d"
  "\x12\x81\x85\x02\x7c\x10\x81\x89\x02\x7b\x0e\x81\x85\x02\x7a\x0c"
  "\x81\x85\x02\x79\x0a\x81\x89\x02\x78\x08\x81\x85\x02\x77\x06\x81"
  "\x85\x02\x76\x04\x84\x06\x2b\x4c\x02\x0a\x73\x75\x70\x70\x6f\x72"
  "\x74\x65\x64\x8b\x01\x04\x85\x08\x03\x02\x8f\x01\x0a\x81\x83\x02"
  "\x8e\x01\x08\x81\x83\x02\x8d\x01\x06\x81\x83\x02\x8c\x01\x04\x83"
  "\x04\x09\x11\x02\x08\x11\x2a\x61\x63\x74\x69\x76\x65\x2d\x64\x69"
  "\x61\x67\x72\x61\x6d\x2a\x02\x05\x0b\x25\x73\x75\x70\x70\x6f\x72"
  "\x74\x65\x64\x02\x91\x01\x06\x81\x87\x02\x90\x01\x04\x85\x06\x05"
  "\x0f\x09\x02\x05\x0b\x63\x6f\x6e\x74\x69\x6e\x67\x65\x6e\x74\x0a"
  "\x02\x92\x01\x04\x83\x04\x03\x0a\x0b\x02\x93\x01\x04\x83\x04\x03"
  "\x0c\x02\x08\x04\x65\x71\x3f\x0d\x02\x03\x0c\x76\x26\x73\x2d\x73"
  "\x75\x70\x70\x6f\x72\x74\x0e\x05\x06\x6c\x73\x65\x74\x3d\x0f\x05"
  "\x07\x6c\x73\x65\x74\x3c\x3d\x04\x9b\x01\x12\x81\x87\x02\x9a\x01"
  "\x10\x81\x8b\x02\x99\x01\x0e\x81\x89\x02\x98\x01\x0c\x81\x87\x02"
  "\x97\x01\x0a\x81\x87\x02\x96\x01\x08\x81\x85\x02\x95\x01\x06\x81"
  "\x85\x02\x94\x01\x04\x84\x06\x11\x1d\x10\x02\x09\x06\x61\x70\x70"
  "\x6c\x79\x0b\x6c\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x11\x0e\x0d"
  "\x04\x04\x02\xa0\x01\x0c\x81\x87\x02\x9f\x01\x0a\x81\x85\x02\x9e"
  "\x01\x08\x81\x89\x02\x9d\x01\x06\x81\x83\x02\x9c\x01\x04\xff\x03"
  "\x0b\x16\x12\x02\x0a\x0d\x02\x03\x0a\x76\x26\x73\x2d\x76\x61\x6c"
  "\x75\x65\x13\x04\x06\x6d\x65\x72\x67\x65\x14\x03\x0f\x65\x66\x66"
  "\x65\x63\x74\x66\x75\x6c\x2d\x69\x6e\x66\x6f\x03\x0c\x2d\x3e\x65"
  "\x66\x66\x65\x63\x74\x66\x75\x6c\x03\x12\x65\x66\x66\x65\x63\x74"
  "\x66\x75\x6c\x2d\x65\x66\x66\x65\x63\x74\x73\x04\x0f\x6d\x65\x72"
  "\x67\x65\x2d\x73\x75\x70\x70\x6f\x72\x74\x73\x15\x03\x0c\x65\x66"
  "\x66\x65\x63\x74\x66\x75\x6c\x2d\x3e\x04\x1a\x6d\x6f\x72\x65\x2d"
  "\x69\x6e\x66\x6f\x72\x6d\x61\x74\x69\x76\x65\x2d\x73\x75\x70\x70"
  "\x6f\x72\x74\x3f\x16\x04\x09\x69\x6d\x70\x6c\x69\x65\x73\x3f\x04"
  "\x0f\x6d\x61\x6b\x65\x2d\x65\x66\x66\x65\x63\x74\x66\x75\x6c\x03"
  "\x0f\x76\x26\x73\x2d\x69\x6e\x66\x6f\x72\x6d\x61\x6e\x74\x73\x17"
  "\x04\x03\x19\x61\x74\x74\x61\x63\x68\x2d\x73\x75\x70\x70\x6f\x72"
  "\x74\x2d\x74\x6f\x2d\x65\x66\x66\x65\x63\x74\x05\x05\x11\x10\xb3"
  "\x01\x28\x81\x99\x02\xb2\x01\x26\x81\x97\x02\xb1\x01\x24\x81\x95"
  "\x02\xb0\x01\x22\x81\x95\x02\xaf\x01\x20\x81\x93\x02\xae\x01\x1e"
  "\x81\x95\x02\xad\x01\x1c\x81\x93\x02\xac\x01\x1a\x81\x8f\x02\xab"
  "\x01\x18\x81\x91\x02\xaa\x01\x16\x81\x93\x02\xa9\x01\x14\x81\x93"
  "\x02\xa8\x01\x12\x81\x8d\x02\xa7\x01\x10\x81\x8d\x02\xa6\x01\x0e"
  "\x81\x8b\x02\xa5\x01\x0c\x81\x8b\x02\xa4\x01\x0a\x81\x89\x02\xa3"
  "\x01\x08\x81\x87\x02\xa2\x01\x06\x81\x85\x02\xa1\x01\x04\x84\x06"
  "\x27\x4b\x11\x02\x0b\x03\x18\x67\x65\x6e\x65\x72\x69\x63\x2d\x61"
  "\x74\x74\x61\x63\x68\x2d\x70\x72\x65\x6d\x69\x73\x65\x73\x18\x02"
  "\xb6\x01\x08\x81\x87\x02\xb5\x01\x06\x81\x85\x02\xb4\x01\x04\x83"
  "\x04\x07\x0d\x19\x02\x0c\x03\x17\x63\x65\x6c\x6c\x2d\x6a\x6f\x69"
  "\x6e\x2d\x65\x66\x66\x65\x63\x74\x2d\x63\x65\x6c\x6c\x31\x03\x19"
  "\x63\x65\x6c\x6c\x2d\x6a\x6f\x69\x6e\x2d\x65\x66\x66\x65\x63\x74"
  "\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x03\x17\x63\x65\x6c\x6c\x2d\x6a"
  "\x6f\x69\x6e\x2d\x65\x66\x66\x65\x63\x74\x2d\x63\x65\x6c\x6c\x32"
  "\x03\x10\x67\x65\x6e\x65\x72\x69\x63\x2d\x66\x6c\x61\x74\x74\x65"
  "\x6e\x1a\x03\x09\x6d\x61\x6b\x65\x2d\x74\x6d\x73\x04\x05\x16\x6d"
  "\x61\x6b\x65\x2d\x63\x65\x6c\x6c\x2d\x6a\x6f\x69\x6e\x2d\x65\x66"
  "\x66\x65\x63\x74\x08\xbe\x01\x12\x81\x87\x02\xbd\x01\x10\x81\x8f"
  "\x02\xbc\x01\x0e\x81\x8b\x02\xbb\x01\x0c\x81\x89\x02\xba\x01\x0a"
  "\x81\x87\x02\xb9\x01\x08\x81\x85\x02\xb8\x01\x06\x81\x85\x02\xb7"
  "\x01\x04\x83\x04\x11\x23\x1b\x02\x0d\x0d\x02\x03\x0e\x03\x13\x05"
  "\x0f\x04\x0c\x65\x71\x75\x69\x76\x61\x6c\x65\x6e\x74\x3f\x0f\x05"
  "\xc5\x01\x10\x81\x85\x02\xc4\x01\x0e\x81\x8b\x02\xc3\x01\x0c\x81"
  "\x89\x02\xc2\x01\x0a\x81\x85\x02\xc1\x01\x08\x81\x87\x02\xc0\x01"
  "\x06\x81\x85\x02\xbf\x01\x04\x84\x06\x0f\x1d\x0d\x02\x0e\x03\x13"
  "\x03\x0f\x63\x6f\x6e\x74\x72\x61\x64\x69\x63\x74\x6f\x72\x79\x3f"
  "\x1c\x03\xc7\x01\x06\x81\x83\x02\xc6\x01\x04\x83\x04\x05\x0d\x1d"
  "\x02\x0f\x08\x6e\x6f\x74\x68\x69\x6e\x67\x1e\x02\x03\x13\x03\x09"
  "\x6e\x6f\x74\x68\x69\x6e\x67\x3f\x1f\x03\xcb\x01\x0a\x81\x85\x02"
  "\xca\x01\x08\x81\x83\x02\xc9\x01\x06\x81\x83\x02\xc8\x01\x04\x83"
  "\x04\x09\x13\x20\x02\x10\x04\x15\x03\x06\x76\x26\x73\x2d\x3e\x21"
  "\x03\x13\x04\x05\xd2\x01\x10\x81\x8d\x02\xd1\x01\x0e\x81\x8b\x02"
  "\xd0\x01\x0c\x81\x89\x02\xcf\x01\x0a\x81\x87\x02\xce\x01\x08\x81"
  "\x85\x02\xcd\x01\x06\x81\x85\x02\xcc\x01\x04\x84\x06\x0f\x1b\x22"
  "\x02\x11\x03\x0e\x03\x13\x04\x04\x0d\x67\x65\x6e\x65\x72\x69\x63"
  "\x2d\x62\x69\x6e\x64\x05\xd6\x01\x0a\x81\x8b\x02\xd5\x01\x08\x81"
  "\x87\x02\xd4\x01\x06\x81\x85\x02\xd3\x01\x04\x84\x06\x09\x15\x23"
  "\x02\x12\xd7\x01\x04\x83\x04\x03\x24\x02\x13\x1e\x02\xd9\x01\x06"
  "\x81\x83\x02\xd8\x01\x04\x83\x04\x05\x0a\x1e\x02\x14\x03\x05\x76"
  "\x26\x73\x3f\x25\x03\x13\x03\x1f\x04\xdc\x01\x08\x81\x83\x02\xdb"
  "\x01\x06\x81\x83\x02\xda\x01\x04\x83\x04\x07\x11\x1f\x02\x15\x03"
  "\x13\x03\x1a\x04\x15\x04\x05\xe2\x01\x0e\x81\x89\x02\xe1\x01\x0c"
  "\x81\x87\x02\xe0\x01\x0a\x81\x87\x02\xdf\x01\x08\x81\x85\x02\xde"
  "\x01\x06\x81\x83\x02\xdd\x01\x04\x83\x04\x0d\x19\x26\x02\x16\x03"
  "\x25\x03\x13\x03\xe5\x01\x08\x81\x83\x02\xe4\x01\x06\x81\x83\x02"
  "\xe3\x01\x04\x83\x04\x07\x0f\x16\x27\x27\x04\x26\x04\x1e\x04\x1f"
  "\x04\x24\x04\x23\x04\x0f\x76\x26\x73\x2d\x62\x69\x6e\x61\x72\x79"
  "\x2d\x6d\x61\x70\x27\x21\x22\x04\x20\x04\x1d\x04\x10\x76\x26\x73"
  "\x2d\x65\x71\x75\x69\x76\x61\x6c\x65\x6e\x74\x3f\x26\x0d\x04\x18"
  "\x1b\x04\x0f\x61\x74\x74\x61\x63\x68\x2d\x73\x75\x70\x70\x6f\x72"
  "\x74\x0a\x76\x26\x73\x2d\x6d\x65\x72\x67\x65\x24\x15\x16\x19\x04"
  "\x11\x04\x12\x04\x10\x04\x0c\x04\x0d\x2d\x3e\x63\x6f\x6e\x74\x69"
  "\x6e\x67\x65\x6e\x74\x23\x0b\x04\x11\x63\x6f\x6e\x74\x69\x6e\x67"
  "\x65\x6e\x74\x2d\x61\x62\x6c\x65\x3f\x22\x16\x63\x6f\x6e\x74\x69"
  "\x6e\x67\x65\x6e\x74\x2d\x69\x6e\x66\x6f\x72\x6d\x61\x6e\x74\x73"
  "\x14\x63\x6f\x6e\x74\x69\x6e\x67\x65\x6e\x74\x2d\x70\x72\x65\x6d"
  "\x69\x73\x65\x73\x10\x63\x6f\x6e\x74\x69\x6e\x67\x65\x6e\x74\x2d"
  "\x69\x6e\x66\x6f\x0c\x63\x6f\x6e\x74\x69\x6e\x67\x65\x6e\x74\x3f"
  "\x21\x0a\x13\x64\x65\x70\x65\x6e\x64\x73\x2d\x69\x6e\x66\x6f\x72"
  "\x6d\x61\x6e\x74\x73\x11\x64\x65\x70\x65\x6e\x64\x73\x2d\x70\x72"
  "\x65\x6d\x69\x73\x65\x73\x0e\x64\x65\x70\x65\x6e\x64\x73\x2d\x76"
  "\x61\x6c\x75\x65\x09\x64\x65\x70\x65\x6e\x64\x73\x3f\x15\x6d\x61"
  "\x6b\x65\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x74\x2d\x76\x61\x6c"
  "\x75\x65\x14\x73\x65\x74\x2d\x76\x26\x73\x2d\x69\x6e\x66\x6f\x72"
  "\x6d\x61\x6e\x74\x73\x21\x25\x09\x04\x05\x75\x73\x65\x72\x04\x11"
  "\x73\x65\x74\x2d\x76\x26\x73\x2d\x73\x75\x70\x70\x6f\x72\x74\x21"
  "\x0f\x73\x65\x74\x2d\x76\x26\x73\x2d\x76\x61\x6c\x75\x65\x21\x17"
  "\x0e\x0b\x69\x6e\x66\x6f\x72\x6d\x61\x6e\x74\x73\x20\x13\x08\x73"
  "\x75\x70\x70\x6f\x72\x74\x1f\x06\x76\x61\x6c\x75\x65\x1e\x04\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x08\x72\x74\x64\x3a\x76\x26\x73\x1d\x07\x76\x65\x63\x74\x6f\x72"
  "\x04\x76\x26\x73\x20\x1f\x1e\x10\x64\x65\x70\x65\x6e\x64\x73\x2d"
  "\x70\x72\x69\x6e\x74\x65\x72\x20\x10\x2a\x64\x65\x70\x65\x6e\x64"
  "\x73\x2d\x77\x61\x6c\x6c\x70\x2a\x04\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x0a\x1b\x6d\x61\x6b\x65"
  "\x2d\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2d\x74\x79\x70\x65\x04\x25\x6e\x61\x6d\x65\x64\x2d\x73\x74"
  "\x72\x75\x63\x74\x75\x72\x65\x2f\x73\x65\x74\x2d\x74\x61\x67\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x21\x04\x21\x64\x65"
  "\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x76"
  "\x65\x63\x74\x6f\x72\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x04\x21"
  "\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65"
  "\x2f\x76\x65\x63\x74\x6f\x72\x2d\x6d\x6f\x64\x69\x66\x69\x65\x72"
  "\x06\x20\x1d\x25\x13\x0e\x17\x21\x23\x22\x09\x3c\x73\x79\x6d\x62"
  "\x6f\x6c\x3e\x09\x3c\x6e\x75\x6d\x62\x65\x72\x3e\x0a\x3c\x62\x6f"
  "\x6f\x6c\x65\x61\x6e\x3e\x0e\x72\x74\x64\x3a\x25\x69\x6e\x74\x65"
  "\x72\x76\x61\x6c\x18\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x2d"
  "\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x3f\x09\x63\x6c\x6f"
  "\x73\x75\x72\x65\x3f\x06\x70\x61\x69\x72\x3f\x06\x6e\x75\x6c\x6c"
  "\x3f\x12\x63\x65\x6c\x6c\x2d\x6a\x6f\x69\x6e\x2d\x65\x66\x66\x65"
  "\x63\x74\x3f\x18\x24\x14\x26\x0f\x1c\x27\x0b\x62\x69\x6e\x61\x72"
  "\x79\x2d\x6d\x61\x70\x05\x61\x6e\x79\x3f\x0f\x67\x65\x6e\x65\x72"
  "\x69\x63\x2d\x75\x6e\x70\x61\x63\x6b\x1a\x1f\x03\x14\x63\x6f\x65"
  "\x72\x63\x61\x62\x69\x6c\x69\x74\x79\x2d\x74\x65\x73\x74\x65\x72"
  "\x04\x08\x63\x6f\x65\x72\x63\x65\x72\x05\x0b\x64\x65\x66\x68\x61"
  "\x6e\x64\x6c\x65\x72\x27\x06\x27\x05\x16\x74\x61\x67\x2d\x63\x6f"
  "\x65\x72\x63\x69\x6f\x6e\x2d\x6d\x65\x74\x61\x64\x61\x74\x61\x04"
  "\x11\x64\x65\x63\x6c\x61\x72\x65\x2d\x63\x6f\x65\x72\x63\x69\x6f"
  "\x6e\x04\x16\x6d\x61\x6b\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d"
  "\x6f\x70\x65\x72\x61\x74\x6f\x72\x05\x14\x64\x65\x66\x68\x61\x6e"
  "\x64\x6c\x65\x72\x2d\x63\x6f\x65\x72\x63\x69\x6e\x67\x09\x75\xec"
  "\x01\x80\x80\x04\x74\xea\x01\x81\x81\x02\x73\xe8\x01\x81\x81\x02"
  "\x72\xe6\x01\x81\x85\x02\x71\xe4\x01\x81\x83\x02\x70\xe2\x01\x81"
  "\x89\x02\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x89\x02\x6d\xdc"
  "\x01\x81\x85\x02\x6c\xda\x01\x81\x83\x02\x6b\xd8\x01\x81\x8b\x02"
  "\x6a\xd6\x01\x81\x87\x02\x69\xd4\x01\x81\x85\x02\x68\xd2\x01\x81"
  "\x83\x02\x67\xd0\x01\x81\x89\x02\x66\xce\x01\x81\x87\x02\x65\xcc"
  "\x01\x81\x85\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01\x81\x83\x02"
  "\x62\xc6\x01\x81\x89\x02\x61\xc4\x01\x81\x85\x02\x60\xc2\x01\x81"
  "\x83\x02\x5f\xc0\x01\x81\x89\x02\x5e\xbe\x01\x81\x87\x02\x5d\xbc"
  "\x01\x81\x85\x02\x5c\xba\x01\x81\x83\x02\x5b\xb8\x01\x81\x83\x02"
  "\x5a\xb6\x01\x81\x89\x02\x59\xb4\x01\x81\x87\x02\x58\xb2\x01\x81"
  "\x85\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x85\x02\x55\xac"
  "\x01\x81\x89\x02\x54\xaa\x01\x81\x85\x02\x53\xa8\x01\x81\x83\x02"
  "\x52\xa6\x01\x81\x83\x02\x51\xa4\x01\x81\x83\x02\x50\xa2\x01\x81"
  "\x87\x02\x4f\xa0\x01\x81\x85\x02\x4e\x9e\x01\x81\x83\x02\x4d\x9c"
  "\x01\x81\x87\x02\x4c\x9a\x01\x81\x85\x02\x4b\x98\x01\x81\x83\x02"
  "\x4a\x96\x01\x81\x87\x02\x49\x94\x01\x81\x85\x02\x48\x92\x01\x81"
  "\x83\x02\x47\x90\x01\x81\x87\x02\x46\x8e\x01\x81\x85\x02\x45\x8c"
  "\x01\x81\x83\x02\x44\x8a\x01\x81\x87\x02\x43\x88\x01\x81\x85\x02"
  "\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x87\x02\x40\x82\x01\x81"
  "\x85\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x87\x02\x3d\x7c\x81"
  "\x85\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x87\x02\x3a\x76\x81\x85"
  "\x02\x39\x74\x81\x83\x02\x38\x72\x81\x89\x02\x37\x70\x81\x87\x02"
  "\x36\x6e\x81\x85\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x85\x02\x33"
  "\x68\x81\x89\x02\x32\x66\x81\x85\x02\x31\x64\x81\x83\x02\x30\x62"
  "\x81\x85\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81"
  "\x85\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x85\x02\x2a\x56\x81\x83"
  "\x02\x29\x54\x81\x85\x02\x28\x52\x81\x83\x02\x27\x50\x81\x85\x02"
  "\x26\x4e\x81\x83\x02\x25\x4c\x81\x85\x02\x24\x4a\x81\x83\x02\x23"
  "\x48\x81\x85\x02\x22\x46\x81\x83\x02\x21\x44\x81\x85\x02\x20\x42"
  "\x81\x83\x02\x1f\x40\x81\x85\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81"
  "\x85\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x83"
  "\x02\x19\x34\x81\x85\x02\x18\x32\x81\x83\x02\x17\x30\x81\x85\x02"
  "\x16\x2e\x81\x89\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x85\x02\x13"
  "\x28\x81\x89\x02\x12\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22"
  "\x81\x89\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81"
  "\x89\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x89"
  "\x02\x09\x14\x81\x83\x02\x08\x12\x81\x89\x02\x07\x10\x81\x83\x02"
  "\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x85\x02\x03"
  "\x08\x81\x83\x02\x02\x06\x81\x8b\x02\x01\x04\x81\x83\x02\xeb\x01"
  "\xe1\x02";

SCHEME_OBJECT *
supported_values_so_data_2948a9b5f7387814 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_supported_values_so_data_2948a9b5f7387814 [0]))), (sizeof (prog_supported_values_so_data_2948a9b5f7387814)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_133]));
}

DECLARE_COMPILED_DATA_NS ("supported-values.so", supported_values_so_data_2948a9b5f7387814)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("supported-values.so", "7d3196087883717b")
