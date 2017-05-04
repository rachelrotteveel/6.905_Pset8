/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-03T22:04:45-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_10 7
#define TAG_1_11 2
#define LABEL_1_7 9
#define TAG_1_8 3
#define LABEL_1_12 11
#define LABEL_1_14 13
#define LABEL_1_15 15
#define LABEL_1_16 17
#define LABEL_1_18 19
#define LABEL_1_19 21
#define LABEL_1_20 23
#define LABEL_1_22 25
#define LABEL_1_23 27
#define LABEL_1_24 29
#define LABEL_1_26 31
#define LABEL_1_27 33
#define ENVIRONMENT_LABEL_1_3 52
#define DEBUGGING_LABEL_1_2 51
#define OBJECT_1_3 50
#define OBJECT_1_2 49
#define OBJECT_1_1 48
#define OBJECT_1_0 47
#define EXECUTE_CACHE_1_25 35
#define EXECUTE_CACHE_1_21 37
#define EXECUTE_CACHE_1_17 39
#define EXECUTE_CACHE_1_13 41
#define EXECUTE_CACHE_1_9 43
#define EXECUTE_CACHE_1_6 45
#define FREE_REFERENCES_LABEL_1_0 34
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto interval_printer_15;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_20;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_printer_18)
DEFLABEL (interval_printer_15)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (Wrd5.Obj) = (current_block [OBJECT_1_3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (Wrd5.Obj) = (current_block [OBJECT_1_3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define ENVIRONMENT_LABEL_2_3 17
#define DEBUGGING_LABEL_2_2 16
#define OBJECT_2_3 15
#define OBJECT_2_2 14
#define OBJECT_2_1 13
#define OBJECT_2_0 12
#define FREE_REFERENCE_2_0 11
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_2_4);
      goto Z__intervalP_4;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__intervalP_10)
DEFLABEL (Z__intervalP_4)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_2_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_2_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 5
#define DEBUGGING_LABEL_3_2 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_9 9
#define ENVIRONMENT_LABEL_5_3 16
#define DEBUGGING_LABEL_5_2 15
#define EXECUTE_CACHE_5_8 11
#define EXECUTE_CACHE_5_6 13
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
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
      goto Z__interval___3;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__interval___7)
DEFLABEL (Z__interval___3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_10;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_10;
  if (Rvl == (Wrd5.Obj))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto intervalP_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (intervalP_5)
DEFLABEL (intervalP_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 12
#define DEBUGGING_LABEL_7_2 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto interval_low_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_low_4)
DEFLABEL (interval_low_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto interval_high_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_high_4)
DEFLABEL (interval_high_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 12
#define DEBUGGING_LABEL_9_2 11
#define EXECUTE_CACHE_9_7 7
#define EXECUTE_CACHE_9_6 9
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto make_interval_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_interval_4)
DEFLABEL (make_interval_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_8 9
#define LABEL_10_9 11
#define LABEL_10_11 13
#define ENVIRONMENT_LABEL_10_3 21
#define DEBUGGING_LABEL_10_2 20
#define OBJECT_10_0 19
#define EXECUTE_CACHE_10_10 15
#define EXECUTE_CACHE_10_6 17
#define FREE_REFERENCES_LABEL_10_0 14
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
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
      goto interval_equalP_5;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_equalP_9)
DEFLABEL (interval_equalP_5)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_17;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_17;
  if (Rvl == (Wrd5.Obj))
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_13)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_12;
  if ((Wrd7.Obj) == Rvl)
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_10_0]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define LABEL_11_9 11
#define LABEL_11_11 13
#define LABEL_11_12 15
#define ENVIRONMENT_LABEL_11_3 24
#define DEBUGGING_LABEL_11_2 23
#define EXECUTE_CACHE_11_13 17
#define EXECUTE_CACHE_11_10 19
#define EXECUTE_CACHE_11_6 21
#define FREE_REFERENCES_LABEL_11_0 16
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_11_4);
      goto add_interval_6;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_interval_11)
DEFLABEL (add_interval_6)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_15;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_15;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_15;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_14)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_13;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_13;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_13;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd18.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_9 9
#define LABEL_12_10 11
#define LABEL_12_11 13
#define LABEL_12_12 15
#define ENVIRONMENT_LABEL_12_3 24
#define DEBUGGING_LABEL_12_2 23
#define EXECUTE_CACHE_12_13 17
#define EXECUTE_CACHE_12_8 19
#define EXECUTE_CACHE_12_6 21
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
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
      goto sub_interval_6;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_12_12);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sub_interval_11)
DEFLABEL (sub_interval_6)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_15;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_15;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_15;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_14)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_13;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_13;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_13;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd18.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_9 9
#define LABEL_13_10 11
#define LABEL_13_11 13
#define LABEL_13_12 15
#define LABEL_13_13 17
#define LABEL_13_14 19
#define LABEL_13_15 21
#define LABEL_13_16 23
#define LABEL_13_17 25
#define LABEL_13_18 27
#define LABEL_13_19 29
#define LABEL_13_21 31
#define ENVIRONMENT_LABEL_13_3 44
#define DEBUGGING_LABEL_13_2 43
#define EXECUTE_CACHE_13_23 33
#define EXECUTE_CACHE_13_22 35
#define EXECUTE_CACHE_13_20 37
#define EXECUTE_CACHE_13_8 39
#define EXECUTE_CACHE_13_6 41
#define FREE_REFERENCES_LABEL_13_0 32
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
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
      goto mul_interval_15;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_13_12);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_13_13);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_13_14);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_13_15);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_13_16);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_13_17);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_13_18);
      goto label_20;

    case 13:
      current_block = (Rpc - LABEL_13_19);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mul_interval_22)
DEFLABEL (mul_interval_15)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_30;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_30;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd15.Lng), (Wrd16.Lng), (& (Wrd14.Lng))))
    goto label_30;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_29)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_28;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_28;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd15.Lng), (Wrd16.Lng), (& (Wrd14.Lng))))
    goto label_28;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_27)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_14);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_26;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_26;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd15.Lng), (Wrd16.Lng), (& (Wrd14.Lng))))
    goto label_26;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_17);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_24;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_24;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd16.Lng), (Wrd17.Lng), (& (Wrd15.Lng))))
    goto label_24;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_23)
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd18.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_13_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13_21);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_20)
  (Wrd12.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_12 7
#define LABEL_14_13 9
#define LABEL_14_6 11
#define LABEL_14_8 13
#define LABEL_14_9 15
#define LABEL_14_10 17
#define LABEL_14_15 19
#define LABEL_14_17 21
#define LABEL_14_18 23
#define ENVIRONMENT_LABEL_14_3 44
#define DEBUGGING_LABEL_14_2 43
#define OBJECT_14_2 42
#define OBJECT_14_1 41
#define OBJECT_14_0 40
#define EXECUTE_CACHE_14_20 25
#define EXECUTE_CACHE_14_19 27
#define EXECUTE_CACHE_14_16 29
#define EXECUTE_CACHE_14_14 31
#define EXECUTE_CACHE_14_11 33
#define EXECUTE_CACHE_14_7 35
#define FREE_REFERENCE_14_1 38
#define FREE_REFERENCE_14_0 39
#define FREE_REFERENCES_LABEL_14_0 24
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
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
      goto div_interval_8;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_14_12);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_14_13);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_14_15);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_14_18);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (div_interval_13)
DEFLABEL (div_interval_8)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_4)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (label_14)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_19;
  Wrd7 = Wrd11;

DEFLABEL (label_18)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd14.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (label_15)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_17;
  Wrd16 = Wrd20;

DEFLABEL (label_16)
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_13])), (Wrd17.pObj));

DEFLABEL (label_11)
  (Wrd16.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_12])), (Wrd8.pObj));

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_8 9
#define LABEL_15_9 11
#define ENVIRONMENT_LABEL_15_3 22
#define DEBUGGING_LABEL_15_2 21
#define EXECUTE_CACHE_15_12 13
#define EXECUTE_CACHE_15_11 15
#define EXECUTE_CACHE_15_10 17
#define EXECUTE_CACHE_15_7 19
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto square_interval_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (square_interval_7)
DEFLABEL (square_interval_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define ENVIRONMENT_LABEL_16_3 22
#define DEBUGGING_LABEL_16_2 21
#define EXECUTE_CACHE_16_12 13
#define EXECUTE_CACHE_16_11 15
#define EXECUTE_CACHE_16_10 17
#define EXECUTE_CACHE_16_7 19
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto sqrt_interval_4;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sqrt_interval_7)
DEFLABEL (sqrt_interval_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_8 9
#define LABEL_17_9 11
#define ENVIRONMENT_LABEL_17_3 22
#define DEBUGGING_LABEL_17_2 21
#define EXECUTE_CACHE_17_12 13
#define EXECUTE_CACHE_17_11 15
#define EXECUTE_CACHE_17_10 17
#define EXECUTE_CACHE_17_7 19
#define FREE_REFERENCES_LABEL_17_0 12
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_17_4);
      goto log_interval_4;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (log_interval_7)
DEFLABEL (log_interval_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define ENVIRONMENT_LABEL_18_3 22
#define DEBUGGING_LABEL_18_2 21
#define EXECUTE_CACHE_18_12 13
#define EXECUTE_CACHE_18_11 15
#define EXECUTE_CACHE_18_10 17
#define EXECUTE_CACHE_18_7 19
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto exp_interval_4;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (exp_interval_7)
DEFLABEL (exp_interval_4)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define ENVIRONMENT_LABEL_19_3 15
#define DEBUGGING_LABEL_19_2 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_8 9
#define EXECUTE_CACHE_19_6 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_19_4);
      goto empty_intervalP_2;

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

DEFLABEL (empty_intervalP_5)
DEFLABEL (empty_intervalP_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_7)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_6;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd12.Lng) > (Wrd14.Lng))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_19_0]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_8 9
#define LABEL_20_10 11
#define LABEL_20_11 13
#define LABEL_20_13 15
#define LABEL_20_14 17
#define LABEL_20_15 19
#define ENVIRONMENT_LABEL_20_3 30
#define DEBUGGING_LABEL_20_2 29
#define EXECUTE_CACHE_20_16 21
#define EXECUTE_CACHE_20_12 23
#define EXECUTE_CACHE_20_9 25
#define EXECUTE_CACHE_20_6 27
#define FREE_REFERENCES_LABEL_20_0 20
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_20_4);
      goto intersect_intervals_12;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_20_15);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (intersect_intervals_17)
