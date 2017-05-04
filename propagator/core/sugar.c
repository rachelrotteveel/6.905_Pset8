/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-03T22:03:41-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define LABEL_1_12 19
#define LABEL_1_13 21
#define LABEL_1_14 23
#define LABEL_1_16 25
#define LABEL_1_17 27
#define LABEL_1_18 29
#define LABEL_1_19 31
#define LABEL_1_20 33
#define LABEL_1_21 35
#define LABEL_1_22 37
#define LABEL_1_23 39
#define LABEL_1_24 41
#define LABEL_1_25 43
#define LABEL_1_26 45
#define LABEL_1_27 47
#define LABEL_1_28 49
#define ENVIRONMENT_LABEL_1_3 62
#define DEBUGGING_LABEL_1_2 61
#define OBJECT_1_7 60
#define OBJECT_1_6 59
#define OBJECT_1_5 58
#define OBJECT_1_4 57
#define OBJECT_1_3 56
#define OBJECT_1_2 55
#define OBJECT_1_1 54
#define OBJECT_1_0 53
#define EXECUTE_CACHE_1_15 51
#define FREE_REFERENCES_LABEL_1_0 50
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_44;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_46;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_47;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_48;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_49;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_50;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_51;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_52;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto label_53;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto label_54;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_33;

    case 11:
      current_block = (Rpc - LABEL_1_16);
      goto label_55;

    case 12:
      current_block = (Rpc - LABEL_1_17);
      goto label_56;

    case 13:
      current_block = (Rpc - LABEL_1_18);
      goto label_57;

    case 14:
      current_block = (Rpc - LABEL_1_19);
      goto label_58;

    case 15:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_28;

    case 16:
      current_block = (Rpc - LABEL_1_21);
      goto label_59;

    case 17:
      current_block = (Rpc - LABEL_1_22);
      goto label_60;

    case 18:
      current_block = (Rpc - LABEL_1_23);
      goto label_61;

    case 19:
      current_block = (Rpc - LABEL_1_24);
      goto label_62;

    case 20:
      current_block = (Rpc - LABEL_1_25);
      goto label_63;

    case 21:
      current_block = (Rpc - LABEL_1_26);
      goto label_64;

    case 22:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_18;

    case 23:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_66)
DEFLABEL (lambda_44)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_68;

DEFLABEL (label_67)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (label_68)
  if (! ((Wrd6.uLng) == 1))
    goto label_116;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_115)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_70;

DEFLABEL (label_69)
  Rsp = (& (Rsp [1]));
  goto label_67;

DEFLABEL (label_70)
  if (! ((Wrd19.uLng) == 1))
    goto label_114;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_113)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rsp = (& (Rsp [1]));
  goto label_69;

DEFLABEL (label_72)
  if (! ((Wrd31.uLng) == 1))
    goto label_112;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_111)
  (Rsp [0]) = (Wrd33.Obj);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_71;
  if (! ((Wrd43.uLng) == 1))
    goto label_110;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_109)
  if ((Wrd45.Obj) == (current_block [OBJECT_1_2]))
    goto label_74;
  (Wrd55.Obj) = (current_block [OBJECT_1_4]);
  goto label_73;

DEFLABEL (label_74)
  (Wrd55.Obj) = (current_block [OBJECT_1_3]);

DEFLABEL (label_73)
DEFLABEL (label_108)
  Rsp = (& (Rsp [1]));
  if ((Wrd55.Obj) == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_107;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_106)
  (Rsp [0]) = (Wrd58.Obj);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_69;
  if (! ((Wrd68.uLng) == 1))
    goto label_105;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_104)
  if ((Wrd70.Obj) == (current_block [OBJECT_1_2]))
    goto label_76;
  (Wrd80.Obj) = (current_block [OBJECT_1_4]);
  goto label_75;

DEFLABEL (label_76)
  (Wrd80.Obj) = (current_block [OBJECT_1_3]);

DEFLABEL (label_75)
DEFLABEL (label_103)
  Rsp = (& (Rsp [1]));
  if ((Wrd80.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_102;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd83.Obj) = ((Wrd85.pObj) [1]);

DEFLABEL (label_101)
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_100;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd92.Obj) = ((Wrd93.pObj) [0]);

DEFLABEL (label_99)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_98;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd99.Obj) = ((Wrd100.pObj) [0]);

DEFLABEL (label_97)
  (Wrd109.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd109.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd113.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd114.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd114.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_96;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_95)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_94;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_93)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_92;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_91)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_90;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_89)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_88;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_87)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_86;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_85)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_84;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_83)
  (Wrd40.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_82;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_81)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_80;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd50.Obj) = ((Wrd51.pObj) [0]);

DEFLABEL (label_79)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_78;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd57.Obj) = ((Wrd58.pObj) [0]);

DEFLABEL (label_77)
  (Wrd64.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd72.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_27);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_1_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_64)
  (Wrd57.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_63)
  (Wrd50.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_62)
  (Wrd41.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_61)
  (Wrd30.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_60)
  (Wrd23.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_59)
  (Wrd14.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_58)
  (Wrd37.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_57)
  (Wrd30.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_56)
  (Wrd23.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_55)
  (Wrd14.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_54)
  (Wrd99.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_53)
  (Wrd92.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_52)
  (Wrd83.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_105)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_51)
  (Wrd70.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_50)
  (Wrd58.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_110)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_49)
  (Wrd45.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_48)
  (Wrd33.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_115;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define LABEL_2_9 13
#define LABEL_2_10 15
#define LABEL_2_11 17
#define LABEL_2_12 19
#define LABEL_2_13 21
#define LABEL_2_14 23
#define LABEL_2_15 25
#define LABEL_2_17 27
#define LABEL_2_18 29
#define LABEL_2_19 31
#define LABEL_2_20 33
#define LABEL_2_21 35
#define LABEL_2_22 37
#define LABEL_2_23 39
#define LABEL_2_24 41
#define LABEL_2_25 43
#define LABEL_2_26 45
#define LABEL_2_27 47
#define LABEL_2_28 49
#define LABEL_2_29 51
#define ENVIRONMENT_LABEL_2_3 64
#define DEBUGGING_LABEL_2_2 63
#define OBJECT_2_7 62
#define OBJECT_2_6 61
#define OBJECT_2_5 60
#define OBJECT_2_4 59
#define OBJECT_2_3 58
#define OBJECT_2_2 57
#define OBJECT_2_1 56
#define OBJECT_2_0 55
#define EXECUTE_CACHE_2_16 53
#define FREE_REFERENCES_LABEL_2_0 52
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd112;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto lambda_45;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_47;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_48;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_49;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto label_50;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto label_51;

    case 6:
      current_block = (Rpc - LABEL_2_10);
      goto label_52;

    case 7:
      current_block = (Rpc - LABEL_2_11);
      goto label_53;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto label_54;

    case 9:
      current_block = (Rpc - LABEL_2_13);
      goto label_55;

    case 10:
      current_block = (Rpc - LABEL_2_14);
      goto label_56;

    case 11:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_33;

    case 12:
      current_block = (Rpc - LABEL_2_17);
      goto label_57;

    case 13:
      current_block = (Rpc - LABEL_2_18);
      goto label_58;

    case 14:
      current_block = (Rpc - LABEL_2_19);
      goto label_59;

    case 15:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_29;

    case 16:
      current_block = (Rpc - LABEL_2_21);
      goto label_60;

    case 17:
      current_block = (Rpc - LABEL_2_22);
      goto label_61;

    case 18:
      current_block = (Rpc - LABEL_2_23);
      goto label_62;

    case 19:
      current_block = (Rpc - LABEL_2_24);
      goto label_63;

    case 20:
      current_block = (Rpc - LABEL_2_25);
      goto label_64;

    case 21:
      current_block = (Rpc - LABEL_2_26);
      goto label_65;

    case 22:
      current_block = (Rpc - LABEL_2_27);
      goto label_66;

    case 23:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_18;

    case 24:
      current_block = (Rpc - LABEL_2_29);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_68)
DEFLABEL (lambda_45)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_70;

DEFLABEL (label_69)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (label_70)
  if (! ((Wrd6.uLng) == 1))
    goto label_120;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_119)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rsp = (& (Rsp [1]));
  goto label_69;

DEFLABEL (label_72)
  if (! ((Wrd19.uLng) == 1))
    goto label_118;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_117)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rsp = (& (Rsp [1]));
  goto label_71;

DEFLABEL (label_74)
  if (! ((Wrd31.uLng) == 1))
    goto label_116;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_115)
  (Rsp [0]) = (Wrd33.Obj);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_73;
  if (! ((Wrd43.uLng) == 1))
    goto label_114;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_113)
  if ((Wrd45.Obj) == (current_block [OBJECT_2_2]))
    goto label_76;
  (Wrd55.Obj) = (current_block [OBJECT_2_4]);
  goto label_75;

DEFLABEL (label_76)
  (Wrd55.Obj) = (current_block [OBJECT_2_3]);

DEFLABEL (label_75)
DEFLABEL (label_112)
  Rsp = (& (Rsp [1]));
  if ((Wrd55.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_111;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_110)
  (Rsp [0]) = (Wrd58.Obj);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_71;
  if (! ((Wrd68.uLng) == 1))
    goto label_109;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_108)
  if ((Wrd70.Obj) == (current_block [OBJECT_2_2]))
    goto label_78;
  (Wrd80.Obj) = (current_block [OBJECT_2_4]);
  goto label_77;

DEFLABEL (label_78)
  (Wrd80.Obj) = (current_block [OBJECT_2_3]);

DEFLABEL (label_77)
DEFLABEL (label_107)
  Rsp = (& (Rsp [1]));
  if ((Wrd80.Obj) == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_106;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd83.Obj) = ((Wrd85.pObj) [1]);

DEFLABEL (label_105)
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_104;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd92.Obj) = ((Wrd93.pObj) [0]);

DEFLABEL (label_103)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_102;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd99.Obj) = ((Wrd100.pObj) [1]);

DEFLABEL (label_101)
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd108.uLng) == 1))
    goto label_100;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd106.Obj) = ((Wrd107.pObj) [0]);

DEFLABEL (label_99)
  (Wrd116.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd106.Obj);
  (* (Rhp++)) = (Wrd116.Obj);
  (Wrd114.pObj) = (& (Rhp [-2]));
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd114.pObj)));
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd120.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd121.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_98;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_97)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_96;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_95)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_94;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_93)
  (Wrd37.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_92;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_91)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_90;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_89)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_88;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_87)
  (Wrd40.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_86;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_85)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_84;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd50.Obj) = ((Wrd51.pObj) [0]);

DEFLABEL (label_83)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_82;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd57.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_81)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_80;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd65.pObj) [0]);

DEFLABEL (label_79)
  (Wrd71.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd79.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_28);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_29);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_66)
  (Wrd64.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_65)
  (Wrd57.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_64)
  (Wrd50.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_63)
  (Wrd41.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_62)
  (Wrd30.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_61)
  (Wrd23.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_60)
  (Wrd14.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_59)
  (Wrd30.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_58)
  (Wrd23.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_57)
  (Wrd14.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_56)
  (Wrd106.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_55)
  (Wrd99.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_54)
  (Wrd92.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_53)
  (Wrd83.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_109)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_52)
  (Wrd70.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_51)
  (Wrd58.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_114)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_50)
  (Wrd45.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_49)
  (Wrd33.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_119;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_8 7
#define LABEL_3_11 9
#define LABEL_3_12 11
#define LABEL_3_5 13
#define LABEL_3_13 15
#define LABEL_3_14 17
#define LABEL_3_16 19
#define LABEL_3_17 21
#define LABEL_3_19 23
#define LABEL_3_20 25
#define LABEL_3_15 27
#define LABEL_3_18 29
#define LABEL_3_21 31
#define LABEL_3_22 33
#define LABEL_3_9 35
#define LABEL_3_27 37
#define LABEL_3_25 39
#define LABEL_3_28 41
#define LABEL_3_29 43
#define ENVIRONMENT_LABEL_3_3 69
#define DEBUGGING_LABEL_3_2 68
#define OBJECT_3_12 67
#define OBJECT_3_11 66
#define OBJECT_3_10 65
#define OBJECT_3_9 64
#define OBJECT_3_8 63
#define OBJECT_3_7 62
#define OBJECT_3_6 61
#define OBJECT_3_5 60
#define OBJECT_3_4 59
#define OBJECT_3_3 58
#define OBJECT_3_2 57
#define OBJECT_3_1 56
#define OBJECT_3_0 55
#define EXECUTE_CACHE_3_26 45
#define EXECUTE_CACHE_3_24 47
#define EXECUTE_CACHE_3_23 49
#define EXECUTE_CACHE_3_10 51
#define EXECUTE_CACHE_3_6 53
#define FREE_REFERENCES_LABEL_3_0 44
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd96;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd134;
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
      current_block = (Rpc - LABEL_3_4);
      goto propagator_naming_convention_32;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_16;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto label_39;

    case 8:
      current_block = (Rpc - LABEL_3_16);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_3_17);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_3_20);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_3_27);
      goto continuation_24;

    case 18:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_3_29);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (propagator_naming_convention_41)
DEFLABEL (propagator_naming_convention_32)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 30))
    goto label_65;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_64)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_63;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd21.Lng) < 3L)
    goto label_62;

DEFLABEL (label_61)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_60)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 30))
    goto label_59;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (Wrd35.Obj) = (MAKE_OBJECT (26, (Wrd39.uLng)));

DEFLABEL (label_58)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_57;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if ((Wrd47.Lng) < 2L)
    goto label_44;

DEFLABEL (label_43)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_42)
  (Wrd82.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_56)
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 30))
    goto label_55;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (Wrd61.Obj) = (MAKE_OBJECT (26, (Wrd65.uLng)));

DEFLABEL (label_54)
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd72.uLng) == 26))
    goto label_53;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if ((Wrd73.Lng) < 2L)
    goto label_46;

DEFLABEL (label_45)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd81.Obj);
  goto label_42;

DEFLABEL (label_46)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_52)
  (Wrd86.Obj) = (Rsp [2]);
  if ((Wrd86.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd88.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd88.Obj);

DEFLABEL (label_48)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd92.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd93.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd93.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (current_block [OBJECT_3_9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_3_27);
  (Wrd9.Obj) = (current_block [OBJECT_3_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_11]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_25);
  (Wrd9.Obj) = (current_block [OBJECT_3_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_29);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd94.Obj) = (Rsp [0]);
  if ((Wrd94.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;

DEFLABEL (label_50)
  (Wrd96.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd96.Obj);
  goto label_48;

DEFLABEL (label_51)
  (Wrd97.Obj) = (Rsp [1]);
  if (! ((Wrd97.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_50;
  (Wrd99.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd99.Obj);
  goto label_48;

DEFLABEL (label_53)
  (Wrd101.Obj) = (current_block [OBJECT_3_1]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_46;

DEFLABEL (label_55)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_36)
  (Wrd61.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd107.Obj) = (current_block [OBJECT_3_1]);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_59)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_35)
  (Wrd35.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_62)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_60;

DEFLABEL (label_63)
  (Wrd113.Obj) = (current_block [OBJECT_3_4]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_62;

DEFLABEL (label_65)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_34)
  (Wrd9.Obj) = Rvl;
  goto label_64;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_66;
  (Wrd122.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd126.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd126.Obj);
  (Wrd127.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd127.Obj);
  (Wrd128.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd128.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (label_66)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_3_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_69)
  (Wrd134.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd134.Obj);

DEFLABEL (label_68)
  goto label_52;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_11);
  goto label_67;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 21
#define DEBUGGING_LABEL_4_2 20
#define OBJECT_4_6 19
#define OBJECT_4_5 18
#define OBJECT_4_4 17
#define OBJECT_4_3 16
#define OBJECT_4_2 15
#define OBJECT_4_1 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_8 11
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_4_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_4_5]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_4_6]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_16)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_9 11
#define LABEL_5_11 13
#define LABEL_5_12 15
#define ENVIRONMENT_LABEL_5_3 33
#define DEBUGGING_LABEL_5_2 32
#define OBJECT_5_10 31
#define OBJECT_5_9 30
#define OBJECT_5_8 29
#define OBJECT_5_7 28
#define OBJECT_5_6 27
#define OBJECT_5_5 26
#define OBJECT_5_4 25
#define OBJECT_5_3 24
#define OBJECT_5_2 23
#define OBJECT_5_1 22
#define OBJECT_5_0 21
#define EXECUTE_CACHE_5_10 17
#define EXECUTE_CACHE_5_8 19
#define FREE_REFERENCES_LABEL_5_0 16
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_25;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_32)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_39)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_38;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_37)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_5_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_5_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_5_5]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_36;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_35)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_34;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd47.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_33)
  (Wrd57.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd62.Obj) = (current_block [OBJECT_5_3]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd66.Obj) = (current_block [OBJECT_5_7]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (Wrd73.Obj) = (current_block [OBJECT_5_8]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (Wrd81.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (Wrd85.Obj) = (current_block [OBJECT_5_9]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (Wrd86.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd86.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (Wrd94.Obj) = (current_block [OBJECT_5_10]);
  (* (Rhp++)) = (Wrd94.Obj);
  (* (Rhp++)) = (Wrd87.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_30)
  (Wrd47.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_29)
  (Wrd38.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_4 5
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_10 11
#define LABEL_6_17 13
#define LABEL_6_18 15
#define LABEL_6_12 17
#define LABEL_6_13 19
#define LABEL_6_16 21
#define LABEL_6_20 23
#define LABEL_6_19 25
#define ENVIRONMENT_LABEL_6_3 44
#define DEBUGGING_LABEL_6_2 43
#define OBJECT_6_3 42
#define OBJECT_6_2 41
#define OBJECT_6_1 40
#define OBJECT_6_0 39
#define EXECUTE_CACHE_6_21 27
#define EXECUTE_CACHE_6_15 29
#define EXECUTE_CACHE_6_14 31
#define EXECUTE_CACHE_6_11 33
#define EXECUTE_CACHE_6_8 35
#define EXECUTE_CACHE_6_6 37
#define FREE_REFERENCES_LABEL_6_0 26
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_6_4);
      goto make_arity_detecting_operator_12;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_6_17);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_6_18);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_6_19);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_arity_detecting_operator_15)
DEFLABEL (make_arity_detecting_operator_12)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd22.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd20.pObj)));
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd7.Obj) = ((Wrd20.pObj) [0]);
  if ((Wrd7.Obj) == (current_block [OBJECT_6_0]))
    goto label_22;

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_17)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd27.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_6_1]);
  (Rsp [0]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_18)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  ((Wrd25.pObj) [0]) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_9 11
