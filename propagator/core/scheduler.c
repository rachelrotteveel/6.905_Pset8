/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-03T22:03:31-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 8
#define DEBUGGING_LABEL_1_2 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto make_scheduler_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_scheduler_3)
DEFLABEL (make_scheduler_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define LABEL_2_12 15
#define ENVIRONMENT_LABEL_2_3 30
#define DEBUGGING_LABEL_2_2 29
#define OBJECT_2_2 28
#define OBJECT_2_1 27
#define OBJECT_2_0 26
#define EXECUTE_CACHE_2_11 17
#define EXECUTE_CACHE_2_6 19
#define FREE_ASSIGNMENT_2_3 22
#define FREE_ASSIGNMENT_2_2 23
#define FREE_ASSIGNMENT_2_1 24
#define FREE_ASSIGNMENT_2_0 25
#define FREE_REFERENCES_LABEL_2_0 16
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto initialize_scheduler_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_scheduler_9)
DEFLABEL (initialize_scheduler_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_19)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd19.Obj) = (current_block [OBJECT_2_0]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd18.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd31.Obj) = (current_block [OBJECT_2_1]);
  (Wrd38.Obj) = ((Wrd30.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd30.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_13)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_2_2]);
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_12])), (Wrd6.pObj), Rvl);

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd38.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_9])), (Wrd30.pObj), (Wrd31.Obj));

DEFLABEL (label_6)
  goto label_13;

DEFLABEL (label_18)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_8])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_5)
  goto label_16;

DEFLABEL (label_21)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define TAG_3_8 1
#define LABEL_3_5 7
#define TAG_3_6 2
#define LABEL_3_12 9
#define LABEL_3_13 11
#define LABEL_3_14 13
#define LABEL_3_15 15
#define LABEL_3_16 17
#define LABEL_3_17 19
#define LABEL_3_18 21
#define LABEL_3_19 23
#define LABEL_3_20 25
#define LABEL_3_21 27
#define LABEL_3_22 29
#define LABEL_3_23 31
#define LABEL_3_10 33
#define ENVIRONMENT_LABEL_3_3 51
#define DEBUGGING_LABEL_3_2 50
#define OBJECT_3_0 49
#define EXECUTE_CACHE_3_11 35
#define EXECUTE_CACHE_3_9 37
#define FREE_REFERENCE_3_3 40
#define FREE_REFERENCE_3_2 41
#define FREE_REFERENCE_3_1 42
#define FREE_REFERENCE_3_0 43
#define FREE_ASSIGNMENT_3_3 45
#define FREE_ASSIGNMENT_3_2 46
#define FREE_ASSIGNMENT_3_1 47
#define FREE_ASSIGNMENT_3_0 48
#define FREE_REFERENCES_LABEL_3_0 34
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd201;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
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
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
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
      goto with_independent_scheduler_28;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_45;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto swapB_44;

    case 3:
      current_block = (Rpc - LABEL_3_12);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_3_13);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_3_14);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_3_15);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_3_16);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_3_18);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_3_20);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_3_21);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_3_22);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_3_23);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_independent_scheduler_43)
DEFLABEL (with_independent_scheduler_28)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 4;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  Wrd39 = Wrd41;
  ((Wrd39.pObj) [2]) = (Wrd7.Obj);
  ((Wrd39.pObj) [3]) = (Wrd11.Obj);
  ((Wrd39.pObj) [4]) = (Wrd15.Obj);
  ((Wrd39.pObj) [5]) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [5]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Rsp [5]) = (Wrd42.Obj);
  (Rsp [4]) = (Wrd23.Obj);
  (Rsp [3]) = (Wrd42.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_44)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (swapB_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_81;

DEFLABEL (label_80)
  Wrd5 = Wrd9;

DEFLABEL (label_79)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_78;

DEFLABEL (label_77)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_76)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [5]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_75;

DEFLABEL (label_74)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_73)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_72;

DEFLABEL (label_71)
  Wrd57 = Wrd61;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_69;

DEFLABEL (label_68)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_67)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [4]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_66;

DEFLABEL (label_65)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_64)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  Wrd109 = Wrd113;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_58)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [3]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_55)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  Wrd161 = Wrd165;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_49)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [2]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_46)
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_47;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_23])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_41)
  goto label_46;

DEFLABEL (label_51)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_22])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_40)
  goto label_49;

DEFLABEL (label_54)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_53;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_21])), (Wrd162.pObj));

DEFLABEL (label_39)
  (Wrd161.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_57)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_20])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_38)
  goto label_55;

DEFLABEL (label_60)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_19])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_37)
  goto label_58;

DEFLABEL (label_63)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_62;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_18])), (Wrd110.pObj));

DEFLABEL (label_36)
  (Wrd109.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_66)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_65;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_17])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_35)
  goto label_64;

DEFLABEL (label_69)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_68;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_16])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_34)
  goto label_67;

DEFLABEL (label_72)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_71;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_15])), (Wrd58.pObj));

DEFLABEL (label_33)
  (Wrd57.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_75)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_74;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_32)
  goto label_73;

DEFLABEL (label_78)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_77;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_31)
  goto label_76;