DEFLABEL (intersect_intervals_12)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;

DEFLABEL (label_24)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_23)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_19)
  (Wrd8.Obj) = (Rsp [0]);

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_22;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_22;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd22.Lng) > (Wrd24.Lng))
    goto label_19;

DEFLABEL (label_21)
  (Wrd8.Obj) = (Rsp [1]);
  goto label_18;

DEFLABEL (label_22)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_19;

DEFLABEL (label_25)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_27;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_27;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd26.Lng) < (Wrd28.Lng))
    goto label_24;

DEFLABEL (label_26)
  (Wrd24.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd24.Obj);
  goto label_23;

DEFLABEL (label_27)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_8 9
#define LABEL_21_13 11
#define LABEL_21_9 13
#define LABEL_21_11 15
#define LABEL_21_15 17
#define LABEL_21_16 19
#define ENVIRONMENT_LABEL_21_3 34
#define DEBUGGING_LABEL_21_2 33
#define EXECUTE_CACHE_21_17 21
#define EXECUTE_CACHE_21_14 23
#define EXECUTE_CACHE_21_12 25
#define EXECUTE_CACHE_21_10 27
#define EXECUTE_CACHE_21_7 29
#define FREE_REFERENCE_21_0 32
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_21_4);
      goto Z___interval_8;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_21_13);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_21_16);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___interval_12)
DEFLABEL (Z___interval_8)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_17;
  Wrd10 = Wrd14;

DEFLABEL (label_16)
  Rvl = (Wrd10.Obj);
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_13])), (Wrd11.pObj));

DEFLABEL (label_10)
  (Wrd10.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define LABEL_22_9 9
#define LABEL_22_10 11
#define LABEL_22_11 13
#define LABEL_22_12 15
#define LABEL_22_13 17
#define ENVIRONMENT_LABEL_22_3 27
#define DEBUGGING_LABEL_22_2 26
#define OBJECT_22_0 25
#define EXECUTE_CACHE_22_8 19
#define EXECUTE_CACHE_22_6 21
#define FREE_REFERENCE_22_0 24
#define FREE_REFERENCES_LABEL_22_0 18
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_22_4);
      goto Z___interval_6;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_22_13);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___interval_12)
DEFLABEL (Z___interval_6)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_21;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_21;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd21.Lng) < (Wrd22.Lng)))
    goto label_14;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_22_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_20;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_20;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd24.Lng) < (Wrd25.Lng))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_19;
  Wrd18 = Wrd22;

DEFLABEL (label_18)
  Rvl = (Wrd18.Obj);
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_13])), (Wrd19.pObj));

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_9 9
#define LABEL_23_10 11
#define LABEL_23_11 13
#define LABEL_23_12 15
#define LABEL_23_13 17
#define ENVIRONMENT_LABEL_23_3 27
#define DEBUGGING_LABEL_23_2 26
#define OBJECT_23_0 25
#define EXECUTE_CACHE_23_8 19
#define EXECUTE_CACHE_23_6 21
#define FREE_REFERENCE_23_0 24
#define FREE_REFERENCES_LABEL_23_0 18
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_23_4);
      goto Z____interval_8;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_23_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_23_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z____interval_14)
DEFLABEL (Z____interval_8)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_26;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_26;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd25.Lng) > (Wrd26.Lng))
    goto label_16;

DEFLABEL (label_17)
  (Wrd15.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_15;

DEFLABEL (label_16)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_23_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_24;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_24;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd24.Lng) > (Wrd25.Lng))
    goto label_23;

DEFLABEL (label_22)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_21;
  Wrd16 = Wrd20;

DEFLABEL (label_20)
  Rvl = (Wrd16.Obj);

DEFLABEL (label_19)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_13])), (Wrd17.pObj));

DEFLABEL (label_12)
  (Wrd16.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_9 9
#define LABEL_24_10 11
#define LABEL_24_11 13
#define LABEL_24_12 15
#define LABEL_24_13 17
#define ENVIRONMENT_LABEL_24_3 27
#define DEBUGGING_LABEL_24_2 26
#define OBJECT_24_0 25
#define EXECUTE_CACHE_24_8 19
#define EXECUTE_CACHE_24_6 21
#define FREE_REFERENCE_24_0 24
#define FREE_REFERENCES_LABEL_24_0 18
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_24_4);
      goto Z___interval_6;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_24_12);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_24_13);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___interval_12)
DEFLABEL (Z___interval_6)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_21;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_21;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd21.Lng) > (Wrd22.Lng)))
    goto label_14;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_24_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_20;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_20;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd24.Lng) > (Wrd25.Lng))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_19;
  Wrd18 = Wrd22;

DEFLABEL (label_18)
  Rvl = (Wrd18.Obj);
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_13])), (Wrd19.pObj));

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_9 9
#define LABEL_25_10 11
#define LABEL_25_11 13
#define LABEL_25_12 15
#define LABEL_25_13 17
#define ENVIRONMENT_LABEL_25_3 27
#define DEBUGGING_LABEL_25_2 26
#define OBJECT_25_0 25
#define EXECUTE_CACHE_25_8 19
#define EXECUTE_CACHE_25_6 21
#define FREE_REFERENCE_25_0 24
#define FREE_REFERENCES_LABEL_25_0 18
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_25_4);
      goto Z____interval_8;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_25_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_25_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z____interval_14)
DEFLABEL (Z____interval_8)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_26;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_26;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd25.Lng) < (Wrd26.Lng))
    goto label_16;

DEFLABEL (label_17)
  (Wrd15.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_15;

DEFLABEL (label_16)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_24;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_24;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd24.Lng) < (Wrd25.Lng))
    goto label_23;

DEFLABEL (label_22)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_21;
  Wrd16 = Wrd20;

DEFLABEL (label_20)
  Rvl = (Wrd16.Obj);

DEFLABEL (label_19)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_13])), (Wrd17.pObj));

DEFLABEL (label_12)
  (Wrd16.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_9 9
#define LABEL_26_10 11
#define ENVIRONMENT_LABEL_26_3 21
#define DEBUGGING_LABEL_26_2 20
#define OBJECT_26_0 19
#define EXECUTE_CACHE_26_11 13
#define EXECUTE_CACHE_26_8 15
#define EXECUTE_CACHE_26_6 17
#define FREE_REFERENCES_LABEL_26_0 12
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_26_4);
      goto interval_non_zeroP_4;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_non_zeroP_8)
DEFLABEL (interval_non_zeroP_4)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_16;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd18.Lng) > 0))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_26_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_10);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_12;
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_12)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) < 0)
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_26_0]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define LABEL_27_9 9
#define LABEL_27_10 11
#define LABEL_27_12 13
#define ENVIRONMENT_LABEL_27_3 23
#define DEBUGGING_LABEL_27_2 22
#define OBJECT_27_0 21
#define EXECUTE_CACHE_27_11 15
#define EXECUTE_CACHE_27_8 17
#define EXECUTE_CACHE_27_6 19
#define FREE_REFERENCES_LABEL_27_0 14
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intervals_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_27_4);
      goto interval_contains_zeroP_5;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_27_12);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_contains_zeroP_10)
DEFLABEL (interval_contains_zeroP_5)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_19;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd18.Lng) > 0))
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_10);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_18;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd16.Lng) < 0)
    goto label_15;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_27_0]);
  goto label_14;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