#define LABEL_7_11 13
#define LABEL_7_13 15
#define LABEL_7_14 17
#define ENVIRONMENT_LABEL_7_3 37
#define DEBUGGING_LABEL_7_2 36
#define OBJECT_7_10 35
#define OBJECT_7_9 34
#define OBJECT_7_8 33
#define OBJECT_7_7 32
#define OBJECT_7_6 31
#define OBJECT_7_5 30
#define OBJECT_7_4 29
#define OBJECT_7_3 28
#define OBJECT_7_2 27
#define OBJECT_7_1 26
#define OBJECT_7_0 25
#define EXECUTE_CACHE_7_12 19
#define EXECUTE_CACHE_7_10 21
#define EXECUTE_CACHE_7_8 23
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_27;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_34)
DEFLABEL (lambda_27)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_42;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_41)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_40;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_39)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_7_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_7_6]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_38;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_37)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_36;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd47.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_35)
  (Wrd57.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.Obj) = (current_block [OBJECT_7_3]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd66.Obj) = (current_block [OBJECT_7_7]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (Wrd73.Obj) = (current_block [OBJECT_7_8]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (Wrd81.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (Wrd85.Obj) = (current_block [OBJECT_7_9]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (Wrd86.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd86.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (Wrd94.Obj) = (current_block [OBJECT_7_10]);
  (* (Rhp++)) = (Wrd94.Obj);
  (* (Rhp++)) = (Wrd87.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_32)
  (Wrd47.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_31)
  (Wrd38.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_5 3
#define LABEL_8_6 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define LABEL_8_10 13
#define LABEL_8_11 15
#define LABEL_8_12 17
#define LABEL_8_13 19
#define LABEL_8_15 21
#define LABEL_8_16 23
#define LABEL_8_17 25
#define LABEL_8_18 27
#define LABEL_8_19 29
#define LABEL_8_20 31
#define LABEL_8_21 33
#define LABEL_8_23 35
#define LABEL_8_4 37
#define LABEL_8_24 39
#define LABEL_8_25 41
#define LABEL_8_26 43
#define LABEL_8_27 45
#define LABEL_8_28 47
#define LABEL_8_22 49
#define LABEL_8_30 51
#define LABEL_8_31 53
#define LABEL_8_32 55
#define LABEL_8_14 57
#define LABEL_8_34 59
#define LABEL_8_35 61
#define LABEL_8_36 63
#define LABEL_8_33 65
#define LABEL_8_37 67
#define LABEL_8_38 69
#define LABEL_8_39 71
#define LABEL_8_40 73
#define LABEL_8_41 75
#define ENVIRONMENT_LABEL_8_3 89
#define DEBUGGING_LABEL_8_2 88
#define OBJECT_8_8 87
#define OBJECT_8_7 86
#define OBJECT_8_6 85
#define OBJECT_8_5 84
#define OBJECT_8_4 83
#define OBJECT_8_3 82
#define OBJECT_8_2 81
#define OBJECT_8_1 80
#define OBJECT_8_0 79
#define EXECUTE_CACHE_8_29 77
#define FREE_REFERENCES_LABEL_8_0 76
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd218;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd65;
  machine_word Wrd118;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd128;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd105;
  machine_word Wrd142;
  machine_word Wrd134;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd209;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd199;
  machine_word Wrd200;
  machine_word Wrd201;
  machine_word Wrd198;
  machine_word Wrd192;
  machine_word Wrd193;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd183;
  machine_word Wrd185;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd182;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd178;
  machine_word Wrd175;
  machine_word Wrd169;
  machine_word Wrd170;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd160;
  machine_word Wrd162;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd159;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd129;
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
      current_block = (Rpc - LABEL_8_5);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_90;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_91;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_92;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_93;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto label_94;

    case 6:
      current_block = (Rpc - LABEL_8_11);
      goto label_95;

    case 7:
      current_block = (Rpc - LABEL_8_12);
      goto label_96;

    case 8:
      current_block = (Rpc - LABEL_8_13);
      goto label_97;

    case 9:
      current_block = (Rpc - LABEL_8_15);
      goto label_89;

    case 10:
      current_block = (Rpc - LABEL_8_16);
      goto lambda_12;

    case 11:
      current_block = (Rpc - LABEL_8_17);
      goto label_86;

    case 12:
      current_block = (Rpc - LABEL_8_18);
      goto label_85;

    case 13:
      current_block = (Rpc - LABEL_8_19);
      goto lambda_32;

    case 14:
      current_block = (Rpc - LABEL_8_20);
      goto label_83;

    case 15:
      current_block = (Rpc - LABEL_8_21);
      goto label_84;

    case 16:
      current_block = (Rpc - LABEL_8_23);
      goto label_82;

    case 17:
      current_block = (Rpc - LABEL_8_4);
      goto lambda_75;

    case 18:
      current_block = (Rpc - LABEL_8_24);
      goto label_79;

    case 19:
      current_block = (Rpc - LABEL_8_25);
      goto label_80;

    case 20:
      current_block = (Rpc - LABEL_8_26);
      goto label_81;

    case 21:
      current_block = (Rpc - LABEL_8_27);
      goto label_77;

    case 22:
      current_block = (Rpc - LABEL_8_28);
      goto label_78;

    case 23:
      current_block = (Rpc - LABEL_8_22);
      goto continuation_47;

    case 24:
      current_block = (Rpc - LABEL_8_30);
      goto label_87;

    case 25:
      current_block = (Rpc - LABEL_8_31);
      goto label_88;

    case 26:
      current_block = (Rpc - LABEL_8_32);
      goto continuation_40;

    case 27:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_61;

    case 28:
      current_block = (Rpc - LABEL_8_34);
      goto label_98;

    case 29:
      current_block = (Rpc - LABEL_8_35);
      goto label_99;

    case 30:
      current_block = (Rpc - LABEL_8_36);
      goto label_100;

    case 31:
      current_block = (Rpc - LABEL_8_33);
      goto continuation_39;

    case 32:
      current_block = (Rpc - LABEL_8_37);
      goto continuation_57;

    case 33:
      current_block = (Rpc - LABEL_8_38);
      goto continuation_38;

    case 34:
      current_block = (Rpc - LABEL_8_39);
      goto label_101;

    case 35:
      current_block = (Rpc - LABEL_8_40);
      goto label_102;

    case 36:
      current_block = (Rpc - LABEL_8_41);
      goto continuation_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_107)
DEFLABEL (lambda_75)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_117;

DEFLABEL (label_116)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_109;

DEFLABEL (label_108)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

DEFLABEL (label_109)
  if (! ((Wrd8.uLng) == 1))
    goto label_115;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_114)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_111;

DEFLABEL (label_110)
  Rsp = (& (Rsp [1]));
  goto label_108;

DEFLABEL (label_111)
  if (! ((Wrd21.uLng) == 1))
    goto label_113;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_112)
  (Rsp [0]) = (Wrd23.Obj);
  goto lambda_32;

DEFLABEL (label_113)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_78)
  (Wrd23.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_27]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  if (! ((Wrd6.uLng) == 1))
    goto label_127;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_126)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 1)
    goto label_119;

DEFLABEL (label_118)
  Rsp = (& (Rsp [1]));
  goto label_116;

DEFLABEL (label_119)
  if (! ((Wrd42.uLng) == 1))
    goto label_125;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_124)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 1)
    goto label_121;

DEFLABEL (label_120)
  Rsp = (& (Rsp [1]));
  goto label_118;

DEFLABEL (label_121)
  if (! ((Wrd54.uLng) == 1))
    goto label_123;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_122)
  (Rsp [0]) = (Wrd56.Obj);
  goto lambda_12;

DEFLABEL (label_123)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_81)
  (Wrd56.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_80)
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_126;

DEFLABEL (lambda_106)
DEFLABEL (lambda_32)
  INTERRUPT_CHECK (26, LABEL_8_19);
  (Wrd65.Obj) = (Rsp [0]);
  if ((Wrd65.Obj) == (current_block [OBJECT_8_0]))
    goto label_130;
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_110;
  if (! ((Wrd68.uLng) == 1))
    goto label_129;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_128)
  (Rsp [0]) = (Wrd70.Obj);
  goto lambda_32;

DEFLABEL (label_129)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_82)
  (Wrd70.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_130)
  Rsp = (& (Rsp [1]));
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_135;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [1]);

DEFLABEL (label_134)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_133;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd89.Obj) = ((Wrd90.pObj) [1]);

DEFLABEL (label_132)
  (Wrd99.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd97.pObj) = (& (Rhp [-2]));
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd97.pObj)));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = (current_block [OBJECT_8_4]);
  (* (--Rsp)) = (Wrd103.Obj);

DEFLABEL (label_131)
  (Wrd218.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd218.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_133)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_84)
  (Wrd89.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_83)
  (Wrd80.Obj) = Rvl;
  goto label_134;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_8_22);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_143;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_142)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_141;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_140)
  (Wrd33.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_32]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_8_5]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_8_32);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_33]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_8_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_8_33);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_38]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_8_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_8_38);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_139;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_138)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_137;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_136)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_41]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_8_7]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_8_41);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_137)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_40]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_102)
  (Wrd23.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_39]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_101)
  (Wrd14.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_31]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_88)
  (Wrd23.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_87)
  (Wrd14.Obj) = Rvl;
  goto label_142;

DEFLABEL (lambda_105)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_8_16);
  (Wrd105.Obj) = (Rsp [0]);
  if ((Wrd105.Obj) == (current_block [OBJECT_8_0]))
    goto label_146;
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd108.uLng) == 1))
    goto label_120;
  if (! ((Wrd108.uLng) == 1))
    goto label_145;
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd110.Obj) = ((Wrd112.pObj) [1]);

DEFLABEL (label_144)
  (Rsp [0]) = (Wrd110.Obj);
  goto lambda_12;

DEFLABEL (label_145)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_85)
  (Wrd110.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_146)
  Rsp = (& (Rsp [1]));
  (Wrd123.Obj) = (Rsp [0]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd124.uLng) == 1))
    goto label_148;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd120.Obj) = ((Wrd122.pObj) [1]);

DEFLABEL (label_147)
  (Rsp [0]) = (Wrd120.Obj);
  goto lambda_20;

DEFLABEL (label_148)
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_86)
  (Wrd120.Obj) = Rvl;
  goto label_147;

DEFLABEL (lambda_104)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_8_5);
  (Wrd129.Obj) = (Rsp [0]);
  if ((Wrd129.Obj) == (current_block [OBJECT_8_0]))
    goto label_151;
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd132.uLng) == 1))
    goto label_118;
  if (! ((Wrd132.uLng) == 1))
    goto label_150;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd134.Obj) = ((Wrd136.pObj) [1]);

DEFLABEL (label_149)
  (Rsp [0]) = (Wrd134.Obj);
  goto lambda_20;

DEFLABEL (label_150)
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_89)
  (Wrd134.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_151)
  Rsp = (& (Rsp [1]));
  (Wrd147.Obj) = (Rsp [0]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd148.uLng) == 1))
    goto label_167;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd144.Obj) = ((Wrd146.pObj) [1]);

DEFLABEL (label_166)
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd144.Obj));
  if (! ((Wrd155.uLng) == 1))
    goto label_165;
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd154.Obj) = ((Wrd153.pObj) [1]);
  (* (--Rsp)) = (Wrd154.Obj);

DEFLABEL (label_164)
  (Wrd163.Obj) = (Rsp [1]);
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd164.uLng) == 1))
    goto label_163;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd163.Obj));
  (Wrd160.Obj) = ((Wrd162.pObj) [1]);

DEFLABEL (label_162)
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd171.uLng) == 1))
    goto label_161;
  (Wrd170.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd169.Obj) = ((Wrd170.pObj) [0]);

DEFLABEL (label_160)
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd169.Obj));
  if (! ((Wrd178.uLng) == 1))
    goto label_159;
  (Wrd176.pObj) = (OBJECT_ADDRESS (Wrd169.Obj));
  (Wrd177.Obj) = ((Wrd176.pObj) [1]);
  (* (--Rsp)) = (Wrd177.Obj);

DEFLABEL (label_158)
  (Wrd186.Obj) = (Rsp [2]);
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if (! ((Wrd187.uLng) == 1))
    goto label_157;
  (Wrd185.pObj) = (OBJECT_ADDRESS (Wrd186.Obj));
  (Wrd183.Obj) = ((Wrd185.pObj) [1]);

DEFLABEL (label_156)
  (Wrd194.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if (! ((Wrd194.uLng) == 1))
    goto label_155;
  (Wrd193.pObj) = (OBJECT_ADDRESS (Wrd183.Obj));
  (Wrd192.Obj) = ((Wrd193.pObj) [0]);

DEFLABEL (label_154)
  (Wrd201.uLng) = (OBJECT_TYPE (Wrd192.Obj));
  if (! ((Wrd201.uLng) == 1))
    goto label_153;
  (Wrd200.pObj) = (OBJECT_ADDRESS (Wrd192.Obj));
  (Wrd199.Obj) = ((Wrd200.pObj) [0]);

DEFLABEL (label_152)
  (Wrd206.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd199.Obj);
  (* (Rhp++)) = (Wrd206.Obj);
  (Wrd209.pObj) = (& (Rhp [-2]));
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd209.pObj)));
  (Wrd210.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd207.Obj);
  (* (Rhp++)) = (Wrd210.Obj);
  (Wrd212.pObj) = (& (Rhp [-2]));
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd212.pObj)));
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd216.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd216.Obj);
  (Wrd217.Obj) = (current_block [OBJECT_8_3]);
  (* (--Rsp)) = (Wrd217.Obj);
  goto label_131;

DEFLABEL (label_153)
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_97)
  (Wrd199.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_96)
  (Wrd192.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_95)
  (Wrd183.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_93)
  (Wrd169.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_92)
  (Wrd160.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_90)
  (Wrd144.Obj) = Rvl;
  goto label_166;

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_8_14);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_173;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_172)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_171;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_170)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_169;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_168)
  (Wrd37.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_37]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_8_7]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_8_37);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_169)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_36]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_100)
  (Wrd30.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_35]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_99)
  (Wrd23.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_34]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_98)
  (Wrd14.Obj) = Rvl;
  goto label_172;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_5 3
#define LABEL_9_7 5
#define LABEL_9_8 7
#define LABEL_9_10 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_16 15
#define LABEL_9_17 17
#define LABEL_9_18 19
#define LABEL_9_19 21
#define LABEL_9_4 23
#define LABEL_9_20 25
#define LABEL_9_21 27
#define LABEL_9_22 29
#define LABEL_9_6 31
#define LABEL_9_9 33
#define LABEL_9_13 35
#define TAG_9_14 16
#define LABEL_9_24 37
#define LABEL_9_27 39
#define LABEL_9_28 41
#define LABEL_9_29 43
#define LABEL_9_26 45
#define LABEL_9_30 47
#define LABEL_9_31 49
#define LABEL_9_32 51
#define LABEL_9_33 53
#define LABEL_9_34 55
#define LABEL_9_35 57
#define LABEL_9_36 59
#define LABEL_9_37 61
#define LABEL_9_38 63
#define LABEL_9_39 65
#define LABEL_9_40 67
#define LABEL_9_41 69
#define ENVIRONMENT_LABEL_9_3 88
#define DEBUGGING_LABEL_9_2 87
#define OBJECT_9_9 86
#define OBJECT_9_8 85
#define OBJECT_9_7 84
#define OBJECT_9_6 83
#define OBJECT_9_5 82
#define OBJECT_9_4 81
#define OBJECT_9_3 80
#define OBJECT_9_2 79
#define OBJECT_9_1 78
#define OBJECT_9_0 77
#define EXECUTE_CACHE_9_25 71
#define EXECUTE_CACHE_9_23 73
#define EXECUTE_CACHE_9_15 75
#define FREE_REFERENCES_LABEL_9_0 70
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd42;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd126;
  machine_word Wrd127;
  machine_word Wrd125;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd66;
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
      current_block = (Rpc - LABEL_9_5);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto label_74;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto label_75;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto label_76;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto label_77;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto label_78;

    case 6:
      current_block = (Rpc - LABEL_9_16);
      goto label_73;

    case 7:
      current_block = (Rpc - LABEL_9_17);
      goto lambda_12;

    case 8:
      current_block = (Rpc - LABEL_9_18);
      goto label_72;

    case 9:
      current_block = (Rpc - LABEL_9_19);
      goto label_71;

    case 10:
      current_block = (Rpc - LABEL_9_4);
      goto lambda_66;

    case 11:
      current_block = (Rpc - LABEL_9_20);
      goto label_68;

    case 12:
      current_block = (Rpc - LABEL_9_21);
      goto label_69;

    case 13:
      current_block = (Rpc - LABEL_9_22);
      goto label_70;

    case 14:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_56;

    case 15:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_53;

    case 16:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_90;

    case 17:
      current_block = (Rpc - LABEL_9_24);
      goto continuation_42;

    case 18:
      current_block = (Rpc - LABEL_9_27);
      goto label_79;

    case 19:
      current_block = (Rpc - LABEL_9_28);
      goto label_80;

    case 20:
      current_block = (Rpc - LABEL_9_29);
      goto label_81;

    case 21:
      current_block = (Rpc - LABEL_9_26);
      goto continuation_44;

    case 22:
      current_block = (Rpc - LABEL_9_30);
      goto continuation_34;

    case 23:
      current_block = (Rpc - LABEL_9_31);
      goto continuation_43;

    case 24:
      current_block = (Rpc - LABEL_9_32);
      goto continuation_33;

    case 25:
      current_block = (Rpc - LABEL_9_33);
      goto continuation_32;

    case 26:
      current_block = (Rpc - LABEL_9_34);
      goto label_82;

    case 27:
      current_block = (Rpc - LABEL_9_35);
      goto label_83;

    case 28:
      current_block = (Rpc - LABEL_9_36);
      goto label_84;

    case 29:
      current_block = (Rpc - LABEL_9_37);
      goto label_85;

    case 30:
      current_block = (Rpc - LABEL_9_38);
      goto label_86;

    case 31:
      current_block = (Rpc - LABEL_9_39);
      goto label_87;

    case 32:
      current_block = (Rpc - LABEL_9_40);
      goto continuation_24;

    case 33:
      current_block = (Rpc - LABEL_9_41);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_92)
DEFLABEL (lambda_66)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_94;

DEFLABEL (label_93)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (label_94)
  if (! ((Wrd6.uLng) == 1))
    goto label_104;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_103)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_96;

DEFLABEL (label_95)
  Rsp = (& (Rsp [1]));
  goto label_93;

DEFLABEL (label_96)
  if (! ((Wrd19.uLng) == 1))
    goto label_102;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_101)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 1)
    goto label_98;

DEFLABEL (label_97)
  Rsp = (& (Rsp [1]));
  goto label_95;

DEFLABEL (label_98)
  if (! ((Wrd31.uLng) == 1))
    goto label_100;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_99)
  (Rsp [0]) = (Wrd33.Obj);
  goto lambda_12;

DEFLABEL (label_100)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_70)
  (Wrd33.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (lambda_91)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_9_17);
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == (current_block [OBJECT_9_0]))
    goto label_107;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_97;
  if (! ((Wrd45.uLng) == 1))
    goto label_106;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_105)
  (Rsp [0]) = (Wrd47.Obj);
  goto lambda_12;

DEFLABEL (label_106)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_71)
  (Wrd47.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  Rsp = (& (Rsp [1]));
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_109;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_108)
  (Rsp [0]) = (Wrd57.Obj);
  goto lambda_20;

DEFLABEL (label_109)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_72)
  (Wrd57.Obj) = Rvl;
  goto label_108;

DEFLABEL (lambda_89)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_9_5);
  (Wrd66.Obj) = (Rsp [0]);
  if ((Wrd66.Obj) == (current_block [OBJECT_9_0]))
    goto label_112;
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_95;
  if (! ((Wrd69.uLng) == 1))
    goto label_111;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_110)
  (Rsp [0]) = (Wrd71.Obj);
  goto lambda_20;

DEFLABEL (label_111)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_73)
  (Wrd71.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_112)
  Rsp = (& (Rsp [1]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_140;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd84.Obj) = ((Wrd86.pObj) [1]);

DEFLABEL (label_139)
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_138;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [1]);
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_137)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd106.Obj) = (Rsp [3]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd107.uLng) == 1))
    goto label_136;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd103.Obj) = ((Wrd105.pObj) [1]);

DEFLABEL (label_135)
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_134;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd112.Obj) = ((Wrd113.pObj) [0]);

DEFLABEL (label_133)
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd121.uLng) == 1))
    goto label_132;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [1]);
  (* (--Rsp)) = (Wrd120.Obj);

DEFLABEL (label_131)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd127.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_13])));
  Rhp += 1;
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd127.pObj)));
  Wrd128 = Wrd127;
  (Wrd129.Obj) = (Rsp [5]);
  ((Wrd128.pObj) [2]) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (Wrd9.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_9_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_130;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_129)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_128;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_127)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_126;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_125)
  (Wrd40.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_30]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_9_30);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_9_32);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_33]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_9_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_9_33);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_124;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_123)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_122;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_121)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_120;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_119)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_118;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_117)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_116;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_115)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_114;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [0]);

DEFLABEL (label_113)
  (Wrd60.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Wrd64.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_40]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (current_block [OBJECT_9_8]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd72.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_9_40);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_41]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_9_9]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_9_41);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_114)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_39]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_87)
  (Wrd53.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_38]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_86)
  (Wrd46.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_37]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_85)
  (Wrd37.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_36]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_35]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_83)
  (Wrd23.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_34]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_82)
  (Wrd14.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_29]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_81)
  (Wrd30.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_28]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_80)
  (Wrd23.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_27]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_79)
  (Wrd14.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_77)
  (Wrd112.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_76)
  (Wrd103.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_74)
  (Wrd84.Obj) = Rvl;
  goto label_139;

DEFLABEL (lambda_90)
  CLOSURE_HEADER (LABEL_9_13);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_9_26);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_31]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_9_31);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define LABEL_10_9 13
#define LABEL_10_10 15
#define LABEL_10_11 17
#define LABEL_10_12 19
#define LABEL_10_13 21
#define ENVIRONMENT_LABEL_10_3 29
#define DEBUGGING_LABEL_10_2 28
#define OBJECT_10_2 27
#define OBJECT_10_1 26
#define OBJECT_10_0 25
#define EXECUTE_CACHE_10_14 23
#define FREE_REFERENCES_LABEL_10_0 22
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_10_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_10_11);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_10_12);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_23)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_39;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_38)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_37;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_36)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_35;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_34)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_33;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_32)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_31;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_30)
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_29;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_28)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_27;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [0]);

DEFLABEL (label_26)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_25;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd60.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd60.Obj);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_10_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_21)
  (Wrd60.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_20)
  (Wrd53.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_19)
  (Wrd44.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_18)
  (Wrd37.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_17)
  (Wrd28.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_15)
  (Wrd14.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_5 3
#define LABEL_11_6 5
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_10 11
#define LABEL_11_11 13
#define LABEL_11_12 15
#define LABEL_11_4 17
#define LABEL_11_13 19
#define LABEL_11_14 21
#define LABEL_11_15 23
#define LABEL_11_8 25
#define LABEL_11_17 27
#define LABEL_11_18 29
#define LABEL_11_19 31
#define LABEL_11_20 33
#define LABEL_11_21 35
#define LABEL_11_22 37
#define LABEL_11_23 39
#define LABEL_11_24 41
#define LABEL_11_25 43
#define LABEL_11_26 45
#define LABEL_11_27 47
#define LABEL_11_28 49
#define ENVIRONMENT_LABEL_11_3 62
#define DEBUGGING_LABEL_11_2 61
#define OBJECT_11_7 60
#define OBJECT_11_6 59
#define OBJECT_11_5 58
#define OBJECT_11_4 57
#define OBJECT_11_3 56
#define OBJECT_11_2 55
#define OBJECT_11_1 54
#define OBJECT_11_0 53
#define EXECUTE_CACHE_11_16 51
#define FREE_REFERENCES_LABEL_11_0 50
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd42;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd66;
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
      current_block = (Rpc - LABEL_11_5);
      goto lambda_19;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_57;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_58;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto label_56;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto lambda_12;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto label_55;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto label_54;

    case 7:
      current_block = (Rpc - LABEL_11_4);
      goto lambda_49;

    case 8:
      current_block = (Rpc - LABEL_11_13);
      goto label_51;

    case 9:
      current_block = (Rpc - LABEL_11_14);
      goto label_52;

    case 10:
      current_block = (Rpc - LABEL_11_15);
      goto label_53;

    case 11:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_37;

    case 12:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_36;

    case 13:
      current_block = (Rpc - LABEL_11_18);
      goto label_59;

    case 14:
      current_block = (Rpc - LABEL_11_19);
      goto label_60;

    case 15:
      current_block = (Rpc - LABEL_11_20);
      goto label_61;

    case 16:
      current_block = (Rpc - LABEL_11_21);
      goto label_62;

    case 17:
      current_block = (Rpc - LABEL_11_22);
      goto label_63;

    case 18:
      current_block = (Rpc - LABEL_11_23);
      goto label_64;

    case 19:
      current_block = (Rpc - LABEL_11_24);
      goto continuation_27;

    case 20:
      current_block = (Rpc - LABEL_11_25);
      goto continuation_26;

    case 21:
      current_block = (Rpc - LABEL_11_26);
      goto label_65;

    case 22:
      current_block = (Rpc - LABEL_11_27);
      goto label_66;

    case 23:
      current_block = (Rpc - LABEL_11_28);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_70)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (label_72)
  if (! ((Wrd6.uLng) == 1))
    goto label_80;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_79)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rsp = (& (Rsp [1]));
  goto label_71;