DEFLABEL (label_81)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_80;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_12])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_79;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 5
#define DEBUGGING_LABEL_4_2 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto execute_propagator_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (execute_propagator_3)
DEFLABEL (execute_propagator_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_8 9
#define LABEL_5_12 11
#define LABEL_5_10 13
#define LABEL_5_15 15
#define LABEL_5_14 17
#define LABEL_5_17 19
#define ENVIRONMENT_LABEL_5_3 38
#define DEBUGGING_LABEL_5_2 37
#define OBJECT_5_1 36
#define OBJECT_5_0 35
#define EXECUTE_CACHE_5_18 21
#define EXECUTE_CACHE_5_16 23
#define EXECUTE_CACHE_5_13 25
#define EXECUTE_CACHE_5_11 27
#define EXECUTE_CACHE_5_9 29
#define EXECUTE_CACHE_5_7 31
#define FREE_REFERENCE_5_0 34
#define FREE_REFERENCES_LABEL_5_0 20
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5_4);
      goto alert_propagators_7;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto lambda_4;

    case 4:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_5_15);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alert_propagators_11)
DEFLABEL (alert_propagators_7)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_5);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_5_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_12);

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_14;
  Wrd11 = Wrd15;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_17);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_15])), (Wrd12.pObj));

DEFLABEL (label_9)
  (Wrd11.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCE_6_0 10
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto all_propagators_0;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (all_propagators_4)
DEFLABEL (all_propagators_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define ENVIRONMENT_LABEL_7_3 17
#define DEBUGGING_LABEL_7_2 16
#define OBJECT_7_0 15
#define EXECUTE_CACHE_7_9 9
#define EXECUTE_CACHE_7_8 11
#define EXECUTE_CACHE_7_6 13
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto alert_all_propagatorsB_2;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alert_all_propagatorsB_5)
DEFLABEL (alert_all_propagatorsB_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define TAG_8_6 1
#define LABEL_8_10 7
#define TAG_8_11 2
#define LABEL_8_8 9
#define TAG_8_9 3
#define LABEL_8_13 11
#define LABEL_8_14 13
#define LABEL_8_15 15
#define ENVIRONMENT_LABEL_8_3 27
#define DEBUGGING_LABEL_8_2 26
#define OBJECT_8_0 25
#define EXECUTE_CACHE_8_12 17
#define EXECUTE_CACHE_8_7 19
#define FREE_REFERENCE_8_0 22
#define FREE_ASSIGNMENT_8_0 24
#define FREE_REFERENCES_LABEL_8_0 16
#define NUMBER_OF_LINKER_SECTIONS_8_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_8_4);
      goto with_process_abortion_10;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_8_10);
      goto lambda_19;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto swapB_18;

    case 4:
      current_block = (Rpc - LABEL_8_13);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_8_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_8_15);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_process_abortion_16)
DEFLABEL (with_process_abortion_10)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_8_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_8])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_10])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_8_10);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_18)
  CLOSURE_HEADER (LABEL_8_8);

DEFLABEL (swapB_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_23)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_8_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_14)
  goto label_20;

DEFLABEL (label_25)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_13)
  goto label_23;

DEFLABEL (label_28)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_8_13])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_5 3
#define LABEL_9_4 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define LABEL_9_11 11
#define LABEL_9_9 13
#define LABEL_9_8 15
#define LABEL_9_14 17
#define LABEL_9_15 19
#define ENVIRONMENT_LABEL_9_3 40
#define DEBUGGING_LABEL_9_2 39
#define OBJECT_9_5 38
#define OBJECT_9_4 37
#define OBJECT_9_3 36
#define OBJECT_9_2 35
#define OBJECT_9_1 34
#define OBJECT_9_0 33
#define EXECUTE_CACHE_9_13 21
#define EXECUTE_CACHE_9_12 23
#define EXECUTE_CACHE_9_10 25
#define FREE_REFERENCE_9_2 28
#define FREE_REFERENCE_9_1 29
#define FREE_REFERENCE_9_0 30
#define FREE_ASSIGNMENT_9_0 32
#define FREE_REFERENCES_LABEL_9_0 20
#define NUMBER_OF_LINKER_SECTIONS_9_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_9_4);
      goto abort_process_11;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_9_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_9_15);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (abort_process_19)
DEFLABEL (abort_process_11)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_29;
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_27;
  Wrd16 = Wrd20;

DEFLABEL (label_26)
  (Wrd25.Obj) = (current_block [OBJECT_9_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_9_2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_9_3]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_9_4]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_9_5]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_5);

DEFLABEL (label_25)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_24;
  Wrd46 = Wrd50;

DEFLABEL (label_23)
  if ((Wrd46.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd55.Obj);
  goto label_20;

DEFLABEL (label_21)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_20)
DEFLABEL (label_22)
  (Wrd60.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd47.pObj));

DEFLABEL (label_15)
  (Wrd46.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_11])), (Wrd17.pObj));

DEFLABEL (label_14)
  (Wrd16.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_6])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_30)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_17)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_9_14])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_7 5
#define LABEL_10_8 7
#define LABEL_10_5 9
#define LABEL_10_11 11
#define LABEL_10_9 13
#define ENVIRONMENT_LABEL_10_3 26
#define DEBUGGING_LABEL_10_2 25
#define OBJECT_10_1 24
#define OBJECT_10_0 23
#define EXECUTE_CACHE_10_10 15
#define EXECUTE_CACHE_10_6 17
#define FREE_REFERENCE_10_0 20
#define FREE_ASSIGNMENT_10_0 22
#define FREE_REFERENCES_LABEL_10_0 14
#define NUMBER_OF_LINKER_SECTIONS_10_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_10_4);
      goto run_3;

    case 1:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_10_9);
      goto do_run_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_8)