DEFLABEL (label_19)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_5 7
#define LABEL_11 9
#define LABEL_6 11
#define LABEL_9 13
#define LABEL_15 15
#define LABEL_10 17
#define LABEL_13 19
#define LABEL_21 21
#define LABEL_14 23
#define LABEL_17 25
#define TAG_18 11
#define LABEL_19 27
#define LABEL_24 29
#define LABEL_20 31
#define LABEL_22 33
#define LABEL_28 35
#define LABEL_23 37
#define LABEL_26 39
#define LABEL_31 41
#define LABEL_27 43
#define LABEL_29 45
#define LABEL_30 47
#define LABEL_32 49
#define LABEL_34 51
#define LABEL_35 53
#define LABEL_33 55
#define LABEL_37 57
#define LABEL_38 59
#define LABEL_40 61
#define LABEL_44 63
#define LABEL_45 65
#define LABEL_41 67
#define LABEL_43 69
#define LABEL_48 71
#define LABEL_49 73
#define LABEL_50 75
#define LABEL_47 77
#define LABEL_53 79
#define LABEL_54 81
#define LABEL_52 83
#define LABEL_56 85
#define LABEL_59 87
#define LABEL_60 89
#define LABEL_61 91
#define LABEL_58 93
#define LABEL_64 95
#define LABEL_65 97
#define LABEL_66 99
#define LABEL_63 101
#define LABEL_68 103
#define LABEL_69 105
#define LABEL_70 107
#define LABEL_67 109
#define LABEL_72 111
#define LABEL_73 113
#define LABEL_74 115
#define LABEL_71 117
#define LABEL_76 119
#define LABEL_77 121
#define LABEL_78 123
#define LABEL_75 125
#define LABEL_80 127
#define LABEL_81 129
#define LABEL_82 131
#define LABEL_79 133
#define LABEL_84 135
#define LABEL_85 137
#define LABEL_86 139
#define LABEL_83 141
#define LABEL_88 143
#define LABEL_89 145
#define LABEL_90 147
#define LABEL_87 149
#define LABEL_92 151
#define LABEL_93 153
#define LABEL_94 155
#define LABEL_91 157
#define LABEL_96 159
#define LABEL_97 161
#define LABEL_98 163
#define LABEL_95 165
#define LABEL_100 167
#define LABEL_101 169
#define LABEL_102 171
#define LABEL_99 173
#define LABEL_104 175
#define LABEL_105 177
#define LABEL_106 179
#define LABEL_103 181
#define LABEL_108 183
#define LABEL_109 185
#define LABEL_110 187
#define LABEL_107 189
#define LABEL_112 191
#define LABEL_113 193
#define LABEL_114 195
#define LABEL_111 197
#define LABEL_116 199
#define LABEL_117 201
#define LABEL_118 203
#define LABEL_115 205
#define LABEL_120 207
#define LABEL_121 209
#define LABEL_122 211
#define LABEL_119 213
#define LABEL_123 215
#define LABEL_126 217
#define LABEL_127 219
#define LABEL_124 221
#define LABEL_130 223
#define LABEL_131 225
#define LABEL_132 227
#define LABEL_133 229
#define LABEL_125 231
#define LABEL_135 233
#define LABEL_129 235
#define LABEL_137 237
#define LABEL_140 239
#define LABEL_141 241
#define LABEL_138 243
#define LABEL_142 245
#define LABEL_143 247
#define LABEL_144 249
#define LABEL_145 251
#define LABEL_139 253
#define LABEL_146 255
#define LABEL_147 257
#define LABEL_148 259
#define LABEL_149 261
#define ENVIRONMENT_LABEL_3 369
#define DEBUGGING_LABEL_2 368
#define PURIFICATION_ROOT 367
#define OBJECT_28 366
#define OBJECT_27 365
#define OBJECT_26 364
#define OBJECT_25 363
#define OBJECT_24 362
#define OBJECT_23 361
#define OBJECT_22 360
#define OBJECT_21 359
#define OBJECT_20 358
#define OBJECT_19 357
#define OBJECT_18 356
#define OBJECT_17 355
#define OBJECT_16 354
#define OBJECT_15 353
#define OBJECT_14 352
#define OBJECT_13 351
#define OBJECT_12 350
#define OBJECT_11 349
#define OBJECT_10 348
#define OBJECT_9 347
#define OBJECT_8 346
#define OBJECT_7 345
#define OBJECT_6 344
#define OBJECT_5 343
#define OBJECT_4 342
#define OBJECT_3 341
#define OBJECT_2 340
#define OBJECT_1 339
#define OBJECT_0 338
#define EXECUTE_CACHE_136 263
#define EXECUTE_CACHE_128 265
#define EXECUTE_CACHE_62 267
#define EXECUTE_CACHE_55 269
#define EXECUTE_CACHE_51 271
#define EXECUTE_CACHE_134 273
#define EXECUTE_CACHE_46 275
#define EXECUTE_CACHE_42 277
#define EXECUTE_CACHE_39 279
#define EXECUTE_CACHE_36 281
#define FREE_REFERENCE_42 284
#define FREE_REFERENCE_41 285
#define FREE_REFERENCE_40 286
#define FREE_REFERENCE_39 287
#define FREE_REFERENCE_38 288
#define FREE_REFERENCE_37 289
#define FREE_REFERENCE_36 290
#define FREE_REFERENCE_35 291
#define FREE_REFERENCE_34 292
#define FREE_REFERENCE_33 293
#define FREE_REFERENCE_32 294
#define FREE_REFERENCE_31 295
#define FREE_REFERENCE_30 296
#define FREE_REFERENCE_29 297
#define FREE_REFERENCE_28 298
#define FREE_REFERENCE_27 299
#define FREE_REFERENCE_26 300
#define FREE_REFERENCE_25 301
#define FREE_REFERENCE_24 302
#define FREE_REFERENCE_23 303
#define FREE_REFERENCE_22 304
#define FREE_REFERENCE_21 305
#define FREE_REFERENCE_20 306
#define FREE_REFERENCE_19 307
#define FREE_REFERENCE_18 308
#define FREE_REFERENCE_17 309
#define FREE_REFERENCE_16 310
#define FREE_REFERENCE_15 311
#define FREE_REFERENCE_14 312
#define FREE_REFERENCE_13 313
#define FREE_REFERENCE_12 314
#define FREE_REFERENCE_11 315
#define FREE_REFERENCE_10 316
#define FREE_REFERENCE_9 317
#define FREE_REFERENCE_8 318
#define FREE_REFERENCE_7 319
#define FREE_REFERENCE_6 320
#define FREE_REFERENCE_5 321
#define FREE_REFERENCE_4 322
#define FREE_REFERENCE_3 323
#define FREE_REFERENCE_2 324
#define FREE_REFERENCE_1 325
#define FREE_REFERENCE_0 326
#define GLOBAL_EXECUTE_CACHE_57 328
#define GLOBAL_EXECUTE_CACHE_25 330
#define GLOBAL_EXECUTE_CACHE_16 332
#define GLOBAL_EXECUTE_CACHE_12 334
#define GLOBAL_EXECUTE_CACHE_8 336
#define FREE_REFERENCES_LABEL_0 262
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
intervals_so_c84202e7e6de5185 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto label_55;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_11);
      goto label_56;

    case 4:
      current_block = (Rpc - LABEL_6);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_15);
      goto label_57;

    case 7:
      current_block = (Rpc - LABEL_10);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_21);
      goto label_58;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto make__interval_134;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_59;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_28);
      goto label_60;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_31);
      goto label_61;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto continuation_16;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_19;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_18;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto label_62;

    case 25:
      current_block = (Rpc - LABEL_35);
      goto label_63;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto continuation_21;

    case 27:
      current_block = (Rpc - LABEL_37);
      goto continuation_23;

    case 28:
      current_block = (Rpc - LABEL_38);
      goto continuation_22;

    case 29:
      current_block = (Rpc - LABEL_40);
      goto continuation_25;

    case 30:
      current_block = (Rpc - LABEL_44);
      goto label_64;

    case 31:
      current_block = (Rpc - LABEL_45);
      goto label_65;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_24;

    case 33:
      current_block = (Rpc - LABEL_43);
      goto continuation_26;

    case 34:
      current_block = (Rpc - LABEL_48);
      goto label_66;

    case 35:
      current_block = (Rpc - LABEL_49);
      goto label_67;

    case 36:
      current_block = (Rpc - LABEL_50);
      goto label_68;

    case 37:
      current_block = (Rpc - LABEL_47);
      goto continuation_27;

    case 38:
      current_block = (Rpc - LABEL_53);
      goto label_69;

    case 39:
      current_block = (Rpc - LABEL_54);
      goto label_70;

    case 40:
      current_block = (Rpc - LABEL_52);
      goto continuation_28;

    case 41:
      current_block = (Rpc - LABEL_56);
      goto continuation_29;

    case 42:
      current_block = (Rpc - LABEL_59);
      goto label_71;

    case 43:
      current_block = (Rpc - LABEL_60);
      goto label_72;

    case 44:
      current_block = (Rpc - LABEL_61);
      goto label_73;

    case 45:
      current_block = (Rpc - LABEL_58);
      goto continuation_30;

    case 46:
      current_block = (Rpc - LABEL_64);
      goto label_74;

    case 47:
      current_block = (Rpc - LABEL_65);
      goto label_75;

    case 48:
      current_block = (Rpc - LABEL_66);
      goto label_76;

    case 49:
      current_block = (Rpc - LABEL_63);
      goto continuation_31;

    case 50:
      current_block = (Rpc - LABEL_68);
      goto label_77;

    case 51:
      current_block = (Rpc - LABEL_69);
      goto label_78;

    case 52:
      current_block = (Rpc - LABEL_70);
      goto label_79;

    case 53:
      current_block = (Rpc - LABEL_67);
      goto continuation_32;

    case 54:
      current_block = (Rpc - LABEL_72);
      goto label_80;

    case 55:
      current_block = (Rpc - LABEL_73);
      goto label_81;

    case 56:
      current_block = (Rpc - LABEL_74);
      goto label_82;

    case 57:
      current_block = (Rpc - LABEL_71);
      goto continuation_33;

    case 58:
      current_block = (Rpc - LABEL_76);
      goto label_83;

    case 59:
      current_block = (Rpc - LABEL_77);
      goto label_84;

    case 60:
      current_block = (Rpc - LABEL_78);
      goto label_85;

    case 61:
      current_block = (Rpc - LABEL_75);
      goto continuation_34;

    case 62:
      current_block = (Rpc - LABEL_80);
      goto label_86;

    case 63:
      current_block = (Rpc - LABEL_81);
      goto label_87;

    case 64:
      current_block = (Rpc - LABEL_82);
      goto label_88;

    case 65:
      current_block = (Rpc - LABEL_79);
      goto continuation_35;

    case 66:
      current_block = (Rpc - LABEL_84);
      goto label_89;

    case 67:
      current_block = (Rpc - LABEL_85);
      goto label_90;

    case 68:
      current_block = (Rpc - LABEL_86);
      goto label_91;

    case 69:
      current_block = (Rpc - LABEL_83);
      goto continuation_36;

    case 70:
      current_block = (Rpc - LABEL_88);
      goto label_92;

    case 71:
      current_block = (Rpc - LABEL_89);
      goto label_93;

    case 72:
      current_block = (Rpc - LABEL_90);
      goto label_94;

    case 73:
      current_block = (Rpc - LABEL_87);
      goto continuation_37;

    case 74:
      current_block = (Rpc - LABEL_92);
      goto label_95;

    case 75:
      current_block = (Rpc - LABEL_93);
      goto label_96;

    case 76:
      current_block = (Rpc - LABEL_94);
      goto label_97;

    case 77:
      current_block = (Rpc - LABEL_91);
      goto continuation_38;

    case 78:
      current_block = (Rpc - LABEL_96);
      goto label_98;

    case 79:
      current_block = (Rpc - LABEL_97);
      goto label_99;

    case 80:
      current_block = (Rpc - LABEL_98);
      goto label_100;

    case 81:
      current_block = (Rpc - LABEL_95);
      goto continuation_39;

    case 82:
      current_block = (Rpc - LABEL_100);
      goto label_101;

    case 83:
      current_block = (Rpc - LABEL_101);
      goto label_102;

    case 84:
      current_block = (Rpc - LABEL_102);
      goto label_103;

    case 85:
      current_block = (Rpc - LABEL_99);
      goto continuation_40;

    case 86:
      current_block = (Rpc - LABEL_104);
      goto label_104;

    case 87:
      current_block = (Rpc - LABEL_105);
      goto label_105;

    case 88:
      current_block = (Rpc - LABEL_106);
      goto label_106;

    case 89:
      current_block = (Rpc - LABEL_103);
      goto continuation_41;

    case 90:
      current_block = (Rpc - LABEL_108);
      goto label_107;

    case 91:
      current_block = (Rpc - LABEL_109);
      goto label_108;

    case 92:
      current_block = (Rpc - LABEL_110);
      goto label_109;

    case 93:
      current_block = (Rpc - LABEL_107);
      goto continuation_42;

    case 94:
      current_block = (Rpc - LABEL_112);
      goto label_110;

    case 95:
      current_block = (Rpc - LABEL_113);
      goto label_111;

    case 96:
      current_block = (Rpc - LABEL_114);
      goto label_112;

    case 97:
      current_block = (Rpc - LABEL_111);
      goto continuation_43;

    case 98:
      current_block = (Rpc - LABEL_116);
      goto label_113;

    case 99:
      current_block = (Rpc - LABEL_117);
      goto label_114;

    case 100:
      current_block = (Rpc - LABEL_118);
      goto label_115;

    case 101:
      current_block = (Rpc - LABEL_115);
      goto continuation_44;

    case 102:
      current_block = (Rpc - LABEL_120);
      goto label_116;

    case 103:
      current_block = (Rpc - LABEL_121);
      goto label_117;

    case 104:
      current_block = (Rpc - LABEL_122);
      goto label_118;

    case 105:
      current_block = (Rpc - LABEL_119);
      goto continuation_45;

    case 106:
      current_block = (Rpc - LABEL_123);
      goto continuation_46;

    case 107:
      current_block = (Rpc - LABEL_126);
      goto label_119;

    case 108:
      current_block = (Rpc - LABEL_127);
      goto label_120;

    case 109:
      current_block = (Rpc - LABEL_124);
      goto continuation_48;

    case 110:
      current_block = (Rpc - LABEL_130);
      goto label_121;

    case 111:
      current_block = (Rpc - LABEL_131);
      goto label_122;

    case 112:
      current_block = (Rpc - LABEL_132);
      goto label_123;

    case 113:
      current_block = (Rpc - LABEL_133);
      goto label_124;

    case 114:
      current_block = (Rpc - LABEL_125);
      goto continuation_47;

    case 115:
      current_block = (Rpc - LABEL_135);
      goto label_125;

    case 116:
      current_block = (Rpc - LABEL_129);
      goto continuation_49;

    case 117:
      current_block = (Rpc - LABEL_137);
      goto continuation_50;

    case 118:
      current_block = (Rpc - LABEL_140);
      goto label_126;

    case 119:
      current_block = (Rpc - LABEL_141);
      goto label_127;

    case 120:
      current_block = (Rpc - LABEL_138);
      goto continuation_52;

    case 121:
      current_block = (Rpc - LABEL_142);
      goto label_128;

    case 122:
      current_block = (Rpc - LABEL_143);
      goto label_129;

    case 123:
      current_block = (Rpc - LABEL_144);
      goto label_130;

    case 124:
      current_block = (Rpc - LABEL_145);
      goto label_131;

    case 125:
      current_block = (Rpc - LABEL_139);
      goto continuation_51;

    case 126:
      current_block = (Rpc - LABEL_146);
      goto label_132;

    case 127:
      current_block = (Rpc - LABEL_147);
      goto label_136;

    case 128:
      current_block = (Rpc - LABEL_148);
      goto label_137;

    case 129:
      current_block = (Rpc - LABEL_149);
      goto expression_54;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_54)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_148])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_137)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_136)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 27)
      goto label_135;
    blocks = (current_block [OBJECT_28]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_147])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_135)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_293;
  Wrd11 = Wrd15;