DEFLABEL (label_74)
  if (! ((Wrd19.uLng) == 1))
    goto label_78;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_77)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_73;
  if (! ((Wrd31.uLng) == 1))
    goto label_76;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_75)
  goto lambda_12;

DEFLABEL (label_76)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_52)
  (Wrd21.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (lambda_69)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_11_10);
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == (current_block [OBJECT_11_0]))
    goto label_84;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd45.uLng) == 1)
    goto label_81;
  Rsp = (& (Rsp [1]));
  goto label_73;

DEFLABEL (label_81)
  if (! ((Wrd45.uLng) == 1))
    goto label_83;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_82)
  (Rsp [0]) = (Wrd47.Obj);
  goto label_75;

DEFLABEL (label_83)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_54)
  (Wrd47.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_84)
  Rsp = (& (Rsp [1]));
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_86;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_85)
  (Rsp [0]) = (Wrd57.Obj);
  goto lambda_19;

DEFLABEL (label_86)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_55)
  (Wrd57.Obj) = Rvl;
  goto label_85;

DEFLABEL (lambda_68)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_11_5);
  (Wrd66.Obj) = (Rsp [0]);
  if ((Wrd66.Obj) == (current_block [OBJECT_11_0]))
    goto label_89;
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_73;
  if (! ((Wrd69.uLng) == 1))
    goto label_88;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_87)
  (Rsp [0]) = (Wrd71.Obj);
  goto lambda_19;

DEFLABEL (label_88)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_56)
  (Wrd71.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_89)
  Rsp = (& (Rsp [1]));
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_109;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_108)
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd92.uLng) == 1))
    goto label_107;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd90.Obj) = ((Wrd91.pObj) [0]);

DEFLABEL (label_106)
  (Wrd100.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd100.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd104.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd105.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_11_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_105;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_104)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_103;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_102)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_101;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_100)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_99;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_98)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_97;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_96)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_95;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [0]);

DEFLABEL (label_94)
  (Wrd60.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd68.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_11_24);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_11_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_11_25);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_93;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_92)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_91;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_90)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_11_7]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_11_28);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_27]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_66)
  (Wrd23.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_65)
  (Wrd14.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_64)
  (Wrd53.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_63)
  (Wrd46.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_62)
  (Wrd37.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_60)
  (Wrd23.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_59)
  (Wrd14.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_58)
  (Wrd90.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_57)
  (Wrd81.Obj) = Rvl;
  goto label_108;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_5 3
#define LABEL_12_6 5
#define LABEL_12_7 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_11 13
#define LABEL_12_12 15
#define LABEL_12_13 17
#define LABEL_12_14 19
#define LABEL_12_15 21
#define LABEL_12_17 23
#define LABEL_12_18 25
#define LABEL_12_19 27
#define LABEL_12_20 29
#define LABEL_12_21 31
#define LABEL_12_23 33
#define LABEL_12_24 35
#define LABEL_12_25 37
#define LABEL_12_26 39
#define LABEL_12_27 41
#define LABEL_12_29 43
#define LABEL_12_30 45
#define LABEL_12_31 47
#define LABEL_12_32 49
#define LABEL_12_4 51
#define LABEL_12_33 53
#define LABEL_12_34 55
#define LABEL_12_35 57
#define LABEL_12_36 59
#define LABEL_12_22 61
#define LABEL_12_38 63
#define LABEL_12_39 65
#define LABEL_12_40 67
#define LABEL_12_16 69
#define LABEL_12_10 71
#define LABEL_12_41 73
#define LABEL_12_42 75
#define LABEL_12_43 77
#define LABEL_12_44 79
#define LABEL_12_45 81
#define LABEL_12_46 83
#define LABEL_12_47 85
#define ENVIRONMENT_LABEL_12_3 99
#define DEBUGGING_LABEL_12_2 98
#define OBJECT_12_6 97
#define OBJECT_12_5 96
#define OBJECT_12_4 95
#define OBJECT_12_3 94
#define OBJECT_12_2 93
#define OBJECT_12_1 92
#define OBJECT_12_0 91
#define EXECUTE_CACHE_12_37 87
#define EXECUTE_CACHE_12_28 89
#define FREE_REFERENCES_LABEL_12_0 86
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd11;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd76;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd53;
  machine_word Wrd90;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd100;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd77;
  machine_word Wrd145;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd135;
  machine_word Wrd262;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd158;
  machine_word Wrd155;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd132;
  machine_word Wrd178;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd202;
  machine_word Wrd194;
  machine_word Wrd196;
  machine_word Wrd192;
  machine_word Wrd212;
  machine_word Wrd204;
  machine_word Wrd206;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd189;
  machine_word Wrd226;
  machine_word Wrd218;
  machine_word Wrd220;
  machine_word Wrd216;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd257;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd253;
  machine_word Wrd250;
  machine_word Wrd244;
  machine_word Wrd245;
  machine_word Wrd246;
  machine_word Wrd243;
  machine_word Wrd237;
  machine_word Wrd238;
  machine_word Wrd239;
  machine_word Wrd236;
  machine_word Wrd228;
  machine_word Wrd230;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd213;
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
      current_block = (Rpc - LABEL_12_5);
      goto lambda_35;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_107;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_108;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_109;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_110;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto label_106;

    case 6:
      current_block = (Rpc - LABEL_12_12);
      goto lambda_27;

    case 7:
      current_block = (Rpc - LABEL_12_13);
      goto label_105;

    case 8:
      current_block = (Rpc - LABEL_12_14);
      goto label_104;

    case 9:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_19;

    case 10:
      current_block = (Rpc - LABEL_12_17);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_12_18);
      goto label_100;

    case 12:
      current_block = (Rpc - LABEL_12_19);
      goto lambda_56;

    case 13:
      current_block = (Rpc - LABEL_12_20);
      goto label_98;

    case 14:
      current_block = (Rpc - LABEL_12_21);
      goto label_99;

    case 15:
      current_block = (Rpc - LABEL_12_23);
      goto label_97;

    case 16:
      current_block = (Rpc - LABEL_12_24);
      goto lambda_10;

    case 17:
      current_block = (Rpc - LABEL_12_25);
      goto label_94;

    case 18:
      current_block = (Rpc - LABEL_12_26);
      goto label_95;

    case 19:
      current_block = (Rpc - LABEL_12_27);
      goto label_96;

    case 20:
      current_block = (Rpc - LABEL_12_29);
      goto label_93;

    case 21:
      current_block = (Rpc - LABEL_12_30);
      goto lambda_49;

    case 22:
      current_block = (Rpc - LABEL_12_31);
      goto label_92;

    case 23:
      current_block = (Rpc - LABEL_12_32);
      goto label_91;

    case 24:
      current_block = (Rpc - LABEL_12_4);
      goto lambda_85;

    case 25:
      current_block = (Rpc - LABEL_12_33);
      goto label_89;

    case 26:
      current_block = (Rpc - LABEL_12_34);
      goto label_90;

    case 27:
      current_block = (Rpc - LABEL_12_35);
      goto label_87;

    case 28:
      current_block = (Rpc - LABEL_12_36);
      goto label_88;

    case 29:
      current_block = (Rpc - LABEL_12_22);
      goto continuation_62;

    case 30:
      current_block = (Rpc - LABEL_12_38);
      goto label_101;

    case 31:
      current_block = (Rpc - LABEL_12_39);
      goto label_102;

    case 32:
      current_block = (Rpc - LABEL_12_40);
      goto label_103;

    case 33:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_20;

    case 34:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_77;

    case 35:
      current_block = (Rpc - LABEL_12_41);
      goto label_111;

    case 36:
      current_block = (Rpc - LABEL_12_42);
      goto label_112;

    case 37:
      current_block = (Rpc - LABEL_12_43);
      goto label_113;

    case 38:
      current_block = (Rpc - LABEL_12_44);
      goto label_114;

    case 39:
      current_block = (Rpc - LABEL_12_45);
      goto label_115;

    case 40:
      current_block = (Rpc - LABEL_12_46);
      goto continuation_69;

    case 41:
      current_block = (Rpc - LABEL_12_47);
      goto continuation_68;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_122)
DEFLABEL (lambda_85)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_132;

DEFLABEL (label_131)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_124;

DEFLABEL (label_123)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_37]));

DEFLABEL (label_124)
  if (! ((Wrd8.uLng) == 1))
    goto label_130;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_129)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_126;

DEFLABEL (label_125)
  Rsp = (& (Rsp [1]));
  goto label_123;

DEFLABEL (label_126)
  if (! ((Wrd21.uLng) == 1))
    goto label_128;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_127)
  goto lambda_49;

DEFLABEL (label_128)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_36]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_35]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  if (! ((Wrd6.uLng) == 1))
    goto label_138;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_137)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 1)
    goto label_134;

DEFLABEL (label_133)
  Rsp = (& (Rsp [1]));
  goto label_131;

DEFLABEL (label_134)
  if (! ((Wrd42.uLng) == 1))
    goto label_136;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_135)
  goto lambda_10;

DEFLABEL (label_136)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_34]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_33]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_137;

DEFLABEL (lambda_121)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_12_30);
  (Wrd53.Obj) = (Rsp [0]);
  if ((Wrd53.Obj) == (current_block [OBJECT_12_0]))
    goto label_142;
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_139;
  Rsp = (& (Rsp [1]));
  goto label_125;

DEFLABEL (label_139)
  if (! ((Wrd56.uLng) == 1))
    goto label_141;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_140)
  (Rsp [0]) = (Wrd58.Obj);
  goto label_127;

DEFLABEL (label_141)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_32]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_91)
  (Wrd58.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_142)
  Rsp = (& (Rsp [1]));
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_144;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [1]);

DEFLABEL (label_143)
  (Rsp [0]) = (Wrd68.Obj);
  goto lambda_56;

DEFLABEL (label_144)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_31]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_92)
  (Wrd68.Obj) = Rvl;
  goto label_143;

DEFLABEL (lambda_120)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_12_24);
  (Wrd77.Obj) = (Rsp [0]);
  if ((Wrd77.Obj) == (current_block [OBJECT_12_0]))
    goto label_149;
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd80.uLng) == 1)
    goto label_146;

DEFLABEL (label_145)
  Rsp = (& (Rsp [1]));
  goto label_133;

DEFLABEL (label_146)
  if (! ((Wrd80.uLng) == 1))
    goto label_148;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd82.Obj) = ((Wrd84.pObj) [1]);

DEFLABEL (label_147)
  (Rsp [0]) = (Wrd82.Obj);
  goto label_135;

DEFLABEL (label_148)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_29]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_93)
  (Wrd82.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_149)
  Rsp = (& (Rsp [1]));
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_156;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd92.Obj) = ((Wrd94.pObj) [1]);

DEFLABEL (label_155)
  (Rsp [0]) = (Wrd92.Obj);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_133;
  if (! ((Wrd102.uLng) == 1))
    goto label_154;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (* (--Rsp)) = (Wrd106.Obj);

DEFLABEL (label_153)
  (Wrd113.Obj) = (Rsp [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_145;
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd118.Obj);
  if (! ((Wrd114.uLng) == 1))
    goto label_152;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [0]);
  (* (--Rsp)) = (Wrd121.Obj);

DEFLABEL (label_151)
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (Wrd131.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd131.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_28]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_12_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_150;
  (Wrd181.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd181.Obj);
  (Wrd182.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd182.Obj);
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd185.Obj);
  (Wrd186.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd186.Obj);
  (Wrd187.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd187.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (Rsp [2]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_150)
  Rsp = (& (Rsp [2]));
  goto label_145;

DEFLABEL (label_152)
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_96)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_26]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_25]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_94)
  (Wrd92.Obj) = Rvl;
  goto label_155;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_12_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_145;
  (Wrd173.Obj) = (Rsp [0]);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd173.Obj));
  if (! ((Wrd174.uLng) == 1))
    goto label_158;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd173.Obj));
  (Wrd170.Obj) = ((Wrd172.pObj) [1]);

DEFLABEL (label_157)
  (Rsp [0]) = (Wrd170.Obj);
  goto lambda_27;

DEFLABEL (label_158)
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_100)
  (Wrd170.Obj) = Rvl;
  goto label_157;

DEFLABEL (lambda_119)
DEFLABEL (lambda_56)
  INTERRUPT_CHECK (26, LABEL_12_19);
  (Wrd132.Obj) = (Rsp [0]);
  if ((Wrd132.Obj) == (current_block [OBJECT_12_0]))
    goto label_161;
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd135.uLng) == 1))
    goto label_125;
  if (! ((Wrd135.uLng) == 1))
    goto label_160;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd137.Obj) = ((Wrd139.pObj) [1]);

DEFLABEL (label_159)
  (Rsp [0]) = (Wrd137.Obj);
  goto lambda_56;

DEFLABEL (label_160)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_97)
  (Wrd137.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_161)
  Rsp = (& (Rsp [1]));
  (Wrd150.Obj) = (Rsp [0]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if (! ((Wrd151.uLng) == 1))
    goto label_166;
  (Wrd149.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd147.Obj) = ((Wrd149.pObj) [1]);

DEFLABEL (label_165)
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd158.uLng) == 1))
    goto label_164;
  (Wrd156.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd157.Obj) = ((Wrd156.pObj) [1]);
  (* (--Rsp)) = (Wrd157.Obj);

DEFLABEL (label_163)
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (Wrd166.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd166.Obj);

DEFLABEL (label_162)
  (Wrd262.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd262.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_164)
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_99)
  (* (--Rsp)) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_20]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_98)
  (Wrd147.Obj) = Rvl;
  goto label_165;

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_12_22);
  (Wrd9.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_172;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_171)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_170;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_169)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_168;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_167)
  (Wrd43.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_168)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_40]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_103)
  (Wrd34.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_39]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_102)
  (Wrd23.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_38]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_101)
  (Wrd14.Obj) = Rvl;
  goto label_171;

DEFLABEL (lambda_118)
DEFLABEL (lambda_27)
  INTERRUPT_CHECK (26, LABEL_12_12);
  (Wrd189.Obj) = (Rsp [0]);
  if ((Wrd189.Obj) == (current_block [OBJECT_12_0]))
    goto label_175;
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd189.Obj));
  if (! ((Wrd192.uLng) == 1))
    goto label_145;
  if (! ((Wrd192.uLng) == 1))
    goto label_174;
  (Wrd196.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd194.Obj) = ((Wrd196.pObj) [1]);

DEFLABEL (label_173)
  (Rsp [0]) = (Wrd194.Obj);
  goto lambda_27;

DEFLABEL (label_174)
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd202.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_104)
  (Wrd194.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_175)
  Rsp = (& (Rsp [1]));
  (Wrd207.Obj) = (Rsp [0]);
  (Wrd208.uLng) = (OBJECT_TYPE (Wrd207.Obj));
  if (! ((Wrd208.uLng) == 1))
    goto label_177;
  (Wrd206.pObj) = (OBJECT_ADDRESS (Wrd207.Obj));
  (Wrd204.Obj) = ((Wrd206.pObj) [1]);

DEFLABEL (label_176)
  (Rsp [0]) = (Wrd204.Obj);
  goto lambda_35;

DEFLABEL (label_177)
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_105)
  (Wrd204.Obj) = Rvl;
  goto label_176;

DEFLABEL (lambda_117)
DEFLABEL (lambda_35)
  INTERRUPT_CHECK (26, LABEL_12_5);
  (Wrd213.Obj) = (Rsp [0]);
  if ((Wrd213.Obj) == (current_block [OBJECT_12_0]))
    goto label_180;
  (Wrd216.uLng) = (OBJECT_TYPE (Wrd213.Obj));
  if (! ((Wrd216.uLng) == 1))
    goto label_133;
  if (! ((Wrd216.uLng) == 1))
    goto label_179;
  (Wrd220.pObj) = (OBJECT_ADDRESS (Wrd213.Obj));
  (Wrd218.Obj) = ((Wrd220.pObj) [1]);

DEFLABEL (label_178)
  (Rsp [0]) = (Wrd218.Obj);
  goto lambda_35;

DEFLABEL (label_179)
  (Wrd226.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd226.Obj);
  (* (--Rsp)) = (Wrd213.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_106)
  (Wrd218.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_180)
  Rsp = (& (Rsp [1]));
  (Wrd231.Obj) = (Rsp [0]);
  (Wrd232.uLng) = (OBJECT_TYPE (Wrd231.Obj));
  if (! ((Wrd232.uLng) == 1))
    goto label_188;
  (Wrd230.pObj) = (OBJECT_ADDRESS (Wrd231.Obj));
  (Wrd228.Obj) = ((Wrd230.pObj) [1]);

DEFLABEL (label_187)
  (Wrd239.uLng) = (OBJECT_TYPE (Wrd228.Obj));
  if (! ((Wrd239.uLng) == 1))
    goto label_186;
  (Wrd238.pObj) = (OBJECT_ADDRESS (Wrd228.Obj));
  (Wrd237.Obj) = ((Wrd238.pObj) [1]);

DEFLABEL (label_185)
  (Wrd246.uLng) = (OBJECT_TYPE (Wrd237.Obj));
  if (! ((Wrd246.uLng) == 1))
    goto label_184;
  (Wrd245.pObj) = (OBJECT_ADDRESS (Wrd237.Obj));
  (Wrd244.Obj) = ((Wrd245.pObj) [0]);

DEFLABEL (label_183)
  (Wrd253.uLng) = (OBJECT_TYPE (Wrd244.Obj));
  if (! ((Wrd253.uLng) == 1))
    goto label_182;
  (Wrd251.pObj) = (OBJECT_ADDRESS (Wrd244.Obj));
  (Wrd252.Obj) = ((Wrd251.pObj) [1]);
  (* (--Rsp)) = (Wrd252.Obj);

DEFLABEL (label_181)
  (Wrd260.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd260.Obj);
  (Wrd261.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd261.Obj);
  goto label_162;

DEFLABEL (label_182)
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd257.Obj);
  (* (--Rsp)) = (Wrd244.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_110)
  (* (--Rsp)) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd250.Obj);
  (* (--Rsp)) = (Wrd237.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_109)
  (Wrd244.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd243.Obj);
  (* (--Rsp)) = (Wrd228.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_108)
  (Wrd237.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  (Wrd236.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd231.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_107)
  (Wrd228.Obj) = Rvl;
  goto label_187;

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_198;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_197)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_196;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_195)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_194;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_193)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_192;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_191)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_190;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_189)
  (Wrd53.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_46]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd61.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_12_46);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_47]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_12_47);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_190)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_45]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_115)
  (Wrd46.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_44]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_114)
  (Wrd37.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_43]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_113)
  (* (--Rsp)) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_42]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_112)
  (Wrd23.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_41]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_111)
  (Wrd14.Obj) = Rvl;
  goto label_197;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_5 3