DEFLABEL (run_3)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd27.Obj) = ((Wrd19.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_14;

DEFLABEL (label_13)
  ((Wrd19.pObj) [0]) = Rvl;

DEFLABEL (label_12)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_11;
  Wrd7 = Wrd11;

DEFLABEL (label_10)
  Rvl = (Wrd7.Obj);
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_11])), (Wrd8.pObj));

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_14)
  if ((Wrd27.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_13;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_8])), (Wrd19.pObj), Rvl);

DEFLABEL (label_6)
  goto label_12;

DEFLABEL (do_run_9)
DEFLABEL (do_run_2)
  INTERRUPT_CHECK (26, LABEL_10_9);
  (Wrd5.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_15 7
#define TAG_11_16 2
#define LABEL_11_13 9
#define TAG_11_14 3
#define LABEL_11_11 11
#define TAG_11_12 4
#define LABEL_11_9 13
#define TAG_11_10 5
#define LABEL_11_7 15
#define TAG_11_8 6
#define LABEL_11_17 17
#define LABEL_11_20 19
#define LABEL_11_22 21
#define LABEL_11_23 23
#define ENVIRONMENT_LABEL_11_3 41
#define DEBUGGING_LABEL_11_2 40
#define OBJECT_11_6 39
#define OBJECT_11_5 38
#define OBJECT_11_4 37
#define OBJECT_11_3 36
#define OBJECT_11_2 35
#define OBJECT_11_1 34
#define OBJECT_11_0 33
#define EXECUTE_CACHE_11_21 25
#define EXECUTE_CACHE_11_19 27
#define EXECUTE_CACHE_11_18 29
#define EXECUTE_CACHE_11_6 31
#define FREE_REFERENCES_LABEL_11_0 24
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd45;
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
      goto make_oset_scheduler_15;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_15);
      goto run_alerted_3;

    case 3:
      current_block = (Rpc - LABEL_11_13);
      goto alert_one_22;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto clearB_5;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto any_alertedP_7;

    case 6:
      current_block = (Rpc - LABEL_11_7);
      goto me_19;

    case 7:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_11_20);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_11_22);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_oset_scheduler_18)
DEFLABEL (make_oset_scheduler_15)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd45.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_7])));
  Rhp += 4;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd45.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd43.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_9])));
  Rhp += 1;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_11])));
  Rhp += 1;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_13])));
  Rhp += 1;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_15])));
  Rhp += 3;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  Wrd14 = Wrd37;
  (Wrd15.Obj) = (Rsp [6]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  ((Wrd14.pObj) [3]) = (Wrd44.Obj);
  ((Wrd14.pObj) [4]) = Rvl;
  ((Wrd39.pObj) [2]) = Rvl;
  ((Wrd41.pObj) [2]) = Rvl;
  ((Wrd43.pObj) [2]) = Rvl;
  Wrd35 = Wrd45;
  ((Wrd35.pObj) [2]) = (Wrd44.Obj);
  ((Wrd35.pObj) [3]) = (Wrd42.Obj);
  ((Wrd35.pObj) [4]) = (Wrd40.Obj);
  ((Wrd35.pObj) [5]) = (Wrd38.Obj);
  Rvl = (Wrd46.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (run_alerted_23)
DEFLABEL (run_alerted_3)
  INTERRUPT_CHECK (26, LABEL_11_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto any_alertedP_7;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  Rvl = (current_block [OBJECT_11_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd5.Obj);
  goto run_alerted_3;

DEFLABEL (alert_one_22)
  CLOSURE_HEADER (LABEL_11_13);

DEFLABEL (alert_one_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (clearB_21)
DEFLABEL (clearB_5)
  INTERRUPT_CHECK (26, LABEL_11_11);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_19]));

DEFLABEL (any_alertedP_20)
DEFLABEL (any_alertedP_7)
  INTERRUPT_CHECK (26, LABEL_11_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_20);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_25;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_25)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) > 0)
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_26;

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_11_6]);

DEFLABEL (label_26)
DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (me_19)
  CLOSURE_HEADER (LABEL_11_7);

DEFLABEL (me_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11_0])))
    goto label_29;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [5]);
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  goto run_alerted_3;

DEFLABEL (label_29)
  if ((Wrd5.Obj) == (current_block [OBJECT_11_1]))
    goto label_36;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11_2])))
    goto label_30;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto clearB_5;

DEFLABEL (label_30)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11_3])))
    goto label_34;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto any_alertedP_7;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_11_6]);

DEFLABEL (label_31)
DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_11_4]);

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  Rvl = ((Wrd27.pObj) [4]);
  goto label_35;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_9 9
#define ENVIRONMENT_LABEL_12_3 20
#define DEBUGGING_LABEL_12_2 19
#define EXECUTE_CACHE_12_11 11
#define EXECUTE_CACHE_12_10 13
#define EXECUTE_CACHE_12_8 15
#define EXECUTE_CACHE_12_6 17
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_12_4);
      goto round_robin_policy_4;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (round_robin_policy_7)