DEFLABEL (label_292)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_291;
  Wrd11 = Wrd15;

DEFLABEL (label_290)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_289;
  Wrd12 = Wrd16;

DEFLABEL (label_288)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_287;
  Wrd12 = Wrd16;

DEFLABEL (label_286)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_285;
  Wrd12 = Wrd16;

DEFLABEL (label_284)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_25]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_283;
  Wrd12 = Wrd16;

DEFLABEL (label_282)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_281;
  Wrd11 = Wrd15;

DEFLABEL (label_280)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_279;
  Wrd8 = Wrd12;

DEFLABEL (label_278)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_277;
  Wrd14 = Wrd18;

DEFLABEL (label_276)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_275;
  Wrd8 = Wrd12;

DEFLABEL (label_274)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_273;
  Wrd15 = Wrd19;

DEFLABEL (label_272)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_271;
  Wrd8 = Wrd12;

DEFLABEL (label_270)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_269;
  Wrd14 = Wrd18;

DEFLABEL (label_268)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_267;
  Wrd20 = Wrd24;

DEFLABEL (label_266)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_265;
  Wrd9 = Wrd13;

DEFLABEL (label_264)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_263;
  Wrd15 = Wrd19;

DEFLABEL (label_262)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_57]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_261;
  Wrd8 = Wrd12;

DEFLABEL (label_260)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_259;
  Wrd14 = Wrd18;

DEFLABEL (label_258)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_257;
  Wrd20 = Wrd24;

DEFLABEL (label_256)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_255;
  Wrd8 = Wrd12;

DEFLABEL (label_254)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_253;
  Wrd14 = Wrd18;

DEFLABEL (label_252)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_251;
  Wrd20 = Wrd24;

DEFLABEL (label_250)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_249;
  Wrd8 = Wrd12;

DEFLABEL (label_248)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_247;
  Wrd14 = Wrd18;

DEFLABEL (label_246)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_245;
  Wrd20 = Wrd24;

DEFLABEL (label_244)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_243;
  Wrd8 = Wrd12;

DEFLABEL (label_242)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_241;
  Wrd14 = Wrd18;

DEFLABEL (label_240)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_239;
  Wrd20 = Wrd24;

DEFLABEL (label_238)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_237;
  Wrd8 = Wrd12;

DEFLABEL (label_236)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_235;
  Wrd14 = Wrd18;

DEFLABEL (label_234)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_233;
  Wrd20 = Wrd24;

DEFLABEL (label_232)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_231;
  Wrd8 = Wrd12;

DEFLABEL (label_230)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_229;
  Wrd14 = Wrd18;

DEFLABEL (label_228)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_227;
  Wrd20 = Wrd24;

DEFLABEL (label_226)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_225;
  Wrd8 = Wrd12;

DEFLABEL (label_224)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_223;
  Wrd14 = Wrd18;

DEFLABEL (label_222)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_221;
  Wrd20 = Wrd24;

DEFLABEL (label_220)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_219;
  Wrd8 = Wrd12;

DEFLABEL (label_218)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_217;
  Wrd14 = Wrd18;

DEFLABEL (label_216)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_215;
  Wrd20 = Wrd24;

DEFLABEL (label_214)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_213;
  Wrd8 = Wrd12;

DEFLABEL (label_212)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_211;
  Wrd14 = Wrd18;

DEFLABEL (label_210)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_209;
  Wrd20 = Wrd24;

DEFLABEL (label_208)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_207;
  Wrd8 = Wrd12;

DEFLABEL (label_206)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_205;
  Wrd14 = Wrd18;

DEFLABEL (label_204)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_203;
  Wrd20 = Wrd24;

DEFLABEL (label_202)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_201;
  Wrd8 = Wrd12;

DEFLABEL (label_200)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_199;
  Wrd14 = Wrd18;

DEFLABEL (label_198)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_197;
  Wrd20 = Wrd24;

DEFLABEL (label_196)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_195;
  Wrd8 = Wrd12;

DEFLABEL (label_194)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_193;
  Wrd14 = Wrd18;

DEFLABEL (label_192)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_191;
  Wrd20 = Wrd24;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_189;
  Wrd8 = Wrd12;

DEFLABEL (label_188)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_187;
  Wrd14 = Wrd18;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_185;
  Wrd20 = Wrd24;

DEFLABEL (label_184)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_183;
  Wrd8 = Wrd12;

DEFLABEL (label_182)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_181;
  Wrd14 = Wrd18;

DEFLABEL (label_180)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_179;
  Wrd20 = Wrd24;

DEFLABEL (label_178)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_177;
  Wrd8 = Wrd12;

DEFLABEL (label_176)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_175;
  Wrd14 = Wrd18;

DEFLABEL (label_174)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_173;
  Wrd20 = Wrd24;

DEFLABEL (label_172)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_171;
  Wrd8 = Wrd12;

DEFLABEL (label_170)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_169;
  Wrd14 = Wrd18;

DEFLABEL (label_168)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_167;
  Wrd20 = Wrd24;

DEFLABEL (label_166)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_165;
  Wrd11 = Wrd15;

DEFLABEL (label_164)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_163;
  Wrd17 = Wrd21;

DEFLABEL (label_162)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_128]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_125);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_161;
  Wrd5 = Wrd9;

DEFLABEL (label_160)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_136]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_159;
  Wrd8 = Wrd12;

DEFLABEL (label_158)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_157;
  Wrd14 = Wrd18;

DEFLABEL (label_156)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_155;
  Wrd20 = Wrd24;

DEFLABEL (label_154)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_153;
  Wrd26 = Wrd30;

DEFLABEL (label_152)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_134]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_137);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_151;
  Wrd11 = Wrd15;

DEFLABEL (label_150)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_149;
  Wrd17 = Wrd21;

DEFLABEL (label_148)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_128]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_139);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_147;
  Wrd5 = Wrd9;

DEFLABEL (label_146)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_136]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_138);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_145;
  Wrd5 = Wrd9;

DEFLABEL (label_144)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_143;
  Wrd11 = Wrd15;

DEFLABEL (label_142)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_141;
  Wrd17 = Wrd21;

DEFLABEL (label_140)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_139;
  Wrd24 = Wrd28;

DEFLABEL (label_138)
  (Rsp [3]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_134]));

DEFLABEL (label_139)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_145])), (Wrd25.pObj));