#define LABEL_13_7 5
#define LABEL_13_8 7
#define LABEL_13_10 9
#define LABEL_13_11 11
#define LABEL_13_15 13
#define LABEL_13_16 15
#define LABEL_13_17 17
#define LABEL_13_18 19
#define LABEL_13_4 21
#define LABEL_13_19 23
#define LABEL_13_20 25
#define LABEL_13_6 27
#define LABEL_13_22 29
#define LABEL_13_23 31
#define LABEL_13_9 33
#define LABEL_13_12 35
#define TAG_13_13 16
#define LABEL_13_24 37
#define LABEL_13_26 39
#define LABEL_13_27 41
#define ENVIRONMENT_LABEL_13_3 56
#define DEBUGGING_LABEL_13_2 55
#define OBJECT_13_5 54
#define OBJECT_13_4 53
#define OBJECT_13_3 52
#define OBJECT_13_2 51
#define OBJECT_13_1 50
#define OBJECT_13_0 49
#define EXECUTE_CACHE_13_25 43
#define EXECUTE_CACHE_13_21 45
#define EXECUTE_CACHE_13_14 47
#define FREE_REFERENCES_LABEL_13_0 42
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd30;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd54;
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
      current_block = (Rpc - LABEL_13_5);
      goto lambda_17;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto label_44;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto label_45;

    case 3:
      current_block = (Rpc - LABEL_13_10);
      goto label_46;

    case 4:
      current_block = (Rpc - LABEL_13_11);
      goto label_47;

    case 5:
      current_block = (Rpc - LABEL_13_15);
      goto label_43;

    case 6:
      current_block = (Rpc - LABEL_13_16);
      goto lambda_10;

    case 7:
      current_block = (Rpc - LABEL_13_17);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_13_18);
      goto label_41;

    case 9:
      current_block = (Rpc - LABEL_13_4);
      goto lambda_37;

    case 10:
      current_block = (Rpc - LABEL_13_19);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_13_20);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_35;

    case 13:
      current_block = (Rpc - LABEL_13_22);
      goto label_48;

    case 14:
      current_block = (Rpc - LABEL_13_23);
      goto label_49;

    case 15:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_32;

    case 16:
      current_block = (Rpc - LABEL_13_12);
      goto lambda_52;

    case 17:
      current_block = (Rpc - LABEL_13_24);
      goto continuation_20;

    case 18:
      current_block = (Rpc - LABEL_13_26);
      goto continuation_24;

    case 19:
      current_block = (Rpc - LABEL_13_27);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_54)
DEFLABEL (lambda_37)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_56;

DEFLABEL (label_55)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_21]));

DEFLABEL (label_56)
  if (! ((Wrd6.uLng) == 1))
    goto label_62;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_61)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_58;

DEFLABEL (label_57)
  Rsp = (& (Rsp [1]));
  goto label_55;

DEFLABEL (label_58)
  if (! ((Wrd19.uLng) == 1))
    goto label_60;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_59)
  goto lambda_10;

DEFLABEL (label_60)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (lambda_53)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_13_16);
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (current_block [OBJECT_13_0]))
    goto label_66;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd33.uLng) == 1)
    goto label_63;
  Rsp = (& (Rsp [1]));
  goto label_57;

DEFLABEL (label_63)
  if (! ((Wrd33.uLng) == 1))
    goto label_65;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_64)
  (Rsp [0]) = (Wrd35.Obj);
  goto label_59;

DEFLABEL (label_65)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_41)
  (Wrd35.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_66)
  Rsp = (& (Rsp [1]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_68;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_67)
  (Rsp [0]) = (Wrd45.Obj);
  goto lambda_17;

DEFLABEL (label_68)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_42)
  (Wrd45.Obj) = Rvl;
  goto label_67;

DEFLABEL (lambda_51)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_13_5);
  (Wrd54.Obj) = (Rsp [0]);
  if ((Wrd54.Obj) == (current_block [OBJECT_13_0]))
    goto label_71;
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_57;
  if (! ((Wrd57.uLng) == 1))
    goto label_70;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_69)
  (Rsp [0]) = (Wrd59.Obj);
  goto lambda_17;

DEFLABEL (label_70)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_43)
  (Wrd59.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_71)
  Rsp = (& (Rsp [1]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_83;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_82)
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_81;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [1]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_80)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd94.Obj) = (Rsp [3]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_79;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [1]);

DEFLABEL (label_78)
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_77;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_76)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd108.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_12])));
  Rhp += 1;
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd108.pObj)));
  Wrd109 = Wrd108;
  (Wrd110.Obj) = (Rsp [5]);
  ((Wrd109.pObj) [2]) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_25]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_75;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_74)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_73;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_72)
  (Wrd21.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_13_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_48)
  (Wrd5.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_46)
  (Wrd91.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_44)
  (Wrd72.Obj) = Rvl;
  goto label_82;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_13_12);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_13_26);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_13_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_27]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_13_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_13_27);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define LABEL_14_9 13
#define LABEL_14_10 15
#define LABEL_14_11 17
#define LABEL_14_12 19
#define LABEL_14_13 21
#define ENVIRONMENT_LABEL_14_3 29
#define DEBUGGING_LABEL_14_2 28
#define OBJECT_14_2 27
#define OBJECT_14_1 26
#define OBJECT_14_0 25
#define EXECUTE_CACHE_14_14 23
#define FREE_REFERENCES_LABEL_14_0 22
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_14_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_14_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_14_11);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_14_12);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_23)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_39;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_38)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_37;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_36)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_35;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_34)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_33;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_32)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_31;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_30)
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_29;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_28)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_27;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [0]);

DEFLABEL (label_26)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_25;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd60.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd60.Obj);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_13);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_14_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_21)
  (Wrd60.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_20)
  (Wrd53.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_19)
  (Wrd44.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_18)
  (Wrd37.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_17)
  (Wrd28.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_15)
  (Wrd14.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_5 3
#define LABEL_15_6 5
#define LABEL_15_7 7
#define LABEL_15_9 9
#define LABEL_15_10 11
#define LABEL_15_11 13
#define LABEL_15_12 15
#define LABEL_15_4 17
#define LABEL_15_13 19
#define LABEL_15_14 21
#define LABEL_15_15 23
#define LABEL_15_8 25
#define LABEL_15_17 27
#define LABEL_15_18 29
#define LABEL_15_19 31
#define LABEL_15_20 33
#define LABEL_15_21 35
#define LABEL_15_22 37
#define LABEL_15_23 39
#define LABEL_15_24 41
#define LABEL_15_25 43
#define LABEL_15_26 45
#define LABEL_15_27 47
#define LABEL_15_28 49
#define ENVIRONMENT_LABEL_15_3 62
#define DEBUGGING_LABEL_15_2 61
#define OBJECT_15_7 60
#define OBJECT_15_6 59
#define OBJECT_15_5 58
#define OBJECT_15_4 57
#define OBJECT_15_3 56
#define OBJECT_15_2 55
#define OBJECT_15_1 54
#define OBJECT_15_0 53
#define EXECUTE_CACHE_15_16 51
#define FREE_REFERENCES_LABEL_15_0 50
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd42;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd66;
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
      current_block = (Rpc - LABEL_15_5);
      goto lambda_19;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_57;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto label_58;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto label_56;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto lambda_12;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto label_55;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto label_54;

    case 7:
      current_block = (Rpc - LABEL_15_4);
      goto lambda_49;

    case 8:
      current_block = (Rpc - LABEL_15_13);
      goto label_51;

    case 9:
      current_block = (Rpc - LABEL_15_14);
      goto label_52;

    case 10:
      current_block = (Rpc - LABEL_15_15);
      goto label_53;

    case 11:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_37;

    case 12:
      current_block = (Rpc - LABEL_15_17);
      goto continuation_36;

    case 13:
      current_block = (Rpc - LABEL_15_18);
      goto label_59;

    case 14:
      current_block = (Rpc - LABEL_15_19);
      goto label_60;

    case 15:
      current_block = (Rpc - LABEL_15_20);
      goto label_61;

    case 16:
      current_block = (Rpc - LABEL_15_21);
      goto label_62;

    case 17:
      current_block = (Rpc - LABEL_15_22);
      goto label_63;

    case 18:
      current_block = (Rpc - LABEL_15_23);
      goto label_64;

    case 19:
      current_block = (Rpc - LABEL_15_24);
      goto continuation_27;

    case 20:
      current_block = (Rpc - LABEL_15_25);
      goto continuation_26;

    case 21:
      current_block = (Rpc - LABEL_15_26);
      goto label_65;

    case 22:
      current_block = (Rpc - LABEL_15_27);
      goto label_66;

    case 23:
      current_block = (Rpc - LABEL_15_28);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_70)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (label_72)
  if (! ((Wrd6.uLng) == 1))
    goto label_80;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_79)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rsp = (& (Rsp [1]));
  goto label_71;

DEFLABEL (label_74)
  if (! ((Wrd19.uLng) == 1))
    goto label_78;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_77)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_73;
  if (! ((Wrd31.uLng) == 1))
    goto label_76;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_75)
  goto lambda_12;

DEFLABEL (label_76)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_52)
  (Wrd21.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (lambda_69)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_15_10);
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == (current_block [OBJECT_15_0]))
    goto label_84;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd45.uLng) == 1)
    goto label_81;
  Rsp = (& (Rsp [1]));
  goto label_73;

DEFLABEL (label_81)
  if (! ((Wrd45.uLng) == 1))
    goto label_83;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_82)
  (Rsp [0]) = (Wrd47.Obj);
  goto label_75;

DEFLABEL (label_83)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_54)
  (Wrd47.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_84)
  Rsp = (& (Rsp [1]));
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_86;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_85)
  (Rsp [0]) = (Wrd57.Obj);
  goto lambda_19;

DEFLABEL (label_86)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_55)
  (Wrd57.Obj) = Rvl;
  goto label_85;

DEFLABEL (lambda_68)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_15_5);
  (Wrd66.Obj) = (Rsp [0]);
  if ((Wrd66.Obj) == (current_block [OBJECT_15_0]))
    goto label_89;
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_73;
  if (! ((Wrd69.uLng) == 1))
    goto label_88;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_87)
  (Rsp [0]) = (Wrd71.Obj);
  goto lambda_19;

DEFLABEL (label_88)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_56)
  (Wrd71.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_89)
  Rsp = (& (Rsp [1]));
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_109;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_108)
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd92.uLng) == 1))
    goto label_107;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd90.Obj) = ((Wrd91.pObj) [0]);

DEFLABEL (label_106)
  (Wrd100.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd100.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd104.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd105.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_15_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_105;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_104)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_103;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_102)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_101;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_100)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_99;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_98)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_97;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_96)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_95;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [0]);

DEFLABEL (label_94)
  (Wrd60.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_15_5]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd68.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_15_24);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_15_25);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_93;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_92)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_91;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_90)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_28]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_15_7]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_15_28);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_27]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_66)
  (Wrd23.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_26]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_65)
  (Wrd14.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_64)
  (Wrd53.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_63)
  (Wrd46.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_62)
  (Wrd37.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_60)
  (Wrd23.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_59)
  (Wrd14.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_58)
  (Wrd90.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_57)
  (Wrd81.Obj) = Rvl;
  goto label_108;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_5 3
#define LABEL_16_6 5
#define LABEL_16_7 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define LABEL_16_11 13
#define LABEL_16_12 15
#define LABEL_16_13 17
#define LABEL_16_14 19
#define LABEL_16_15 21
#define LABEL_16_17 23
#define LABEL_16_18 25
#define LABEL_16_19 27
#define LABEL_16_20 29
#define LABEL_16_21 31
#define LABEL_16_23 33
#define LABEL_16_24 35
#define LABEL_16_25 37
#define LABEL_16_26 39
#define LABEL_16_27 41
#define LABEL_16_29 43
#define LABEL_16_30 45
#define LABEL_16_31 47
#define LABEL_16_32 49
#define LABEL_16_4 51
#define LABEL_16_33 53
#define LABEL_16_34 55
#define LABEL_16_35 57
#define LABEL_16_36 59
#define LABEL_16_22 61
#define LABEL_16_38 63
#define LABEL_16_39 65
#define LABEL_16_40 67
#define LABEL_16_16 69
#define LABEL_16_10 71
#define LABEL_16_41 73
#define LABEL_16_42 75
#define LABEL_16_43 77
#define LABEL_16_44 79
#define LABEL_16_45 81
#define LABEL_16_46 83
#define LABEL_16_47 85
#define ENVIRONMENT_LABEL_16_3 99
#define DEBUGGING_LABEL_16_2 98
#define OBJECT_16_6 97
#define OBJECT_16_5 96
#define OBJECT_16_4 95
#define OBJECT_16_3 94
#define OBJECT_16_2 93
#define OBJECT_16_1 92
#define OBJECT_16_0 91
#define EXECUTE_CACHE_16_37 87
#define EXECUTE_CACHE_16_28 89
#define FREE_REFERENCES_LABEL_16_0 86
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd11;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd76;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd53;
  machine_word Wrd90;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd100;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd77;
  machine_word Wrd145;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd135;
  machine_word Wrd262;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd158;
  machine_word Wrd155;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd132;
  machine_word Wrd178;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd202;
  machine_word Wrd194;
  machine_word Wrd196;
  machine_word Wrd192;
  machine_word Wrd212;
  machine_word Wrd204;
  machine_word Wrd206;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd189;
  machine_word Wrd226;
  machine_word Wrd218;
  machine_word Wrd220;
  machine_word Wrd216;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd257;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd253;
  machine_word Wrd250;
  machine_word Wrd244;
  machine_word Wrd245;
  machine_word Wrd246;
  machine_word Wrd243;
  machine_word Wrd237;
  machine_word Wrd238;
  machine_word Wrd239;
  machine_word Wrd236;
  machine_word Wrd228;
  machine_word Wrd230;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd213;
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
      current_block = (Rpc - LABEL_16_5);
      goto lambda_35;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_107;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_108;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_109;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto label_110;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto label_106;

    case 6:
      current_block = (Rpc - LABEL_16_12);
      goto lambda_27;

    case 7:
      current_block = (Rpc - LABEL_16_13);
      goto label_105;

    case 8:
      current_block = (Rpc - LABEL_16_14);
      goto label_104;

    case 9:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_19;

    case 10:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_16_18);
      goto label_100;

    case 12:
      current_block = (Rpc - LABEL_16_19);
      goto lambda_56;

    case 13:
      current_block = (Rpc - LABEL_16_20);
      goto label_98;

    case 14:
      current_block = (Rpc - LABEL_16_21);
      goto label_99;

    case 15:
      current_block = (Rpc - LABEL_16_23);
      goto label_97;

    case 16:
      current_block = (Rpc - LABEL_16_24);
      goto lambda_10;

    case 17:
      current_block = (Rpc - LABEL_16_25);
      goto label_94;

    case 18:
      current_block = (Rpc - LABEL_16_26);
      goto label_95;

    case 19:
      current_block = (Rpc - LABEL_16_27);
      goto label_96;

    case 20:
      current_block = (Rpc - LABEL_16_29);
      goto label_93;

    case 21:
      current_block = (Rpc - LABEL_16_30);
      goto lambda_49;

    case 22:
      current_block = (Rpc - LABEL_16_31);
      goto label_92;

    case 23:
      current_block = (Rpc - LABEL_16_32);
      goto label_91;

    case 24:
      current_block = (Rpc - LABEL_16_4);
      goto lambda_85;

    case 25:
      current_block = (Rpc - LABEL_16_33);
      goto label_89;

    case 26:
      current_block = (Rpc - LABEL_16_34);
      goto label_90;

    case 27:
      current_block = (Rpc - LABEL_16_35);
      goto label_87;

    case 28:
      current_block = (Rpc - LABEL_16_36);
      goto label_88;

    case 29:
      current_block = (Rpc - LABEL_16_22);
      goto continuation_62;

    case 30:
      current_block = (Rpc - LABEL_16_38);
      goto label_101;

    case 31:
      current_block = (Rpc - LABEL_16_39);
      goto label_102;

    case 32:
      current_block = (Rpc - LABEL_16_40);
      goto label_103;

    case 33:
      current_block = (Rpc - LABEL_16_16);
      goto continuation_20;

    case 34:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_77;

    case 35:
      current_block = (Rpc - LABEL_16_41);
      goto label_111;

    case 36:
      current_block = (Rpc - LABEL_16_42);
      goto label_112;

    case 37:
      current_block = (Rpc - LABEL_16_43);
      goto label_113;

    case 38:
      current_block = (Rpc - LABEL_16_44);
      goto label_114;

    case 39:
      current_block = (Rpc - LABEL_16_45);
      goto label_115;

    case 40:
      current_block = (Rpc - LABEL_16_46);
      goto continuation_69;

    case 41:
      current_block = (Rpc - LABEL_16_47);
      goto continuation_68;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_122)
DEFLABEL (lambda_85)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_132;

DEFLABEL (label_131)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_124;

DEFLABEL (label_123)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_37]));

DEFLABEL (label_124)
  if (! ((Wrd8.uLng) == 1))
    goto label_130;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_129)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_126;

DEFLABEL (label_125)
  Rsp = (& (Rsp [1]));
  goto label_123;

DEFLABEL (label_126)
  if (! ((Wrd21.uLng) == 1))
    goto label_128;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_127)
  goto lambda_49;

DEFLABEL (label_128)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_36]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_35]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  if (! ((Wrd6.uLng) == 1))
    goto label_138;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_137)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 1)
    goto label_134;

DEFLABEL (label_133)
  Rsp = (& (Rsp [1]));
  goto label_131;

DEFLABEL (label_134)
  if (! ((Wrd42.uLng) == 1))
    goto label_136;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_135)
  goto lambda_10;

DEFLABEL (label_136)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_34]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_33]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_137;

DEFLABEL (lambda_121)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_16_30);
  (Wrd53.Obj) = (Rsp [0]);
  if ((Wrd53.Obj) == (current_block [OBJECT_16_0]))
    goto label_142;
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_139;
  Rsp = (& (Rsp [1]));
  goto label_125;

DEFLABEL (label_139)
  if (! ((Wrd56.uLng) == 1))
    goto label_141;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_140)
  (Rsp [0]) = (Wrd58.Obj);
  goto label_127;

DEFLABEL (label_141)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_32]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_91)
  (Wrd58.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_142)
  Rsp = (& (Rsp [1]));
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_144;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [1]);

DEFLABEL (label_143)
  (Rsp [0]) = (Wrd68.Obj);
  goto lambda_56;

DEFLABEL (label_144)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_31]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_92)
  (Wrd68.Obj) = Rvl;
  goto label_143;

DEFLABEL (lambda_120)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_16_24);
  (Wrd77.Obj) = (Rsp [0]);
  if ((Wrd77.Obj) == (current_block [OBJECT_16_0]))
    goto label_149;
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd80.uLng) == 1)
    goto label_146;

DEFLABEL (label_145)
  Rsp = (& (Rsp [1]));
  goto label_133;

DEFLABEL (label_146)
  if (! ((Wrd80.uLng) == 1))
    goto label_148;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd82.Obj) = ((Wrd84.pObj) [1]);

DEFLABEL (label_147)
  (Rsp [0]) = (Wrd82.Obj);
  goto label_135;

DEFLABEL (label_148)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_29]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_93)
  (Wrd82.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_149)
  Rsp = (& (Rsp [1]));
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_156;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd92.Obj) = ((Wrd94.pObj) [1]);

DEFLABEL (label_155)
  (Rsp [0]) = (Wrd92.Obj);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_133;
  if (! ((Wrd102.uLng) == 1))
    goto label_154;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (* (--Rsp)) = (Wrd106.Obj);

DEFLABEL (label_153)
  (Wrd113.Obj) = (Rsp [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_145;
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd118.Obj);
  if (! ((Wrd114.uLng) == 1))
    goto label_152;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [0]);
  (* (--Rsp)) = (Wrd121.Obj);

DEFLABEL (label_151)
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (Wrd131.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd131.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_28]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_16_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_150;
  (Wrd181.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd181.Obj);
  (Wrd182.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd182.Obj);
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd185.Obj);
  (Wrd186.Obj) = (current_block [OBJECT_16_4]);
  (* (--Rsp)) = (Wrd186.Obj);
  (Wrd187.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd187.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_16_16);
  (Rsp [2]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_150)
  Rsp = (& (Rsp [2]));
  goto label_145;

DEFLABEL (label_152)
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_96)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_26]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_94)
  (Wrd92.Obj) = Rvl;
  goto label_155;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_16_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_145;
  (Wrd173.Obj) = (Rsp [0]);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd173.Obj));
  if (! ((Wrd174.uLng) == 1))
    goto label_158;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd173.Obj));
  (Wrd170.Obj) = ((Wrd172.pObj) [1]);

DEFLABEL (label_157)
  (Rsp [0]) = (Wrd170.Obj);
  goto lambda_27;

DEFLABEL (label_158)
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_100)
  (Wrd170.Obj) = Rvl;
  goto label_157;

DEFLABEL (lambda_119)
DEFLABEL (lambda_56)
  INTERRUPT_CHECK (26, LABEL_16_19);
  (Wrd132.Obj) = (Rsp [0]);
  if ((Wrd132.Obj) == (current_block [OBJECT_16_0]))
    goto label_161;
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd135.uLng) == 1))
    goto label_125;
  if (! ((Wrd135.uLng) == 1))
    goto label_160;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd137.Obj) = ((Wrd139.pObj) [1]);

DEFLABEL (label_159)
  (Rsp [0]) = (Wrd137.Obj);
  goto lambda_56;

DEFLABEL (label_160)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_97)
  (Wrd137.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_161)
  Rsp = (& (Rsp [1]));
  (Wrd150.Obj) = (Rsp [0]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if (! ((Wrd151.uLng) == 1))
    goto label_166;
  (Wrd149.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd147.Obj) = ((Wrd149.pObj) [1]);

DEFLABEL (label_165)
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd158.uLng) == 1))
    goto label_164;
  (Wrd156.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd157.Obj) = ((Wrd156.pObj) [1]);
  (* (--Rsp)) = (Wrd157.Obj);

DEFLABEL (label_163)
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_22]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (Wrd166.Obj) = (current_block [OBJECT_16_4]);
  (* (--Rsp)) = (Wrd166.Obj);

DEFLABEL (label_162)
  (Wrd262.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd262.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_164)
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_99)
  (* (--Rsp)) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_98)
  (Wrd147.Obj) = Rvl;
  goto label_165;

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_16_22);
  (Wrd9.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_172;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_171)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_170;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_169)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_168;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_167)
  (Wrd43.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_168)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_40]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_103)
  (Wrd34.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_39]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_102)
  (Wrd23.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_38]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_101)
  (Wrd14.Obj) = Rvl;
  goto label_171;