DEFLABEL (round_robin_policy_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_12_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

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
scheduler_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_policy_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_policy_4)
DEFLABEL (stack_policy_1)
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
#define ENVIRONMENT_LABEL_14_3 12
#define DEBUGGING_LABEL_14_2 11
#define EXECUTE_CACHE_14_6 7
#define FREE_REFERENCE_14_0 10
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto make_round_robin_scheduler_0;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_round_robin_scheduler_4)
DEFLABEL (make_round_robin_scheduler_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCE_15_0 10
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto make_stack_scheduler_0;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_stack_scheduler_4)
DEFLABEL (make_stack_scheduler_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_20 9
#define TAG_16_21 3
#define LABEL_16_18 11
#define TAG_16_19 4
#define LABEL_16_16 13
#define TAG_16_17 5
#define LABEL_16_14 15
#define TAG_16_15 6
#define LABEL_16_12 17
#define TAG_16_13 7
#define LABEL_16_10 19
#define TAG_16_11 8
#define LABEL_16_8 21
#define TAG_16_9 9
#define LABEL_16_22 23
#define LABEL_16_23 25
#define LABEL_16_25 27
#define LABEL_16_31 29
#define LABEL_16_27 31
#define LABEL_16_28 33
#define LABEL_16_30 35
#define LABEL_16_33 37
#define LABEL_16_32 39
#define LABEL_16_35 41
#define ENVIRONMENT_LABEL_16_3 61
#define DEBUGGING_LABEL_16_2 60
#define OBJECT_16_6 59
#define OBJECT_16_5 58
#define OBJECT_16_4 57
#define OBJECT_16_3 56
#define OBJECT_16_2 55
#define OBJECT_16_1 54
#define OBJECT_16_0 53
#define EXECUTE_CACHE_16_34 43
#define EXECUTE_CACHE_16_29 45
#define EXECUTE_CACHE_16_26 47
#define EXECUTE_CACHE_16_24 49
#define EXECUTE_CACHE_16_6 51
#define FREE_REFERENCES_LABEL_16_0 42
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd59;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd74;
  machine_word Wrd73;
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
      goto make_fast_slow_scheduler_25;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_20);
      goto run_alerted_6;

    case 4:
      current_block = (Rpc - LABEL_16_18);
      goto alert_one_34;

    case 5:
      current_block = (Rpc - LABEL_16_16);
      goto clearB_10;

    case 6:
      current_block = (Rpc - LABEL_16_14);
      goto any_alertedP_13;

    case 7:
      current_block = (Rpc - LABEL_16_12);
      goto any_normalP_15;

    case 8:
      current_block = (Rpc - LABEL_16_10);
      goto any_slowP_17;

    case 9:
      current_block = (Rpc - LABEL_16_8);
      goto me_29;

    case 10:
      current_block = (Rpc - LABEL_16_22);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_16_23);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_16_25);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_16_31);
      goto continuation_22;

    case 14:
      current_block = (Rpc - LABEL_16_27);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_16_28);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_16_30);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_16_33);
      goto continuation_5;

    case 18:
      current_block = (Rpc - LABEL_16_32);
      goto continuation_3;

    case 19:
      current_block = (Rpc - LABEL_16_35);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_fast_slow_scheduler_28)
DEFLABEL (make_fast_slow_scheduler_25)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd73.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_8])));
  Rhp += 4;
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd73.pObj)));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd71.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_10])));
  Rhp += 1;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd71.pObj)));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_12])));
  Rhp += 1;
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd67.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_14])));
  Rhp += 2;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd67.pObj)));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd65.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_16])));
  Rhp += 2;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd63.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_18])));
  Rhp += 2;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd63.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd61.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_20])));
  Rhp += 6;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd61.pObj)));
  (* (--Rsp)) = (Wrd62.Obj);
  Wrd23 = Wrd61;
  (Wrd24.Obj) = (Rsp [10]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd21.Obj) = (Rsp [9]);
  ((Wrd23.pObj) [3]) = (Wrd21.Obj);
  ((Wrd23.pObj) [4]) = (Wrd72.Obj);
  ((Wrd23.pObj) [5]) = (Wrd70.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  ((Wrd23.pObj) [6]) = (Wrd12.Obj);
  ((Wrd23.pObj) [7]) = Rvl;
  Wrd29 = Wrd63;
  ((Wrd29.pObj) [2]) = (Wrd12.Obj);
  ((Wrd29.pObj) [3]) = Rvl;
  Wrd35 = Wrd65;
  ((Wrd35.pObj) [2]) = (Wrd12.Obj);
  ((Wrd35.pObj) [3]) = Rvl;
  Wrd41 = Wrd67;
  ((Wrd41.pObj) [2]) = (Wrd72.Obj);
  ((Wrd41.pObj) [3]) = (Wrd70.Obj);
  ((Wrd69.pObj) [2]) = Rvl;
  ((Wrd71.pObj) [2]) = (Wrd12.Obj);
  Wrd59 = Wrd73;
  ((Wrd59.pObj) [2]) = (Wrd68.Obj);
  ((Wrd59.pObj) [3]) = (Wrd66.Obj);
  ((Wrd59.pObj) [4]) = (Wrd64.Obj);
  ((Wrd59.pObj) [5]) = (Wrd62.Obj);
  Rvl = (Wrd74.Obj);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (run_alerted_35)
DEFLABEL (run_alerted_6)
  INTERRUPT_CHECK (26, LABEL_16_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto any_normalP_15;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_33]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_33);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd5.Obj);
  goto run_alerted_6;