DEFLABEL (label_131)
  (Wrd24.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_144])), (Wrd18.pObj));

DEFLABEL (label_130)
  (Wrd17.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_143])), (Wrd12.pObj));

DEFLABEL (label_129)
  (Wrd11.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_142])), (Wrd6.pObj));

DEFLABEL (label_128)
  (Wrd5.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_146])), (Wrd6.pObj));

DEFLABEL (label_132)
  (Wrd5.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_141])), (Wrd18.pObj));

DEFLABEL (label_127)
  (Wrd17.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140])), (Wrd12.pObj));

DEFLABEL (label_126)
  (Wrd11.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_133])), (Wrd27.pObj));

DEFLABEL (label_124)
  (Wrd26.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_132])), (Wrd21.pObj));

DEFLABEL (label_123)
  (Wrd20.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_131])), (Wrd15.pObj));

DEFLABEL (label_122)
  (Wrd14.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_130])), (Wrd9.pObj));

DEFLABEL (label_121)
  (Wrd8.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_135])), (Wrd6.pObj));

DEFLABEL (label_125)
  (Wrd5.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_127])), (Wrd18.pObj));

DEFLABEL (label_120)
  (Wrd17.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_126])), (Wrd12.pObj));

DEFLABEL (label_119)
  (Wrd11.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122])), (Wrd21.pObj));

DEFLABEL (label_118)
  (Wrd20.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_121])), (Wrd15.pObj));

DEFLABEL (label_117)
  (Wrd14.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_120])), (Wrd9.pObj));

DEFLABEL (label_116)
  (Wrd8.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_118])), (Wrd21.pObj));

DEFLABEL (label_115)
  (Wrd20.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_117])), (Wrd15.pObj));

DEFLABEL (label_114)
  (Wrd14.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_116])), (Wrd9.pObj));

DEFLABEL (label_113)
  (Wrd8.Obj) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_114])), (Wrd21.pObj));

DEFLABEL (label_112)
  (Wrd20.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_113])), (Wrd15.pObj));

DEFLABEL (label_111)
  (Wrd14.Obj) = Rvl;
  goto label_180;

DEFLABEL (label_183)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_112])), (Wrd9.pObj));

DEFLABEL (label_110)
  (Wrd8.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110])), (Wrd21.pObj));

DEFLABEL (label_109)
  (Wrd20.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109])), (Wrd15.pObj));

DEFLABEL (label_108)
  (Wrd14.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_108])), (Wrd9.pObj));

DEFLABEL (label_107)
  (Wrd8.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106])), (Wrd21.pObj));

DEFLABEL (label_106)
  (Wrd20.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105])), (Wrd15.pObj));

DEFLABEL (label_105)
  (Wrd14.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104])), (Wrd9.pObj));

DEFLABEL (label_104)
  (Wrd8.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102])), (Wrd21.pObj));

DEFLABEL (label_103)
  (Wrd20.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101])), (Wrd15.pObj));

DEFLABEL (label_102)
  (Wrd14.Obj) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100])), (Wrd9.pObj));

DEFLABEL (label_101)
  (Wrd8.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_98])), (Wrd21.pObj));

DEFLABEL (label_100)
  (Wrd20.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_97])), (Wrd15.pObj));

DEFLABEL (label_99)
  (Wrd14.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_207)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd9.pObj));

DEFLABEL (label_98)
  (Wrd8.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94])), (Wrd21.pObj));

DEFLABEL (label_97)
  (Wrd20.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd15.pObj));

DEFLABEL (label_96)
  (Wrd14.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92])), (Wrd9.pObj));

DEFLABEL (label_95)
  (Wrd8.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd21.pObj));

DEFLABEL (label_94)
  (Wrd20.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89])), (Wrd15.pObj));

DEFLABEL (label_93)
  (Wrd14.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd9.pObj));

DEFLABEL (label_92)
  (Wrd8.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86])), (Wrd21.pObj));

DEFLABEL (label_91)
  (Wrd20.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd15.pObj));

DEFLABEL (label_90)
  (Wrd14.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84])), (Wrd9.pObj));

DEFLABEL (label_89)
  (Wrd8.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82])), (Wrd21.pObj));

DEFLABEL (label_88)
  (Wrd20.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd15.pObj));

DEFLABEL (label_87)
  (Wrd14.Obj) = Rvl;
  goto label_228;

DEFLABEL (label_231)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80])), (Wrd9.pObj));

DEFLABEL (label_86)
  (Wrd8.Obj) = Rvl;
  goto label_230;

DEFLABEL (label_233)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78])), (Wrd21.pObj));

DEFLABEL (label_85)
  (Wrd20.Obj) = Rvl;
  goto label_232;

DEFLABEL (label_235)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77])), (Wrd15.pObj));

DEFLABEL (label_84)
  (Wrd14.Obj) = Rvl;
  goto label_234;

DEFLABEL (label_237)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76])), (Wrd9.pObj));

DEFLABEL (label_83)
  (Wrd8.Obj) = Rvl;
  goto label_236;

DEFLABEL (label_239)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74])), (Wrd21.pObj));

DEFLABEL (label_82)
  (Wrd20.Obj) = Rvl;
  goto label_238;

DEFLABEL (label_241)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73])), (Wrd15.pObj));

DEFLABEL (label_81)
  (Wrd14.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_243)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd9.pObj));

DEFLABEL (label_80)
  (Wrd8.Obj) = Rvl;
  goto label_242;

DEFLABEL (label_245)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70])), (Wrd21.pObj));

DEFLABEL (label_79)
  (Wrd20.Obj) = Rvl;
  goto label_244;

DEFLABEL (label_247)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69])), (Wrd15.pObj));

DEFLABEL (label_78)
  (Wrd14.Obj) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68])), (Wrd9.pObj));

DEFLABEL (label_77)
  (Wrd8.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_251)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd21.pObj));

DEFLABEL (label_76)
  (Wrd20.Obj) = Rvl;
  goto label_250;

DEFLABEL (label_253)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65])), (Wrd15.pObj));

DEFLABEL (label_75)
  (Wrd14.Obj) = Rvl;
  goto label_252;

DEFLABEL (label_255)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64])), (Wrd9.pObj));

DEFLABEL (label_74)
  (Wrd8.Obj) = Rvl;
  goto label_254;

DEFLABEL (label_257)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61])), (Wrd21.pObj));

DEFLABEL (label_73)
  (Wrd20.Obj) = Rvl;
  goto label_256;

DEFLABEL (label_259)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60])), (Wrd15.pObj));

DEFLABEL (label_72)
  (Wrd14.Obj) = Rvl;
  goto label_258;

DEFLABEL (label_261)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59])), (Wrd9.pObj));

DEFLABEL (label_71)
  (Wrd8.Obj) = Rvl;
  goto label_260;

DEFLABEL (label_263)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd16.pObj));

DEFLABEL (label_70)
  (Wrd15.Obj) = Rvl;
  goto label_262;

DEFLABEL (label_265)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd10.pObj));

DEFLABEL (label_69)
  (Wrd9.Obj) = Rvl;
  goto label_264;

DEFLABEL (label_267)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd21.pObj));

DEFLABEL (label_68)
  (Wrd20.Obj) = Rvl;
  goto label_266;

DEFLABEL (label_269)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49])), (Wrd15.pObj));

DEFLABEL (label_67)
  (Wrd14.Obj) = Rvl;
  goto label_268;

DEFLABEL (label_271)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd9.pObj));

DEFLABEL (label_66)
  (Wrd8.Obj) = Rvl;
  goto label_270;

DEFLABEL (label_273)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45])), (Wrd16.pObj));

DEFLABEL (label_65)
  (Wrd15.Obj) = Rvl;
  goto label_272;

DEFLABEL (label_275)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd9.pObj));

DEFLABEL (label_64)
  (Wrd8.Obj) = Rvl;
  goto label_274;

DEFLABEL (label_277)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd15.pObj));

DEFLABEL (label_63)
  (Wrd14.Obj) = Rvl;
  goto label_276;

DEFLABEL (label_279)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd9.pObj));

DEFLABEL (label_62)
  (Wrd8.Obj) = Rvl;
  goto label_278;

DEFLABEL (label_281)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd12.pObj));

DEFLABEL (label_61)
  (Wrd11.Obj) = Rvl;
  goto label_280;

DEFLABEL (label_283)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd13.pObj));

DEFLABEL (label_60)
  (Wrd12.Obj) = Rvl;
  goto label_282;

DEFLABEL (label_285)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd13.pObj));

DEFLABEL (label_59)
  (Wrd12.Obj) = Rvl;
  goto label_284;

DEFLABEL (label_287)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd13.pObj));

DEFLABEL (label_58)
  (Wrd12.Obj) = Rvl;
  goto label_286;

DEFLABEL (label_289)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd13.pObj));

DEFLABEL (label_57)
  (Wrd12.Obj) = Rvl;
  goto label_288;

DEFLABEL (label_291)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_56)
  (Wrd11.Obj) = Rvl;
  goto label_290;

DEFLABEL (label_293)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd12.pObj));

DEFLABEL (label_55)
  (Wrd11.Obj) = Rvl;
  goto label_292;

DEFLABEL (make__interval_134)
  CLOSURE_HEADER (LABEL_17);