DEFLABEL (lambda_118)
DEFLABEL (lambda_27)
  INTERRUPT_CHECK (26, LABEL_16_12);
  (Wrd189.Obj) = (Rsp [0]);
  if ((Wrd189.Obj) == (current_block [OBJECT_16_0]))
    goto label_175;
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd189.Obj));
  if (! ((Wrd192.uLng) == 1))
    goto label_145;
  if (! ((Wrd192.uLng) == 1))
    goto label_174;
  (Wrd196.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd194.Obj) = ((Wrd196.pObj) [1]);

DEFLABEL (label_173)
  (Rsp [0]) = (Wrd194.Obj);
  goto lambda_27;

DEFLABEL (label_174)
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd202.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_104)
  (Wrd194.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_175)
  Rsp = (& (Rsp [1]));
  (Wrd207.Obj) = (Rsp [0]);
  (Wrd208.uLng) = (OBJECT_TYPE (Wrd207.Obj));
  if (! ((Wrd208.uLng) == 1))
    goto label_177;
  (Wrd206.pObj) = (OBJECT_ADDRESS (Wrd207.Obj));
  (Wrd204.Obj) = ((Wrd206.pObj) [1]);

DEFLABEL (label_176)
  (Rsp [0]) = (Wrd204.Obj);
  goto lambda_35;

DEFLABEL (label_177)
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_105)
  (Wrd204.Obj) = Rvl;
  goto label_176;

DEFLABEL (lambda_117)
DEFLABEL (lambda_35)
  INTERRUPT_CHECK (26, LABEL_16_5);
  (Wrd213.Obj) = (Rsp [0]);
  if ((Wrd213.Obj) == (current_block [OBJECT_16_0]))
    goto label_180;
  (Wrd216.uLng) = (OBJECT_TYPE (Wrd213.Obj));
  if (! ((Wrd216.uLng) == 1))
    goto label_133;
  if (! ((Wrd216.uLng) == 1))
    goto label_179;
  (Wrd220.pObj) = (OBJECT_ADDRESS (Wrd213.Obj));
  (Wrd218.Obj) = ((Wrd220.pObj) [1]);

DEFLABEL (label_178)
  (Rsp [0]) = (Wrd218.Obj);
  goto lambda_35;

DEFLABEL (label_179)
  (Wrd226.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd226.Obj);
  (* (--Rsp)) = (Wrd213.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_106)
  (Wrd218.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_180)
  Rsp = (& (Rsp [1]));
  (Wrd231.Obj) = (Rsp [0]);
  (Wrd232.uLng) = (OBJECT_TYPE (Wrd231.Obj));
  if (! ((Wrd232.uLng) == 1))
    goto label_188;
  (Wrd230.pObj) = (OBJECT_ADDRESS (Wrd231.Obj));
  (Wrd228.Obj) = ((Wrd230.pObj) [1]);

DEFLABEL (label_187)
  (Wrd239.uLng) = (OBJECT_TYPE (Wrd228.Obj));
  if (! ((Wrd239.uLng) == 1))
    goto label_186;
  (Wrd238.pObj) = (OBJECT_ADDRESS (Wrd228.Obj));
  (Wrd237.Obj) = ((Wrd238.pObj) [1]);

DEFLABEL (label_185)
  (Wrd246.uLng) = (OBJECT_TYPE (Wrd237.Obj));
  if (! ((Wrd246.uLng) == 1))
    goto label_184;
  (Wrd245.pObj) = (OBJECT_ADDRESS (Wrd237.Obj));
  (Wrd244.Obj) = ((Wrd245.pObj) [0]);

DEFLABEL (label_183)
  (Wrd253.uLng) = (OBJECT_TYPE (Wrd244.Obj));
  if (! ((Wrd253.uLng) == 1))
    goto label_182;
  (Wrd251.pObj) = (OBJECT_ADDRESS (Wrd244.Obj));
  (Wrd252.Obj) = ((Wrd251.pObj) [1]);
  (* (--Rsp)) = (Wrd252.Obj);

DEFLABEL (label_181)
  (Wrd260.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd260.Obj);
  (Wrd261.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd261.Obj);
  goto label_162;

DEFLABEL (label_182)
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd257.Obj);
  (* (--Rsp)) = (Wrd244.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_110)
  (* (--Rsp)) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd250.Obj);
  (* (--Rsp)) = (Wrd237.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_109)
  (Wrd244.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd243.Obj);
  (* (--Rsp)) = (Wrd228.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_108)
  (Wrd237.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  (Wrd236.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd231.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_107)
  (Wrd228.Obj) = Rvl;
  goto label_187;

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_198;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_197)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_196;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_195)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_194;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_193)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_192;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_191)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_190;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_189)
  (Wrd53.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_46]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_16_5]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd61.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_16_46);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_47]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_16_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_16_47);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_190)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_45]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_115)
  (Wrd46.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_44]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_114)
  (Wrd37.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_43]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_113)
  (* (--Rsp)) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_42]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_112)
  (Wrd23.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_41]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_111)
  (Wrd14.Obj) = Rvl;
  goto label_197;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_5 3
#define LABEL_17_6 5
#define LABEL_17_7 7
#define LABEL_17_9 9
#define LABEL_17_10 11
#define LABEL_17_11 13
#define LABEL_17_12 15
#define LABEL_17_13 17
#define LABEL_17_4 19
#define LABEL_17_14 21
#define LABEL_17_15 23
#define LABEL_17_8 25
#define LABEL_17_17 27
#define LABEL_17_18 29
#define LABEL_17_19 31
#define LABEL_17_20 33
#define LABEL_17_21 35
#define LABEL_17_22 37
#define LABEL_17_23 39
#define LABEL_17_24 41
#define LABEL_17_25 43
#define LABEL_17_26 45
#define LABEL_17_27 47
#define LABEL_17_28 49
#define LABEL_17_29 51
#define ENVIRONMENT_LABEL_17_3 65
#define DEBUGGING_LABEL_17_2 64
#define OBJECT_17_8 63
#define OBJECT_17_7 62
#define OBJECT_17_6 61
#define OBJECT_17_5 60
#define OBJECT_17_4 59
#define OBJECT_17_3 58
#define OBJECT_17_2 57
#define OBJECT_17_1 56
#define OBJECT_17_0 55
#define EXECUTE_CACHE_17_16 53
#define FREE_REFERENCES_LABEL_17_0 52
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd13;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd30;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd66;
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
      current_block = (Rpc - LABEL_17_5);
      goto lambda_19;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_59;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto label_60;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_58;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto lambda_10;

    case 5:
      current_block = (Rpc - LABEL_17_11);
      goto label_56;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto label_57;

    case 7:
      current_block = (Rpc - LABEL_17_13);
      goto label_55;

    case 8:
      current_block = (Rpc - LABEL_17_4);
      goto lambda_51;

    case 9:
      current_block = (Rpc - LABEL_17_14);
      goto label_53;

    case 10:
      current_block = (Rpc - LABEL_17_15);
      goto label_54;

    case 11:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_40;

    case 12:
      current_block = (Rpc - LABEL_17_17);
      goto label_61;

    case 13:
      current_block = (Rpc - LABEL_17_18);
      goto label_62;

    case 14:
      current_block = (Rpc - LABEL_17_19);
      goto label_63;

    case 15:
      current_block = (Rpc - LABEL_17_20);
      goto label_64;

    case 16:
      current_block = (Rpc - LABEL_17_21);
      goto label_65;

    case 17:
      current_block = (Rpc - LABEL_17_22);
      goto continuation_30;

    case 18:
      current_block = (Rpc - LABEL_17_23);
      goto continuation_29;

    case 19:
      current_block = (Rpc - LABEL_17_24);
      goto continuation_28;

    case 20:
      current_block = (Rpc - LABEL_17_25);
      goto label_66;

    case 21:
      current_block = (Rpc - LABEL_17_26);
      goto label_67;

    case 22:
      current_block = (Rpc - LABEL_17_27);
      goto label_68;

    case 23:
      current_block = (Rpc - LABEL_17_28);
      goto continuation_24;

    case 24:
      current_block = (Rpc - LABEL_17_29);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_72)
DEFLABEL (lambda_51)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (label_74)
  if (! ((Wrd6.uLng) == 1))
    goto label_80;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_79)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rsp = (& (Rsp [1]));
  goto label_73;

DEFLABEL (label_76)
  if (! ((Wrd19.uLng) == 1))
    goto label_78;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_77)
  goto lambda_10;

DEFLABEL (label_78)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (lambda_71)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_17_10);
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (current_block [OBJECT_17_0]))
    goto label_84;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd33.uLng) == 1)
    goto label_81;
  Rsp = (& (Rsp [1]));
  goto label_75;

DEFLABEL (label_81)
  if (! ((Wrd33.uLng) == 1))
    goto label_83;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_82)
  (Rsp [0]) = (Wrd35.Obj);
  goto label_77;

DEFLABEL (label_83)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_55)
  (Wrd35.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_84)
  Rsp = (& (Rsp [1]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_88;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_87)
  (Rsp [0]) = (Wrd45.Obj);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_75;
  if (! ((Wrd55.uLng) == 1))
    goto label_86;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_85)
  (Rsp [0]) = (Wrd57.Obj);
  goto lambda_19;

DEFLABEL (label_86)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_57)
  (Wrd57.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_56)
  (Wrd45.Obj) = Rvl;
  goto label_87;

DEFLABEL (lambda_70)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_17_5);
  (Wrd66.Obj) = (Rsp [0]);
  if ((Wrd66.Obj) == (current_block [OBJECT_17_0]))
    goto label_91;
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_75;
  if (! ((Wrd69.uLng) == 1))
    goto label_90;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_89)
  (Rsp [0]) = (Wrd71.Obj);
  goto lambda_19;

DEFLABEL (label_90)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_58)
  (Wrd71.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  Rsp = (& (Rsp [1]));
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_111;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_110)
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd92.uLng) == 1))
    goto label_109;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (* (--Rsp)) = (Wrd91.Obj);

DEFLABEL (label_108)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (current_block [OBJECT_17_3]);
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd101.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd101.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (Wrd9.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_107;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_106)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_105;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_104)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_103;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_102)
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_101;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_100)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_99;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_98)
  (Wrd53.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_22]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_17_4]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd61.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_17_22);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_17_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_17_23);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_17_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_17_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_97;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_96)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_95;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_94)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_93;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_92)
  (Wrd37.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_28]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_17_7]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_17_28);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_29]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_17_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_17_29);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_27]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_68)
  (Wrd30.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_26]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_67)
  (Wrd23.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_66)
  (Wrd14.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_65)
  (Wrd46.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_64)
  (Wrd37.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_62)
  (Wrd23.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_61)
  (Wrd14.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_59)
  (Wrd81.Obj) = Rvl;
  goto label_110;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_5 3
#define LABEL_18_6 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define LABEL_18_10 13
#define LABEL_18_11 15
#define LABEL_18_13 17
#define LABEL_18_4 19
#define LABEL_18_14 21
#define LABEL_18_15 23
#define LABEL_18_16 25
#define LABEL_18_12 27
#define LABEL_18_18 29
#define LABEL_18_19 31
#define LABEL_18_20 33
#define ENVIRONMENT_LABEL_18_3 43
#define DEBUGGING_LABEL_18_2 42
#define OBJECT_18_4 41
#define OBJECT_18_3 40
#define OBJECT_18_2 39
#define OBJECT_18_1 38
#define OBJECT_18_0 37
#define EXECUTE_CACHE_18_17 35
#define FREE_REFERENCES_LABEL_18_0 34
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd106;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_18_5);
      goto lambda_11;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto label_35;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_18_10);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_18_11);
      goto label_40;

    case 7:
      current_block = (Rpc - LABEL_18_13);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_18_4);
      goto lambda_29;

    case 9:
      current_block = (Rpc - LABEL_18_14);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_18_15);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_18_16);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_18_12);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_18_18);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_18_19);
      goto label_42;

    case 15:
      current_block = (Rpc - LABEL_18_20);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_45)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_47;

DEFLABEL (label_46)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_17]));

DEFLABEL (label_47)
  if (! ((Wrd6.uLng) == 1))
    goto label_55;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_54)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_49;

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  goto label_46;

DEFLABEL (label_49)
  if (! ((Wrd19.uLng) == 1))
    goto label_53;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_52)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_48;
  if (! ((Wrd31.uLng) == 1))
    goto label_51;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_50)
  (Rsp [0]) = (Wrd33.Obj);
  goto lambda_11;

DEFLABEL (label_51)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_33)
  (Wrd33.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_32)
  (Wrd21.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (lambda_44)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_18_5);
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == (current_block [OBJECT_18_0]))
    goto label_58;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_48;
  if (! ((Wrd45.uLng) == 1))
    goto label_57;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_56)
  (Rsp [0]) = (Wrd47.Obj);
  goto lambda_11;

DEFLABEL (label_57)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_34)
  (Wrd47.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  Rsp = (& (Rsp [1]));
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_74;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_73)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_72;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd66.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_71)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_70;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [1]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_69)
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_68;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [1]);

DEFLABEL (label_67)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_66;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd89.Obj) = ((Wrd90.pObj) [1]);

DEFLABEL (label_65)
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_64;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd96.Obj) = ((Wrd97.pObj) [0]);

DEFLABEL (label_63)
  (Wrd106.Obj) = (current_block [OBJECT_18_0]);
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd106.Obj);
  (Wrd104.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd104.pObj)));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd111.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd111.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_18_12);
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
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_62;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_61)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_60;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_59)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_18_4]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_18_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_42)
  (Wrd23.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_41)
  (Wrd14.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_40)
  (Wrd96.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_39)
  (Wrd89.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_38)
  (Wrd80.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_36)
  (Wrd66.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_35)
  (Wrd57.Obj) = Rvl;
  goto label_73;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define LABEL_19_9 13
#define LABEL_19_10 15
#define LABEL_19_11 17
#define LABEL_19_12 19
#define LABEL_19_13 21
#define LABEL_19_14 23
#define LABEL_19_15 25
#define LABEL_19_17 27
#define LABEL_19_18 29
#define LABEL_19_19 31
#define LABEL_19_20 33
#define LABEL_19_21 35
#define LABEL_19_22 37
#define LABEL_19_23 39
#define LABEL_19_24 41
#define LABEL_19_25 43
#define LABEL_19_26 45
#define LABEL_19_27 47
#define LABEL_19_28 49
#define LABEL_19_29 51
#define LABEL_19_30 53
#define LABEL_19_31 55
#define LABEL_19_32 57
#define ENVIRONMENT_LABEL_19_3 71
#define DEBUGGING_LABEL_19_2 70
#define OBJECT_19_8 69
#define OBJECT_19_7 68
#define OBJECT_19_6 67
#define OBJECT_19_5 66
#define OBJECT_19_4 65
#define OBJECT_19_3 64
#define OBJECT_19_2 63
#define OBJECT_19_1 62
#define OBJECT_19_0 61
#define EXECUTE_CACHE_19_16 59
#define FREE_REFERENCES_LABEL_19_0 58
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_50;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_52;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_53;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_54;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto label_55;

    case 5:
      current_block = (Rpc - LABEL_19_9);
      goto label_56;

    case 6:
      current_block = (Rpc - LABEL_19_10);
      goto label_57;

    case 7:
      current_block = (Rpc - LABEL_19_11);
      goto label_58;

    case 8:
      current_block = (Rpc - LABEL_19_12);
      goto label_59;

    case 9:
      current_block = (Rpc - LABEL_19_13);
      goto label_60;

    case 10:
      current_block = (Rpc - LABEL_19_14);
      goto label_61;

    case 11:
      current_block = (Rpc - LABEL_19_15);
      goto continuation_37;

    case 12:
      current_block = (Rpc - LABEL_19_17);
      goto label_62;

    case 13:
      current_block = (Rpc - LABEL_19_18);
      goto label_63;

    case 14:
      current_block = (Rpc - LABEL_19_19);
      goto continuation_34;

    case 15:
      current_block = (Rpc - LABEL_19_20);
      goto label_64;

    case 16:
      current_block = (Rpc - LABEL_19_21);
      goto label_65;

    case 17:
      current_block = (Rpc - LABEL_19_22);
      goto label_66;

    case 18:
      current_block = (Rpc - LABEL_19_23);
      goto label_67;

    case 19:
      current_block = (Rpc - LABEL_19_24);
      goto continuation_25;

    case 20:
      current_block = (Rpc - LABEL_19_25);
      goto label_68;

    case 21:
      current_block = (Rpc - LABEL_19_26);
      goto label_69;

    case 22:
      current_block = (Rpc - LABEL_19_27);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_19_28);
      goto label_70;

    case 24:
      current_block = (Rpc - LABEL_19_29);
      goto label_71;

    case 25:
      current_block = (Rpc - LABEL_19_30);
      goto label_72;

    case 26:
      current_block = (Rpc - LABEL_19_31);
      goto continuation_16;

    case 27:
      current_block = (Rpc - LABEL_19_32);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_74)
DEFLABEL (lambda_50)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_16]));

DEFLABEL (label_76)
  if (! ((Wrd6.uLng) == 1))
    goto label_123;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_122)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rsp = (& (Rsp [1]));
  goto label_75;

DEFLABEL (label_78)
  if (! ((Wrd19.uLng) == 1))
    goto label_121;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_120)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_77;
  if (! ((Wrd31.uLng) == 1))
    goto label_119;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_118)
  (Rsp [0]) = (Wrd33.Obj);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_77;
  if (! ((Wrd43.uLng) == 1))
    goto label_117;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_116)
  (Rsp [0]) = (Wrd45.Obj);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_77;
  if (! ((Wrd55.uLng) == 1))
    goto label_115;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_114)
  if ((Wrd57.Obj) == (current_block [OBJECT_19_1]))
    goto label_80;
  (Wrd67.Obj) = (current_block [OBJECT_19_3]);
  goto label_79;

DEFLABEL (label_80)
  (Wrd67.Obj) = (current_block [OBJECT_19_2]);

DEFLABEL (label_79)
DEFLABEL (label_113)
  Rsp = (& (Rsp [1]));
  if ((Wrd67.Obj) == ((SCHEME_OBJECT) 0))
    goto label_75;
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_112;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_111)
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_110;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd79.Obj) = ((Wrd80.pObj) [1]);

DEFLABEL (label_109)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_108;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd87.pObj) [1]);

DEFLABEL (label_107)
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_106;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd93.Obj) = ((Wrd94.pObj) [1]);

DEFLABEL (label_105)
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_104;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd100.Obj) = ((Wrd101.pObj) [0]);

DEFLABEL (label_103)
  (Wrd110.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  (Wrd108.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd108.pObj)));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd114.Obj) = (current_block [OBJECT_19_5]);
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd115.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd115.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_19_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_102;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_101)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_100;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_99)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_19_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_98;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_97)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_96;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_95)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_94;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_93)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_92;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_91)
  (Wrd47.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_24]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_19_5]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd52.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_19_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_90;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_89)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_88;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_87)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_27]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_19_7]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_19_27);
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
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_86;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_85)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_84;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_83)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_82;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_81)
  (Wrd40.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_31]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_19_5]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_19_31);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_19_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19_32);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_30]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 1);

DEFLABEL (label_72)
  (Wrd30.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_29]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_71)
  (Wrd23.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_28]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_70)
  (Wrd14.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_26]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 1);

DEFLABEL (label_69)
  (Wrd19.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_68)
  (Wrd10.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_23]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 1);

DEFLABEL (label_67)
  (Wrd37.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_22]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_66)
  (Wrd30.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_65)
  (Wrd23.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_64)
  (Wrd14.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 1);

DEFLABEL (label_63)
  (Wrd19.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_62)
  (Wrd10.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 1);