DEFLABEL (label_36)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_32]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto any_slowP_17;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_32);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  Rvl = (current_block [OBJECT_16_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_35]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_35);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd5.Obj);
  goto run_alerted_6;

DEFLABEL (alert_one_34)
  CLOSURE_HEADER (LABEL_16_18);

DEFLABEL (alert_one_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_34]));

DEFLABEL (label_38)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [3]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_34]));

DEFLABEL (clearB_33)
DEFLABEL (clearB_10)
  INTERRUPT_CHECK (26, LABEL_16_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16_25);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_26]));

DEFLABEL (any_alertedP_32)
DEFLABEL (any_alertedP_13)
  INTERRUPT_CHECK (26, LABEL_16_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto any_normalP_15;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_27);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto any_slowP_17;

DEFLABEL (label_39)
  Rsp = (& (Rsp [3]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_40;

DEFLABEL (label_41)
  Rvl = (current_block [OBJECT_16_5]);

DEFLABEL (label_40)
DEFLABEL (label_43)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (any_normalP_31)
DEFLABEL (any_normalP_15)
  INTERRUPT_CHECK (26, LABEL_16_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16_28);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_44;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_44)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) > 0)
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_45;

DEFLABEL (label_46)
  Rvl = (current_block [OBJECT_16_5]);

DEFLABEL (label_45)
DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (any_slowP_30)
DEFLABEL (any_slowP_17)
  INTERRUPT_CHECK (26, LABEL_16_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_29]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16_30);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_48;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_48)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) > 0)
    goto label_50;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_49;

DEFLABEL (label_50)
  Rvl = (current_block [OBJECT_16_5]);

DEFLABEL (label_49)
DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (me_29)
  CLOSURE_HEADER (LABEL_16_8);

DEFLABEL (me_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_16_0])))
    goto label_52;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [5]);
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  goto run_alerted_6;

DEFLABEL (label_52)
  if ((Wrd5.Obj) == (current_block [OBJECT_16_1]))
    goto label_56;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_16_2])))
    goto label_53;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto clearB_10;

DEFLABEL (label_53)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_16_3])))
    goto label_54;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_31]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto any_alertedP_13;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_16_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_42;

DEFLABEL (label_54)
  Rvl = (current_block [OBJECT_16_4]);

DEFLABEL (label_55)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  Rvl = ((Wrd27.pObj) [4]);
  goto label_55;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 9
#define DEBUGGING_LABEL_17_2 8
#define OBJECT_17_0 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto tagged_slowP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tagged_slowP_3)
DEFLABEL (tagged_slowP_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define OBJECT_18_1 10
#define OBJECT_18_0 9
#define EXECUTE_CACHE_18_6 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto tag_slowB_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tag_slowB_4)
DEFLABEL (tag_slowB_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define ENVIRONMENT_LABEL_19_3 14
#define DEBUGGING_LABEL_19_2 13
#define EXECUTE_CACHE_19_7 9
#define FREE_REFERENCE_19_0 12
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto make_two_stack_scheduler_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_two_stack_scheduler_5)
DEFLABEL (make_two_stack_scheduler_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define ENVIRONMENT_LABEL_20_3 15
#define DEBUGGING_LABEL_20_2 14
#define EXECUTE_CACHE_20_7 9
#define FREE_REFERENCE_20_1 12
#define FREE_REFERENCE_20_0 13
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto make_robin_stack_scheduler_0;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_robin_stack_scheduler_5)
DEFLABEL (make_robin_stack_scheduler_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define ENVIRONMENT_LABEL_21_3 14
#define DEBUGGING_LABEL_21_2 13
#define EXECUTE_CACHE_21_7 9
#define FREE_REFERENCE_21_0 12
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scheduler_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto make_two_robin_scheduler_0;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_two_robin_scheduler_5)
DEFLABEL (make_two_robin_scheduler_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define ENVIRONMENT_LABEL_3 28
#define DEBUGGING_LABEL_2 27
#define PURIFICATION_ROOT 26
#define OBJECT_6 25
#define OBJECT_5 24
#define OBJECT_4 23
#define OBJECT_3 22
#define OBJECT_2 21
#define OBJECT_1 20
#define OBJECT_0 19
#define FREE_REFERENCE_0 15
#define GLOBAL_EXECUTE_CACHE_5 17
#define FREE_REFERENCES_LABEL_0 14
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
scheduler_so_470db759fc22c94f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_8)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_7)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
	2,
	1,
	1,
	1,
	3,
	3,
	3,
	1,
	2,
	2,
	0,
	3,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 21)
      goto label_6;
    blocks = (current_block [OBJECT_6]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_8])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_6)
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
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_5]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_scheduler_so_470db759fc22c94f [21] =
  {
    { "scheduler_so_code_1", 1, scheduler_so_code_1 },
    { "scheduler_so_code_2", 7, scheduler_so_code_2 },
    { "scheduler_so_code_3", 16, scheduler_so_code_3 },
    { "scheduler_so_code_4", 1, scheduler_so_code_4 },
    { "scheduler_so_code_5", 9, scheduler_so_code_5 },
    { "scheduler_so_code_6", 2, scheduler_so_code_6 },
    { "scheduler_so_code_7", 3, scheduler_so_code_7 },
    { "scheduler_so_code_8", 7, scheduler_so_code_8 },
    { "scheduler_so_code_9", 9, scheduler_so_code_9 },
    { "scheduler_so_code_10", 6, scheduler_so_code_10 },
    { "scheduler_so_code_11", 11, scheduler_so_code_11 },
    { "scheduler_so_code_12", 4, scheduler_so_code_12 },
    { "scheduler_so_code_13", 2, scheduler_so_code_13 },
    { "scheduler_so_code_14", 2, scheduler_so_code_14 },
    { "scheduler_so_code_15", 2, scheduler_so_code_15 },
    { "scheduler_so_code_16", 20, scheduler_so_code_16 },
    { "scheduler_so_code_17", 1, scheduler_so_code_17 },
    { "scheduler_so_code_18", 2, scheduler_so_code_18 },
    { "scheduler_so_code_19", 3, scheduler_so_code_19 },
    { "scheduler_so_code_20", 3, scheduler_so_code_20 },
    { "scheduler_so_code_21", 3, scheduler_so_code_21 }
  };