DEFLABEL (make__interval_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_intervals_so_c84202e7e6de5185 [27] =
  {
    { "intervals_so_code_1", 16, intervals_so_code_1 },
    { "intervals_so_code_2", 4, intervals_so_code_2 },
    { "intervals_so_code_3", 1, intervals_so_code_3 },
    { "intervals_so_code_4", 1, intervals_so_code_4 },
    { "intervals_so_code_5", 4, intervals_so_code_5 },
    { "intervals_so_code_6", 2, intervals_so_code_6 },
    { "intervals_so_code_7", 2, intervals_so_code_7 },
    { "intervals_so_code_8", 2, intervals_so_code_8 },
    { "intervals_so_code_9", 2, intervals_so_code_9 },
    { "intervals_so_code_10", 6, intervals_so_code_10 },
    { "intervals_so_code_11", 7, intervals_so_code_11 },
    { "intervals_so_code_12", 7, intervals_so_code_12 },
    { "intervals_so_code_13", 15, intervals_so_code_13 },
    { "intervals_so_code_14", 11, intervals_so_code_14 },
    { "intervals_so_code_15", 5, intervals_so_code_15 },
    { "intervals_so_code_16", 5, intervals_so_code_16 },
    { "intervals_so_code_17", 5, intervals_so_code_17 },
    { "intervals_so_code_18", 5, intervals_so_code_18 },
    { "intervals_so_code_19", 3, intervals_so_code_19 },
    { "intervals_so_code_20", 9, intervals_so_code_20 },
    { "intervals_so_code_21", 9, intervals_so_code_21 },
    { "intervals_so_code_22", 8, intervals_so_code_22 },
    { "intervals_so_code_23", 8, intervals_so_code_23 },
    { "intervals_so_code_24", 8, intervals_so_code_24 },
    { "intervals_so_code_25", 8, intervals_so_code_25 },
    { "intervals_so_code_26", 5, intervals_so_code_26 },
    { "intervals_so_code_27", 6, intervals_so_code_27 }
  };

int
decl_intervals_so_c84202e7e6de5185 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_intervals_so_c84202e7e6de5185);
  return (0);
}