DEFLABEL (label_61)
  (Wrd100.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_60)
  (Wrd93.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_59)
  (Wrd86.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_58)
  (Wrd79.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_57)
  (Wrd70.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_115)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_56)
  (Wrd57.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_55)
  (Wrd45.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_54)
  (Wrd33.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_53)
  (Wrd21.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_122;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_5 3
#define LABEL_20_6 5
#define LABEL_20_7 7
#define LABEL_20_9 9
#define LABEL_20_10 11
#define LABEL_20_11 13
#define LABEL_20_12 15
#define LABEL_20_13 17
#define LABEL_20_4 19
#define LABEL_20_14 21
#define LABEL_20_15 23
#define LABEL_20_8 25
#define LABEL_20_17 27
#define LABEL_20_18 29
#define LABEL_20_19 31
#define LABEL_20_20 33
#define LABEL_20_21 35
#define LABEL_20_22 37
#define LABEL_20_23 39
#define LABEL_20_24 41
#define LABEL_20_25 43
#define LABEL_20_26 45
#define LABEL_20_27 47
#define LABEL_20_28 49
#define LABEL_20_29 51
#define LABEL_20_30 53
#define LABEL_20_31 55
#define LABEL_20_32 57
#define LABEL_20_33 59
#define LABEL_20_34 61
#define LABEL_20_35 63
#define LABEL_20_36 65
#define LABEL_20_37 67
#define ENVIRONMENT_LABEL_20_3 85
#define DEBUGGING_LABEL_20_2 84
#define OBJECT_20_12 83
#define OBJECT_20_11 82
#define OBJECT_20_10 81
#define OBJECT_20_9 80
#define OBJECT_20_8 79
#define OBJECT_20_7 78
#define OBJECT_20_6 77
#define OBJECT_20_5 76
#define OBJECT_20_4 75
#define OBJECT_20_3 74
#define OBJECT_20_2 73
#define OBJECT_20_1 72
#define OBJECT_20_0 71
#define EXECUTE_CACHE_20_16 69
#define FREE_REFERENCES_LABEL_20_0 68
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd30;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd66;
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
      current_block = (Rpc - LABEL_20_5);
      goto lambda_19;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto label_80;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto label_81;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto label_79;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto lambda_10;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto label_77;

    case 6:
      current_block = (Rpc - LABEL_20_12);
      goto label_78;

    case 7:
      current_block = (Rpc - LABEL_20_13);
      goto label_76;

    case 8:
      current_block = (Rpc - LABEL_20_4);
      goto lambda_72;

    case 9:
      current_block = (Rpc - LABEL_20_14);
      goto label_74;

    case 10:
      current_block = (Rpc - LABEL_20_15);
      goto label_75;

    case 11:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_61;

    case 12:
      current_block = (Rpc - LABEL_20_17);
      goto continuation_46;

    case 13:
      current_block = (Rpc - LABEL_20_18);
      goto label_82;

    case 14:
      current_block = (Rpc - LABEL_20_19);
      goto label_83;

    case 15:
      current_block = (Rpc - LABEL_20_20);
      goto label_84;

    case 16:
      current_block = (Rpc - LABEL_20_21);
      goto label_85;

    case 17:
      current_block = (Rpc - LABEL_20_22);
      goto label_86;

    case 18:
      current_block = (Rpc - LABEL_20_23);
      goto continuation_38;

    case 19:
      current_block = (Rpc - LABEL_20_24);
      goto continuation_37;

    case 20:
      current_block = (Rpc - LABEL_20_25);
      goto continuation_35;

    case 21:
      current_block = (Rpc - LABEL_20_26);
      goto continuation_34;

    case 22:
      current_block = (Rpc - LABEL_20_27);
      goto continuation_33;

    case 23:
      current_block = (Rpc - LABEL_20_28);
      goto continuation_32;

    case 24:
      current_block = (Rpc - LABEL_20_29);
      goto continuation_31;

    case 25:
      current_block = (Rpc - LABEL_20_30);
      goto continuation_30;

    case 26:
      current_block = (Rpc - LABEL_20_31);
      goto continuation_29;

    case 27:
      current_block = (Rpc - LABEL_20_32);
      goto continuation_28;

    case 28:
      current_block = (Rpc - LABEL_20_33);
      goto label_87;

    case 29:
      current_block = (Rpc - LABEL_20_34);
      goto label_88;

    case 30:
      current_block = (Rpc - LABEL_20_35);
      goto label_89;

    case 31:
      current_block = (Rpc - LABEL_20_36);
      goto continuation_24;

    case 32:
      current_block = (Rpc - LABEL_20_37);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_93)
DEFLABEL (lambda_72)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_95;

DEFLABEL (label_94)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (label_95)
  if (! ((Wrd6.uLng) == 1))
    goto label_101;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_100)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_97;

DEFLABEL (label_96)
  Rsp = (& (Rsp [1]));
  goto label_94;

DEFLABEL (label_97)
  if (! ((Wrd19.uLng) == 1))
    goto label_99;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_98)
  goto lambda_10;

DEFLABEL (label_99)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_74)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (lambda_92)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_20_10);
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (current_block [OBJECT_20_0]))
    goto label_105;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd33.uLng) == 1)
    goto label_102;
  Rsp = (& (Rsp [1]));
  goto label_96;

DEFLABEL (label_102)
  if (! ((Wrd33.uLng) == 1))
    goto label_104;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_103)
  (Rsp [0]) = (Wrd35.Obj);
  goto label_98;

DEFLABEL (label_104)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_76)
  (Wrd35.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_105)
  Rsp = (& (Rsp [1]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_109;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_108)
  (Rsp [0]) = (Wrd45.Obj);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_96;
  if (! ((Wrd55.uLng) == 1))
    goto label_107;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_106)
  (Rsp [0]) = (Wrd57.Obj);
  goto lambda_19;

DEFLABEL (label_107)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_78)
  (Wrd57.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_77)
  (Wrd45.Obj) = Rvl;
  goto label_108;

DEFLABEL (lambda_91)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_20_5);
  (Wrd66.Obj) = (Rsp [0]);
  if ((Wrd66.Obj) == (current_block [OBJECT_20_0]))
    goto label_112;
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_96;
  if (! ((Wrd69.uLng) == 1))
    goto label_111;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_110)
  (Rsp [0]) = (Wrd71.Obj);
  goto lambda_19;

DEFLABEL (label_111)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_79)
  (Wrd71.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_112)
  Rsp = (& (Rsp [1]));
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_132;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_131)
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd92.uLng) == 1))
    goto label_130;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (* (--Rsp)) = (Wrd91.Obj);

DEFLABEL (label_129)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd101.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd101.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (Wrd9.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_20_17);
  (Wrd9.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_128;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_127)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_126;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_125)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_124;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_123)
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_122;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_121)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_120;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [0]);

DEFLABEL (label_119)
  (Wrd49.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_23]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_20_5]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd57.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_20_23);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_20_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_20_25);
  (Wrd9.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_20_26);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_27]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_20_27);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_28]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_20_8]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_20_28);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_29]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_20_29);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_30]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_20_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_20_30);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_31]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20_9]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_20_31);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20_10]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_20_32);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_118;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_117)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_116;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_115)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_114;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_113)
  (Wrd37.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_36]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_20_11]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_20_36);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_37]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20_12]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_20_37);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_114)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_35]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_89)
  (Wrd30.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_34]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_88)
  (Wrd23.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_33]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_87)
  (Wrd14.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_86)
  (Wrd42.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_85)
  (Wrd33.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_83)
  (Wrd19.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_82)
  (Wrd10.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_80)
  (Wrd81.Obj) = Rvl;
  goto label_131;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_5 3
#define LABEL_21_6 5
#define LABEL_21_7 7
#define LABEL_21_8 9
#define LABEL_21_9 11
#define LABEL_21_10 13
#define LABEL_21_11 15
#define LABEL_21_13 17
#define LABEL_21_4 19
#define LABEL_21_14 21
#define LABEL_21_15 23
#define LABEL_21_16 25
#define LABEL_21_12 27
#define LABEL_21_18 29
#define LABEL_21_19 31
#define LABEL_21_20 33
#define ENVIRONMENT_LABEL_21_3 43
#define DEBUGGING_LABEL_21_2 42
#define OBJECT_21_4 41
#define OBJECT_21_3 40
#define OBJECT_21_2 39
#define OBJECT_21_1 38
#define OBJECT_21_0 37
#define EXECUTE_CACHE_21_17 35
#define FREE_REFERENCES_LABEL_21_0 34
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd106;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_21_5);
      goto lambda_11;

    case 1:
      current_block = (Rpc - LABEL_21_6);
      goto label_35;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_21_11);
      goto label_40;

    case 7:
      current_block = (Rpc - LABEL_21_13);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_21_4);
      goto lambda_29;

    case 9:
      current_block = (Rpc - LABEL_21_14);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_21_15);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_21_16);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_21_12);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_21_18);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_21_19);
      goto label_42;

    case 15:
      current_block = (Rpc - LABEL_21_20);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_45)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_47;

DEFLABEL (label_46)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_17]));

DEFLABEL (label_47)
  if (! ((Wrd6.uLng) == 1))
    goto label_55;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_54)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_49;

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  goto label_46;

DEFLABEL (label_49)
  if (! ((Wrd19.uLng) == 1))
    goto label_53;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_52)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_48;
  if (! ((Wrd31.uLng) == 1))
    goto label_51;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_50)
  (Rsp [0]) = (Wrd33.Obj);
  goto lambda_11;

DEFLABEL (label_51)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_33)
  (Wrd33.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_32)
  (Wrd21.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (lambda_44)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_21_5);
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == (current_block [OBJECT_21_0]))
    goto label_58;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_48;
  if (! ((Wrd45.uLng) == 1))
    goto label_57;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_56)
  (Rsp [0]) = (Wrd47.Obj);
  goto lambda_11;

DEFLABEL (label_57)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_34)
  (Wrd47.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  Rsp = (& (Rsp [1]));
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_74;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_73)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_72;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd66.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_71)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_70;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [1]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_69)
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_68;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [1]);

DEFLABEL (label_67)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_66;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd89.Obj) = ((Wrd90.pObj) [1]);

DEFLABEL (label_65)
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_64;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd96.Obj) = ((Wrd97.pObj) [0]);

DEFLABEL (label_63)
  (Wrd106.Obj) = (current_block [OBJECT_21_0]);
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd106.Obj);
  (Wrd104.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd104.pObj)));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (current_block [OBJECT_21_3]);
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd111.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd111.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_21_12);
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
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_62;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_61)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_60;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_59)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_21_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_42)
  (Wrd23.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_41)
  (Wrd14.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_40)
  (Wrd96.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_39)
  (Wrd89.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_38)
  (Wrd80.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_36)
  (Wrd66.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_35)
  (Wrd57.Obj) = Rvl;
  goto label_73;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_8 11
#define LABEL_22_9 13
#define LABEL_22_10 15
#define LABEL_22_11 17
#define LABEL_22_12 19
#define LABEL_22_13 21
#define LABEL_22_14 23
#define LABEL_22_15 25
#define LABEL_22_17 27
#define LABEL_22_18 29
#define LABEL_22_19 31
#define LABEL_22_20 33
#define LABEL_22_21 35
#define LABEL_22_22 37
#define LABEL_22_23 39
#define LABEL_22_24 41
#define LABEL_22_25 43
#define LABEL_22_26 45
#define LABEL_22_27 47
#define LABEL_22_28 49
#define LABEL_22_29 51
#define LABEL_22_30 53
#define LABEL_22_31 55
#define LABEL_22_32 57
#define LABEL_22_33 59
#define ENVIRONMENT_LABEL_22_3 74
#define DEBUGGING_LABEL_22_2 73
#define OBJECT_22_9 72
#define OBJECT_22_8 71
#define OBJECT_22_7 70
#define OBJECT_22_6 69
#define OBJECT_22_5 68
#define OBJECT_22_4 67
#define OBJECT_22_3 66
#define OBJECT_22_2 65
#define OBJECT_22_1 64
#define OBJECT_22_0 63
#define EXECUTE_CACHE_22_16 61
#define FREE_REFERENCES_LABEL_22_0 60
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sugar_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_53;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_55;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_56;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto label_57;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto label_58;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto label_59;

    case 6:
      current_block = (Rpc - LABEL_22_10);
      goto label_60;

    case 7:
      current_block = (Rpc - LABEL_22_11);
      goto label_61;

    case 8:
      current_block = (Rpc - LABEL_22_12);
      goto label_62;

    case 9:
      current_block = (Rpc - LABEL_22_13);
      goto label_63;

    case 10:
      current_block = (Rpc - LABEL_22_14);
      goto label_64;

    case 11:
      current_block = (Rpc - LABEL_22_15);
      goto continuation_38;

    case 12:
      current_block = (Rpc - LABEL_22_17);
      goto label_65;

    case 13:
      current_block = (Rpc - LABEL_22_18);
      goto label_66;

    case 14:
      current_block = (Rpc - LABEL_22_19);
      goto continuation_35;

    case 15:
      current_block = (Rpc - LABEL_22_20);
      goto label_67;

    case 16:
      current_block = (Rpc - LABEL_22_21);
      goto label_68;

    case 17:
      current_block = (Rpc - LABEL_22_22);
      goto label_69;

    case 18:
      current_block = (Rpc - LABEL_22_23);
      goto label_70;

    case 19:
      current_block = (Rpc - LABEL_22_24);
      goto continuation_26;

    case 20:
      current_block = (Rpc - LABEL_22_25);
      goto label_71;

    case 21:
      current_block = (Rpc - LABEL_22_26);
      goto label_72;

    case 22:
      current_block = (Rpc - LABEL_22_27);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_22_28);
      goto continuation_22;

    case 24:
      current_block = (Rpc - LABEL_22_29);
      goto label_73;

    case 25:
      current_block = (Rpc - LABEL_22_30);
      goto label_74;

    case 26:
      current_block = (Rpc - LABEL_22_31);
      goto label_75;

    case 27:
      current_block = (Rpc - LABEL_22_32);
      goto continuation_16;

    case 28:
      current_block = (Rpc - LABEL_22_33);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_77)
DEFLABEL (lambda_53)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_79;

DEFLABEL (label_78)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_16]));

DEFLABEL (label_79)
  if (! ((Wrd6.uLng) == 1))
    goto label_126;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_125)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_81;

DEFLABEL (label_80)
  Rsp = (& (Rsp [1]));
  goto label_78;

DEFLABEL (label_81)
  if (! ((Wrd19.uLng) == 1))
    goto label_124;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_123)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_80;
  if (! ((Wrd31.uLng) == 1))
    goto label_122;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_121)
  (Rsp [0]) = (Wrd33.Obj);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_80;
  if (! ((Wrd43.uLng) == 1))
    goto label_120;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_119)
  (Rsp [0]) = (Wrd45.Obj);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_80;
  if (! ((Wrd55.uLng) == 1))
    goto label_118;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_117)
  if ((Wrd57.Obj) == (current_block [OBJECT_22_1]))
    goto label_83;
  (Wrd67.Obj) = (current_block [OBJECT_22_3]);
  goto label_82;

DEFLABEL (label_83)
  (Wrd67.Obj) = (current_block [OBJECT_22_2]);

DEFLABEL (label_82)
DEFLABEL (label_116)
  Rsp = (& (Rsp [1]));
  if ((Wrd67.Obj) == ((SCHEME_OBJECT) 0))
    goto label_78;
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_115;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_114)
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_113;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd79.Obj) = ((Wrd80.pObj) [1]);

DEFLABEL (label_112)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_111;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd87.pObj) [1]);

DEFLABEL (label_110)
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_109;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd93.Obj) = ((Wrd94.pObj) [1]);

DEFLABEL (label_108)
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_107;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd100.Obj) = ((Wrd101.pObj) [0]);

DEFLABEL (label_106)
  (Wrd110.Obj) = (current_block [OBJECT_22_1]);
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  (Wrd108.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd108.pObj)));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd114.Obj) = (current_block [OBJECT_22_5]);
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd115.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd115.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_22_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_105;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_104)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_103;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_102)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_22_6]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_22_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_22_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_101;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_100)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_99;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_98)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_97;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_96)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_95;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_94)
  (Wrd47.Obj) = (current_block [OBJECT_22_1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_24]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_22_5]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd52.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_22_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_93;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_92)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_91;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_90)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_27]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_22_7]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_22_27);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_22_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_22_28);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_22_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_89;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_88)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_87;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_86)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_85;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_84)
  (Wrd40.Obj) = (current_block [OBJECT_22_1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_32]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_22_5]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22_32);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_33]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_22_9]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_22_33);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_31]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_75)
  (Wrd30.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_30]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_74)
  (Wrd23.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_29]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_73)
  (Wrd14.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_26]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_72)
  (Wrd19.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_71)
  (Wrd10.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_23]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_70)
  (Wrd37.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_69)
  (Wrd30.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_68)
  (Wrd23.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_67)
  (Wrd14.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_66)
  (Wrd19.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_65)
  (Wrd10.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_64)
  (Wrd100.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_63)
  (Wrd93.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_62)
  (Wrd86.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_61)
  (Wrd79.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_60)
  (Wrd70.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_118)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_59)
  (Wrd57.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_58)
  (Wrd45.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_57)
  (Wrd33.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_56)
  (Wrd21.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_125;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_18 27
#define LABEL_19 29
#define LABEL_20 31
#define LABEL_21 33
#define LABEL_22 35
#define LABEL_24 37
#define LABEL_25 39
#define LABEL_26 41
#define LABEL_27 43
#define LABEL_28 45
#define LABEL_29 47
#define LABEL_30 49
#define LABEL_31 51
#define LABEL_32 53
#define LABEL_33 55
#define LABEL_34 57
#define LABEL_35 59
#define LABEL_37 61
#define LABEL_38 63
#define LABEL_39 65
#define LABEL_40 67
#define LABEL_41 69
#define LABEL_42 71
#define LABEL_43 73
#define LABEL_44 75
#define LABEL_45 77
#define LABEL_46 79
#define LABEL_47 81
#define LABEL_48 83
#define LABEL_49 85
#define LABEL_50 87
#define LABEL_51 89
#define LABEL_52 91
#define LABEL_53 93
#define LABEL_54 95
#define LABEL_55 97
#define LABEL_56 99
#define LABEL_57 101
#define LABEL_58 103
#define LABEL_59 105
#define LABEL_60 107
#define LABEL_61 109
#define LABEL_62 111
#define LABEL_63 113
#define LABEL_64 115
#define LABEL_65 117
#define LABEL_66 119
#define LABEL_67 121
#define LABEL_68 123
#define LABEL_69 125
#define LABEL_70 127
#define LABEL_71 129
#define LABEL_72 131
#define LABEL_73 133
#define LABEL_74 135
#define ENVIRONMENT_LABEL_3 197
#define DEBUGGING_LABEL_2 196
#define PURIFICATION_ROOT 195
#define OBJECT_49 194
#define OBJECT_48 193
#define OBJECT_47 192
#define OBJECT_46 191
#define OBJECT_45 190
#define OBJECT_44 189
#define OBJECT_43 188
#define OBJECT_42 187
#define OBJECT_41 186
#define OBJECT_40 185
#define OBJECT_39 184
#define OBJECT_38 183
#define OBJECT_37 182
#define OBJECT_36 181
#define OBJECT_35 180
#define OBJECT_34 179
#define OBJECT_33 178
#define OBJECT_32 177
#define OBJECT_31 176
#define OBJECT_30 175
#define OBJECT_29 174
#define OBJECT_28 173
#define OBJECT_27 172
#define OBJECT_26 171
#define OBJECT_25 170
#define OBJECT_24 169
#define OBJECT_23 168
#define OBJECT_22 167
#define OBJECT_21 166
#define OBJECT_20 165
#define OBJECT_19 164
#define OBJECT_18 163
#define OBJECT_17 162
#define OBJECT_16 161
#define OBJECT_15 160
#define OBJECT_14 159
#define OBJECT_13 158
#define OBJECT_12 157
#define OBJECT_11 156
#define OBJECT_10 155
#define OBJECT_9 154
#define OBJECT_8 153
#define OBJECT_7 152
#define OBJECT_6 151
#define OBJECT_5 150
#define OBJECT_4 149
#define OBJECT_3 148
#define OBJECT_2 147
#define OBJECT_1 146
#define OBJECT_0 145
#define GLOBAL_EXECUTE_CACHE_36 137
#define GLOBAL_EXECUTE_CACHE_23 139
#define GLOBAL_EXECUTE_CACHE_15 141
#define GLOBAL_EXECUTE_CACHE_7 143
#define FREE_REFERENCES_LABEL_0 136
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
sugar_so_56b1307eccef01c6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_25;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_24;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto continuation_29;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_28;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_26;

    case 23:
      current_block = (Rpc - LABEL_30);
      goto continuation_33;

    case 24:
      current_block = (Rpc - LABEL_31);
      goto continuation_32;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_30;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto continuation_37;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_36;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto continuation_34;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto continuation_41;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_40;

    case 31:
      current_block = (Rpc - LABEL_39);
      goto continuation_38;

    case 32:
      current_block = (Rpc - LABEL_40);
      goto continuation_45;

    case 33:
      current_block = (Rpc - LABEL_41);
      goto continuation_44;

    case 34:
      current_block = (Rpc - LABEL_42);
      goto continuation_42;

    case 35:
      current_block = (Rpc - LABEL_43);
      goto continuation_49;

    case 36:
      current_block = (Rpc - LABEL_44);
      goto continuation_48;

    case 37:
      current_block = (Rpc - LABEL_45);
      goto continuation_46;

    case 38:
      current_block = (Rpc - LABEL_46);
      goto continuation_53;

    case 39:
      current_block = (Rpc - LABEL_47);
      goto continuation_52;

    case 40:
      current_block = (Rpc - LABEL_48);
      goto continuation_50;

    case 41:
      current_block = (Rpc - LABEL_49);
      goto continuation_57;

    case 42:
      current_block = (Rpc - LABEL_50);
      goto continuation_56;

    case 43:
      current_block = (Rpc - LABEL_51);
      goto continuation_54;

    case 44:
      current_block = (Rpc - LABEL_52);
      goto continuation_61;

    case 45:
      current_block = (Rpc - LABEL_53);
      goto continuation_60;

    case 46:
      current_block = (Rpc - LABEL_54);
      goto continuation_58;

    case 47:
      current_block = (Rpc - LABEL_55);
      goto continuation_65;

    case 48:
      current_block = (Rpc - LABEL_56);
      goto continuation_64;

    case 49:
      current_block = (Rpc - LABEL_57);
      goto continuation_62;

    case 50:
      current_block = (Rpc - LABEL_58);
      goto continuation_69;

    case 51:
      current_block = (Rpc - LABEL_59);
      goto continuation_68;

    case 52:
      current_block = (Rpc - LABEL_60);
      goto continuation_66;

    case 53:
      current_block = (Rpc - LABEL_61);
      goto continuation_73;

    case 54:
      current_block = (Rpc - LABEL_62);
      goto continuation_72;

    case 55:
      current_block = (Rpc - LABEL_63);
      goto continuation_70;

    case 56:
      current_block = (Rpc - LABEL_64);
      goto continuation_77;

    case 57:
      current_block = (Rpc - LABEL_65);
      goto continuation_76;

    case 58:
      current_block = (Rpc - LABEL_66);
      goto continuation_74;

    case 59:
      current_block = (Rpc - LABEL_67);
      goto continuation_81;

    case 60:
      current_block = (Rpc - LABEL_68);
      goto continuation_80;

    case 61:
      current_block = (Rpc - LABEL_69);
      goto continuation_78;

    case 62:
      current_block = (Rpc - LABEL_70);
      goto continuation_84;

    case 63:
      current_block = (Rpc - LABEL_71);
      goto continuation_82;

    case 64:
      current_block = (Rpc - LABEL_72);
      goto label_89;

    case 65:
      current_block = (Rpc - LABEL_73);
      goto label_90;

    case 66:
      current_block = (Rpc - LABEL_74);
      goto expression_86;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_86)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_73])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_90)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_89)
  {
    static const short sections [] =
      {
	0,
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
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 22)
      goto label_88;
    blocks = (current_block [OBJECT_49]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_72])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_88)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_15]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_36]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_15]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_59);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_62);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_68);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd5.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_70);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_sugar_so_56b1307eccef01c6 [22] =
  {
    { "sugar_so_code_1", 24, sugar_so_code_1 },
    { "sugar_so_code_2", 25, sugar_so_code_2 },
    { "sugar_so_code_3", 21, sugar_so_code_3 },
    { "sugar_so_code_4", 4, sugar_so_code_4 },
    { "sugar_so_code_5", 7, sugar_so_code_5 },
    { "sugar_so_code_6", 12, sugar_so_code_6 },
    { "sugar_so_code_7", 8, sugar_so_code_7 },
    { "sugar_so_code_8", 37, sugar_so_code_8 },
    { "sugar_so_code_9", 34, sugar_so_code_9 },
    { "sugar_so_code_10", 10, sugar_so_code_10 },
    { "sugar_so_code_11", 24, sugar_so_code_11 },
    { "sugar_so_code_12", 42, sugar_so_code_12 },
    { "sugar_so_code_13", 20, sugar_so_code_13 },
    { "sugar_so_code_14", 10, sugar_so_code_14 },
    { "sugar_so_code_15", 24, sugar_so_code_15 },
    { "sugar_so_code_16", 42, sugar_so_code_16 },
    { "sugar_so_code_17", 25, sugar_so_code_17 },
    { "sugar_so_code_18", 16, sugar_so_code_18 },
    { "sugar_so_code_19", 28, sugar_so_code_19 },
    { "sugar_so_code_20", 33, sugar_so_code_20 },
    { "sugar_so_code_21", 16, sugar_so_code_21 },
    { "sugar_so_code_22", 29, sugar_so_code_22 }
  };