int
decl_scheduler_so_470db759fc22c94f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_scheduler_so_470db759fc22c94f);
  return (0);
}

DECLARE_COMPILED_CODE ("scheduler.so", 6, decl_scheduler_so_470db759fc22c94f, scheduler_so_470db759fc22c94f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_scheduler_so_data_470db759fc22c94f [2430] =
  "\x50\x29\xcf\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9\x23"
  "\x22\x29\x21\x9f\x2b\xba\x1d\xb0\x82\x88\x0d\x0d\xbb\x06\x0d\xbc"
  "\x0d\xbd\x0d\xbe\x0d\xbf\x25\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x83\x88\x1d\xb4\xb5\xb6\xb7\x25\xb4\xb5\xb6\xb7\x24\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x85\x88\x0d\x1c\x0c\xb7\x24\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\xb4\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x86\x88\xb7\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x1c\x28\xb4\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\xb5\x25\xb5\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x0d\x1c\x0d\x0d\x08\x0d\x1c\xb6\x25\x0d\x1c\xb5\xb6\x24\x28\xb4"
  "\x28\x0d\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x0d\x1c\xb6\x25\xb6\x24\x28\xb4\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\xb3\x1d\x1b\x1b\x1b\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb3\x07\x1d\x1b\x1b\x1b\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x28\x0d\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x07\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x17\xb8\x88\xb0\xb3"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x06\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x0d\x0d\x0d\x0d\x1b\x1b\x0d\xb1\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x1b\x17\xc3\x0d\x0d\x1c\x1b\x0d\x1b\x1b\xb7\xb6\xb5\xb4\x17"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb2\x2a\x1e\x1e\x1e\x1e\x17\x28"
  "\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x0e\x73\x63\x68\x65\x64\x75\x6c\x65\x72\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x1b\x6d\x61\x6b\x65\x2d\x72\x6f"
  "\x75\x6e\x64\x2d\x72\x6f\x62\x69\x6e\x2d\x73\x63\x68\x65\x64\x75"
  "\x6c\x65\x72\x02\x07\x04\x82\x02\x03\x02\x03\x6f\x6b\x05\x64\x6f"
  "\x6e\x65\x0c\x2a\x73\x63\x68\x65\x64\x75\x6c\x65\x72\x2a\x10\x2a"
  "\x61\x62\x6f\x72\x74\x2d\x70\x72\x6f\x63\x65\x73\x73\x2a\x14\x2a"
  "\x6c\x61\x73\x74\x2d\x76\x61\x6c\x75\x65\x2d\x6f\x66\x2d\x72\x75"
  "\x6e\x2a\x1b\x2a\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x73\x2d"
  "\x65\x76\x65\x72\x2d\x61\x6c\x65\x72\x74\x65\x64\x2a\x05\x02\x0f"
  "\x6d\x61\x6b\x65\x2d\x73\x63\x68\x65\x64\x75\x6c\x65\x72\x09\x02"
  "\x0d\x6d\x61\x6b\x65\x2d\x65\x71\x2d\x6f\x73\x65\x74\x0a\x03\x0e"
  "\x10\x81\x81\x02\x0d\x0e\x81\x81\x02\x0c\x0c\x81\x81\x02\x0b\x0a"
  "\x81\x81\x02\x0a\x08\x81\x81\x02\x09\x06\x81\x81\x02\x08\x04\x82"
  "\x02\x0f\x1f\x0b\x02\x02\x05\x05\x05\x13\x73\x68\x61\x6c\x6c\x6f"
  "\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x0c\x02\x15\x69"
  "\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x73\x63\x68\x65\x64\x75"
  "\x6c\x65\x72\x0d\x03\x1e\x22\x81\x83\x02\x1d\x20\x81\x83\x02\x1c"
  "\x1e\x81\x85\x02\x1b\x1c\x81\x83\x02\x1a\x1a\x81\x83\x02\x19\x18"
  "\x81\x85\x02\x18\x16\x81\x83\x02\x17\x14\x81\x83\x02\x16\x12\x81"
  "\x85\x02\x15\x10\x81\x83\x02\x14\x0e\x81\x83\x02\x13\x0c\x81\x85"
  "\x02\x12\x0a\x81\x83\x02\x11\x08\x81\x83\x02\x10\x06\x81\x83\x02"
  "\x0f\x04\x83\x04\x21\x34\x0e\x02\x1f\x04\x83\x04\x03\x0f\x02\x0a"
  "\x61\x6c\x65\x72\x74\x2d\x6f\x6e\x65\x10\x19\x41\x6c\x65\x72\x74"
  "\x69\x6e\x67\x20\x61\x20\x6e\x6f\x6e\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x02\x03\x08\x6c\x69\x73\x74\x69\x66\x79\x04\x09\x66"
  "\x6f\x72\x2d\x65\x61\x63\x68\x11\x03\x0b\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x3f\x04\x06\x65\x72\x72\x6f\x72\x04\x0c\x6f\x73\x65"
  "\x74\x2d\x69\x6e\x73\x65\x72\x74\x12\x03\x07\x28\x14\x81\x83\x02"
  "\x27\x12\x81\x83\x02\x26\x10\x81\x87\x02\x25\x0e\x81\x83\x02\x24"
  "\x0c\x81\x83\x02\x23\x0a\x83\x04\x22\x08\x81\x85\x02\x21\x06\x81"
  "\x83\x02\x20\x04\x83\x04\x13\x27\x13\x02\x02\x03\x0d\x6f\x73\x65"
  "\x74\x2d\x6d\x65\x6d\x62\x65\x72\x73\x14\x02\x2a\x06\x81\x81\x02"
  "\x29\x04\x82\x02\x05\x0d\x15\x02\x08\x10\x02\x10\x61\x6c\x6c\x2d"
  "\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x73\x16\x03\x04\x11\x04"
  "\x2d\x08\x81\x83\x02\x2c\x06\x81\x81\x02\x2b\x04\x82\x02\x07\x12"
  "\x17\x02\x09\x02\x02\x02\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x05\x0c\x03\x34\x10\x81\x83\x02\x33\x0e"
  "\x81\x85\x02\x32\x0c\x81\x83\x02\x31\x0a\x81\x83\x02\x30\x08\x81"
  "\x83\x02\x2f\x06\x81\x85\x02\x2e\x04\x83\x04\x0f\x1c\x0c\x02\x0a"
  "\x08\x63\x61\x6c\x6c\x69\x6e\x67\x0e\x61\x62\x6f\x72\x74\x2d\x70"
  "\x72\x6f\x63\x65\x73\x73\x18\x05\x77\x69\x74\x68\x04\x61\x6e\x64"
  "\x07\x63\x6c\x65\x61\x72\x21\x19\x02\x12\x74\x65\x72\x6d\x69\x6e"
  "\x61\x74\x69\x6f\x6e\x2d\x74\x72\x61\x63\x65\x1a\x04\x03\x03\x04"
  "\x70\x70\x63\x03\x04\x3d\x14\x81\x85\x02\x3c\x12\x81\x83\x02\x3b"
  "\x10\x81\x83\x02\x3a\x0e\x81\x83\x02\x39\x0c\x81\x85\x02\x38\x0a"
  "\x81\x83\x02\x37\x08\x81\x83\x02\x36\x06\x83\x04\x35\x04\x81\x83"
  "\x02\x13\x29\x1b\x02\x0b\x04\x72\x75\x6e\x1c\x06\x64\x6f\x6e\x65"
  "\x3f\x1d\x02\x02\x03\x03\x16\x77\x69\x74\x68\x2d\x70\x72\x6f\x63"
  "\x65\x73\x73\x2d\x61\x62\x6f\x72\x74\x69\x6f\x6e\x1e\x03\x43\x0e"
  "\x82\x02\x42\x0c\x81\x81\x02\x41\x0a\x81\x81\x02\x40\x08\x81\x81"
  "\x02\x3f\x06\x81\x81\x02\x3e\x04\x82\x02\x0d\x1b\x1f\x02\x0c\x02"
  "\x1d\x19\x10\x1c\x02\x0a\x04\x12\x03\x0c\x6f\x73\x65\x74\x2d\x63"
  "\x6c\x65\x61\x72\x21\x20\x03\x0b\x6f\x73\x65\x74\x2d\x63\x6f\x75"
  "\x6e\x74\x21\x05\x4e\x18\x81\x83\x02\x4d\x16\x81\x85\x02\x4c\x14"
  "\x81\x83\x02\x4b\x12\x81\x83\x02\x4a\x10\x81\x85\x02\x49\x0e\x81"
  "\x83\x02\x48\x0c\x81\x83\x02\x47\x0a\x81\x85\x02\x46\x08\x81\x83"
  "\x02\x45\x06\x81\x83\x02\x44\x04\x83\x04\x17\x2a\x22\x02\x0d\x03"
  "\x14\x03\x20\x04\x11\x03\x13\x65\x78\x65\x63\x75\x74\x65\x2d\x70"
  "\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x14\x05\x52\x0a\x83\x04\x51"
  "\x08\x81\x85\x02\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x09\x15\x11"
  "\x02\x0e\x03\x0a\x6f\x73\x65\x74\x2d\x70\x6f\x70\x21\x03\x14\x03"
  "\x54\x06\x81\x83\x02\x53\x04\x83\x04\x05\x0d\x23\x02\x0f\x13\x72"
  "\x6f\x75\x6e\x64\x2d\x72\x6f\x62\x69\x6e\x2d\x70\x6f\x6c\x69\x63"
  "\x79\x24\x02\x03\x14\x6d\x61\x6b\x65\x2d\x6f\x73\x65\x74\x2d\x73"
  "\x63\x68\x65\x64\x75\x6c\x65\x72\x25\x02\x56\x06\x81\x81\x02\x55"
  "\x04\x82\x02\x05\x0d\x26\x02\x10\x0d\x73\x74\x61\x63\x6b\x2d\x70"
  "\x6f\x6c\x69\x63\x79\x27\x02\x03\x25\x02\x58\x06\x81\x81\x02\x57"
  "\x04\x82\x02\x05\x0d\x28\x02\x11\x02\x1d\x19\x10\x1c\x02\x0a\x03"
  "\x0d\x74\x61\x67\x67\x65\x64\x2d\x73\x6c\x6f\x77\x3f\x1d\x03\x20"
  "\x03\x21\x04\x12\x06\x6c\x2a\x81\x83\x02\x6b\x28\x81\x83\x02\x6a"
  "\x26\x81\x83\x02\x69\x24\x81\x83\x02\x68\x22\x81\x83\x02\x67\x20"
  "\x81\x83\x02\x66\x1e\x81\x85\x02\x65\x1c\x81\x83\x02\x64\x1a\x81"
  "\x85\x02\x63\x18\x81\x83\x02\x62\x16\x81\x85\x02\x61\x14\x81\x83"
  "\x02\x60\x12\x81\x83\x02\x5f\x10\x81\x83\x02\x5e\x0e\x81\x83\x02"
  "\x5d\x0c\x81\x85\x02\x5c\x0a\x81\x83\x02\x5b\x08\x81\x87\x02\x5a"
  "\x06\x81\x85\x02\x59\x04\x84\x06\x29\x3e\x21\x02\x12\x05\x73\x6c"
  "\x6f\x77\x20\x04\x07\x65\x71\x2d\x67\x65\x74\x02\x6d\x04\x83\x04"
  "\x03\x0a\x19\x02\x13\x20\x05\x08\x65\x71\x2d\x70\x75\x74\x21\x02"
  "\x6f\x06\x81\x83\x02\x6e\x04\x83\x04\x05\x0d\x20\x02\x14\x27\x02"
  "\x04\x19\x6d\x61\x6b\x65\x2d\x66\x61\x73\x74\x2d\x73\x6c\x6f\x77"
  "\x2d\x73\x63\x68\x65\x64\x75\x6c\x65\x72\x12\x02\x72\x08\x81\x83"
  "\x02\x71\x06\x81\x81\x02\x70\x04\x82\x02\x07\x0f\x10\x02\x15\x27"
  "\x24\x03\x04\x12\x02\x75\x08\x81\x83\x02\x74\x06\x81\x81\x02\x73"
  "\x04\x82\x02\x07\x10\x0a\x02\x16\x24\x02\x04\x12\x02\x78\x08\x81"
  "\x83\x02\x77\x06\x81\x81\x02\x76\x04\x82\x02\x07\x0f\x16\x04\x0a"
  "\x04\x10\x04\x20\x04\x19\x04\x21\x04\x28\x04\x26\x04\x23\x04\x11"
  "\x04\x22\x04\x1f\x04\x1b\x06\x0c\x04\x17\x04\x15\x04\x12\x19\x6d"
  "\x61\x6b\x65\x2d\x74\x77\x6f\x2d\x72\x6f\x62\x69\x6e\x2d\x73\x63"
  "\x68\x65\x64\x75\x6c\x65\x72\x1b\x6d\x61\x6b\x65\x2d\x72\x6f\x62"
  "\x69\x6e\x2d\x73\x74\x61\x63\x6b\x2d\x73\x63\x68\x65\x64\x75\x6c"
  "\x65\x72\x19\x6d\x61\x6b\x65\x2d\x74\x77\x6f\x2d\x73\x74\x61\x63"
  "\x6b\x2d\x73\x63\x68\x65\x64\x75\x6c\x65\x72\x0a\x74\x61\x67\x2d"
  "\x73\x6c\x6f\x77\x21\x1d\x12\x15\x6d\x61\x6b\x65\x2d\x73\x74\x61"
  "\x63\x6b\x2d\x73\x63\x68\x65\x64\x75\x6c\x65\x72\x27\x24\x25\x1c"
  "\x18\x1a\x1e\x17\x61\x6c\x65\x72\x74\x2d\x61\x6c\x6c\x2d\x70\x72"
  "\x6f\x70\x61\x67\x61\x74\x6f\x72\x73\x21\x16\x12\x11\x6c\x6f\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x11\x61\x6c"
  "\x65\x72\x74\x2d\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x12\x61"
  "\x6c\x65\x72\x74\x2d\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x73"
  "\x28\x14\x1b\x77\x69\x74\x68\x2d\x69\x6e\x64\x65\x70\x65\x6e\x64"
  "\x65\x6e\x74\x2d\x73\x63\x68\x65\x64\x75\x6c\x65\x72\x0d\x09\x0a"
  "\x13\x04\x0f\x04\x0e\x04\x0b\x04\x04\x0a\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x28\x02\x06\x0e"
  "\x80\x80\x04\x05\x0c\x81\x81\x02\x04\x0a\x81\x81\x02\x03\x08\x81"
  "\x83\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\x0d\x1d";

SCHEME_OBJECT *
scheduler_so_data_470db759fc22c94f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_scheduler_so_data_470db759fc22c94f [0]))), (sizeof (prog_scheduler_so_data_470db759fc22c94f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_10]));
}

DECLARE_COMPILED_DATA_NS ("scheduler.so", scheduler_so_data_470db759fc22c94f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("scheduler.so", "4d60253228720c6e")