DECLARE_COMPILED_CODE ("intervals.so", 130, decl_intervals_so_c84202e7e6de5185, intervals_so_c84202e7e6de5185)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_intervals_so_data_c84202e7e6de5185 [4584] =
  "\xf2\x02\x38\xdb\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0c\x0c"
  "\x0c\x28\x0d\xb9\x28\x0d\x28\x0d\x28\x0d\xba\x28\x0d\x28\x0d\xbb"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\x07\xc2\x80\xc1\x0e\xbd\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x83\x88"
  "\x22\x29\x21\x9c\x2b\xbf\x1d\xb0\x84\x88\x28\x0d\x1c\x23\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x85\x88\x28\xb3\x28\xb2\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\xb2\x28\xb3\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\xb3\x28\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\xb2\x28\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb3\x28\xb2"
  "\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x80\x0c"
  "\x0d\x1c\x0d\x1c\x24\x28\xb3\x28\xb2\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\xb2\x28\xb3\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb2\x28\xb3"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb2\x28\xb3\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\xb2\x28\xb3\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\xb2"
  "\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\xb3\x28\x0d\x28\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x24\x28\xb3\x28\x0d\x1c\x28\xb2\x28\xb1\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28"
  "\xb2\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28"
  "\xb2\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28"
  "\xb3\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28"
  "\xb3\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x1c"
  "\x28\xb2\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x28\xb2\x28\xb3\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb8\x17"
  "\x1c\x88\x1b\x0d\x1c\xb0\x2a\x0d\xb8\x1b\x2a\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\xb1\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x1b\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x1b\xb3\xb2\x1b\x1b\x17\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x06\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x2a\xb7\x2a\x1b"
  "\x1d\x1b\xb5\x1b\xb6\x2a\x0d\x0d\x1b\x1b\x0d\x1c\x1b\x0d\x1c\x0d"
  "\x1c\x0c\x1b\x1b\x08\x89\x08\xc3\x0d\x1c\xb4\x2a\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x0d\x1b"
  "\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b"
  "\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\xb1\x0d\xb0\x0d\x0d"
  "\x1b\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x0e\x69\x6e\x74\x65\x72\x76\x61\x6c\x73\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x02\x5d\x02\x20\x0c\x23\x5b\x69\x6e\x74\x65\x72"
  "\x76\x61\x6c\x20\x1a\x23\x5b\x63\x6f\x6e\x74\x72\x61\x64\x69\x63"
  "\x74\x6f\x72\x79\x2d\x69\x6e\x74\x65\x72\x76\x61\x6c\x20\x03\x10"
  "\x65\x6d\x70\x74\x79\x2d\x69\x6e\x74\x65\x72\x76\x61\x6c\x3f\x04"
  "\x1c\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x75\x6e"
  "\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x04\x08\x64\x69"
  "\x73\x70\x6c\x61\x79\x03\x0d\x69\x6e\x74\x65\x72\x76\x61\x6c\x2d"
  "\x6c\x6f\x77\x04\x06\x77\x72\x69\x74\x65\x03\x0e\x69\x6e\x74\x65"
  "\x72\x76\x61\x6c\x2d\x68\x69\x67\x68\x07\x92\x01\x22\x81\x89\x02"
  "\x91\x01\x20\x81\x85\x02\x90\x01\x1e\x81\x89\x02\x8f\x01\x1c\x81"
  "\x85\x02\x8e\x01\x1a\x81\x85\x02\x8d\x01\x18\x81\x85\x02\x8c\x01"
  "\x16\x81\x89\x02\x8b\x01\x14\x81\x85\x02\x8a\x01\x12\x81\x89\x02"
  "\x89\x01\x10\x81\x85\x02\x88\x01\x0e\x81\x85\x02\x87\x01\x0c\x81"
  "\x85\x02\x86\x01\x0a\x81\x85\x02\x85\x01\x08\x81\x85\x02\x84\x01"
  "\x06\x81\x85\x02\x83\x01\x04\x84\x06\x21\x35\x02\x0c\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x72\x65\x66\x0f\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x02\x96"
  "\x01\x0a\x81\x85\x02\x95\x01\x08\x81\x83\x02\x94\x01\x06\x81\x83"
  "\x02\x93\x01\x04\x83\x04\x09\x12\x02\x97\x01\x04\x83\x04\x03\x02"
  "\x04\x0f\x6d\x61\x6b\x65\x2d\x25\x69\x6e\x74\x65\x72\x76\x61\x6c"
  "\x09\x02\x98\x01\x04\x83\x04\x03\x0a\x02\x03\x03\x03\x9c\x01\x0a"
  "\x81\x83\x02\x9b\x01\x08\x81\x85\x02\x9a\x01\x06\x81\x83\x02\x99"
  "\x01\x04\x83\x04\x09\x11\x0b\x02\x03\x0b\x25\x69\x6e\x74\x65\x72"
  "\x76\x61\x6c\x3f\x0c\x03\x10\x25\x69\x6e\x74\x65\x72\x76\x61\x6c"
  "\x2d\x61\x62\x6c\x65\x3f\x0d\x03\x9e\x01\x06\x81\x83\x02\x9d\x01"
  "\x04\x83\x04\x05\x0d\x0e\x02\x08\x03\x0c\x2d\x3e\x25\x69\x6e\x74"
  "\x65\x72\x76\x61\x6c\x0f\x03\x0e\x25\x69\x6e\x74\x65\x72\x76\x61"
  "\x6c\x2d\x6c\x6f\x77\x10\x03\xa0\x01\x06\x81\x83\x02\x9f\x01\x04"
  "\x83\x04\x05\x0d\x11\x02\x09\x03\x0f\x03\x0f\x25\x69\x6e\x74\x65"
  "\x72\x76\x61\x6c\x2d\x68\x69\x67\x68\x12\x03\xa2\x01\x06\x81\x83"
  "\x02\xa1\x01\x04\x83\x04\x05\x0d\x13\x02\x0a\x04\x09\x03\x0c\x25"
  "\x69\x6e\x74\x65\x72\x76\x61\x6c\x2d\x3e\x14\x03\xa4\x01\x06\x81"
  "\x85\x02\xa3\x01\x04\x84\x06\x05\x0d\x15\x02\x0b\x03\x03\x03\xaa"
  "\x01\x0e\x81\x85\x02\xa9\x01\x0c\x81\x85\x02\xa8\x01\x0a\x81\x85"
  "\x02\xa7\x01\x08\x81\x87\x02\xa6\x01\x06\x81\x85\x02\xa5\x01\x04"
  "\x84\x06\x0d\x16\x16\x02\x0c\x03\x03\x04\x0e\x6d\x61\x6b\x65\x2d"
  "\x69\x6e\x74\x65\x72\x76\x61\x6c\x17\x04\xb1\x01\x10\x81\x87\x02"
  "\xb0\x01\x0e\x81\x89\x02\xaf\x01\x0c\x81\x87\x02\xae\x01\x0a\x81"
  "\x85\x02\xad\x01\x08\x81\x87\x02\xac\x01\x06\x81\x85\x02\xab\x01"
  "\x04\x84\x06\x0f\x19\x18\x02\x0d\x03\x03\x04\x17\x04\xb8\x01\x10"
  "\x81\x87\x02\xb7\x01\x0e\x81\x89\x02\xb6\x01\x0c\x81\x87\x02\xb5"
  "\x01\x0a\x81\x85\x02\xb4\x01\x08\x81\x87\x02\xb3\x01\x06\x81\x85"
  "\x02\xb2\x01\x04\x84\x06\x0f\x19\x19\x02\x0e\x03\x03\x06\x04\x6d"
  "\x61\x78\x06\x04\x6d\x69\x6e\x04\x17\x06\xc7\x01\x20\x81\x8b\x02"
  "\xc6\x01\x1e\x81\x89\x02\xc5\x01\x1c\x81\x8b\x02\xc4\x01\x1a\x81"
  "\x8d\x02\xc3\x01\x18\x81\x8b\x02\xc2\x01\x16\x81\x89\x02\xc1\x01"
  "\x14\x81\x8b\x02\xc0\x01\x12\x81\x89\x02\xbf\x01\x10\x81\x87\x02"
  "\xbe\x01\x0e\x81\x89\x02\xbd\x01\x0c\x81\x87\x02\xbc\x01\x0a\x81"
  "\x85\x02\xbb\x01\x08\x81\x87\x02\xba\x01\x06\x81\x85\x02\xb9\x01"
  "\x04\x84\x06\x1f\x2d\x1a\x02\x0f\x25\x43\x61\x6e\x6e\x6f\x74\x20"
  "\x64\x69\x76\x69\x64\x65\x20\x62\x79\x20\x69\x6e\x74\x65\x72\x76"
  "\x61\x6c\x20\x73\x70\x61\x6e\x6e\x69\x6e\x67\x20\x30\x22\x2a\x65"
  "\x72\x72\x6f\x72\x2d\x6f\x6e\x2d\x7a\x65\x72\x6f\x2d\x69\x6e\x74"
  "\x65\x72\x76\x61\x6c\x2d\x64\x69\x76\x69\x73\x69\x6f\x6e\x2a\x1b"
  "\x08\x6e\x6f\x74\x68\x69\x6e\x67\x1c\x03\x03\x03\x05\x06\x65\x72"
  "\x72\x6f\x72\x04\x0d\x6d\x75\x6c\x2d\x69\x6e\x74\x65\x72\x76\x61"
  "\x6c\x1d\x05\x03\x3c\x3d\x04\x17\x07\xd2\x01\x18\x81\x8b\x02\xd1"
  "\x01\x16\x81\x89\x02\xd0\x01\x14\x81\x8b\x02\xcf\x01\x12\x81\x89"
  "\x02\xce\x01\x10\x81\x87\x02\xcd\x01\x0e\x81\x85\x02\xcc\x01\x0c"
  "\x81\x87\x02\xcb\x01\x0a\x81\x85\x02\xca\x01\x08\x81\x85\x02\xc9"
  "\x01\x06\x81\x85\x02\xc8\x01\x04\x84\x06\x17\x2d\x1e\x02\x10\x03"
  "\x03\x03\x07\x73\x71\x75\x61\x72\x65\x04\x17\x05\xd7\x01\x0c\x81"
  "\x87\x02\xd6\x01\x0a\x81\x85\x02\xd5\x01\x08\x81\x85\x02\xd4\x01"
  "\x06\x81\x83\x02\xd3\x01\x04\x83\x04\x0b\x17\x1f\x02\x11\x03\x03"
  "\x03\x05\x73\x71\x72\x74\x04\x17\x05\xdc\x01\x0c\x81\x87\x02\xdb"
  "\x01\x0a\x81\x85\x02\xda\x01\x08\x81\x85\x02\xd9\x01\x06\x81\x83"
  "\x02\xd8\x01\x04\x83\x04\x0b\x17\x20\x02\x12\x03\x03\x03\x04\x6c"
  "\x6f\x67\x04\x17\x05\xe1\x01\x0c\x81\x87\x02\xe0\x01\x0a\x81\x85"
  "\x02\xdf\x01\x08\x81\x85\x02\xde\x01\x06\x81\x83\x02\xdd\x01\x04"
  "\x83\x04\x0b\x17\x21\x02\x13\x03\x03\x03\x04\x65\x78\x70\x04\x17"
  "\x05\xe6\x01\x0c\x81\x87\x02\xe5\x01\x0a\x81\x85\x02\xe4\x01\x08"
  "\x81\x85\x02\xe3\x01\x06\x81\x83\x02\xe2\x01\x04\x83\x04\x0b\x17"
  "\x22\x02\x14\x03\x03\x03\xe9\x01\x08\x81\x85\x02\xe8\x01\x06\x81"
  "\x83\x02\xe7\x01\x04\x83\x04\x07\x10\x23\x02\x15\x03\x04\x06\x6e"
  "\x75\x6d\x3d\x3f\x03\x04\x17\x05\xf2\x01\x14\x81\x8b\x02\xf1\x01"
  "\x12\x81\x8b\x02\xf0\x01\x10\x81\x89\x02\xef\x01\x0e\x81\x87\x02"
  "\xee\x01\x0c\x81\x89\x02\xed\x01\x0a\x81\x89\x02\xec\x01\x08\x81"
  "\x87\x02\xeb\x01\x06\x81\x85\x02\xea\x01\x04\x84\x06\x13\x1f\x24"
  "\x02\x16\x1c\x02\x03\x04\x14\x69\x6e\x74\x65\x72\x73\x65\x63\x74"
  "\x2d\x69\x6e\x74\x65\x72\x76\x61\x6c\x73\x25\x03\x03\x06\x02\x3d"
  "\x06\xfb\x01\x14\x81\x8d\x02\xfa\x01\x12\x81\x8b\x02\xf9\x01\x10"
  "\x81\x89\x02\xf8\x01\x0e\x81\x89\x02\xf7\x01\x0c\x81\x87\x02\xf6"
  "\x01\x0a\x81\x87\x02\xf5\x01\x08\x81\x87\x02\xf4\x01\x06\x81\x85"
  "\x02\xf3\x01\x04\x84\x06\x13\x23\x26\x02\x17\x1c\x02\x03\x03\x03"
  "\x83\x02\x12\x81\x85\x02\x82\x02\x10\x81\x85\x02\x81\x02\x0e\x81"
  "\x87\x02\x80\x02\x0c\x81\x85\x02\xff\x01\x0a\x81\x85\x02\xfe\x01"
  "\x08\x81\x87\x02\xfd\x01\x06\x81\x85\x02\xfc\x01\x04\x84\x06\x11"
  "\x1c\x27\x02\x18\x1c\x02\x03\x03\x03\x8b\x02\x12\x81\x87\x02\x8a"
  "\x02\x10\x81\x87\x02\x89\x02\x0e\x81\x89\x02\x88\x02\x0c\x81\x87"
  "\x02\x87\x02\x0a\x81\x85\x02\x86\x02\x08\x81\x87\x02\x85\x02\x06"
  "\x81\x85\x02\x84\x02\x04\x84\x06\x11\x1c\x28\x02\x19\x1c\x02\x03"
  "\x03\x03\x93\x02\x12\x81\x85\x02\x92\x02\x10\x81\x85\x02\x91\x02"
  "\x0e\x81\x87\x02\x90\x02\x0c\x81\x85\x02\x8f\x02\x0a\x81\x85\x02"
  "\x8e\x02\x08\x81\x87\x02\x8d\x02\x06\x81\x85\x02\x8c\x02\x04\x84"
  "\x06\x11\x1c\x29\x02\x1a\x1c\x02\x03\x03\x03\x9b\x02\x12\x81\x87"
  "\x02\x9a\x02\x10\x81\x87\x02\x99\x02\x0e\x81\x89\x02\x98\x02\x0c"
  "\x81\x87\x02\x97\x02\x0a\x81\x85\x02\x96\x02\x08\x81\x87\x02\x95"
  "\x02\x06\x81\x85\x02\x94\x02\x04\x84\x06\x11\x1c\x1c\x02\x1b\x03"
  "\x0a\x69\x6e\x74\x65\x72\x76\x61\x6c\x3f\x2a\x03\x03\x04\xa0\x02"
  "\x0c\x81\x83\x02\x9f\x02\x0a\x81\x83\x02\x9e\x02\x08\x81\x83\x02"
  "\x9d\x02\x06\x81\x83\x02\x9c\x02\x04\x83\x04\x0b\x16\x2b\x02\x1c"
  "\x03\x2a\x03\x03\x04\xa6\x02\x0e\x81\x83\x02\xa5\x02\x0c\x81\x83"
  "\x02\xa4\x02\x0a\x81\x83\x02\xa3\x02\x08\x81\x83\x02\xa2\x02\x06"
  "\x81\x83\x02\xa1\x02\x04\x83\x04\x0d\x18\x1c\x2c\x2c\x18\x69\x6e"
  "\x74\x65\x72\x76\x61\x6c\x2d\x63\x6f\x6e\x74\x61\x69\x6e\x73\x2d"
  "\x7a\x65\x72\x6f\x3f\x2c\x04\x13\x69\x6e\x74\x65\x72\x76\x61\x6c"
  "\x2d\x6e\x6f\x6e\x2d\x7a\x65\x72\x6f\x3f\x2b\x04\x0c\x3e\x3d\x2d"
  "\x69\x6e\x74\x65\x72\x76\x61\x6c\x2b\x0b\x3e\x2d\x69\x6e\x74\x65"
  "\x72\x76\x61\x6c\x2d\x0c\x3c\x3d\x2d\x69\x6e\x74\x65\x72\x76\x61"
  "\x6c\x2e\x0b\x3c\x2d\x69\x6e\x74\x65\x72\x76\x61\x6c\x2f\x0b\x3d"
  "\x2d\x69\x6e\x74\x65\x72\x76\x61\x6c\x30\x25\x0d\x65\x78\x70\x2d"
  "\x69\x6e\x74\x65\x72\x76\x61\x6c\x31\x0d\x6c\x6f\x67\x2d\x69\x6e"
  "\x74\x65\x72\x76\x61\x6c\x32\x0e\x73\x71\x72\x74\x2d\x69\x6e\x74"
  "\x65\x72\x76\x61\x6c\x33\x10\x73\x71\x75\x61\x72\x65\x2d\x69\x6e"
  "\x74\x65\x72\x76\x61\x6c\x34\x0d\x64\x69\x76\x2d\x69\x6e\x74\x65"
  "\x72\x76\x61\x6c\x35\x1b\x1d\x0d\x73\x75\x62\x2d\x69\x6e\x74\x65"
  "\x72\x76\x61\x6c\x1b\x0d\x61\x64\x64\x2d\x69\x6e\x74\x65\x72\x76"
  "\x61\x6c\x36\x10\x69\x6e\x74\x65\x72\x76\x61\x6c\x2d\x65\x71\x75"
  "\x61\x6c\x3f\x37\x17\x2a\x14\x17\x1c\x04\x29\x04\x28\x04\x27\x04"
  "\x26\x04\x24\x04\x23\x04\x22\x04\x21\x04\x20\x04\x1f\x04\x1e\x04"
  "\x1a\x04\x19\x04\x18\x04\x16\x04\x15\x04\x13\x04\x11\x04\x0e\x04"
  "\x0b\x04\x17\x0a\x04\x04\x0f\x08\x0d\x0c\x04\x14\x73\x65\x74\x2d"
  "\x25\x69\x6e\x74\x65\x72\x76\x61\x6c\x2d\x68\x69\x67\x68\x21\x13"
  "\x73\x65\x74\x2d\x25\x69\x6e\x74\x65\x72\x76\x61\x6c\x2d\x6c\x6f"
  "\x77\x21\x12\x10\x05\x68\x69\x67\x68\x2a\x09\x04\x6c\x6f\x77\x29"
  "\x0e\x72\x74\x64\x3a\x25\x69\x6e\x74\x65\x72\x76\x61\x6c\x28\x0a"
  "\x25\x69\x6e\x74\x65\x72\x76\x61\x6c\x29\x2a\x11\x6c\x6f\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x11\x69\x6e\x74"
  "\x65\x72\x76\x61\x6c\x2d\x70\x72\x69\x6e\x74\x65\x72\x2a\x04\x06"
  "\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x10\x72\x65\x63"
  "\x6f\x72\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x04\x10\x72\x65"
  "\x63\x6f\x72\x64\x2d\x6d\x6f\x64\x69\x66\x69\x65\x72\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06\x2a"
  "\x28\x0c\x0f\x0d\x09\x3c\x6e\x75\x6d\x62\x65\x72\x3e\x36\x0a\x67"
  "\x65\x6e\x65\x72\x69\x63\x2d\x2b\x1b\x0a\x67\x65\x6e\x65\x72\x69"
  "\x63\x2d\x2d\x1d\x0a\x67\x65\x6e\x65\x72\x69\x63\x2d\x2a\x35\x0a"
  "\x67\x65\x6e\x65\x72\x69\x63\x2d\x2f\x30\x0a\x67\x65\x6e\x65\x72"
  "\x69\x63\x2d\x3d\x2f\x0a\x67\x65\x6e\x65\x72\x69\x63\x2d\x3c\x2e"
  "\x0b\x67\x65\x6e\x65\x72\x69\x63\x2d\x3c\x3d\x2d\x0a\x67\x65\x6e"
  "\x65\x72\x69\x63\x2d\x3e\x2b\x0b\x67\x65\x6e\x65\x72\x69\x63\x2d"
  "\x3e\x3d\x34\x0f\x67\x65\x6e\x65\x72\x69\x63\x2d\x73\x71\x75\x61"
  "\x72\x65\x33\x0d\x67\x65\x6e\x65\x72\x69\x63\x2d\x73\x71\x72\x74"
  "\x32\x0c\x67\x65\x6e\x65\x72\x69\x63\x2d\x6c\x6f\x67\x31\x0c\x67"
  "\x65\x6e\x65\x72\x69\x63\x2d\x65\x78\x70\x25\x06\x6d\x65\x72\x67"
  "\x65\x37\x0c\x65\x71\x75\x69\x76\x61\x6c\x65\x6e\x74\x3f\x0f\x63"
  "\x6f\x6e\x74\x72\x61\x64\x69\x63\x74\x6f\x72\x79\x3f\x10\x6e\x75"
  "\x6d\x65\x72\x69\x63\x61\x6c\x2d\x7a\x65\x72\x6f\x3f\x15\x62\x69"
  "\x6e\x61\x72\x79\x2d\x63\x6f\x6e\x74\x72\x61\x64\x69\x63\x74\x69"
  "\x6f\x6e\x2c\x0f\x62\x69\x6e\x61\x72\x79\x2d\x6e\x6f\x74\x68\x69"
  "\x6e\x67\x2c\x04\x14\x64\x65\x63\x6c\x61\x72\x65\x2d\x74\x79\x70"
  "\x65\x2d\x74\x65\x73\x74\x65\x72\x03\x14\x63\x6f\x65\x72\x63\x61"
  "\x62\x69\x6c\x69\x74\x79\x2d\x74\x65\x73\x74\x65\x72\x04\x08\x63"
  "\x6f\x65\x72\x63\x65\x72\x05\x0b\x64\x65\x66\x68\x61\x6e\x64\x6c"
  "\x65\x72\x37\x06\x37\x05\x16\x74\x61\x67\x2d\x63\x6f\x65\x72\x63"
  "\x69\x6f\x6e\x2d\x6d\x65\x74\x61\x64\x61\x74\x61\x05\x11\x64\x65"
  "\x63\x6c\x61\x72\x65\x2d\x63\x6f\x65\x72\x63\x69\x6f\x6e\x05\x14"
  "\x64\x65\x66\x68\x61\x6e\x64\x6c\x65\x72\x2d\x63\x6f\x65\x72\x63"
  "\x69\x6e\x67\x04\x06\x67\x75\x61\x72\x64\x04\x17\x64\x65\x63\x6c"
  "\x61\x72\x65\x2d\x65\x78\x70\x6c\x69\x63\x69\x74\x2d\x67\x75\x61"
  "\x72\x64\x0b\x82\x01\x86\x02\x80\x80\x04\x81\x01\x84\x02\x81\x81"
  "\x02\x80\x01\x82\x02\x81\x81\x02\x7f\x80\x02\x81\x87\x02\x7e\xfe"
  "\x01\x81\x85\x02\x7d\xfc\x01\x81\x89\x02\x7c\xfa\x01\x81\x87\x02"
  "\x7b\xf8\x01\x81\x85\x02\x7a\xf6\x01\x81\x83\x02\x79\xf4\x01\x81"
  "\x83\x02\x78\xf2\x01\x81\x89\x02\x77\xf0\x01\x81\x87\x02\x76\xee"
  "\x01\x81\x83\x02\x75\xec\x01\x81\x83\x02\x74\xea\x01\x81\x87\x02"
  "\x73\xe8\x01\x81\x85\x02\x72\xe6\x01\x81\x8b\x02\x71\xe4\x01\x81"
  "\x89\x02\x70\xe2\x01\x81\x87\x02\x6f\xe0\x01\x81\x85\x02\x6e\xde"
  "\x01\x81\x83\x02\x6d\xdc\x01\x81\x89\x02\x6c\xda\x01\x81\x87\x02"
  "\x6b\xd8\x01\x81\x83\x02\x6a\xd6\x01\x81\x83\x02\x69\xd4\x01\x81"
  "\x89\x02\x68\xd2\x01\x81\x87\x02\x67\xd0\x01\x81\x85\x02\x66\xce"
  "\x01\x81\x83\x02\x65\xcc\x01\x81\x89\x02\x64\xca\x01\x81\x87\x02"
  "\x63\xc8\x01\x81\x85\x02\x62\xc6\x01\x81\x83\x02\x61\xc4\x01\x81"
  "\x89\x02\x60\xc2\x01\x81\x87\x02\x5f\xc0\x01\x81\x85\x02\x5e\xbe"
  "\x01\x81\x83\x02\x5d\xbc\x01\x81\x89\x02\x5c\xba\x01\x81\x87\x02"
  "\x5b\xb8\x01\x81\x85\x02\x5a\xb6\x01\x81\x83\x02\x59\xb4\x01\x81"
  "\x89\x02\x58\xb2\x01\x81\x87\x02\x57\xb0\x01\x81\x85\x02\x56\xae"
  "\x01\x81\x83\x02\x55\xac\x01\x81\x89\x02\x54\xaa\x01\x81\x87\x02"
  "\x53\xa8\x01\x81\x85\x02\x52\xa6\x01\x81\x83\x02\x51\xa4\x01\x81"
  "\x89\x02\x50\xa2\x01\x81\x87\x02\x4f\xa0\x01\x81\x85\x02\x4e\x9e"
  "\x01\x81\x83\x02\x4d\x9c\x01\x81\x89\x02\x4c\x9a\x01\x81\x87\x02"
  "\x4b\x98\x01\x81\x85\x02\x4a\x96\x01\x81\x83\x02\x49\x94\x01\x81"
  "\x89\x02\x48\x92\x01\x81\x87\x02\x47\x90\x01\x81\x85\x02\x46\x8e"
  "\x01\x81\x83\x02\x45\x8c\x01\x81\x89\x02\x44\x8a\x01\x81\x87\x02"
  "\x43\x88\x01\x81\x85\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81"
  "\x89\x02\x40\x82\x01\x81\x87\x02\x3f\x80\x01\x81\x85\x02\x3e\x7e"
  "\x81\x83\x02\x3d\x7c\x81\x89\x02\x3c\x7a\x81\x87\x02\x3b\x78\x81"
  "\x85\x02\x3a\x76\x81\x83\x02\x39\x74\x81\x89\x02\x38\x72\x81\x87"
  "\x02\x37\x70\x81\x85\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x89\x02"
  "\x34\x6a\x81\x87\x02\x33\x68\x81\x85\x02\x32\x66\x81\x83\x02\x31"
  "\x64\x81\x89\x02\x30\x62\x81\x87\x02\x2f\x60\x81\x85\x02\x2e\x5e"
  "\x81\x83\x02\x2d\x5c\x81\x89\x02\x2c\x5a\x81\x87\x02\x2b\x58\x81"
  "\x85\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81\x89"
  "\x02\x27\x50\x81\x87\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x89\x02"
  "\x24\x4a\x81\x87\x02\x23\x48\x81\x85\x02\x22\x46\x81\x83\x02\x21"
  "\x44\x81\x85\x02\x20\x42\x81\x89\x02\x1f\x40\x81\x85\x02\x1e\x3e"
  "\x81\x83\x02\x1d\x3c\x81\x85\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81"
  "\x83\x02\x1a\x36\x81\x87\x02\x19\x34\x81\x85\x02\x18\x32\x81\x83"
  "\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x85\x02"
  "\x14\x2a\x81\x87\x02\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11"
  "\x24\x81\x89\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e"
  "\x81\x89\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x87\x02\x0b\x18\x81"
  "\x85\x02\x0a\x16\x81\x89\x02\x09\x14\x81\x83\x02\x08\x12\x81\x85"
  "\x02\x07\x10\x81\x89\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02"
  "\x04\x0a\x81\x87\x02\x03\x08\x81\x83\x02\x02\x06\x81\x87\x02\x01"
  "\x04\x81\x83\x02\x85\x02\xf2\x02";

SCHEME_OBJECT *
intervals_so_data_c84202e7e6de5185 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_intervals_so_data_c84202e7e6de5185 [0]))), (sizeof (prog_intervals_so_data_c84202e7e6de5185)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_149]));
}

DECLARE_COMPILED_DATA_NS ("intervals.so", intervals_so_data_c84202e7e6de5185)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("intervals.so", "7974e7de54f83a37")