int
decl_sugar_so_56b1307eccef01c6 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_sugar_so_56b1307eccef01c6);
  return (0);
}

DECLARE_COMPILED_CODE ("sugar.so", 67, decl_sugar_so_56b1307eccef01c6, sugar_so_56b1307eccef01c6)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_sugar_so_data_56b1307eccef01c6 [6537] =
  "\xc6\x01\x2c\xa3\x0d\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x0d"
  "\xba\x0d\x06\x07\x08\xc1\xbb\xc1\xbc\x28\x0d\xbd\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbe\x1d\xb0\x82\x88\xb1\xb2\x0d\x06\x07\x08\xb3\xb4\x28\xb5\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xba\x1d\xb0\x83\x88\x0d\x0d\x08\x0d\x0d\x0c"
  "\x0c\x0c\x83\xc1\x80\x82\x0c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x08\xb3\xb4"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\xb1\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x0d\x08\x0d\x1c"
  "\xb3\xb4\x28\xb7\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x81\x80\x82"
  "\x1d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x08\x1b\xb3\xb4\x28\xb7\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x0d\x1c\x1b\x0d\xbf"
  "\x0d\xb9\xb3\xb4\x08\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1b\x1b\x0d\x1c"
  "\x1b\xb7\xb3\xb4\x08\x28\x0d\x1c\x28\xb5\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xb3\xb4\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d"
  "\x1c\x0d\x1b\xb3\xb4\x08\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\xb3\xb4\x08\x28\x0d\x1c\x28"
  "\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\xb7\xb3\xb4\x08\x28\x1b\x28\xb5\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xb3\xb4\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x1b\x0d\x1c\x0d\x1b\xb3\xb4\x08\x28\xb5\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1b\x1b\x1b\xb3\xb4\x08\x28\x1b\x28\xb5\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x1b\x0d"
  "\x1c\xb7\x1b\xb3\xb4\x08\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x0d\x1c\xb3\xb4\x08\x28\xb5\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x0d\x1c\x0d\x1c\xb3\x06\x07\x08"
  "\xb4\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1b\x1b\x1b\x0d\x0d\x0d\xb7\x0d\x1b\xb3\xb4"
  "\x08\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x1b\xb3\xb4\x08\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0d\x1b\x0d\x1c\x1b\xb3\x06\x07\x08\xb4\x28\xb5\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b"
  "\x1b\x2a\x0d\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x0d\x1b\x2a\x0d\xb1\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x2a"
  "\x0d\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x2a\x1b\x1b\x1b\x2a\xc2\x02\x02"
  "\xc3\x1b\xb2\x2a\xb6\x2a\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x0a\x73\x75\x67\x61\x72\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x06\x62\x65\x67\x69\x6e\x0c\x64"
  "\x65\x66\x69\x6e\x65\x2d\x63\x65\x6c\x6c\x19\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x2d\x73\x74\x79\x6c\x65\x2d\x76\x61\x72\x69"
  "\x61\x6e\x74\x04\x63\x61\x72\x04\x63\x64\x72\x03\x12\x69\x6c\x6c"
  "\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73\x79\x6e\x74\x61\x78\x02\x5b"
  "\x32\x81\x89\x02\x5a\x30\x81\x8b\x02\x59\x2e\x81\x8b\x02\x58\x2c"
  "\x81\x8b\x02\x57\x2a\x81\x8b\x02\x56\x28\x81\x89\x02\x55\x26\x81"
  "\x89\x02\x54\x24\x81\x89\x02\x53\x22\x81\x89\x02\x52\x20\x81\x89"
  "\x02\x51\x1e\x81\x89\x02\x50\x1c\x81\x89\x02\x4f\x1a\x81\x89\x02"
  "\x4e\x18\x81\x89\x02\x4d\x16\x81\x87\x02\x4c\x14\x81\x87\x02\x4b"
  "\x12\x81\x87\x02\x4a\x10\x81\x89\x02\x49\x0e\x81\x89\x02\x48\x0c"
  "\x81\x8b\x02\x47\x0a\x81\x8b\x02\x46\x08\x81\x89\x02\x45\x06\x81"
  "\x87\x02\x44\x04\x85\x08\x31\x3f\x02\x16\x64\x69\x61\x67\x72\x61"
  "\x6d\x2d\x73\x74\x79\x6c\x65\x2d\x76\x61\x72\x69\x61\x6e\x74\x03"
  "\x02\x74\x34\x81\x89\x02\x73\x32\x81\x8b\x02\x72\x30\x81\x8b\x02"
  "\x71\x2e\x81\x8b\x02\x70\x2c\x81\x8b\x02\x6f\x2a\x81\x8b\x02\x6e"
  "\x28\x81\x89\x02\x6d\x26\x81\x89\x02\x6c\x24\x81\x89\x02\x6b\x22"
  "\x81\x89\x02\x6a\x20\x81\x89\x02\x69\x1e\x81\x89\x02\x68\x1c\x81"
  "\x89\x02\x67\x1a\x81\x89\x02\x66\x18\x81\x87\x02\x65\x16\x81\x87"
  "\x02\x64\x14\x81\x87\x02\x63\x12\x81\x87\x02\x62\x10\x81\x89\x02"
  "\x61\x0e\x81\x89\x02\x60\x0c\x81\x8b\x02\x5f\x0a\x81\x8b\x02\x5e"
  "\x08\x81\x89\x02\x5d\x06\x81\x87\x02\x5c\x04\x85\x08\x33\x41\x02"
  "\x03\x70\x3a\x03\x63\x3a\x04\x63\x65\x3a\x03\x65\x3a\x03\x63\x3a"
  "\x03\x70\x3a\x04\x63\x65\x3a\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x03\x65\x3a\x03\x0f\x73\x79\x6d\x62\x6f\x6c"
  "\x2d\x3e\x73\x74\x72\x69\x6e\x67\x05\x0a\x73\x75\x62\x73\x74\x72"
  "\x69\x6e\x67\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x74\x61\x69\x6c"
  "\x04\x07\x65\x71\x75\x61\x6c\x3f\x04\x07\x73\x79\x6d\x62\x6f\x6c"
  "\x06\x89\x01\x2c\x81\x8d\x02\x88\x01\x2a\x81\x8d\x02\x87\x01\x28"
  "\x81\x8b\x02\x86\x01\x26\x81\x8b\x02\x85\x01\x24\x81\x85\x02\x84"
  "\x01\x22\x81\x8b\x02\x83\x01\x20\x81\x89\x02\x82\x01\x1e\x81\x89"
  "\x02\x81\x01\x1c\x81\x85\x02\x80\x01\x1a\x81\x87\x02\x7f\x18\x81"
  "\x87\x02\x7e\x16\x81\x87\x02\x7d\x14\x81\x87\x02\x7c\x12\x81\x85"
  "\x02\x7b\x10\x81\x85\x02\x7a\x0e\x81\x83\x02\x79\x0c\x81\x83\x02"
  "\x78\x0a\x81\x85\x02\x77\x08\x81\x87\x02\x76\x06\x81\x87\x02\x75"
  "\x04\x83\x04\x2b\x46\x09\x02\x1a\x64\x65\x66\x69\x6e\x65\x2d\x62"
  "\x79\x2d\x64\x69\x61\x67\x72\x61\x6d\x2d\x76\x61\x72\x69\x61\x6e"
  "\x74\x0a\x21\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x3e\x70\x72\x6f"
  "\x70\x61\x67\x61\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63"
  "\x74\x6f\x72\x0b\x06\x6e\x61\x6d\x65\x21\x0c\x06\x71\x75\x6f\x74"
  "\x65\x0d\x03\x1d\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x2d\x6e"
  "\x61\x6d\x69\x6e\x67\x2d\x63\x6f\x6e\x76\x65\x6e\x74\x69\x6f\x6e"
  "\x0e\x02\x8d\x01\x0a\x81\x83\x02\x8c\x01\x08\x81\x85\x02\x8b\x01"
  "\x06\x81\x85\x02\x8a\x01\x04\x84\x06\x09\x16\x0f\x02\x07\x64\x65"
  "\x66\x69\x6e\x65\x10\x1e\x6d\x61\x6b\x65\x2d\x61\x72\x69\x74\x79"
  "\x2d\x64\x65\x74\x65\x63\x74\x69\x6e\x67\x2d\x6f\x70\x65\x72\x61"
  "\x74\x6f\x72\x11\x0d\x0a\x0b\x0d\x6e\x61\x72\x79\x2d\x6d\x61\x70"
  "\x70\x69\x6e\x67\x09\x67\x65\x6e\x65\x72\x69\x63\x2d\x12\x04\x03"
  "\x0e\x03\x94\x01\x10\x81\x8b\x02\x93\x01\x0e\x81\x8b\x02\x92\x01"
  "\x0c\x81\x89\x02\x91\x01\x0a\x81\x87\x02\x90\x01\x08\x81\x85\x02"
  "\x8f\x01\x06\x81\x85\x02\x8e\x01\x04\x84\x06\x0f\x22\x13\x02\x08"
  "\x03\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74"
  "\x79\x03\x11\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69"
  "\x74\x79\x3f\x03\x14\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61"
  "\x72\x69\x74\x79\x2d\x6d\x61\x78\x03\x14\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x6d\x69\x6e\x05\x16\x6d"
  "\x61\x6b\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x6f\x70\x65\x72"
  "\x61\x74\x6f\x72\x04\x05\x65\x71\x76\x3f\x07\xa0\x01\x1a\x81\x89"
  "\x02\x9f\x01\x18\x81\x89\x02\x9e\x01\x16\x81\x8b\x02\x9d\x01\x14"
  "\x81\x89\x02\x9c\x01\x12\x81\x87\x02\x9b\x01\x10\x81\x87\x02\x9a"
  "\x01\x0e\x81\x87\x02\x99\x01\x0c\x81\x89\x02\x98\x01\x0a\x81\x87"
  "\x02\x97\x01\x08\x81\x87\x02\x96\x01\x06\x85\x06\x95\x01\x04\x81"
  "\x87\x02\x19\x2d\x14\x02\x08\x10\x11\x0d\x0a\x0b\x0f\x6e\x61\x72"
  "\x79\x2d\x75\x6e\x70\x61\x63\x6b\x69\x6e\x67\x12\x04\x04\x0d\x63"
  "\x6c\x6f\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x03\x0e\x04\xa8\x01"
  "\x12\x81\x8d\x02\xa7\x01\x10\x81\x8d\x02\xa6\x01\x0e\x81\x8b\x02"
  "\xa5\x01\x0c\x81\x89\x02\xa4\x01\x0a\x81\x87\x02\xa3\x01\x08\x81"
  "\x85\x02\xa2\x01\x06\x81\x85\x02\xa1\x01\x04\x84\x06\x11\x26\x12"
  "\x02\x09\x1e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x73\x74"
  "\x79\x6c\x65\x2d\x77\x69\x74\x68\x2d\x64\x69\x61\x67\x72\x61\x6d"
  "\x0b\x10\x13\x65\x6d\x70\x74\x79\x2d\x64\x69\x61\x67\x72\x61\x6d"
  "\x2d\x63\x65\x6c\x6c\x10\x0d\x07\x6c\x61\x6d\x62\x64\x61\x18\x6e"
  "\x61\x6d\x65\x64\x2d\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x2d"
  "\x73\x79\x6e\x74\x61\x78\x03\x02\xcd\x01\x4c\x81\x89\x02\xcc\x01"
  "\x4a\x81\x89\x02\xcb\x01\x48\x81\x89\x02\xca\x01\x46\x81\x89\x02"
  "\xc9\x01\x44\x81\x89\x02\xc8\x01\x42\x81\x8b\x02\xc7\x01\x40\x81"
  "\x89\x02\xc6\x01\x3e\x81\x89\x02\xc5\x01\x3c\x81\x89\x02\xc4\x01"
  "\x3a\x81\x89\x02\xc3\x01\x38\x81\x8b\x02\xc2\x01\x36\x81\x89\x02"
  "\xc1\x01\x34\x81\x89\x02\xc0\x01\x32\x81\x89\x02\xbf\x01\x30\x81"
  "\x89\x02\xbe\x01\x2e\x81\x87\x02\xbd\x01\x2c\x81\x8b\x02\xbc\x01"
  "\x2a\x81\x89\x02\xbb\x01\x28\x81\x87\x02\xba\x01\x26\x85\x08\xb9"
  "\x01\x24\x81\x89\x02\xb8\x01\x22\x81\x87\x02\xb7\x01\x20\x81\x87"
  "\x02\xb6\x01\x1e\x81\x89\x02\xb5\x01\x1c\x81\x8b\x02\xb4\x01\x1a"
  "\x81\x89\x02\xb3\x01\x18\x81\x8b\x02\xb2\x01\x16\x81\x89\x02\xb1"
  "\x01\x14\x81\x8b\x02\xb0\x01\x12\x81\x8b\x02\xaf\x01\x10\x81\x8b"
  "\x02\xae\x01\x0e\x81\x89\x02\xad\x01\x0c\x81\x89\x02\xac\x01\x0a"
  "\x81\x89\x02\xab\x01\x08\x81\x87\x02\xaa\x01\x06\x81\x87\x02\xa9"
  "\x01\x04\x81\x89\x02\x4b\x5a\x15\x02\x0a\x18\x70\x72\x6f\x70\x61"
  "\x67\x61\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f"
  "\x72\x21\x0d\x6e\x61\x6d\x65\x64\x2d\x6c\x61\x6d\x62\x64\x61\x0b"
  "\x10\x11\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x64\x69\x61\x67\x72"
  "\x61\x6d\x10\x0d\x04\x04\x6d\x61\x70\x0b\x03\x04\x07\x61\x70\x70"
  "\x65\x6e\x64\x16\x04\xef\x01\x46\x81\x89\x02\xee\x01\x44\x81\x89"
  "\x02\xed\x01\x42\x81\x8b\x02\xec\x01\x40\x81\x8b\x02\xeb\x01\x3e"
  "\x81\x8b\x02\xea\x01\x3c\x81\x89\x02\xe9\x01\x3a\x81\x89\x02\xe8"
  "\x01\x38\x81\x89\x02\xe7\x01\x36\x81\x89\x02\xe6\x01\x34\x81\x8b"
  "\x02\xe5\x01\x32\x81\x87\x02\xe4\x01\x30\x81\x8b\x02\xe3\x01\x2e"
  "\x81\x85\x02\xe2\x01\x2c\x81\x89\x02\xe1\x01\x2a\x81\x89\x02\xe0"
  "\x01\x28\x81\x89\x02\xdf\x01\x26\x81\x89\x02\xde\x01\x24\x81\x85"
  "\x02\xdd\x01\x22\x81\x8b\x02\xdc\x01\x20\x81\x87\x02\xdb\x01\x1e"
  "\x81\x8b\x02\xda\x01\x1c\x81\x89\x02\xd9\x01\x1a\x81\x87\x02\xd8"
  "\x01\x18\x85\x08\xd7\x01\x16\x81\x8b\x02\xd6\x01\x14\x81\x89\x02"
  "\xd5\x01\x12\x81\x8b\x02\xd4\x01\x10\x81\x89\x02\xd3\x01\x0e\x81"
  "\x8d\x02\xd2\x01\x0c\x81\x8d\x02\xd1\x01\x0a\x81\x8d\x02\xd0\x01"
  "\x08\x81\x89\x02\xcf\x01\x06\x81\x89\x02\xce\x01\x04\x81\x89\x02"
  "\x45\x59\x17\x02\x0b\x13\x64\x65\x66\x69\x6e\x65\x2d\x25\x70\x72"
  "\x6f\x70\x61\x67\x61\x74\x6f\x72\x18\x03\x0e\x02\xf9\x01\x16\x81"
  "\x87\x02\xf8\x01\x14\x81\x87\x02\xf7\x01\x12\x81\x87\x02\xf6\x01"
  "\x10\x81\x87\x02\xf5\x01\x0e\x81\x87\x02\xf4\x01\x0c\x81\x87\x02"
  "\xf3\x01\x0a\x81\x85\x02\xf2\x01\x08\x81\x85\x02\xf1\x01\x06\x81"
  "\x85\x02\xf0\x01\x04\x84\x06\x15\x1e\x19\x02\x0c\x0a\x0c\x14\x6c"
  "\x61\x6d\x62\x64\x61\x2d\x64\x3a\x70\x72\x6f\x70\x61\x67\x61\x74"
  "\x6f\x72\x1a\x04\x63\x61\x72\x0d\x03\x02\x91\x02\x32\x81\x89\x02"
  "\x90\x02\x30\x81\x89\x02\x8f\x02\x2e\x81\x89\x02\x8e\x02\x2c\x81"
  "\x89\x02\x8d\x02\x2a\x81\x8b\x02\x8c\x02\x28\x81\x8b\x02\x8b\x02"
  "\x26\x81\x8b\x02\x8a\x02\x24\x81\x8b\x02\x89\x02\x22\x81\x89\x02"
  "\x88\x02\x20\x81\x89\x02\x87\x02\x1e\x81\x89\x02\x86\x02\x1c\x81"
  "\x89\x02\x85\x02\x1a\x81\x89\x02\x84\x02\x18\x81\x89\x02\x83\x02"
  "\x16\x81\x89\x02\x82\x02\x14\x81\x87\x02\x81\x02\x12\x85\x08\x80"
  "\x02\x10\x81\x8b\x02\xff\x01\x0e\x81\x89\x02\xfe\x01\x0c\x81\x8b"
  "\x02\xfd\x01\x0a\x81\x89\x02\xfc\x01\x08\x81\x87\x02\xfb\x01\x06"
  "\x81\x87\x02\xfa\x01\x04\x81\x89\x02\x31\x3f\x1b\x02\x0d\x0d\x6d"
  "\x61\x6b\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x1c\x0e\x6e\x61\x6d"
  "\x69\x6e\x67\x2d\x6c\x61\x6d\x62\x64\x61\x1d\x07\x69\x6d\x70\x6f"
  "\x72\x74\x1e\x05\x6c\x69\x73\x74\x1f\x03\x0c\x69\x64\x65\x6e\x74"
  "\x69\x66\x69\x65\x72\x3f\x20\x03\x03\xbb\x02\x56\x81\x89\x02\xba"
  "\x02\x54\x81\x8b\x02\xb9\x02\x52\x81\x8b\x02\xb8\x02\x50\x81\x8b"
  "\x02\xb7\x02\x4e\x81\x89\x02\xb6\x02\x4c\x81\x89\x02\xb5\x02\x4a"
  "\x81\x89\x02\xb4\x02\x48\x81\x89\x02\xb3\x02\x46\x81\x87\x02\xb2"
  "\x02\x44\x81\x89\x02\xb1\x02\x42\x81\x89\x02\xb0\x02\x40\x81\x89"
  "\x02\xaf\x02\x3e\x81\x89\x02\xae\x02\x3c\x81\x89\x02\xad\x02\x3a"
  "\x81\x87\x02\xac\x02\x38\x81\x89\x02\xab\x02\x36\x81\x87\x02\xaa"
  "\x02\x34\x85\x08\xa9\x02\x32\x81\x8b\x02\xa8\x02\x30\x81\x89\x02"
  "\xa7\x02\x2e\x81\x8b\x02\xa6\x02\x2c\x81\x8b\x02\xa5\x02\x2a\x81"
  "\x8d\x02\xa4\x02\x28\x81\x89\x02\xa3\x02\x26\x81\x89\x02\xa2\x02"
  "\x24\x81\x8b\x02\xa1\x02\x22\x81\x89\x02\xa0\x02\x20\x81\x87\x02"
  "\x9f\x02\x1e\x81\x87\x02\x9e\x02\x1c\x81\x89\x02\x9d\x02\x1a\x81"
  "\x8b\x02\x9c\x02\x18\x81\x8b\x02\x9b\x02\x16\x81\x83\x02\x9a\x02"
  "\x14\x81\x8b\x02\x99\x02\x12\x81\x89\x02\x98\x02\x10\x81\x8b\x02"
  "\x97\x02\x0e\x81\x89\x02\x96\x02\x0c\x81\x87\x02\x95\x02\x0a\x81"
  "\x87\x02\x94\x02\x08\x81\x87\x02\x93\x02\x06\x81\x87\x02\x92\x02"
  "\x04\x81\x89\x02\x55\x64\x21\x02\x0e\x10\x0d\x04\x0b\x03\x04\x16"
  "\x04\xcf\x02\x2a\x81\x87\x02\xce\x02\x28\x81\x85\x02\xcd\x02\x26"
  "\x81\x89\x02\xcc\x02\x24\x81\x85\x02\xcb\x02\x22\x81\x8b\x02\xca"
  "\x02\x20\x81\x89\x02\xc9\x02\x1e\x81\x89\x02\xc8\x02\x1c\x81\x87"
  "\x02\xc7\x02\x1a\x81\x89\x02\xc6\x02\x18\x81\x87\x02\xc5\x02\x16"
  "\x85\x08\xc4\x02\x14\x81\x8b\x02\xc3\x02\x12\x81\x89\x02\xc2\x02"
  "\x10\x81\x8b\x02\xc1\x02\x0e\x81\x89\x02\xc0\x02\x0c\x81\x8d\x02"
  "\xbf\x02\x0a\x81\x8d\x02\xbe\x02\x08\x81\x89\x02\xbd\x02\x06\x81"
  "\x89\x02\xbc\x02\x04\x81\x89\x02\x29\x39\x16\x02\x0f\x15\x64\x65"
  "\x66\x69\x6e\x65\x2d\x25\x65\x3a\x70\x72\x6f\x70\x61\x67\x61\x74"
  "\x6f\x72\x10\x03\x0e\x02\xd9\x02\x16\x81\x87\x02\xd8\x02\x14\x81"
  "\x87\x02\xd7\x02\x12\x81\x87\x02\xd6\x02\x10\x81\x87\x02\xd5\x02"
  "\x0e\x81\x87\x02\xd4\x02\x0c\x81\x87\x02\xd3\x02\x0a\x81\x85\x02"
  "\xd2\x02\x08\x81\x85\x02\xd1\x02\x06\x81\x85\x02\xd0\x02\x04\x84"
  "\x06\x15\x1e\x0b\x02\x10\x1d\x64\x65\x66\x69\x6e\x65\x2d\x62\x79"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x76\x61\x72\x69"
  "\x61\x6e\x74\x22\x0c\x14\x6c\x61\x6d\x62\x64\x61\x2d\x65\x3a\x70"
  "\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x0c\x05\x63\x61\x64\x72\x0d"
  "\x03\x02\xf1\x02\x32\x81\x89\x02\xf0\x02\x30\x81\x89\x02\xef\x02"
  "\x2e\x81\x89\x02\xee\x02\x2c\x81\x89\x02\xed\x02\x2a\x81\x8b\x02"
  "\xec\x02\x28\x81\x8b\x02\xeb\x02\x26\x81\x8b\x02\xea\x02\x24\x81"
  "\x8b\x02\xe9\x02\x22\x81\x89\x02\xe8\x02\x20\x81\x89\x02\xe7\x02"
  "\x1e\x81\x89\x02\xe6\x02\x1c\x81\x89\x02\xe5\x02\x1a\x81\x89\x02"
  "\xe4\x02\x18\x81\x89\x02\xe3\x02\x16\x81\x89\x02\xe2\x02\x14\x81"
  "\x87\x02\xe1\x02\x12\x85\x08\xe0\x02\x10\x81\x8b\x02\xdf\x02\x0e"
  "\x81\x89\x02\xde\x02\x0c\x81\x8b\x02\xdd\x02\x0a\x81\x89\x02\xdc"
  "\x02\x08\x81\x87\x02\xdb\x02\x06\x81\x87\x02\xda\x02\x04\x81\x89"
  "\x02\x31\x3f\x0d\x02\x11\x0f\x6d\x61\x6b\x65\x2d\x65\x3a\x63\x6c"
  "\x6f\x73\x75\x72\x65\x1d\x1e\x1f\x03\x20\x03\x03\x9b\x03\x56\x81"
  "\x89\x02\x9a\x03\x54\x81\x8b\x02\x99\x03\x52\x81\x8b\x02\x98\x03"
  "\x50\x81\x8b\x02\x97\x03\x4e\x81\x89\x02\x96\x03\x4c\x81\x89\x02"
  "\x95\x03\x4a\x81\x89\x02\x94\x03\x48\x81\x89\x02\x93\x03\x46\x81"
  "\x87\x02\x92\x03\x44\x81\x89\x02\x91\x03\x42\x81\x89\x02\x90\x03"
  "\x40\x81\x89\x02\x8f\x03\x3e\x81\x89\x02\x8e\x03\x3c\x81\x89\x02"
  "\x8d\x03\x3a\x81\x87\x02\x8c\x03\x38\x81\x89\x02\x8b\x03\x36\x81"
  "\x87\x02\x8a\x03\x34\x85\x08\x89\x03\x32\x81\x8b\x02\x88\x03\x30"
  "\x81\x89\x02\x87\x03\x2e\x81\x8b\x02\x86\x03\x2c\x81\x8b\x02\x85"
  "\x03\x2a\x81\x8d\x02\x84\x03\x28\x81\x89\x02\x83\x03\x26\x81\x89"
  "\x02\x82\x03\x24\x81\x8b\x02\x81\x03\x22\x81\x89\x02\x80\x03\x20"
  "\x81\x87\x02\xff\x02\x1e\x81\x87\x02\xfe\x02\x1c\x81\x89\x02\xfd"
  "\x02\x1a\x81\x8b\x02\xfc\x02\x18\x81\x8b\x02\xfb\x02\x16\x81\x83"
  "\x02\xfa\x02\x14\x81\x8b\x02\xf9\x02\x12\x81\x89\x02\xf8\x02\x10"
  "\x81\x8b\x02\xf7\x02\x0e\x81\x89\x02\xf6\x02\x0c\x81\x87\x02\xf5"
  "\x02\x0a\x81\x87\x02\xf4\x02\x08\x81\x87\x02\xf3\x02\x06\x81\x87"
  "\x02\xf2\x02\x04\x81\x89\x02\x55\x64\x20\x02\x12\x0c\x61\x70\x70"
  "\x6c\x69\x63\x61\x74\x69\x6f\x6e\x13\x65\x3a\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x61\x6c\x2d\x77\x69\x72\x65\x1e\x1c\x1f\x64\x65"
  "\x6c\x61\x79\x65\x64\x2d\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72"
  "\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x23\x1f\x03\x02"
  "\xb4\x03\x34\x81\x89\x02\xb3\x03\x32\x81\x8b\x02\xb2\x03\x30\x81"
  "\x8b\x02\xb1\x03\x2e\x81\x8b\x02\xb0\x03\x2c\x81\x8b\x02\xaf\x03"
  "\x2a\x81\x8b\x02\xae\x03\x28\x81\x8d\x02\xad\x03\x26\x81\x8d\x02"
  "\xac\x03\x24\x81\x8d\x02\xab\x03\x22\x81\x8d\x02\xaa\x03\x20\x81"
  "\x8b\x02\xa9\x03\x1e\x81\x8b\x02\xa8\x03\x1c\x81\x8b\x02\xa7\x03"
  "\x1a\x81\x89\x02\xa6\x03\x18\x81\x89\x02\xa5\x03\x16\x81\x87\x02"
  "\xa4\x03\x14\x85\x08\xa3\x03\x12\x81\x8b\x02\xa2\x03\x10\x81\x89"
  "\x02\xa1\x03\x0e\x81\x89\x02\xa0\x03\x0c\x81\x8b\x02\x9f\x03\x0a"
  "\x81\x89\x02\x9e\x03\x08\x81\x87\x02\x9d\x03\x06\x81\x87\x02\x9c"
  "\x03\x04\x81\x89\x02\x33\x42\x24\x02\x13\x07\x70\x3a\x77\x68\x65"
  "\x6e\x25\x06\x65\x3a\x6e\x6f\x74\x26\x03\x02\xc4\x03\x22\x81\x89"
  "\x02\xc3\x03\x20\x81\x89\x02\xc2\x03\x1e\x81\x89\x02\xc1\x03\x1c"
  "\x81\x8b\x02\xc0\x03\x1a\x81\x89\x02\xbf\x03\x18\x81\x89\x02\xbe"
  "\x03\x16\x81\x87\x02\xbd\x03\x14\x85\x08\xbc\x03\x12\x81\x89\x02"
  "\xbb\x03\x10\x81\x89\x02\xba\x03\x0e\x81\x89\x02\xb9\x03\x0c\x81"
  "\x89\x02\xb8\x03\x0a\x81\x87\x02\xb7\x03\x08\x81\x87\x02\xb6\x03"
  "\x06\x81\x87\x02\xb5\x03\x04\x81\x89\x02\x21\x2c\x27\x02\x14\x09"
  "\x6c\x65\x74\x2d\x63\x65\x6c\x6c\x28\x25\x09\x70\x3a\x75\x6e\x6c"
  "\x65\x73\x73\x29\x12\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c"
  "\x2d\x76\x61\x6c\x75\x65\x2a\x03\x02\xe0\x03\x3a\x81\x89\x02\xdf"
  "\x03\x38\x81\x8b\x02\xde\x03\x36\x81\x89\x02\xdd\x03\x34\x81\x89"
  "\x02\xdc\x03\x32\x81\x89\x02\xdb\x03\x30\x81\x8b\x02\xda\x03\x2e"
  "\x81\x8b\x02\xd9\x03\x2c\x81\x8b\x02\xd8\x03\x2a\x81\x8b\x02\xd7"
  "\x03\x28\x81\x89\x02\xd6\x03\x26\x81\x89\x02\xd5\x03\x24\x81\x89"
  "\x02\xd4\x03\x22\x81\x89\x02\xd3\x03\x20\x81\x89\x02\xd2\x03\x1e"
  "\x81\x89\x02\xd1\x03\x1c\x81\x89\x02\xd0\x03\x1a\x81\x89\x02\xcf"
  "\x03\x18\x81\x87\x02\xce\x03\x16\x81\x87\x02\xcd\x03\x14\x81\x87"
  "\x02\xcc\x03\x12\x81\x87\x02\xcb\x03\x10\x81\x87\x02\xca\x03\x0e"
  "\x81\x89\x02\xc9\x03\x0c\x81\x89\x02\xc8\x03\x0a\x81\x89\x02\xc7"
  "\x03\x08\x81\x89\x02\xc6\x03\x06\x81\x87\x02\xc5\x03\x04\x85\x08"
  "\x39\x48\x2b\x02\x15\x0e\x65\x3a\x61\x70\x70\x6c\x69\x63\x61\x74"
  "\x69\x6f\x6e\x1e\x1c\x23\x17\x68\x61\x6e\x64\x6c\x65\x2d\x65\x78"
  "\x70\x6c\x69\x63\x69\x74\x2d\x6f\x75\x74\x70\x75\x74\x09\x62\x6f"
  "\x75\x6e\x64\x61\x72\x79\x06\x61\x70\x70\x6c\x79\x05\x61\x72\x67"
  "\x73\x1f\x03\x02\x81\x04\x44\x81\x89\x02\x80\x04\x42\x81\x8b\x02"
  "\xff\x03\x40\x81\x8b\x02\xfe\x03\x3e\x81\x8b\x02\xfd\x03\x3c\x81"
  "\x8b\x02\xfc\x03\x3a\x81\x8b\x02\xfb\x03\x38\x81\x8d\x02\xfa\x03"
  "\x36\x81\x8d\x02\xf9\x03\x34\x81\x8d\x02\xf8\x03\x32\x81\x8d\x02"
  "\xf7\x03\x30\x81\x8d\x02\xf6\x03\x2e\x81\x8d\x02\xf5\x03\x2c\x81"
  "\x8d\x02\xf4\x03\x2a\x81\x8d\x02\xf3\x03\x28\x81\x8f\x02\xf2\x03"
  "\x26\x81\x8f\x02\xf1\x03\x24\x81\x8f\x02\xf0\x03\x22\x81\x8d\x02"
  "\xef\x03\x20\x81\x8d\x02\xee\x03\x1e\x81\x8d\x02\xed\x03\x1c\x81"
  "\x8b\x02\xec\x03\x1a\x81\x89\x02\xeb\x03\x18\x81\x89\x02\xea\x03"
  "\x16\x81\x87\x02\xe9\x03\x14\x85\x08\xe8\x03\x12\x81\x8b\x02\xe7"
  "\x03\x10\x81\x89\x02\xe6\x03\x0e\x81\x89\x02\xe5\x03\x0c\x81\x8b"
  "\x02\xe4\x03\x0a\x81\x89\x02\xe3\x03\x08\x81\x87\x02\xe2\x03\x06"
  "\x81\x87\x02\xe1\x03\x04\x81\x89\x02\x43\x56\x23\x02\x16\x07\x65"
  "\x3a\x77\x68\x65\x6e\x1f\x26\x03\x02\x91\x04\x22\x81\x89\x02\x90"
  "\x04\x20\x81\x89\x02\x8f\x04\x1e\x81\x89\x02\x8e\x04\x1c\x81\x8b"
  "\x02\x8d\x04\x1a\x81\x89\x02\x8c\x04\x18\x81\x89\x02\x8b\x04\x16"
  "\x81\x87\x02\x8a\x04\x14\x85\x08\x89\x04\x12\x81\x89\x02\x88\x04"
  "\x10\x81\x89\x02\x87\x04\x0e\x81\x89\x02\x86\x04\x0c\x81\x89\x02"
  "\x85\x04\x0a\x81\x87\x02\x84\x04\x08\x81\x87\x02\x83\x04\x06\x81"
  "\x87\x02\x82\x04\x04\x81\x89\x02\x21\x2c\x26\x02\x17\x28\x06\x63"
  "\x65\x3a\x3d\x3d\x1f\x09\x65\x3a\x75\x6e\x6c\x65\x73\x73\x28\x2a"
  "\x03\x02\xae\x04\x3c\x81\x89\x02\xad\x04\x3a\x81\x8b\x02\xac\x04"
  "\x38\x81\x89\x02\xab\x04\x36\x81\x89\x02\xaa\x04\x34\x81\x89\x02"
  "\xa9\x04\x32\x81\x89\x02\xa8\x04\x30\x81\x8b\x02\xa7\x04\x2e\x81"
  "\x8b\x02\xa6\x04\x2c\x81\x8b\x02\xa5\x04\x2a\x81\x8b\x02\xa4\x04"
  "\x28\x81\x89\x02\xa3\x04\x26\x81\x89\x02\xa2\x04\x24\x81\x89\x02"
  "\xa1\x04\x22\x81\x89\x02\xa0\x04\x20\x81\x89\x02\x9f\x04\x1e\x81"
  "\x89\x02\x9e\x04\x1c\x81\x89\x02\x9d\x04\x1a\x81\x89\x02\x9c\x04"
  "\x18\x81\x87\x02\x9b\x04\x16\x81\x87\x02\x9a\x04\x14\x81\x87\x02"
  "\x99\x04\x12\x81\x87\x02\x98\x04\x10\x81\x87\x02\x97\x04\x0e\x81"
  "\x89\x02\x96\x04\x0c\x81\x89\x02\x95\x04\x0a\x81\x89\x02\x94\x04"
  "\x08\x81\x89\x02\x93\x04\x06\x81\x87\x02\x92\x04\x04\x85\x08\x3b"
  "\x4b\x2a\x17\x1e\x1e\x28\x2a\x04\x05\x65\x3a\x69\x66\x1f\x26\x14"
  "\x05\x70\x3a\x69\x66\x23\x14\x29\x2b\x04\x25\x27\x14\x0c\x24\x14"
  "\x10\x20\x34\x14\x64\x65\x66\x69\x6e\x65\x2d\x65\x3a\x70\x72\x6f"
  "\x70\x61\x67\x61\x74\x6f\x72\x0d\x12\x1d\x0b\x04\x1a\x16\x16\x18"
  "\x21\x34\x14\x64\x65\x66\x69\x6e\x65\x2d\x64\x3a\x70\x72\x6f\x70"
  "\x61\x67\x61\x74\x6f\x72\x1b\x12\x12\x64\x65\x66\x69\x6e\x65\x2d"
  "\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x19\x04\x19\x64\x65\x66"
  "\x69\x6e\x65\x2d\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x2d\x73"
  "\x79\x6e\x74\x61\x78\x17\x18\x14\x70\x72\x6f\x70\x61\x67\x61\x74"
  "\x69\x66\x79\x2d\x6d\x6f\x6e\x61\x64\x69\x63\x15\x26\x12\x04\x0c"
  "\x70\x72\x6f\x70\x61\x67\x61\x74\x69\x66\x79\x11\x14\x06\x10\x70"
  "\x72\x6f\x70\x61\x67\x61\x74\x69\x66\x79\x2d\x72\x61\x77\x13\x04"
  "\x0f\x04\x22\x0e\x09\x04\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65"
  "\x33\x10\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x0a\x04\x04\x04\x1f\x65\x72\x2d\x6d\x61\x63\x72\x6f"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78"
  "\x70\x61\x6e\x64\x65\x72\x04\x20\x72\x73\x63\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x04\x18\x73\x79\x6e\x74\x61\x63\x74"
  "\x69\x63\x2d\x6b\x65\x79\x77\x6f\x72\x64\x2d\x3e\x69\x74\x65\x6d"
  "\x05\x43\x88\x01\x80\x80\x04\x42\x86\x01\x81\x81\x02\x41\x84\x01"
  "\x81\x81\x02\x40\x82\x01\x81\x89\x02\x3f\x80\x01\x81\x87\x02\x3e"
  "\x7e\x81\x87\x02\x3d\x7c\x81\x85\x02\x3c\x7a\x81\x83\x02\x3b\x78"
  "\x81\x87\x02\x3a\x76\x81\x85\x02\x39\x74\x81\x83\x02\x38\x72\x81"
  "\x87\x02\x37\x70\x81\x85\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x87"
  "\x02\x34\x6a\x81\x85\x02\x33\x68\x81\x83\x02\x32\x66\x81\x87\x02"
  "\x31\x64\x81\x85\x02\x30\x62\x81\x83\x02\x2f\x60\x81\x87\x02\x2e"
  "\x5e\x81\x85\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x87\x02\x2b\x58"
  "\x81\x85\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x87\x02\x28\x52\x81"
  "\x85\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x87\x02\x25\x4c\x81\x85"
  "\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x87\x02\x22\x46\x81\x85\x02"
  "\x21\x44\x81\x83\x02\x20\x42\x81\x87\x02\x1f\x40\x81\x85\x02\x1e"
  "\x3e\x81\x83\x02\x1d\x3c\x81\x87\x02\x1c\x3a\x81\x85\x02\x1b\x38"
  "\x81\x83\x02\x1a\x36\x81\x87\x02\x19\x34\x81\x85\x02\x18\x32\x81"
  "\x83\x02\x17\x30\x81\x87\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x83"
  "\x02\x14\x2a\x81\x87\x02\x13\x28\x81\x85\x02\x12\x26\x81\x83\x02"
  "\x11\x24\x81\x87\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x83\x02\x0e"
  "\x1e\x81\x83\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81\x85\x02\x0b\x18"
  "\x81\x83\x02\x0a\x16\x81\x87\x02\x09\x14\x81\x85\x02\x08\x12\x81"
  "\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x87\x02\x05\x0c\x81\x85"
  "\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x87\x02\x02\x06\x81\x85\x02"
  "\x01\x04\x81\x83\x02\x87\x01\xc6\x01";

SCHEME_OBJECT *
sugar_so_data_56b1307eccef01c6 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_sugar_so_data_56b1307eccef01c6 [0]))), (sizeof (prog_sugar_so_data_56b1307eccef01c6)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_74]));
}

DECLARE_COMPILED_DATA_NS ("sugar.so", sugar_so_data_56b1307eccef01c6)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("sugar.so", "231bb64e4f884dce")
