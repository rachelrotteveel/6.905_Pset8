/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-03T22:03:38-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define LABEL_1_13 19
#define LABEL_1_14 21
#define LABEL_1_15 23
#define LABEL_1_10 25
#define LABEL_1_18 27
#define LABEL_1_19 29
#define LABEL_1_20 31
#define LABEL_1_17 33
#define LABEL_1_22 35
#define LABEL_1_23 37
#define LABEL_1_24 39
#define LABEL_1_21 41
#define LABEL_1_25 43
#define LABEL_1_26 45
#define LABEL_1_27 47
#define LABEL_1_28 49
#define ENVIRONMENT_LABEL_1_3 64
#define DEBUGGING_LABEL_1_2 63
#define OBJECT_1_9 62
#define OBJECT_1_8 61
#define OBJECT_1_7 60
#define OBJECT_1_6 59
#define OBJECT_1_5 58
#define OBJECT_1_4 57
#define OBJECT_1_3 56
#define OBJECT_1_2 55
#define OBJECT_1_1 54
#define OBJECT_1_0 53
#define EXECUTE_CACHE_1_16 51
#define FREE_REFERENCES_LABEL_1_0 50
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cell_sugar_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd33;
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
  machine_word Wrd120;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd113;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd62;
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
      goto lambda_48;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_54;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_55;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_56;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_57;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_58;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_50;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_51;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto label_52;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto label_53;

    case 10:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_19;

    case 11:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_38;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto label_59;

    case 13:
      current_block = (Rpc - LABEL_1_19);
      goto label_60;

    case 14:
      current_block = (Rpc - LABEL_1_20);
      goto label_61;

    case 15:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_1_22);
      goto label_62;

    case 17:
      current_block = (Rpc - LABEL_1_23);
      goto label_63;

    case 18:
      current_block = (Rpc - LABEL_1_24);
      goto label_64;

    case 19:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_32;

    case 20:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_1_26);
      goto label_65;

    case 22:
      current_block = (Rpc - LABEL_1_27);
      goto label_66;

    case 23:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_68)
DEFLABEL (lambda_48)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_85;

DEFLABEL (label_84)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_70;

DEFLABEL (label_69)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (label_70)
  if (! ((Wrd8.uLng) == 1))
    goto label_83;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_82)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_71;
  Rsp = (& (Rsp [1]));
  goto label_69;

DEFLABEL (label_71)
  if (! ((Wrd21.uLng) == 1))
    goto label_81;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_80)
  if ((Wrd23.Obj) == (current_block [OBJECT_1_1]))
    goto label_73;
  (Wrd33.Obj) = (current_block [OBJECT_1_3]);
  goto label_72;

DEFLABEL (label_73)
  (Wrd33.Obj) = (current_block [OBJECT_1_2]);

DEFLABEL (label_72)
DEFLABEL (label_79)
  Rsp = (& (Rsp [1]));
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_78;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_77)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_76;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd45.Obj) = ((Wrd46.pObj) [0]);

DEFLABEL (label_75)
  (Wrd55.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_74)
  (Wrd59.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd60.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_76)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 1);

DEFLABEL (label_53)
  (Wrd45.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_52)
  (Wrd36.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_81)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_51)
  (Wrd23.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  if (! ((Wrd6.uLng) == 1))
    goto label_100;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_99)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 1)
    goto label_87;

DEFLABEL (label_86)
  Rsp = (& (Rsp [1]));
  goto label_84;

DEFLABEL (label_87)
  if (! ((Wrd71.uLng) == 1))
    goto label_98;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd73.Obj) = ((Wrd75.pObj) [1]);

DEFLABEL (label_97)
  (Rsp [0]) = (Wrd73.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_86;
  if (! ((Wrd83.uLng) == 1))
    goto label_96;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [1]);

DEFLABEL (label_95)
  if ((Wrd85.Obj) == (current_block [OBJECT_1_1]))
    goto label_89;
  (Wrd95.Obj) = (current_block [OBJECT_1_3]);
  goto label_88;

DEFLABEL (label_89)
  (Wrd95.Obj) = (current_block [OBJECT_1_2]);

DEFLABEL (label_88)
DEFLABEL (label_94)
  Rsp = (& (Rsp [1]));
  if ((Wrd95.Obj) == ((SCHEME_OBJECT) 0))
    goto label_84;
  (Wrd101.Obj) = (Rsp [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_93;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd98.Obj) = ((Wrd100.pObj) [1]);

DEFLABEL (label_92)
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd109.uLng) == 1))
    goto label_91;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd107.Obj) = ((Wrd108.pObj) [0]);

DEFLABEL (label_90)
  (Wrd117.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd107.Obj);
  (* (Rhp++)) = (Wrd117.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd120.Obj);
  goto label_74;

DEFLABEL (label_91)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 1);

DEFLABEL (label_58)
  (Wrd107.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_57)
  (Wrd98.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_96)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_56)
  (Wrd85.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_55)
  (Wrd73.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_106;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_105)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_104;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_103)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_102;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_101)
  (Wrd43.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_102)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 1);

DEFLABEL (label_64)
  (Wrd34.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 1);

DEFLABEL (label_63)
  (Wrd23.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_62)
  (Wrd14.Obj) = Rvl;
  goto label_105;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_116;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_115)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_114;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_113)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_112;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_111)
  (Wrd40.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_1_7]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_1_21);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_110;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_109)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_108;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_107)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_1_9]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_108)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 1);

DEFLABEL (label_66)
  (Wrd23.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_65)
  (Wrd14.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 1);

DEFLABEL (label_61)
  (Wrd30.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_60)
  (Wrd23.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_59)
  (Wrd14.Obj) = Rvl;
  goto label_115;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_6 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_16 17
#define LABEL_2_17 19
#define LABEL_2_18 21
#define LABEL_2_19 23
#define LABEL_2_20 25
#define LABEL_2_21 27
#define LABEL_2_22 29
#define LABEL_2_24 31
#define LABEL_2_25 33
#define LABEL_2_26 35
#define LABEL_2_27 37
#define LABEL_2_28 39
#define LABEL_2_29 41
#define LABEL_2_30 43
#define LABEL_2_31 45
#define LABEL_2_32 47
#define LABEL_2_33 49
#define LABEL_2_34 51
#define LABEL_2_35 53
#define LABEL_2_36 55
#define LABEL_2_4 57
#define LABEL_2_37 59
#define LABEL_2_38 61
#define LABEL_2_39 63
#define LABEL_2_40 65
#define LABEL_2_23 67
#define LABEL_2_9 69
#define LABEL_2_13 71
#define TAG_2_14 34
#define LABEL_2_44 73
#define LABEL_2_43 75
#define LABEL_2_45 77
#define LABEL_2_46 79
#define LABEL_2_47 81
#define LABEL_2_48 83
#define LABEL_2_49 85
#define LABEL_2_50 87
#define ENVIRONMENT_LABEL_2_3 107
#define DEBUGGING_LABEL_2_2 106
#define OBJECT_2_10 105
#define OBJECT_2_9 104
#define OBJECT_2_8 103
#define OBJECT_2_7 102
#define OBJECT_2_6 101
#define OBJECT_2_5 100
#define OBJECT_2_4 99
#define OBJECT_2_3 98
#define OBJECT_2_2 97
#define OBJECT_2_1 96
#define OBJECT_2_0 95
#define EXECUTE_CACHE_2_42 89
#define EXECUTE_CACHE_2_41 91
#define EXECUTE_CACHE_2_15 93
#define FREE_REFERENCES_LABEL_2_0 88
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cell_sugar_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd93;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd80;
  machine_word Wrd154;
  machine_word Wrd146;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd131;
  machine_word Wrd129;
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd164;
  machine_word Wrd156;
  machine_word Wrd158;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd104;
  machine_word Wrd178;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd168;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd220;
  machine_word Wrd222;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd209;
  machine_word Wrd210;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd200;
  machine_word Wrd202;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd199;
  machine_word Wrd195;
  machine_word Wrd189;
  machine_word Wrd190;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd180;
  machine_word Wrd182;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd165;
  machine_word Wrd251;
  machine_word Wrd243;
  machine_word Wrd245;
  machine_word Wrd241;
  machine_word Wrd305;
  machine_word Wrd304;
  machine_word Wrd302;
  machine_word Wrd303;
  machine_word Wrd301;
  machine_word Wrd296;
  machine_word Wrd295;
  machine_word Wrd297;
  machine_word Wrd294;
  machine_word Wrd288;
  machine_word Wrd289;
  machine_word Wrd290;
  machine_word Wrd287;
  machine_word Wrd279;
  machine_word Wrd281;
  machine_word Wrd283;
  machine_word Wrd282;
  machine_word Wrd278;
  machine_word Wrd275;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd271;
  machine_word Wrd268;
  machine_word Wrd262;
  machine_word Wrd263;
  machine_word Wrd264;
  machine_word Wrd261;
  machine_word Wrd253;
  machine_word Wrd255;
  machine_word Wrd257;
  machine_word Wrd256;
  machine_word Wrd238;
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
      current_block = (Rpc - LABEL_2_5);
      goto lambda_49;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_109;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_110;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_111;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_112;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_113;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_114;

    case 7:
      current_block = (Rpc - LABEL_2_16);
      goto label_108;

    case 8:
      current_block = (Rpc - LABEL_2_17);
      goto lambda_17;

    case 9:
      current_block = (Rpc - LABEL_2_18);
      goto label_103;

    case 10:
      current_block = (Rpc - LABEL_2_19);
      goto label_104;

    case 11:
      current_block = (Rpc - LABEL_2_20);
      goto label_105;

    case 12:
      current_block = (Rpc - LABEL_2_21);
      goto label_106;

    case 13:
      current_block = (Rpc - LABEL_2_22);
      goto label_107;

    case 14:
      current_block = (Rpc - LABEL_2_24);
      goto label_102;

    case 15:
      current_block = (Rpc - LABEL_2_25);
      goto lambda_42;

    case 16:
      current_block = (Rpc - LABEL_2_26);
      goto label_101;

    case 17:
      current_block = (Rpc - LABEL_2_27);
      goto label_97;

    case 18:
      current_block = (Rpc - LABEL_2_28);
      goto label_98;

    case 19:
      current_block = (Rpc - LABEL_2_29);
      goto label_99;

    case 20:
      current_block = (Rpc - LABEL_2_30);
      goto label_100;

    case 21:
      current_block = (Rpc - LABEL_2_31);
      goto lambda_10;

    case 22:
      current_block = (Rpc - LABEL_2_32);
      goto label_96;

    case 23:
      current_block = (Rpc - LABEL_2_33);
      goto label_95;

    case 24:
      current_block = (Rpc - LABEL_2_34);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_2_35);
      goto label_93;

    case 26:
      current_block = (Rpc - LABEL_2_36);
      goto label_94;

    case 27:
      current_block = (Rpc - LABEL_2_4);
      goto lambda_87;

    case 28:
      current_block = (Rpc - LABEL_2_37);
      goto label_91;

    case 29:
      current_block = (Rpc - LABEL_2_38);
      goto label_92;

    case 30:
      current_block = (Rpc - LABEL_2_39);
      goto label_89;

    case 31:
      current_block = (Rpc - LABEL_2_40);
      goto label_90;

    case 32:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_78;

    case 33:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_73;

    case 34:
      current_block = (Rpc - LABEL_2_13);
      goto lambda_121;

    case 35:
      current_block = (Rpc - LABEL_2_44);
      goto label_115;

    case 36:
      current_block = (Rpc - LABEL_2_43);
      goto continuation_53;

    case 37:
      current_block = (Rpc - LABEL_2_45);
      goto continuation_61;

    case 38:
      current_block = (Rpc - LABEL_2_46);
      goto label_116;

    case 39:
      current_block = (Rpc - LABEL_2_47);
      goto label_117;

    case 40:
      current_block = (Rpc - LABEL_2_48);
      goto continuation_56;

    case 41:
      current_block = (Rpc - LABEL_2_49);
      goto continuation_55;

    case 42:
      current_block = (Rpc - LABEL_2_50);
      goto label_118;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_125)
DEFLABEL (lambda_87)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_139;

DEFLABEL (label_138)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_127;

DEFLABEL (label_126)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_42]));

DEFLABEL (label_127)
  if (! ((Wrd8.uLng) == 1))
    goto label_137;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_136)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_129;

DEFLABEL (label_128)
  Rsp = (& (Rsp [1]));
  goto label_126;

DEFLABEL (label_129)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd26.Obj);
  if (! ((Wrd21.uLng) == 1))
    goto label_135;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_134)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_2_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_128;
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_133;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_132)
  (Rsp [0]) = (Wrd59.Obj);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_128;
  if (! ((Wrd69.uLng) == 1))
    goto label_131;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_130)
  goto lambda_42;

DEFLABEL (label_131)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_93)
  (Wrd59.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  if (! ((Wrd6.uLng) == 1))
    goto label_145;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_144)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 1)
    goto label_141;

DEFLABEL (label_140)
  Rsp = (& (Rsp [1]));
  goto label_138;

DEFLABEL (label_141)
  if (! ((Wrd46.uLng) == 1))
    goto label_143;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_142)
  goto lambda_10;

DEFLABEL (label_143)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_144;

DEFLABEL (lambda_124)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_2_31);
  (Wrd80.Obj) = (Rsp [0]);
  if ((Wrd80.Obj) == (current_block [OBJECT_2_0]))
    goto label_149;
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd83.uLng) == 1)
    goto label_146;
  Rsp = (& (Rsp [1]));
  goto label_140;

DEFLABEL (label_146)
  if (! ((Wrd83.uLng) == 1))
    goto label_148;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [1]);

DEFLABEL (label_147)
  (Rsp [0]) = (Wrd85.Obj);
  goto label_142;

DEFLABEL (label_148)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_95)
  (Wrd85.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_149)
  Rsp = (& (Rsp [1]));
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_151;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd95.Obj) = ((Wrd97.pObj) [1]);

DEFLABEL (label_150)
  (Rsp [0]) = (Wrd95.Obj);
  goto lambda_17;

DEFLABEL (label_151)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_96)
  (Wrd95.Obj) = Rvl;
  goto label_150;

DEFLABEL (lambda_123)
DEFLABEL (lambda_42)
  INTERRUPT_CHECK (26, LABEL_2_25);
  (Wrd104.Obj) = (Rsp [0]);
  if ((Wrd104.Obj) == (current_block [OBJECT_2_0]))
    goto label_167;
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd107.uLng) == 1)
    goto label_153;

DEFLABEL (label_152)
  Rsp = (& (Rsp [1]));
  goto label_128;

DEFLABEL (label_153)
  if (! ((Wrd107.uLng) == 1))
    goto label_166;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (* (--Rsp)) = (Wrd111.Obj);

DEFLABEL (label_165)
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd119.uLng) == 1)
    goto label_155;

DEFLABEL (label_154)
  Rsp = (& (Rsp [1]));
  goto label_152;

DEFLABEL (label_155)
  if (! ((Wrd119.uLng) == 1))
    goto label_164;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd121.Obj) = ((Wrd123.pObj) [1]);

DEFLABEL (label_163)
  (Rsp [0]) = (Wrd121.Obj);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd131.uLng) == 1))
    goto label_154;
  if (! ((Wrd131.uLng) == 1))
    goto label_162;
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd133.Obj) = ((Wrd135.pObj) [1]);

DEFLABEL (label_161)
  if ((Wrd133.Obj) == (current_block [OBJECT_2_0]))
    goto label_157;
  (Wrd143.Obj) = (current_block [OBJECT_2_5]);
  goto label_156;

DEFLABEL (label_157)
  (Wrd143.Obj) = (current_block [OBJECT_2_4]);

DEFLABEL (label_156)
DEFLABEL (label_160)
  Rsp = (& (Rsp [1]));
  if ((Wrd143.Obj) == ((SCHEME_OBJECT) 0))
    goto label_152;
  (Wrd149.Obj) = (Rsp [0]);
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd149.Obj));
  if (! ((Wrd150.uLng) == 1))
    goto label_159;
  (Wrd148.pObj) = (OBJECT_ADDRESS (Wrd149.Obj));
  (Wrd146.Obj) = ((Wrd148.pObj) [1]);

DEFLABEL (label_158)
  (Rsp [0]) = (Wrd146.Obj);
  goto label_130;

DEFLABEL (label_159)
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_100)
  (Wrd146.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_162)
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_99)
  (Wrd133.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_98)
  (Wrd121.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_165;

DEFLABEL (label_167)
  Rsp = (& (Rsp [1]));
  (Wrd159.Obj) = (Rsp [0]);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd159.Obj));
  if (! ((Wrd160.uLng) == 1))
    goto label_169;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd159.Obj));
  (Wrd156.Obj) = ((Wrd158.pObj) [1]);

DEFLABEL (label_168)
  (Rsp [0]) = (Wrd156.Obj);
  goto lambda_49;

DEFLABEL (label_169)
  (Wrd164.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_101)
  (Wrd156.Obj) = Rvl;
  goto label_168;

DEFLABEL (lambda_122)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_2_17);
  (Wrd165.Obj) = (Rsp [0]);
  if ((Wrd165.Obj) == (current_block [OBJECT_2_0]))
    goto label_172;
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd168.uLng) == 1))
    goto label_140;
  if (! ((Wrd168.uLng) == 1))
    goto label_171;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd170.Obj) = ((Wrd172.pObj) [1]);

DEFLABEL (label_170)
  (Rsp [0]) = (Wrd170.Obj);
  goto lambda_17;

DEFLABEL (label_171)
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_102)
  (Wrd170.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_172)
  Rsp = (& (Rsp [1]));
  (Wrd183.Obj) = (Rsp [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if (! ((Wrd184.uLng) == 1))
    goto label_182;
  (Wrd182.pObj) = (OBJECT_ADDRESS (Wrd183.Obj));
  (Wrd180.Obj) = ((Wrd182.pObj) [1]);

DEFLABEL (label_181)
  (Wrd191.uLng) = (OBJECT_TYPE (Wrd180.Obj));
  if (! ((Wrd191.uLng) == 1))
    goto label_180;
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd180.Obj));
  (Wrd189.Obj) = ((Wrd190.pObj) [1]);

DEFLABEL (label_179)
  (Wrd199.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd199.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd197.pObj) = (& (Rhp [-2]));
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd197.pObj)));
  (* (--Rsp)) = (Wrd198.Obj);
  (Wrd203.Obj) = (Rsp [1]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if (! ((Wrd204.uLng) == 1))
    goto label_178;
  (Wrd202.pObj) = (OBJECT_ADDRESS (Wrd203.Obj));
  (Wrd200.Obj) = ((Wrd202.pObj) [1]);

DEFLABEL (label_177)
  (Wrd211.uLng) = (OBJECT_TYPE (Wrd200.Obj));
  if (! ((Wrd211.uLng) == 1))
    goto label_176;
  (Wrd210.pObj) = (OBJECT_ADDRESS (Wrd200.Obj));
  (Wrd209.Obj) = ((Wrd210.pObj) [0]);

DEFLABEL (label_175)
  (Wrd216.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd209.Obj);
  (* (Rhp++)) = (Wrd216.Obj);
  (Wrd218.pObj) = (& (Rhp [-2]));
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd218.pObj)));
  (* (--Rsp)) = (Wrd219.Obj);
  (Wrd223.Obj) = (Rsp [1]);
  (Wrd224.uLng) = (OBJECT_TYPE (Wrd223.Obj));
  if (! ((Wrd224.uLng) == 1))
    goto label_174;
  (Wrd222.pObj) = (OBJECT_ADDRESS (Wrd223.Obj));
  (Wrd220.Obj) = ((Wrd222.pObj) [0]);

DEFLABEL (label_173)
  (Wrd229.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd220.Obj);
  (* (Rhp++)) = (Wrd229.Obj);
  (Wrd231.pObj) = (& (Rhp [-2]));
  (Wrd232.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd231.pObj)));
  (* (--Rsp)) = (Wrd232.Obj);
  (Wrd235.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd235.Obj);
  (Wrd236.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd236.Obj);
  (Wrd237.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd237.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_174)
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd223.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_107)
  (Wrd220.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd200.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_106)
  (Wrd209.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_105)
  (Wrd200.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_104)
  (Wrd189.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd188.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_103)
  (Wrd180.Obj) = Rvl;
  goto label_181;

DEFLABEL (lambda_120)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd238.Obj) = (Rsp [0]);
  if ((Wrd238.Obj) == (current_block [OBJECT_2_0]))
    goto label_185;
  (Wrd241.uLng) = (OBJECT_TYPE (Wrd238.Obj));
  if (! ((Wrd241.uLng) == 1))
    goto label_128;
  if (! ((Wrd241.uLng) == 1))
    goto label_184;
  (Wrd245.pObj) = (OBJECT_ADDRESS (Wrd238.Obj));
  (Wrd243.Obj) = ((Wrd245.pObj) [1]);

DEFLABEL (label_183)
  (Rsp [0]) = (Wrd243.Obj);
  goto lambda_49;

DEFLABEL (label_184)
  (Wrd251.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd251.Obj);
  (* (--Rsp)) = (Wrd238.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_108)
  (Wrd243.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_185)
  Rsp = (& (Rsp [1]));
  (Wrd256.Obj) = (Rsp [0]);
  (Wrd257.uLng) = (OBJECT_TYPE (Wrd256.Obj));
  if (! ((Wrd257.uLng) == 1))
    goto label_197;
  (Wrd255.pObj) = (OBJECT_ADDRESS (Wrd256.Obj));
  (Wrd253.Obj) = ((Wrd255.pObj) [1]);

DEFLABEL (label_196)
  (Wrd264.uLng) = (OBJECT_TYPE (Wrd253.Obj));
  if (! ((Wrd264.uLng) == 1))
    goto label_195;
  (Wrd263.pObj) = (OBJECT_ADDRESS (Wrd253.Obj));
  (Wrd262.Obj) = ((Wrd263.pObj) [1]);

DEFLABEL (label_194)
  (Wrd271.uLng) = (OBJECT_TYPE (Wrd262.Obj));
  if (! ((Wrd271.uLng) == 1))
    goto label_193;
  (Wrd269.pObj) = (OBJECT_ADDRESS (Wrd262.Obj));
  (Wrd270.Obj) = ((Wrd269.pObj) [1]);
  (* (--Rsp)) = (Wrd270.Obj);

DEFLABEL (label_192)
  (Wrd278.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd278.Obj);
  (Wrd282.Obj) = (Rsp [2]);
  (Wrd283.uLng) = (OBJECT_TYPE (Wrd282.Obj));
  if (! ((Wrd283.uLng) == 1))
    goto label_191;
  (Wrd281.pObj) = (OBJECT_ADDRESS (Wrd282.Obj));
  (Wrd279.Obj) = ((Wrd281.pObj) [1]);

DEFLABEL (label_190)
  (Wrd290.uLng) = (OBJECT_TYPE (Wrd279.Obj));
  if (! ((Wrd290.uLng) == 1))
    goto label_189;
  (Wrd289.pObj) = (OBJECT_ADDRESS (Wrd279.Obj));
  (Wrd288.Obj) = ((Wrd289.pObj) [1]);

DEFLABEL (label_188)
  (Wrd297.uLng) = (OBJECT_TYPE (Wrd288.Obj));
  if (! ((Wrd297.uLng) == 1))
    goto label_187;
  (Wrd295.pObj) = (OBJECT_ADDRESS (Wrd288.Obj));
  (Wrd296.Obj) = ((Wrd295.pObj) [0]);
  (* (--Rsp)) = (Wrd296.Obj);

DEFLABEL (label_186)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd303.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_13])));
  Rhp += 1;
  (Wrd302.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd303.pObj)));
  Wrd304 = Wrd303;
  (Wrd305.Obj) = (Rsp [4]);
  ((Wrd304.pObj) [2]) = (Wrd305.Obj);
  (* (--Rsp)) = (Wrd302.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_43]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_2_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_2_43);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_187)
  (Wrd301.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd301.Obj);
  (* (--Rsp)) = (Wrd288.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_114)
  (* (--Rsp)) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  (Wrd294.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd294.Obj);
  (* (--Rsp)) = (Wrd279.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_113)
  (Wrd288.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  (Wrd287.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd287.Obj);
  (* (--Rsp)) = (Wrd282.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_112)
  (Wrd279.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  (Wrd275.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd275.Obj);
  (* (--Rsp)) = (Wrd262.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_111)
  (* (--Rsp)) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  (Wrd268.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd268.Obj);
  (* (--Rsp)) = (Wrd253.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_110)
  (Wrd262.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  (Wrd261.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd261.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_109)
  (Wrd253.Obj) = Rvl;
  goto label_196;

DEFLABEL (lambda_121)
  CLOSURE_HEADER (LABEL_2_13);

DEFLABEL (lambda_69)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_205;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_204)
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_45]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_2_8]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_2_45);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_203;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_202)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_201;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_200)
  (Wrd33.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_48]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_2_9]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_2_48);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_49]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_10]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_2_49);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_199;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_198)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_199)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_50]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_118)
  (Wrd14.Obj) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_47]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_117)
  (Wrd23.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_46]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_116)
  (Wrd14.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_44]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_115)
  (Wrd5.Obj) = Rvl;
  goto label_204;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_5 3
#define LABEL_3_6 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_10 13
#define LABEL_3_11 15
#define LABEL_3_12 17
#define LABEL_3_13 19
#define LABEL_3_14 21
#define LABEL_3_15 23
#define LABEL_3_16 25
#define LABEL_3_17 27
#define LABEL_3_18 29
#define LABEL_3_19 31
#define LABEL_3_20 33
#define LABEL_3_21 35
#define LABEL_3_22 37
#define LABEL_3_23 39
#define LABEL_3_24 41
#define LABEL_3_25 43
#define LABEL_3_26 45
#define LABEL_3_27 47
#define LABEL_3_28 49
#define LABEL_3_29 51
#define LABEL_3_30 53
#define LABEL_3_31 55
#define LABEL_3_32 57
#define LABEL_3_33 59
#define LABEL_3_34 61
#define LABEL_3_35 63
#define LABEL_3_36 65
#define LABEL_3_37 67
#define LABEL_3_38 69
#define LABEL_3_39 71
#define LABEL_3_40 73
#define LABEL_3_41 75
#define LABEL_3_42 77
#define LABEL_3_43 79
#define LABEL_3_44 81
#define LABEL_3_45 83
#define LABEL_3_46 85
#define LABEL_3_47 87
#define LABEL_3_48 89
#define LABEL_3_49 91
#define LABEL_3_50 93
#define LABEL_3_51 95
#define LABEL_3_52 97
#define LABEL_3_53 99
#define LABEL_3_54 101
#define LABEL_3_55 103
#define LABEL_3_56 105
#define LABEL_3_57 107
#define LABEL_3_58 109
#define LABEL_3_59 111
#define LABEL_3_60 113
#define LABEL_3_61 115
#define LABEL_3_62 117
#define LABEL_3_63 119
#define LABEL_3_64 121
#define LABEL_3_65 123
#define LABEL_3_66 125
#define LABEL_3_67 127
#define LABEL_3_69 129
#define LABEL_3_70 131
#define LABEL_3_71 133
#define LABEL_3_72 135
#define LABEL_3_73 137
#define LABEL_3_74 139
#define LABEL_3_75 141
#define LABEL_3_76 143
#define LABEL_3_77 145
#define LABEL_3_78 147
#define LABEL_3_79 149
#define LABEL_3_80 151
#define LABEL_3_81 153
#define LABEL_3_82 155
#define LABEL_3_83 157
#define LABEL_3_84 159
#define LABEL_3_85 161
#define LABEL_3_86 163
#define LABEL_3_87 165
#define LABEL_3_88 167
#define LABEL_3_89 169
#define LABEL_3_90 171
#define LABEL_3_91 173
#define LABEL_3_92 175
#define LABEL_3_93 177
#define LABEL_3_94 179
#define LABEL_3_95 181
#define LABEL_3_96 183
#define LABEL_3_97 185
#define LABEL_3_98 187
#define LABEL_3_99 189
#define LABEL_3_100 191
#define LABEL_3_101 193
#define LABEL_3_102 195
#define LABEL_3_4 197
#define LABEL_3_103 199
#define LABEL_3_104 201
#define LABEL_3_105 203
#define LABEL_3_106 205
#define LABEL_3_107 207
#define LABEL_3_108 209
#define LABEL_3_109 211
#define LABEL_3_110 213
#define LABEL_3_111 215
#define LABEL_3_112 217
#define LABEL_3_113 219
#define LABEL_3_114 221
#define LABEL_3_115 223
#define LABEL_3_116 225
#define LABEL_3_117 227
#define LABEL_3_118 229
#define LABEL_3_119 231
#define LABEL_3_120 233
#define LABEL_3_121 235
#define LABEL_3_122 237
#define LABEL_3_123 239
#define LABEL_3_124 241
#define LABEL_3_68 243
#define LABEL_3_126 245
#define LABEL_3_127 247
#define LABEL_3_128 249
#define LABEL_3_129 251
#define LABEL_3_130 253
#define LABEL_3_131 255
#define LABEL_3_132 257
#define LABEL_3_133 259
#define LABEL_3_134 261
#define LABEL_3_135 263
#define LABEL_3_136 265
#define LABEL_3_137 267
#define ENVIRONMENT_LABEL_3_3 280
#define DEBUGGING_LABEL_3_2 279
#define OBJECT_3_7 278
#define OBJECT_3_6 277
#define OBJECT_3_5 276
#define OBJECT_3_4 275
#define OBJECT_3_3 274
#define OBJECT_3_2 273
#define OBJECT_3_1 272
#define OBJECT_3_0 271
#define EXECUTE_CACHE_3_125 269
#define FREE_REFERENCES_LABEL_3_0 268
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cell_sugar_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd114;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd184;
  machine_word Wrd176;
  machine_word Wrd178;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd173;
  machine_word Wrd171;
  machine_word Wrd163;
  machine_word Wrd165;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd135;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd266;
  machine_word Wrd258;
  machine_word Wrd260;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd255;
  machine_word Wrd253;
  machine_word Wrd245;
  machine_word Wrd247;
  machine_word Wrd243;
  machine_word Wrd241;
  machine_word Wrd233;
  machine_word Wrd235;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd205;
  machine_word Wrd197;
  machine_word Wrd199;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd280;
  machine_word Wrd272;
  machine_word Wrd274;
  machine_word Wrd270;
  machine_word Wrd1091;
  machine_word Wrd366;
  machine_word Wrd365;
  machine_word Wrd359;
  machine_word Wrd360;
  machine_word Wrd361;
  machine_word Wrd358;
  machine_word Wrd350;
  machine_word Wrd352;
  machine_word Wrd354;
  machine_word Wrd353;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd349;
  machine_word Wrd343;
  machine_word Wrd345;
  machine_word Wrd342;
  machine_word Wrd341;
  machine_word Wrd335;
  machine_word Wrd336;
  machine_word Wrd337;
  machine_word Wrd334;
  machine_word Wrd328;
  machine_word Wrd329;
  machine_word Wrd330;
  machine_word Wrd327;
  machine_word Wrd321;
  machine_word Wrd322;
  machine_word Wrd323;
  machine_word Wrd320;
  machine_word Wrd312;
  machine_word Wrd314;
  machine_word Wrd316;
  machine_word Wrd315;
  machine_word Wrd311;
  machine_word Wrd306;
  machine_word Wrd305;
  machine_word Wrd307;
  machine_word Wrd304;
  machine_word Wrd298;
  machine_word Wrd299;
  machine_word Wrd300;
  machine_word Wrd297;
  machine_word Wrd291;
  machine_word Wrd292;
  machine_word Wrd293;
  machine_word Wrd290;
  machine_word Wrd282;
  machine_word Wrd284;
  machine_word Wrd286;
  machine_word Wrd285;
  machine_word Wrd267;
  machine_word Wrd384;
  machine_word Wrd376;
  machine_word Wrd378;
  machine_word Wrd374;
  machine_word Wrd406;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd396;
  machine_word Wrd394;
  machine_word Wrd386;
  machine_word Wrd388;
  machine_word Wrd390;
  machine_word Wrd389;
  machine_word Wrd371;
  machine_word Wrd420;
  machine_word Wrd412;
  machine_word Wrd414;
  machine_word Wrd410;
  machine_word Wrd442;
  machine_word Wrd436;
  machine_word Wrd435;
  machine_word Wrd432;
  machine_word Wrd430;
  machine_word Wrd422;
  machine_word Wrd424;
  machine_word Wrd426;
  machine_word Wrd425;
  machine_word Wrd407;
  machine_word Wrd456;
  machine_word Wrd448;
  machine_word Wrd450;
  machine_word Wrd446;
  machine_word Wrd478;
  machine_word Wrd472;
  machine_word Wrd471;
  machine_word Wrd468;
  machine_word Wrd466;
  machine_word Wrd458;
  machine_word Wrd460;
  machine_word Wrd462;
  machine_word Wrd461;
  machine_word Wrd443;
  machine_word Wrd492;
  machine_word Wrd484;
  machine_word Wrd486;
  machine_word Wrd482;
  machine_word Wrd502;
  machine_word Wrd494;
  machine_word Wrd496;
  machine_word Wrd498;
  machine_word Wrd497;
  machine_word Wrd479;
  machine_word Wrd516;
  machine_word Wrd508;
  machine_word Wrd510;
  machine_word Wrd506;
  machine_word Wrd526;
  machine_word Wrd518;
  machine_word Wrd520;
  machine_word Wrd522;
  machine_word Wrd521;
  machine_word Wrd503;
  machine_word Wrd540;
  machine_word Wrd532;
  machine_word Wrd534;
  machine_word Wrd530;
  machine_word Wrd550;
  machine_word Wrd542;
  machine_word Wrd544;
  machine_word Wrd546;
  machine_word Wrd545;
  machine_word Wrd527;
  machine_word Wrd564;
  machine_word Wrd556;
  machine_word Wrd558;
  machine_word Wrd554;
  machine_word Wrd664;
  machine_word Wrd663;
  machine_word Wrd662;
  machine_word Wrd658;
  machine_word Wrd657;
  machine_word Wrd659;
  machine_word Wrd655;
  machine_word Wrd649;
  machine_word Wrd650;
  machine_word Wrd651;
  machine_word Wrd648;
  machine_word Wrd642;
  machine_word Wrd643;
  machine_word Wrd644;
  machine_word Wrd641;
  machine_word Wrd635;
  machine_word Wrd636;
  machine_word Wrd637;
  machine_word Wrd634;
  machine_word Wrd626;
  machine_word Wrd628;
  machine_word Wrd630;
  machine_word Wrd629;
  machine_word Wrd625;
  machine_word Wrd620;
  machine_word Wrd619;
  machine_word Wrd621;
  machine_word Wrd618;
  machine_word Wrd612;
  machine_word Wrd613;
  machine_word Wrd614;
  machine_word Wrd611;
  machine_word Wrd605;
  machine_word Wrd606;
  machine_word Wrd607;
  machine_word Wrd604;
  machine_word Wrd596;
  machine_word Wrd598;
  machine_word Wrd600;
  machine_word Wrd599;
  machine_word Wrd595;
  machine_word Wrd590;
  machine_word Wrd589;
  machine_word Wrd591;
  machine_word Wrd588;
  machine_word Wrd582;
  machine_word Wrd583;
  machine_word Wrd584;
  machine_word Wrd581;
  machine_word Wrd575;
  machine_word Wrd576;
  machine_word Wrd577;
  machine_word Wrd574;
  machine_word Wrd566;
  machine_word Wrd568;
  machine_word Wrd570;
  machine_word Wrd569;
  machine_word Wrd551;
  machine_word Wrd678;
  machine_word Wrd670;
  machine_word Wrd672;
  machine_word Wrd668;
  machine_word Wrd848;
  machine_word Wrd847;
  machine_word Wrd839;
  machine_word Wrd841;
  machine_word Wrd843;
  machine_word Wrd842;
  machine_word Wrd838;
  machine_word Wrd837;
  machine_word Wrd835;
  machine_word Wrd834;
  machine_word Wrd828;
  machine_word Wrd829;
  machine_word Wrd830;
  machine_word Wrd827;
  machine_word Wrd819;
  machine_word Wrd821;
  machine_word Wrd823;
  machine_word Wrd822;
  machine_word Wrd818;
  machine_word Wrd817;
  machine_word Wrd815;
  machine_word Wrd812;
  machine_word Wrd814;
  machine_word Wrd811;
  machine_word Wrd810;
  machine_word Wrd804;
  machine_word Wrd805;
  machine_word Wrd806;
  machine_word Wrd803;
  machine_word Wrd797;
  machine_word Wrd798;
  machine_word Wrd799;
  machine_word Wrd796;
  machine_word Wrd790;
  machine_word Wrd791;
  machine_word Wrd792;
  machine_word Wrd789;
  machine_word Wrd783;
  machine_word Wrd784;
  machine_word Wrd785;
  machine_word Wrd782;
  machine_word Wrd774;
  machine_word Wrd776;
  machine_word Wrd778;
  machine_word Wrd777;
  machine_word Wrd773;
  machine_word Wrd768;
  machine_word Wrd767;
  machine_word Wrd769;
  machine_word Wrd766;
  machine_word Wrd760;
  machine_word Wrd761;
  machine_word Wrd762;
  machine_word Wrd759;
  machine_word Wrd753;
  machine_word Wrd754;
  machine_word Wrd755;
  machine_word Wrd752;
  machine_word Wrd744;
  machine_word Wrd746;
  machine_word Wrd748;
  machine_word Wrd747;
  machine_word Wrd743;
  machine_word Wrd742;
  machine_word Wrd740;
  machine_word Wrd739;
  machine_word Wrd733;
  machine_word Wrd734;
  machine_word Wrd735;
  machine_word Wrd732;
  machine_word Wrd726;
  machine_word Wrd727;
  machine_word Wrd728;
  machine_word Wrd725;
  machine_word Wrd719;
  machine_word Wrd720;
  machine_word Wrd721;
  machine_word Wrd718;
  machine_word Wrd710;
  machine_word Wrd712;
  machine_word Wrd714;
  machine_word Wrd713;
  machine_word Wrd709;
  machine_word Wrd704;
  machine_word Wrd703;
  machine_word Wrd705;
  machine_word Wrd702;
  machine_word Wrd696;
  machine_word Wrd697;
  machine_word Wrd698;
  machine_word Wrd695;
  machine_word Wrd689;
  machine_word Wrd690;
  machine_word Wrd691;
  machine_word Wrd688;
  machine_word Wrd680;
  machine_word Wrd682;
  machine_word Wrd684;
  machine_word Wrd683;
  machine_word Wrd665;
  machine_word Wrd866;
  machine_word Wrd858;
  machine_word Wrd860;
  machine_word Wrd856;
  machine_word Wrd1088;
  machine_word Wrd1087;
  machine_word Wrd1079;
  machine_word Wrd1081;
  machine_word Wrd1083;
  machine_word Wrd1082;
  machine_word Wrd1078;
  machine_word Wrd1077;
  machine_word Wrd1075;
  machine_word Wrd1074;
  machine_word Wrd1068;
  machine_word Wrd1069;
  machine_word Wrd1070;
  machine_word Wrd1067;
  machine_word Wrd1059;
  machine_word Wrd1061;
  machine_word Wrd1063;
  machine_word Wrd1062;
  machine_word Wrd1058;
  machine_word Wrd1057;
  machine_word Wrd1055;
  machine_word Wrd1054;
  machine_word Wrd1048;
  machine_word Wrd1049;
  machine_word Wrd1050;
  machine_word Wrd1047;
  machine_word Wrd1041;
  machine_word Wrd1042;
  machine_word Wrd1043;
  machine_word Wrd1040;
  machine_word Wrd1034;
  machine_word Wrd1035;
  machine_word Wrd1036;
  machine_word Wrd1033;
  machine_word Wrd1025;
  machine_word Wrd1027;
  machine_word Wrd1029;
  machine_word Wrd1028;
  machine_word Wrd1024;
  machine_word Wrd1023;
  machine_word Wrd1021;
  machine_word Wrd1018;
  machine_word Wrd1020;
  machine_word Wrd1017;
  machine_word Wrd1014;
  machine_word Wrd1016;
  machine_word Wrd1013;
  machine_word Wrd1012;
  machine_word Wrd1006;
  machine_word Wrd1007;
  machine_word Wrd1008;
  machine_word Wrd1005;
  machine_word Wrd999;
  machine_word Wrd1000;
  machine_word Wrd1001;
  machine_word Wrd998;
  machine_word Wrd992;
  machine_word Wrd993;
  machine_word Wrd994;
  machine_word Wrd991;
  machine_word Wrd985;
  machine_word Wrd986;
  machine_word Wrd987;
  machine_word Wrd984;
  machine_word Wrd976;
  machine_word Wrd978;
  machine_word Wrd980;
  machine_word Wrd979;
  machine_word Wrd974;
  machine_word Wrd973;
  machine_word Wrd975;
  machine_word Wrd971;
  machine_word Wrd965;
  machine_word Wrd966;
  machine_word Wrd967;
  machine_word Wrd964;
  machine_word Wrd958;
  machine_word Wrd959;
  machine_word Wrd960;
  machine_word Wrd957;
  machine_word Wrd951;
  machine_word Wrd952;
  machine_word Wrd953;
  machine_word Wrd950;
  machine_word Wrd944;
  machine_word Wrd945;
  machine_word Wrd946;
  machine_word Wrd943;
  machine_word Wrd937;
  machine_word Wrd938;
  machine_word Wrd939;
  machine_word Wrd936;
  machine_word Wrd928;
  machine_word Wrd930;
  machine_word Wrd932;
  machine_word Wrd931;
  machine_word Wrd927;
  machine_word Wrd922;
  machine_word Wrd921;
  machine_word Wrd923;
  machine_word Wrd920;
  machine_word Wrd914;
  machine_word Wrd915;
  machine_word Wrd916;
  machine_word Wrd913;
  machine_word Wrd907;
  machine_word Wrd908;
  machine_word Wrd909;
  machine_word Wrd906;
  machine_word Wrd898;
  machine_word Wrd900;
  machine_word Wrd902;
  machine_word Wrd901;
  machine_word Wrd897;
  machine_word Wrd892;
  machine_word Wrd891;
  machine_word Wrd893;
  machine_word Wrd890;
  machine_word Wrd884;
  machine_word Wrd885;
  machine_word Wrd886;
  machine_word Wrd883;
  machine_word Wrd877;
  machine_word Wrd878;
  machine_word Wrd879;
  machine_word Wrd876;
  machine_word Wrd868;
  machine_word Wrd870;
  machine_word Wrd872;
  machine_word Wrd871;
  machine_word Wrd853;
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
      current_block = (Rpc - LABEL_3_5);
      goto lambda_40;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_332;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_333;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_334;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_335;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto label_336;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto label_337;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto label_338;

    case 8:
      current_block = (Rpc - LABEL_3_13);
      goto label_339;

    case 9:
      current_block = (Rpc - LABEL_3_14);
      goto label_340;

    case 10:
      current_block = (Rpc - LABEL_3_15);
      goto label_341;

    case 11:
      current_block = (Rpc - LABEL_3_16);
      goto label_342;

    case 12:
      current_block = (Rpc - LABEL_3_17);
      goto label_343;

    case 13:
      current_block = (Rpc - LABEL_3_18);
      goto label_344;

    case 14:
      current_block = (Rpc - LABEL_3_19);
      goto label_345;

    case 15:
      current_block = (Rpc - LABEL_3_20);
      goto label_346;

    case 16:
      current_block = (Rpc - LABEL_3_21);
      goto label_347;

    case 17:
      current_block = (Rpc - LABEL_3_22);
      goto label_348;

    case 18:
      current_block = (Rpc - LABEL_3_23);
      goto label_349;

    case 19:
      current_block = (Rpc - LABEL_3_24);
      goto label_350;

    case 20:
      current_block = (Rpc - LABEL_3_25);
      goto label_351;

    case 21:
      current_block = (Rpc - LABEL_3_26);
      goto label_352;

    case 22:
      current_block = (Rpc - LABEL_3_27);
      goto label_353;

    case 23:
      current_block = (Rpc - LABEL_3_28);
      goto label_354;

    case 24:
      current_block = (Rpc - LABEL_3_29);
      goto label_355;

    case 25:
      current_block = (Rpc - LABEL_3_30);
      goto label_356;

    case 26:
      current_block = (Rpc - LABEL_3_31);
      goto label_357;

    case 27:
      current_block = (Rpc - LABEL_3_32);
      goto label_331;

    case 28:
      current_block = (Rpc - LABEL_3_33);
      goto lambda_82;

    case 29:
      current_block = (Rpc - LABEL_3_34);
      goto label_311;

    case 30:
      current_block = (Rpc - LABEL_3_35);
      goto label_312;

    case 31:
      current_block = (Rpc - LABEL_3_36);
      goto label_313;

    case 32:
      current_block = (Rpc - LABEL_3_37);
      goto label_314;

    case 33:
      current_block = (Rpc - LABEL_3_38);
      goto label_315;

    case 34:
      current_block = (Rpc - LABEL_3_39);
      goto label_316;

    case 35:
      current_block = (Rpc - LABEL_3_40);
      goto label_317;

    case 36:
      current_block = (Rpc - LABEL_3_41);
      goto label_318;

    case 37:
      current_block = (Rpc - LABEL_3_42);
      goto label_319;

    case 38:
      current_block = (Rpc - LABEL_3_43);
      goto label_320;

    case 39:
      current_block = (Rpc - LABEL_3_44);
      goto label_321;

    case 40:
      current_block = (Rpc - LABEL_3_45);
      goto label_322;

    case 41:
      current_block = (Rpc - LABEL_3_46);
      goto label_323;

    case 42:
      current_block = (Rpc - LABEL_3_47);
      goto label_324;

    case 43:
      current_block = (Rpc - LABEL_3_48);
      goto label_325;

    case 44:
      current_block = (Rpc - LABEL_3_49);
      goto label_326;

    case 45:
      current_block = (Rpc - LABEL_3_50);
      goto label_327;

    case 46:
      current_block = (Rpc - LABEL_3_51);
      goto label_328;

    case 47:
      current_block = (Rpc - LABEL_3_52);
      goto label_329;

    case 48:
      current_block = (Rpc - LABEL_3_53);
      goto label_330;

    case 49:
      current_block = (Rpc - LABEL_3_54);
      goto label_310;

    case 50:
      current_block = (Rpc - LABEL_3_55);
      goto lambda_119;

    case 51:
      current_block = (Rpc - LABEL_3_56);
      goto label_298;

    case 52:
      current_block = (Rpc - LABEL_3_57);
      goto label_299;

    case 53:
      current_block = (Rpc - LABEL_3_58);
      goto label_300;

    case 54:
      current_block = (Rpc - LABEL_3_59);
      goto label_301;

    case 55:
      current_block = (Rpc - LABEL_3_60);
      goto label_302;

    case 56:
      current_block = (Rpc - LABEL_3_61);
      goto label_303;

    case 57:
      current_block = (Rpc - LABEL_3_62);
      goto label_304;

    case 58:
      current_block = (Rpc - LABEL_3_63);
      goto label_305;

    case 59:
      current_block = (Rpc - LABEL_3_64);
      goto label_306;

    case 60:
      current_block = (Rpc - LABEL_3_65);
      goto label_307;

    case 61:
      current_block = (Rpc - LABEL_3_66);
      goto label_308;

    case 62:
      current_block = (Rpc - LABEL_3_67);
      goto label_309;

    case 63:
      current_block = (Rpc - LABEL_3_69);
      goto label_297;

    case 64:
      current_block = (Rpc - LABEL_3_70);
      goto lambda_33;

    case 65:
      current_block = (Rpc - LABEL_3_71);
      goto label_296;

    case 66:
      current_block = (Rpc - LABEL_3_72);
      goto label_295;

    case 67:
      current_block = (Rpc - LABEL_3_73);
      goto lambda_75;

    case 68:
      current_block = (Rpc - LABEL_3_74);
      goto label_294;

    case 69:
      current_block = (Rpc - LABEL_3_75);
      goto label_293;

    case 70:
      current_block = (Rpc - LABEL_3_76);
      goto lambda_112;

    case 71:
      current_block = (Rpc - LABEL_3_77);
      goto label_292;

    case 72:
      current_block = (Rpc - LABEL_3_78);
      goto label_291;

    case 73:
      current_block = (Rpc - LABEL_3_79);
      goto lambda_22;

    case 74:
      current_block = (Rpc - LABEL_3_80);
      goto label_289;

    case 75:
      current_block = (Rpc - LABEL_3_81);
      goto label_290;

    case 76:
      current_block = (Rpc - LABEL_3_82);
      goto label_288;

    case 77:
      current_block = (Rpc - LABEL_3_83);
      goto lambda_64;

    case 78:
      current_block = (Rpc - LABEL_3_84);
      goto label_286;

    case 79:
      current_block = (Rpc - LABEL_3_85);
      goto label_287;

    case 80:
      current_block = (Rpc - LABEL_3_86);
      goto label_285;

    case 81:
      current_block = (Rpc - LABEL_3_87);
      goto lambda_101;

    case 82:
      current_block = (Rpc - LABEL_3_88);
      goto label_283;

    case 83:
      current_block = (Rpc - LABEL_3_89);
      goto label_284;

    case 84:
      current_block = (Rpc - LABEL_3_90);
      goto label_282;

    case 85:
      current_block = (Rpc - LABEL_3_91);
      goto lambda_139;

    case 86:
      current_block = (Rpc - LABEL_3_92);
      goto label_272;

    case 87:
      current_block = (Rpc - LABEL_3_93);
      goto label_273;

    case 88:
      current_block = (Rpc - LABEL_3_94);
      goto label_274;

    case 89:
      current_block = (Rpc - LABEL_3_95);
      goto label_275;

    case 90:
      current_block = (Rpc - LABEL_3_96);
      goto label_276;

    case 91:
      current_block = (Rpc - LABEL_3_97);
      goto label_277;

    case 92:
      current_block = (Rpc - LABEL_3_98);
      goto label_278;

    case 93:
      current_block = (Rpc - LABEL_3_99);
      goto label_279;

    case 94:
      current_block = (Rpc - LABEL_3_100);
      goto label_280;

    case 95:
      current_block = (Rpc - LABEL_3_101);
      goto label_281;

    case 96:
      current_block = (Rpc - LABEL_3_102);
      goto label_271;

    case 97:
      current_block = (Rpc - LABEL_3_4);
      goto lambda_247;

    case 98:
      current_block = (Rpc - LABEL_3_103);
      goto label_264;

    case 99:
      current_block = (Rpc - LABEL_3_104);
      goto label_265;

    case 100:
      current_block = (Rpc - LABEL_3_105);
      goto label_266;

    case 101:
      current_block = (Rpc - LABEL_3_106);
      goto label_267;

    case 102:
      current_block = (Rpc - LABEL_3_107);
      goto label_268;

    case 103:
      current_block = (Rpc - LABEL_3_108);
      goto label_269;

    case 104:
      current_block = (Rpc - LABEL_3_109);
      goto label_270;

    case 105:
      current_block = (Rpc - LABEL_3_110);
      goto label_258;

    case 106:
      current_block = (Rpc - LABEL_3_111);
      goto label_259;

    case 107:
      current_block = (Rpc - LABEL_3_112);
      goto label_260;

    case 108:
      current_block = (Rpc - LABEL_3_113);
      goto label_261;

    case 109:
      current_block = (Rpc - LABEL_3_114);
      goto label_262;

    case 110:
      current_block = (Rpc - LABEL_3_115);
      goto label_263;

    case 111:
      current_block = (Rpc - LABEL_3_116);
      goto label_254;

    case 112:
      current_block = (Rpc - LABEL_3_117);
      goto label_255;

    case 113:
      current_block = (Rpc - LABEL_3_118);
      goto label_256;

    case 114:
      current_block = (Rpc - LABEL_3_119);
      goto label_257;

    case 115:
      current_block = (Rpc - LABEL_3_120);
      goto label_249;

    case 116:
      current_block = (Rpc - LABEL_3_121);
      goto label_250;

    case 117:
      current_block = (Rpc - LABEL_3_122);
      goto label_251;

    case 118:
      current_block = (Rpc - LABEL_3_123);
      goto label_252;

    case 119:
      current_block = (Rpc - LABEL_3_124);
      goto label_253;

    case 120:
      current_block = (Rpc - LABEL_3_68);
      goto continuation_168;

    case 121:
      current_block = (Rpc - LABEL_3_126);
      goto continuation_167;

    case 122:
      current_block = (Rpc - LABEL_3_127);
      goto label_358;

    case 123:
      current_block = (Rpc - LABEL_3_128);
      goto label_359;

    case 124:
      current_block = (Rpc - LABEL_3_129);
      goto label_360;

    case 125:
      current_block = (Rpc - LABEL_3_130);
      goto label_361;

    case 126:
      current_block = (Rpc - LABEL_3_131);
      goto label_362;

    case 127:
      current_block = (Rpc - LABEL_3_132);
      goto label_363;

    case 128:
      current_block = (Rpc - LABEL_3_133);
      goto label_364;

    case 129:
      current_block = (Rpc - LABEL_3_134);
      goto label_365;

    case 130:
      current_block = (Rpc - LABEL_3_135);
      goto label_366;

    case 131:
      current_block = (Rpc - LABEL_3_136);
      goto label_367;

    case 132:
      current_block = (Rpc - LABEL_3_137);
      goto label_368;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_380)
DEFLABEL (lambda_247)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_432;

DEFLABEL (label_431)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_410;

DEFLABEL (label_409)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_396;

DEFLABEL (label_395)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_382;

DEFLABEL (label_381)
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_125]));

DEFLABEL (label_382)
  if (! ((Wrd12.uLng) == 1))
    goto label_394;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_393)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_384;

DEFLABEL (label_383)
  Rsp = (& (Rsp [1]));
  goto label_381;

DEFLABEL (label_384)
  if (! ((Wrd25.uLng) == 1))
    goto label_392;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_391)
  (Rsp [0]) = (Wrd27.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_383;
  if (! ((Wrd37.uLng) == 1))
    goto label_390;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_389)
  if (! ((Wrd39.Obj) == (current_block [OBJECT_3_0])))
    goto label_383;
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_388;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_387)
  (Rsp [0]) = (Wrd49.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_383;
  if (! ((Wrd59.uLng) == 1))
    goto label_386;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_385)
  (Rsp [0]) = (Wrd61.Obj);
  goto lambda_139;

DEFLABEL (label_386)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_124]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_253)
  (Wrd61.Obj) = Rvl;
  goto label_385;

DEFLABEL (label_388)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_123]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_252)
  (Wrd49.Obj) = Rvl;
  goto label_387;

DEFLABEL (label_390)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_122]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_251)
  (Wrd39.Obj) = Rvl;
  goto label_389;

DEFLABEL (label_392)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_121]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_250)
  (Wrd27.Obj) = Rvl;
  goto label_391;

DEFLABEL (label_394)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_120]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_249)
  (* (--Rsp)) = Rvl;
  goto label_393;

DEFLABEL (label_396)
  if (! ((Wrd10.uLng) == 1))
    goto label_408;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [1]);
  (* (--Rsp)) = (Wrd72.Obj);

DEFLABEL (label_407)
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 1)
    goto label_398;

DEFLABEL (label_397)
  Rsp = (& (Rsp [1]));
  goto label_395;

DEFLABEL (label_398)
  if (! ((Wrd80.uLng) == 1))
    goto label_406;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd82.Obj) = ((Wrd84.pObj) [1]);

DEFLABEL (label_405)
  (Rsp [0]) = (Wrd82.Obj);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd92.uLng) == 1))
    goto label_397;
  if (! ((Wrd92.uLng) == 1))
    goto label_404;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (* (--Rsp)) = (Wrd96.Obj);

DEFLABEL (label_403)
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_400;

DEFLABEL (label_399)
  Rsp = (& (Rsp [1]));
  goto label_397;

DEFLABEL (label_400)
  if (! ((Wrd104.uLng) == 1))
    goto label_402;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd106.Obj) = ((Wrd108.pObj) [1]);

DEFLABEL (label_401)
  (Rsp [0]) = (Wrd106.Obj);
  goto lambda_101;

DEFLABEL (label_402)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_119]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_257)
  (Wrd106.Obj) = Rvl;
  goto label_401;

DEFLABEL (label_404)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_118]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_256)
  (* (--Rsp)) = Rvl;
  goto label_403;

DEFLABEL (label_406)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_117]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_255)
  (Wrd82.Obj) = Rvl;
  goto label_405;

DEFLABEL (label_408)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_116]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_254)
  (* (--Rsp)) = Rvl;
  goto label_407;

DEFLABEL (label_410)
  if (! ((Wrd8.uLng) == 1))
    goto label_430;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd117.Obj) = ((Wrd116.pObj) [1]);
  (* (--Rsp)) = (Wrd117.Obj);

DEFLABEL (label_429)
  (Wrd124.Obj) = (Rsp [0]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if ((Wrd125.uLng) == 1)
    goto label_412;

DEFLABEL (label_411)
  Rsp = (& (Rsp [1]));
  goto label_409;

DEFLABEL (label_412)
  if (! ((Wrd125.uLng) == 1))
    goto label_428;
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd127.Obj) = ((Wrd129.pObj) [1]);

DEFLABEL (label_427)
  (Rsp [0]) = (Wrd127.Obj);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd137.uLng) == 1))
    goto label_411;
  if (! ((Wrd137.uLng) == 1))
    goto label_426;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);

DEFLABEL (label_425)
  (Wrd148.Obj) = (Rsp [0]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if ((Wrd149.uLng) == 1)
    goto label_414;

DEFLABEL (label_413)
  Rsp = (& (Rsp [1]));
  goto label_411;

DEFLABEL (label_414)
  if (! ((Wrd149.uLng) == 1))
    goto label_424;
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [0]);
  (* (--Rsp)) = (Wrd153.Obj);

DEFLABEL (label_423)
  (Wrd160.Obj) = (Rsp [0]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if ((Wrd161.uLng) == 1)
    goto label_415;
  Rsp = (& (Rsp [1]));
  goto label_413;

DEFLABEL (label_415)
  if (! ((Wrd161.uLng) == 1))
    goto label_422;
  (Wrd165.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd163.Obj) = ((Wrd165.pObj) [1]);

DEFLABEL (label_421)
  if ((Wrd163.Obj) == (current_block [OBJECT_3_0]))
    goto label_417;
  (Wrd173.Obj) = (current_block [OBJECT_3_6]);
  goto label_416;

DEFLABEL (label_417)
  (Wrd173.Obj) = (current_block [OBJECT_3_5]);

DEFLABEL (label_416)
DEFLABEL (label_420)
  Rsp = (& (Rsp [1]));
  if ((Wrd173.Obj) == ((SCHEME_OBJECT) 0))
    goto label_413;
  (Wrd179.Obj) = (Rsp [0]);
  (Wrd180.uLng) = (OBJECT_TYPE (Wrd179.Obj));
  if (! ((Wrd180.uLng) == 1))
    goto label_419;
  (Wrd178.pObj) = (OBJECT_ADDRESS (Wrd179.Obj));
  (Wrd176.Obj) = ((Wrd178.pObj) [1]);

DEFLABEL (label_418)
  (Rsp [0]) = (Wrd176.Obj);
  goto lambda_64;

DEFLABEL (label_419)
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_115]))));
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd179.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_263)
  (Wrd176.Obj) = Rvl;
  goto label_418;

DEFLABEL (label_422)
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_114]))));
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_262)
  (Wrd163.Obj) = Rvl;
  goto label_421;

DEFLABEL (label_424)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_113]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_261)
  (* (--Rsp)) = Rvl;
  goto label_423;

DEFLABEL (label_426)
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_112]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_260)
  (* (--Rsp)) = Rvl;
  goto label_425;

DEFLABEL (label_428)
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_111]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_259)
  (Wrd127.Obj) = Rvl;
  goto label_427;

DEFLABEL (label_430)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_110]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_258)
  (* (--Rsp)) = Rvl;
  goto label_429;

DEFLABEL (label_432)
  if (! ((Wrd6.uLng) == 1))
    goto label_455;
  (Wrd186.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd187.Obj) = ((Wrd186.pObj) [1]);
  (* (--Rsp)) = (Wrd187.Obj);

DEFLABEL (label_454)
  (Wrd194.Obj) = (Rsp [0]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if ((Wrd195.uLng) == 1)
    goto label_434;

DEFLABEL (label_433)
  Rsp = (& (Rsp [1]));
  goto label_431;

DEFLABEL (label_434)
  if (! ((Wrd195.uLng) == 1))
    goto label_453;
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd194.Obj));
  (Wrd197.Obj) = ((Wrd199.pObj) [1]);

DEFLABEL (label_452)
  (Rsp [0]) = (Wrd197.Obj);
  (Wrd207.uLng) = (OBJECT_TYPE (Wrd197.Obj));
  if (! ((Wrd207.uLng) == 1))
    goto label_433;
  if (! ((Wrd207.uLng) == 1))
    goto label_451;
  (Wrd210.pObj) = (OBJECT_ADDRESS (Wrd197.Obj));
  (Wrd211.Obj) = ((Wrd210.pObj) [0]);
  (* (--Rsp)) = (Wrd211.Obj);

DEFLABEL (label_450)
  (Wrd218.Obj) = (Rsp [0]);
  (Wrd219.uLng) = (OBJECT_TYPE (Wrd218.Obj));
  if ((Wrd219.uLng) == 1)
    goto label_436;

DEFLABEL (label_435)
  Rsp = (& (Rsp [1]));
  goto label_433;

DEFLABEL (label_436)
  if (! ((Wrd219.uLng) == 1))
    goto label_449;
  (Wrd222.pObj) = (OBJECT_ADDRESS (Wrd218.Obj));
  (Wrd223.Obj) = ((Wrd222.pObj) [0]);
  (* (--Rsp)) = (Wrd223.Obj);

DEFLABEL (label_448)
  (Wrd230.Obj) = (Rsp [0]);
  (Wrd231.uLng) = (OBJECT_TYPE (Wrd230.Obj));
  if ((Wrd231.uLng) == 1)
    goto label_438;

DEFLABEL (label_437)
  Rsp = (& (Rsp [1]));
  goto label_435;

DEFLABEL (label_438)
  if (! ((Wrd231.uLng) == 1))
    goto label_447;
  (Wrd235.pObj) = (OBJECT_ADDRESS (Wrd230.Obj));
  (Wrd233.Obj) = ((Wrd235.pObj) [1]);

DEFLABEL (label_446)
  (Rsp [0]) = (Wrd233.Obj);
  (Wrd243.uLng) = (OBJECT_TYPE (Wrd233.Obj));
  if (! ((Wrd243.uLng) == 1))
    goto label_437;
  if (! ((Wrd243.uLng) == 1))
    goto label_445;
  (Wrd247.pObj) = (OBJECT_ADDRESS (Wrd233.Obj));
  (Wrd245.Obj) = ((Wrd247.pObj) [1]);

DEFLABEL (label_444)
  if ((Wrd245.Obj) == (current_block [OBJECT_3_0]))
    goto label_440;
  (Wrd255.Obj) = (current_block [OBJECT_3_6]);
  goto label_439;

DEFLABEL (label_440)
  (Wrd255.Obj) = (current_block [OBJECT_3_5]);

DEFLABEL (label_439)
DEFLABEL (label_443)
  Rsp = (& (Rsp [1]));
  if ((Wrd255.Obj) == ((SCHEME_OBJECT) 0))
    goto label_435;
  (Wrd261.Obj) = (Rsp [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if (! ((Wrd262.uLng) == 1))
    goto label_442;
  (Wrd260.pObj) = (OBJECT_ADDRESS (Wrd261.Obj));
  (Wrd258.Obj) = ((Wrd260.pObj) [1]);

DEFLABEL (label_441)
  (Rsp [0]) = (Wrd258.Obj);
  goto lambda_22;

DEFLABEL (label_442)
  (Wrd266.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_109]))));
  (* (--Rsp)) = (Wrd266.Obj);
  (* (--Rsp)) = (Wrd261.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_270)
  (Wrd258.Obj) = Rvl;
  goto label_441;

DEFLABEL (label_445)
  (Wrd253.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_108]))));
  (* (--Rsp)) = (Wrd253.Obj);
  (* (--Rsp)) = (Wrd233.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_269)
  (Wrd245.Obj) = Rvl;
  goto label_444;

DEFLABEL (label_447)
  (Wrd241.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_107]))));
  (* (--Rsp)) = (Wrd241.Obj);
  (* (--Rsp)) = (Wrd230.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_268)
  (Wrd233.Obj) = Rvl;
  goto label_446;

DEFLABEL (label_449)
  (Wrd229.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_106]))));
  (* (--Rsp)) = (Wrd229.Obj);
  (* (--Rsp)) = (Wrd218.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_267)
  (* (--Rsp)) = Rvl;
  goto label_448;

DEFLABEL (label_451)
  (Wrd217.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_105]))));
  (* (--Rsp)) = (Wrd217.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_266)
  (* (--Rsp)) = Rvl;
  goto label_450;

DEFLABEL (label_453)
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_104]))));
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_265)
  (Wrd197.Obj) = Rvl;
  goto label_452;

DEFLABEL (label_455)
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_103]))));
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_264)
  (* (--Rsp)) = Rvl;
  goto label_454;

DEFLABEL (lambda_379)
DEFLABEL (lambda_139)
  INTERRUPT_CHECK (26, LABEL_3_91);
  (Wrd267.Obj) = (Rsp [0]);
  if ((Wrd267.Obj) == (current_block [OBJECT_3_0]))
    goto label_458;
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd267.Obj));
  if (! ((Wrd270.uLng) == 1))
    goto label_383;
  if (! ((Wrd270.uLng) == 1))
    goto label_457;
  (Wrd274.pObj) = (OBJECT_ADDRESS (Wrd267.Obj));
  (Wrd272.Obj) = ((Wrd274.pObj) [1]);

DEFLABEL (label_456)
  (Rsp [0]) = (Wrd272.Obj);
  goto lambda_139;

DEFLABEL (label_457)
  (Wrd280.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_102]))));
  (* (--Rsp)) = (Wrd280.Obj);
  (* (--Rsp)) = (Wrd267.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_271)
  (Wrd272.Obj) = Rvl;
  goto label_456;

DEFLABEL (label_458)
  Rsp = (& (Rsp [1]));
  (Wrd285.Obj) = (Rsp [0]);
  (Wrd286.uLng) = (OBJECT_TYPE (Wrd285.Obj));
  if (! ((Wrd286.uLng) == 1))
    goto label_479;
  (Wrd284.pObj) = (OBJECT_ADDRESS (Wrd285.Obj));
  (Wrd282.Obj) = ((Wrd284.pObj) [1]);

DEFLABEL (label_478)
  (Wrd293.uLng) = (OBJECT_TYPE (Wrd282.Obj));
  if (! ((Wrd293.uLng) == 1))
    goto label_477;
  (Wrd292.pObj) = (OBJECT_ADDRESS (Wrd282.Obj));
  (Wrd291.Obj) = ((Wrd292.pObj) [1]);

DEFLABEL (label_476)
  (Wrd300.uLng) = (OBJECT_TYPE (Wrd291.Obj));
  if (! ((Wrd300.uLng) == 1))
    goto label_475;
  (Wrd299.pObj) = (OBJECT_ADDRESS (Wrd291.Obj));
  (Wrd298.Obj) = ((Wrd299.pObj) [1]);

DEFLABEL (label_474)
  (Wrd307.uLng) = (OBJECT_TYPE (Wrd298.Obj));
  if (! ((Wrd307.uLng) == 1))
    goto label_473;
  (Wrd305.pObj) = (OBJECT_ADDRESS (Wrd298.Obj));
  (Wrd306.Obj) = ((Wrd305.pObj) [1]);
  (* (--Rsp)) = (Wrd306.Obj);

DEFLABEL (label_472)
  (Wrd315.Obj) = (Rsp [1]);
  (Wrd316.uLng) = (OBJECT_TYPE (Wrd315.Obj));
  if (! ((Wrd316.uLng) == 1))
    goto label_471;
  (Wrd314.pObj) = (OBJECT_ADDRESS (Wrd315.Obj));
  (Wrd312.Obj) = ((Wrd314.pObj) [1]);

DEFLABEL (label_470)
  (Wrd323.uLng) = (OBJECT_TYPE (Wrd312.Obj));
  if (! ((Wrd323.uLng) == 1))
    goto label_469;
  (Wrd322.pObj) = (OBJECT_ADDRESS (Wrd312.Obj));
  (Wrd321.Obj) = ((Wrd322.pObj) [1]);

DEFLABEL (label_468)
  (Wrd330.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if (! ((Wrd330.uLng) == 1))
    goto label_467;
  (Wrd329.pObj) = (OBJECT_ADDRESS (Wrd321.Obj));
  (Wrd328.Obj) = ((Wrd329.pObj) [1]);

DEFLABEL (label_466)
  (Wrd337.uLng) = (OBJECT_TYPE (Wrd328.Obj));
  if (! ((Wrd337.uLng) == 1))
    goto label_465;
  (Wrd336.pObj) = (OBJECT_ADDRESS (Wrd328.Obj));
  (Wrd335.Obj) = ((Wrd336.pObj) [0]);

DEFLABEL (label_464)
  (Wrd342.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd335.Obj);
  (* (Rhp++)) = (Wrd342.Obj);
  (Wrd345.pObj) = (& (Rhp [-2]));
  (Wrd343.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd345.pObj)));
  (Wrd349.Obj) = (current_block [OBJECT_3_4]);
  (* (Rhp++)) = (Wrd349.Obj);
  (* (Rhp++)) = (Wrd343.Obj);
  (Wrd347.pObj) = (& (Rhp [-2]));
  (Wrd348.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd347.pObj)));
  (* (--Rsp)) = (Wrd348.Obj);
  (Wrd353.Obj) = (Rsp [1]);
  (Wrd354.uLng) = (OBJECT_TYPE (Wrd353.Obj));
  if (! ((Wrd354.uLng) == 1))
    goto label_463;
  (Wrd352.pObj) = (OBJECT_ADDRESS (Wrd353.Obj));
  (Wrd350.Obj) = ((Wrd352.pObj) [1]);

DEFLABEL (label_462)
  (Wrd361.uLng) = (OBJECT_TYPE (Wrd350.Obj));
  if (! ((Wrd361.uLng) == 1))
    goto label_461;
  (Wrd360.pObj) = (OBJECT_ADDRESS (Wrd350.Obj));
  (Wrd359.Obj) = ((Wrd360.pObj) [0]);

DEFLABEL (label_460)
  (Wrd366.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd359.Obj);
  (* (Rhp++)) = (Wrd366.Obj);

DEFLABEL (label_459)
  (Wrd1091.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd1091.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_461)
  (Wrd365.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_101]))));
  (* (--Rsp)) = (Wrd365.Obj);
  (* (--Rsp)) = (Wrd350.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_281)
  (Wrd359.Obj) = Rvl;
  goto label_460;

DEFLABEL (label_463)
  (Wrd358.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_100]))));
  (* (--Rsp)) = (Wrd358.Obj);
  (* (--Rsp)) = (Wrd353.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_280)
  (Wrd350.Obj) = Rvl;
  goto label_462;

DEFLABEL (label_465)
  (Wrd341.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_99]))));
  (* (--Rsp)) = (Wrd341.Obj);
  (* (--Rsp)) = (Wrd328.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_279)
  (Wrd335.Obj) = Rvl;
  goto label_464;

DEFLABEL (label_467)
  (Wrd334.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_98]))));
  (* (--Rsp)) = (Wrd334.Obj);
  (* (--Rsp)) = (Wrd321.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_278)
  (Wrd328.Obj) = Rvl;
  goto label_466;

DEFLABEL (label_469)
  (Wrd327.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_97]))));
  (* (--Rsp)) = (Wrd327.Obj);
  (* (--Rsp)) = (Wrd312.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_277)
  (Wrd321.Obj) = Rvl;
  goto label_468;

DEFLABEL (label_471)
  (Wrd320.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_96]))));
  (* (--Rsp)) = (Wrd320.Obj);
  (* (--Rsp)) = (Wrd315.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_276)
  (Wrd312.Obj) = Rvl;
  goto label_470;

DEFLABEL (label_473)
  (Wrd311.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_95]))));
  (* (--Rsp)) = (Wrd311.Obj);
  (* (--Rsp)) = (Wrd298.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_275)
  (* (--Rsp)) = Rvl;
  goto label_472;

DEFLABEL (label_475)
  (Wrd304.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_94]))));
  (* (--Rsp)) = (Wrd304.Obj);
  (* (--Rsp)) = (Wrd291.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_274)
  (Wrd298.Obj) = Rvl;
  goto label_474;

DEFLABEL (label_477)
  (Wrd297.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_93]))));
  (* (--Rsp)) = (Wrd297.Obj);
  (* (--Rsp)) = (Wrd282.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_273)
  (Wrd291.Obj) = Rvl;
  goto label_476;

DEFLABEL (label_479)
  (Wrd290.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_92]))));
  (* (--Rsp)) = (Wrd290.Obj);
  (* (--Rsp)) = (Wrd285.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_272)
  (Wrd282.Obj) = Rvl;
  goto label_478;

DEFLABEL (lambda_378)
DEFLABEL (lambda_101)
  INTERRUPT_CHECK (26, LABEL_3_87);
  (Wrd371.Obj) = (Rsp [0]);
  if ((Wrd371.Obj) == (current_block [OBJECT_3_0]))
    goto label_482;
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd371.Obj));
  if (! ((Wrd374.uLng) == 1))
    goto label_399;
  if (! ((Wrd374.uLng) == 1))
    goto label_481;
  (Wrd378.pObj) = (OBJECT_ADDRESS (Wrd371.Obj));
  (Wrd376.Obj) = ((Wrd378.pObj) [1]);

DEFLABEL (label_480)
  (Rsp [0]) = (Wrd376.Obj);
  goto lambda_101;

DEFLABEL (label_481)
  (Wrd384.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_90]))));
  (* (--Rsp)) = (Wrd384.Obj);
  (* (--Rsp)) = (Wrd371.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_282)
  (Wrd376.Obj) = Rvl;
  goto label_480;

DEFLABEL (label_482)
  Rsp = (& (Rsp [1]));
  (Wrd389.Obj) = (Rsp [0]);
  (Wrd390.uLng) = (OBJECT_TYPE (Wrd389.Obj));
  if (! ((Wrd390.uLng) == 1))
    goto label_486;
  (Wrd388.pObj) = (OBJECT_ADDRESS (Wrd389.Obj));
  (Wrd386.Obj) = ((Wrd388.pObj) [1]);

DEFLABEL (label_485)
  (Rsp [0]) = (Wrd386.Obj);
  (Wrd396.uLng) = (OBJECT_TYPE (Wrd386.Obj));
  if (! ((Wrd396.uLng) == 1))
    goto label_397;
  if (! ((Wrd396.uLng) == 1))
    goto label_484;
  (Wrd399.pObj) = (OBJECT_ADDRESS (Wrd386.Obj));
  (Wrd400.Obj) = ((Wrd399.pObj) [0]);
  (* (--Rsp)) = (Wrd400.Obj);

DEFLABEL (label_483)
  goto lambda_112;

DEFLABEL (label_484)
  (Wrd406.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_89]))));
  (* (--Rsp)) = (Wrd406.Obj);
  (* (--Rsp)) = (Wrd386.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_284)
  (* (--Rsp)) = Rvl;
  goto label_483;

DEFLABEL (label_486)
  (Wrd394.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_88]))));
  (* (--Rsp)) = (Wrd394.Obj);
  (* (--Rsp)) = (Wrd389.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_283)
  (Wrd386.Obj) = Rvl;
  goto label_485;

DEFLABEL (lambda_377)
DEFLABEL (lambda_64)
  INTERRUPT_CHECK (26, LABEL_3_83);
  (Wrd407.Obj) = (Rsp [0]);
  if ((Wrd407.Obj) == (current_block [OBJECT_3_0]))
    goto label_489;
  (Wrd410.uLng) = (OBJECT_TYPE (Wrd407.Obj));
  if (! ((Wrd410.uLng) == 1))
    goto label_413;
  if (! ((Wrd410.uLng) == 1))
    goto label_488;
  (Wrd414.pObj) = (OBJECT_ADDRESS (Wrd407.Obj));
  (Wrd412.Obj) = ((Wrd414.pObj) [1]);

DEFLABEL (label_487)
  (Rsp [0]) = (Wrd412.Obj);
  goto lambda_64;

DEFLABEL (label_488)
  (Wrd420.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_86]))));
  (* (--Rsp)) = (Wrd420.Obj);
  (* (--Rsp)) = (Wrd407.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_285)
  (Wrd412.Obj) = Rvl;
  goto label_487;

DEFLABEL (label_489)
  Rsp = (& (Rsp [1]));
  (Wrd425.Obj) = (Rsp [0]);
  (Wrd426.uLng) = (OBJECT_TYPE (Wrd425.Obj));
  if (! ((Wrd426.uLng) == 1))
    goto label_493;
  (Wrd424.pObj) = (OBJECT_ADDRESS (Wrd425.Obj));
  (Wrd422.Obj) = ((Wrd424.pObj) [1]);

DEFLABEL (label_492)
  (Rsp [0]) = (Wrd422.Obj);
  (Wrd432.uLng) = (OBJECT_TYPE (Wrd422.Obj));
  if (! ((Wrd432.uLng) == 1))
    goto label_411;
  if (! ((Wrd432.uLng) == 1))
    goto label_491;
  (Wrd435.pObj) = (OBJECT_ADDRESS (Wrd422.Obj));
  (Wrd436.Obj) = ((Wrd435.pObj) [0]);
  (* (--Rsp)) = (Wrd436.Obj);

DEFLABEL (label_490)
  goto lambda_75;

DEFLABEL (label_491)
  (Wrd442.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_85]))));
  (* (--Rsp)) = (Wrd442.Obj);
  (* (--Rsp)) = (Wrd422.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_287)
  (* (--Rsp)) = Rvl;
  goto label_490;

DEFLABEL (label_493)
  (Wrd430.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_84]))));
  (* (--Rsp)) = (Wrd430.Obj);
  (* (--Rsp)) = (Wrd425.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_286)
  (Wrd422.Obj) = Rvl;
  goto label_492;

DEFLABEL (lambda_376)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_3_79);
  (Wrd443.Obj) = (Rsp [0]);
  if ((Wrd443.Obj) == (current_block [OBJECT_3_0]))
    goto label_496;
  (Wrd446.uLng) = (OBJECT_TYPE (Wrd443.Obj));
  if (! ((Wrd446.uLng) == 1))
    goto label_435;
  if (! ((Wrd446.uLng) == 1))
    goto label_495;
  (Wrd450.pObj) = (OBJECT_ADDRESS (Wrd443.Obj));
  (Wrd448.Obj) = ((Wrd450.pObj) [1]);

DEFLABEL (label_494)
  (Rsp [0]) = (Wrd448.Obj);
  goto lambda_22;

DEFLABEL (label_495)
  (Wrd456.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_82]))));
  (* (--Rsp)) = (Wrd456.Obj);
  (* (--Rsp)) = (Wrd443.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_288)
  (Wrd448.Obj) = Rvl;
  goto label_494;

DEFLABEL (label_496)
  Rsp = (& (Rsp [1]));
  (Wrd461.Obj) = (Rsp [0]);
  (Wrd462.uLng) = (OBJECT_TYPE (Wrd461.Obj));
  if (! ((Wrd462.uLng) == 1))
    goto label_500;
  (Wrd460.pObj) = (OBJECT_ADDRESS (Wrd461.Obj));
  (Wrd458.Obj) = ((Wrd460.pObj) [1]);

DEFLABEL (label_499)
  (Rsp [0]) = (Wrd458.Obj);
  (Wrd468.uLng) = (OBJECT_TYPE (Wrd458.Obj));
  if (! ((Wrd468.uLng) == 1))
    goto label_433;
  if (! ((Wrd468.uLng) == 1))
    goto label_498;
  (Wrd471.pObj) = (OBJECT_ADDRESS (Wrd458.Obj));
  (Wrd472.Obj) = ((Wrd471.pObj) [0]);
  (* (--Rsp)) = (Wrd472.Obj);

DEFLABEL (label_497)
  goto lambda_33;

DEFLABEL (label_498)
  (Wrd478.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_81]))));
  (* (--Rsp)) = (Wrd478.Obj);
  (* (--Rsp)) = (Wrd458.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_290)
  (* (--Rsp)) = Rvl;
  goto label_497;

DEFLABEL (label_500)
  (Wrd466.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_80]))));
  (* (--Rsp)) = (Wrd466.Obj);
  (* (--Rsp)) = (Wrd461.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_289)
  (Wrd458.Obj) = Rvl;
  goto label_499;

DEFLABEL (lambda_375)
DEFLABEL (lambda_112)
  INTERRUPT_CHECK (26, LABEL_3_76);
  (Wrd479.Obj) = (Rsp [0]);
  if ((Wrd479.Obj) == (current_block [OBJECT_3_0]))
    goto label_503;
  (Wrd482.uLng) = (OBJECT_TYPE (Wrd479.Obj));
  if (! ((Wrd482.uLng) == 1))
    goto label_399;
  if (! ((Wrd482.uLng) == 1))
    goto label_502;
  (Wrd486.pObj) = (OBJECT_ADDRESS (Wrd479.Obj));
  (Wrd484.Obj) = ((Wrd486.pObj) [1]);

DEFLABEL (label_501)
  (Rsp [0]) = (Wrd484.Obj);
  goto label_483;

DEFLABEL (label_502)
  (Wrd492.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_78]))));
  (* (--Rsp)) = (Wrd492.Obj);
  (* (--Rsp)) = (Wrd479.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_291)
  (Wrd484.Obj) = Rvl;
  goto label_501;

DEFLABEL (label_503)
  Rsp = (& (Rsp [1]));
  (Wrd497.Obj) = (Rsp [0]);
  (Wrd498.uLng) = (OBJECT_TYPE (Wrd497.Obj));
  if (! ((Wrd498.uLng) == 1))
    goto label_505;
  (Wrd496.pObj) = (OBJECT_ADDRESS (Wrd497.Obj));
  (Wrd494.Obj) = ((Wrd496.pObj) [1]);

DEFLABEL (label_504)
  (Rsp [0]) = (Wrd494.Obj);
  goto lambda_119;

DEFLABEL (label_505)
  (Wrd502.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_77]))));
  (* (--Rsp)) = (Wrd502.Obj);
  (* (--Rsp)) = (Wrd497.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_292)
  (Wrd494.Obj) = Rvl;
  goto label_504;

DEFLABEL (lambda_374)
DEFLABEL (lambda_75)
  INTERRUPT_CHECK (26, LABEL_3_73);
  (Wrd503.Obj) = (Rsp [0]);
  if ((Wrd503.Obj) == (current_block [OBJECT_3_0]))
    goto label_508;
  (Wrd506.uLng) = (OBJECT_TYPE (Wrd503.Obj));
  if (! ((Wrd506.uLng) == 1))
    goto label_413;
  if (! ((Wrd506.uLng) == 1))
    goto label_507;
  (Wrd510.pObj) = (OBJECT_ADDRESS (Wrd503.Obj));
  (Wrd508.Obj) = ((Wrd510.pObj) [1]);

DEFLABEL (label_506)
  (Rsp [0]) = (Wrd508.Obj);
  goto label_490;

DEFLABEL (label_507)
  (Wrd516.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_75]))));
  (* (--Rsp)) = (Wrd516.Obj);
  (* (--Rsp)) = (Wrd503.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_293)
  (Wrd508.Obj) = Rvl;
  goto label_506;

DEFLABEL (label_508)
  Rsp = (& (Rsp [1]));
  (Wrd521.Obj) = (Rsp [0]);
  (Wrd522.uLng) = (OBJECT_TYPE (Wrd521.Obj));
  if (! ((Wrd522.uLng) == 1))
    goto label_510;
  (Wrd520.pObj) = (OBJECT_ADDRESS (Wrd521.Obj));
  (Wrd518.Obj) = ((Wrd520.pObj) [1]);

DEFLABEL (label_509)
  (Rsp [0]) = (Wrd518.Obj);
  goto lambda_82;

DEFLABEL (label_510)
  (Wrd526.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_74]))));
  (* (--Rsp)) = (Wrd526.Obj);
  (* (--Rsp)) = (Wrd521.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_294)
  (Wrd518.Obj) = Rvl;
  goto label_509;

DEFLABEL (lambda_373)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_3_70);
  (Wrd527.Obj) = (Rsp [0]);
  if ((Wrd527.Obj) == (current_block [OBJECT_3_0]))
    goto label_513;
  (Wrd530.uLng) = (OBJECT_TYPE (Wrd527.Obj));
  if (! ((Wrd530.uLng) == 1))
    goto label_435;
  if (! ((Wrd530.uLng) == 1))
    goto label_512;
  (Wrd534.pObj) = (OBJECT_ADDRESS (Wrd527.Obj));
  (Wrd532.Obj) = ((Wrd534.pObj) [1]);

DEFLABEL (label_511)
  (Rsp [0]) = (Wrd532.Obj);
  goto label_497;

DEFLABEL (label_512)
  (Wrd540.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_72]))));
  (* (--Rsp)) = (Wrd540.Obj);
  (* (--Rsp)) = (Wrd527.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_295)
  (Wrd532.Obj) = Rvl;
  goto label_511;

DEFLABEL (label_513)
  Rsp = (& (Rsp [1]));
  (Wrd545.Obj) = (Rsp [0]);
  (Wrd546.uLng) = (OBJECT_TYPE (Wrd545.Obj));
  if (! ((Wrd546.uLng) == 1))
    goto label_515;
  (Wrd544.pObj) = (OBJECT_ADDRESS (Wrd545.Obj));
  (Wrd542.Obj) = ((Wrd544.pObj) [1]);

DEFLABEL (label_514)
  (Rsp [0]) = (Wrd542.Obj);
  goto lambda_40;

DEFLABEL (label_515)
  (Wrd550.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_71]))));
  (* (--Rsp)) = (Wrd550.Obj);
  (* (--Rsp)) = (Wrd545.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_296)
  (Wrd542.Obj) = Rvl;
  goto label_514;

DEFLABEL (lambda_372)
DEFLABEL (lambda_119)
  INTERRUPT_CHECK (26, LABEL_3_55);
  (Wrd551.Obj) = (Rsp [0]);
  if ((Wrd551.Obj) == (current_block [OBJECT_3_0]))
    goto label_518;
  (Wrd554.uLng) = (OBJECT_TYPE (Wrd551.Obj));
  if (! ((Wrd554.uLng) == 1))
    goto label_397;
  if (! ((Wrd554.uLng) == 1))
    goto label_517;
  (Wrd558.pObj) = (OBJECT_ADDRESS (Wrd551.Obj));
  (Wrd556.Obj) = ((Wrd558.pObj) [1]);

DEFLABEL (label_516)
  (Rsp [0]) = (Wrd556.Obj);
  goto lambda_119;

DEFLABEL (label_517)
  (Wrd564.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_69]))));
  (* (--Rsp)) = (Wrd564.Obj);
  (* (--Rsp)) = (Wrd551.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_297)
  (Wrd556.Obj) = Rvl;
  goto label_516;

DEFLABEL (label_518)
  Rsp = (& (Rsp [1]));
  (Wrd569.Obj) = (Rsp [0]);
  (Wrd570.uLng) = (OBJECT_TYPE (Wrd569.Obj));
  if (! ((Wrd570.uLng) == 1))
    goto label_564;
  (Wrd568.pObj) = (OBJECT_ADDRESS (Wrd569.Obj));
  (Wrd566.Obj) = ((Wrd568.pObj) [1]);

DEFLABEL (label_563)
  (Wrd577.uLng) = (OBJECT_TYPE (Wrd566.Obj));
  if (! ((Wrd577.uLng) == 1))
    goto label_562;
  (Wrd576.pObj) = (OBJECT_ADDRESS (Wrd566.Obj));
  (Wrd575.Obj) = ((Wrd576.pObj) [1]);

DEFLABEL (label_561)
  (Wrd584.uLng) = (OBJECT_TYPE (Wrd575.Obj));
  if (! ((Wrd584.uLng) == 1))
    goto label_560;
  (Wrd583.pObj) = (OBJECT_ADDRESS (Wrd575.Obj));
  (Wrd582.Obj) = ((Wrd583.pObj) [1]);

DEFLABEL (label_559)
  (Wrd591.uLng) = (OBJECT_TYPE (Wrd582.Obj));
  if (! ((Wrd591.uLng) == 1))
    goto label_558;
  (Wrd589.pObj) = (OBJECT_ADDRESS (Wrd582.Obj));
  (Wrd590.Obj) = ((Wrd589.pObj) [1]);
  (* (--Rsp)) = (Wrd590.Obj);

DEFLABEL (label_557)
  (Wrd599.Obj) = (Rsp [1]);
  (Wrd600.uLng) = (OBJECT_TYPE (Wrd599.Obj));
  if (! ((Wrd600.uLng) == 1))
    goto label_556;
  (Wrd598.pObj) = (OBJECT_ADDRESS (Wrd599.Obj));
  (Wrd596.Obj) = ((Wrd598.pObj) [1]);

DEFLABEL (label_555)
  (Wrd607.uLng) = (OBJECT_TYPE (Wrd596.Obj));
  if (! ((Wrd607.uLng) == 1))
    goto label_554;
  (Wrd606.pObj) = (OBJECT_ADDRESS (Wrd596.Obj));
  (Wrd605.Obj) = ((Wrd606.pObj) [1]);

DEFLABEL (label_553)
  (Wrd614.uLng) = (OBJECT_TYPE (Wrd605.Obj));
  if (! ((Wrd614.uLng) == 1))
    goto label_552;
  (Wrd613.pObj) = (OBJECT_ADDRESS (Wrd605.Obj));
  (Wrd612.Obj) = ((Wrd613.pObj) [1]);

DEFLABEL (label_551)
  (Wrd621.uLng) = (OBJECT_TYPE (Wrd612.Obj));
  if (! ((Wrd621.uLng) == 1))
    goto label_550;
  (Wrd619.pObj) = (OBJECT_ADDRESS (Wrd612.Obj));
  (Wrd620.Obj) = ((Wrd619.pObj) [0]);
  (* (--Rsp)) = (Wrd620.Obj);

DEFLABEL (label_549)
  (Wrd629.Obj) = (Rsp [2]);
  (Wrd630.uLng) = (OBJECT_TYPE (Wrd629.Obj));
  if (! ((Wrd630.uLng) == 1))
    goto label_548;
  (Wrd628.pObj) = (OBJECT_ADDRESS (Wrd629.Obj));
  (Wrd626.Obj) = ((Wrd628.pObj) [1]);

DEFLABEL (label_547)
  (Wrd637.uLng) = (OBJECT_TYPE (Wrd626.Obj));
  if (! ((Wrd637.uLng) == 1))
    goto label_546;
  (Wrd636.pObj) = (OBJECT_ADDRESS (Wrd626.Obj));
  (Wrd635.Obj) = ((Wrd636.pObj) [1]);

DEFLABEL (label_545)
  (Wrd644.uLng) = (OBJECT_TYPE (Wrd635.Obj));
  if (! ((Wrd644.uLng) == 1))
    goto label_544;
  (Wrd643.pObj) = (OBJECT_ADDRESS (Wrd635.Obj));
  (Wrd642.Obj) = ((Wrd643.pObj) [0]);

DEFLABEL (label_543)
  (Wrd651.uLng) = (OBJECT_TYPE (Wrd642.Obj));
  if (! ((Wrd651.uLng) == 1))
    goto label_542;
  (Wrd650.pObj) = (OBJECT_ADDRESS (Wrd642.Obj));
  (Wrd649.Obj) = ((Wrd650.pObj) [0]);

DEFLABEL (label_541)
  (Wrd659.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd649.Obj);
  (* (Rhp++)) = (Wrd659.Obj);
  (Wrd657.pObj) = (& (Rhp [-2]));
  (Wrd658.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd657.pObj)));
  (* (--Rsp)) = (Wrd658.Obj);
  (Wrd662.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_68]))));
  (* (--Rsp)) = (Wrd662.Obj);
  (Wrd663.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd663.Obj);
  (Wrd664.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd664.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_3_68);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_126]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_167)
  INTERRUPT_CHECK (27, LABEL_3_126);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_540;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_539)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_538;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_537)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_536;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_535)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_534;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_533)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd48.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd52.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_532;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_531)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_530;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_529)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_528;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_527)
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_526;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd79.Obj) = ((Wrd80.pObj) [1]);

DEFLABEL (label_525)
  (Wrd86.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd86.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_524;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd90.Obj) = ((Wrd92.pObj) [1]);

DEFLABEL (label_523)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_522;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd99.Obj) = ((Wrd100.pObj) [0]);

DEFLABEL (label_521)
  (Wrd106.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd106.Obj);
  (Wrd108.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd108.pObj)));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd113.Obj) = (Rsp [1]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_520;
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd110.Obj) = ((Wrd112.pObj) [0]);

DEFLABEL (label_519)
  (Wrd119.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd110.Obj);
  (* (Rhp++)) = (Wrd119.Obj);
  (Wrd122.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd122.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_520)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_137]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_368)
  (Wrd110.Obj) = Rvl;
  goto label_519;

DEFLABEL (label_522)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_136]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_367)
  (Wrd99.Obj) = Rvl;
  goto label_521;

DEFLABEL (label_524)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_135]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_366)
  (Wrd90.Obj) = Rvl;
  goto label_523;

DEFLABEL (label_526)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_134]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_365)
  (Wrd79.Obj) = Rvl;
  goto label_525;

DEFLABEL (label_528)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_133]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_364)
  (Wrd72.Obj) = Rvl;
  goto label_527;

DEFLABEL (label_530)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_132]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_363)
  (Wrd65.Obj) = Rvl;
  goto label_529;

DEFLABEL (label_532)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_131]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_362)
  (Wrd56.Obj) = Rvl;
  goto label_531;

DEFLABEL (label_534)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_130]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_361)
  (Wrd37.Obj) = Rvl;
  goto label_533;

DEFLABEL (label_536)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_129]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_360)
  (Wrd30.Obj) = Rvl;
  goto label_535;

DEFLABEL (label_538)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_128]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_359)
  (Wrd23.Obj) = Rvl;
  goto label_537;

DEFLABEL (label_540)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_127]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_358)
  (Wrd14.Obj) = Rvl;
  goto label_539;

DEFLABEL (label_542)
  (Wrd655.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_67]))));
  (* (--Rsp)) = (Wrd655.Obj);
  (* (--Rsp)) = (Wrd642.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_309)
  (Wrd649.Obj) = Rvl;
  goto label_541;

DEFLABEL (label_544)
  (Wrd648.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_66]))));
  (* (--Rsp)) = (Wrd648.Obj);
  (* (--Rsp)) = (Wrd635.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_308)
  (Wrd642.Obj) = Rvl;
  goto label_543;

DEFLABEL (label_546)
  (Wrd641.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_65]))));
  (* (--Rsp)) = (Wrd641.Obj);
  (* (--Rsp)) = (Wrd626.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_307)
  (Wrd635.Obj) = Rvl;
  goto label_545;

DEFLABEL (label_548)
  (Wrd634.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_64]))));
  (* (--Rsp)) = (Wrd634.Obj);
  (* (--Rsp)) = (Wrd629.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_306)
  (Wrd626.Obj) = Rvl;
  goto label_547;

DEFLABEL (label_550)
  (Wrd625.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_63]))));
  (* (--Rsp)) = (Wrd625.Obj);
  (* (--Rsp)) = (Wrd612.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_305)
  (* (--Rsp)) = Rvl;
  goto label_549;

DEFLABEL (label_552)
  (Wrd618.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_62]))));
  (* (--Rsp)) = (Wrd618.Obj);
  (* (--Rsp)) = (Wrd605.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_304)
  (Wrd612.Obj) = Rvl;
  goto label_551;

DEFLABEL (label_554)
  (Wrd611.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_61]))));
  (* (--Rsp)) = (Wrd611.Obj);
  (* (--Rsp)) = (Wrd596.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_303)
  (Wrd605.Obj) = Rvl;
  goto label_553;

DEFLABEL (label_556)
  (Wrd604.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_60]))));
  (* (--Rsp)) = (Wrd604.Obj);
  (* (--Rsp)) = (Wrd599.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_302)
  (Wrd596.Obj) = Rvl;
  goto label_555;

DEFLABEL (label_558)
  (Wrd595.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_59]))));
  (* (--Rsp)) = (Wrd595.Obj);
  (* (--Rsp)) = (Wrd582.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_301)
  (* (--Rsp)) = Rvl;
  goto label_557;

DEFLABEL (label_560)
  (Wrd588.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_58]))));
  (* (--Rsp)) = (Wrd588.Obj);
  (* (--Rsp)) = (Wrd575.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_300)
  (Wrd582.Obj) = Rvl;
  goto label_559;

DEFLABEL (label_562)
  (Wrd581.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_57]))));
  (* (--Rsp)) = (Wrd581.Obj);
  (* (--Rsp)) = (Wrd566.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_299)
  (Wrd575.Obj) = Rvl;
  goto label_561;

DEFLABEL (label_564)
  (Wrd574.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_56]))));
  (* (--Rsp)) = (Wrd574.Obj);
  (* (--Rsp)) = (Wrd569.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_298)
  (Wrd566.Obj) = Rvl;
  goto label_563;

DEFLABEL (lambda_371)
DEFLABEL (lambda_82)
  INTERRUPT_CHECK (26, LABEL_3_33);
  (Wrd665.Obj) = (Rsp [0]);
  if ((Wrd665.Obj) == (current_block [OBJECT_3_0]))
    goto label_567;
  (Wrd668.uLng) = (OBJECT_TYPE (Wrd665.Obj));
  if (! ((Wrd668.uLng) == 1))
    goto label_411;
  if (! ((Wrd668.uLng) == 1))
    goto label_566;
  (Wrd672.pObj) = (OBJECT_ADDRESS (Wrd665.Obj));
  (Wrd670.Obj) = ((Wrd672.pObj) [1]);

DEFLABEL (label_565)
  (Rsp [0]) = (Wrd670.Obj);
  goto lambda_82;

DEFLABEL (label_566)
  (Wrd678.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_54]))));
  (* (--Rsp)) = (Wrd678.Obj);
  (* (--Rsp)) = (Wrd665.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_310)
  (Wrd670.Obj) = Rvl;
  goto label_565;

DEFLABEL (label_567)
  Rsp = (& (Rsp [1]));
  (Wrd683.Obj) = (Rsp [0]);
  (Wrd684.uLng) = (OBJECT_TYPE (Wrd683.Obj));
  if (! ((Wrd684.uLng) == 1))
    goto label_607;
  (Wrd682.pObj) = (OBJECT_ADDRESS (Wrd683.Obj));
  (Wrd680.Obj) = ((Wrd682.pObj) [1]);

DEFLABEL (label_606)
  (Wrd691.uLng) = (OBJECT_TYPE (Wrd680.Obj));
  if (! ((Wrd691.uLng) == 1))
    goto label_605;
  (Wrd690.pObj) = (OBJECT_ADDRESS (Wrd680.Obj));
  (Wrd689.Obj) = ((Wrd690.pObj) [1]);

DEFLABEL (label_604)
  (Wrd698.uLng) = (OBJECT_TYPE (Wrd689.Obj));
  if (! ((Wrd698.uLng) == 1))
    goto label_603;
  (Wrd697.pObj) = (OBJECT_ADDRESS (Wrd689.Obj));
  (Wrd696.Obj) = ((Wrd697.pObj) [1]);

DEFLABEL (label_602)
  (Wrd705.uLng) = (OBJECT_TYPE (Wrd696.Obj));
  if (! ((Wrd705.uLng) == 1))
    goto label_601;
  (Wrd703.pObj) = (OBJECT_ADDRESS (Wrd696.Obj));
  (Wrd704.Obj) = ((Wrd703.pObj) [1]);
  (* (--Rsp)) = (Wrd704.Obj);

DEFLABEL (label_600)
  (Wrd713.Obj) = (Rsp [1]);
  (Wrd714.uLng) = (OBJECT_TYPE (Wrd713.Obj));
  if (! ((Wrd714.uLng) == 1))
    goto label_599;
  (Wrd712.pObj) = (OBJECT_ADDRESS (Wrd713.Obj));
  (Wrd710.Obj) = ((Wrd712.pObj) [1]);

DEFLABEL (label_598)
  (Wrd721.uLng) = (OBJECT_TYPE (Wrd710.Obj));
  if (! ((Wrd721.uLng) == 1))
    goto label_597;
  (Wrd720.pObj) = (OBJECT_ADDRESS (Wrd710.Obj));
  (Wrd719.Obj) = ((Wrd720.pObj) [1]);

DEFLABEL (label_596)
  (Wrd728.uLng) = (OBJECT_TYPE (Wrd719.Obj));
  if (! ((Wrd728.uLng) == 1))
    goto label_595;
  (Wrd727.pObj) = (OBJECT_ADDRESS (Wrd719.Obj));
  (Wrd726.Obj) = ((Wrd727.pObj) [1]);

DEFLABEL (label_594)
  (Wrd735.uLng) = (OBJECT_TYPE (Wrd726.Obj));
  if (! ((Wrd735.uLng) == 1))
    goto label_593;
  (Wrd734.pObj) = (OBJECT_ADDRESS (Wrd726.Obj));
  (Wrd733.Obj) = ((Wrd734.pObj) [0]);

DEFLABEL (label_592)
  (Wrd740.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd733.Obj);
  (* (Rhp++)) = (Wrd740.Obj);
  (Wrd742.pObj) = (& (Rhp [-2]));
  (Wrd743.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd742.pObj)));
  (* (--Rsp)) = (Wrd743.Obj);
  (Wrd747.Obj) = (Rsp [1]);
  (Wrd748.uLng) = (OBJECT_TYPE (Wrd747.Obj));
  if (! ((Wrd748.uLng) == 1))
    goto label_591;
  (Wrd746.pObj) = (OBJECT_ADDRESS (Wrd747.Obj));
  (Wrd744.Obj) = ((Wrd746.pObj) [1]);

DEFLABEL (label_590)
  (Wrd755.uLng) = (OBJECT_TYPE (Wrd744.Obj));
  if (! ((Wrd755.uLng) == 1))
    goto label_589;
  (Wrd754.pObj) = (OBJECT_ADDRESS (Wrd744.Obj));
  (Wrd753.Obj) = ((Wrd754.pObj) [1]);

DEFLABEL (label_588)
  (Wrd762.uLng) = (OBJECT_TYPE (Wrd753.Obj));
  if (! ((Wrd762.uLng) == 1))
    goto label_587;
  (Wrd761.pObj) = (OBJECT_ADDRESS (Wrd753.Obj));
  (Wrd760.Obj) = ((Wrd761.pObj) [0]);

DEFLABEL (label_586)
  (Wrd769.uLng) = (OBJECT_TYPE (Wrd760.Obj));
  if (! ((Wrd769.uLng) == 1))
    goto label_585;
  (Wrd767.pObj) = (OBJECT_ADDRESS (Wrd760.Obj));
  (Wrd768.Obj) = ((Wrd767.pObj) [1]);
  (* (--Rsp)) = (Wrd768.Obj);

DEFLABEL (label_584)
  (Wrd777.Obj) = (Rsp [2]);
  (Wrd778.uLng) = (OBJECT_TYPE (Wrd777.Obj));
  if (! ((Wrd778.uLng) == 1))
    goto label_583;
  (Wrd776.pObj) = (OBJECT_ADDRESS (Wrd777.Obj));
  (Wrd774.Obj) = ((Wrd776.pObj) [1]);

DEFLABEL (label_582)
  (Wrd785.uLng) = (OBJECT_TYPE (Wrd774.Obj));
  if (! ((Wrd785.uLng) == 1))
    goto label_581;
  (Wrd784.pObj) = (OBJECT_ADDRESS (Wrd774.Obj));
  (Wrd783.Obj) = ((Wrd784.pObj) [1]);

DEFLABEL (label_580)
  (Wrd792.uLng) = (OBJECT_TYPE (Wrd783.Obj));
  if (! ((Wrd792.uLng) == 1))
    goto label_579;
  (Wrd791.pObj) = (OBJECT_ADDRESS (Wrd783.Obj));
  (Wrd790.Obj) = ((Wrd791.pObj) [0]);

DEFLABEL (label_578)
  (Wrd799.uLng) = (OBJECT_TYPE (Wrd790.Obj));
  if (! ((Wrd799.uLng) == 1))
    goto label_577;
  (Wrd798.pObj) = (OBJECT_ADDRESS (Wrd790.Obj));
  (Wrd797.Obj) = ((Wrd798.pObj) [0]);

DEFLABEL (label_576)
  (Wrd806.uLng) = (OBJECT_TYPE (Wrd797.Obj));
  if (! ((Wrd806.uLng) == 1))
    goto label_575;
  (Wrd805.pObj) = (OBJECT_ADDRESS (Wrd797.Obj));
  (Wrd804.Obj) = ((Wrd805.pObj) [0]);

DEFLABEL (label_574)
  (Wrd811.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd804.Obj);
  (* (Rhp++)) = (Wrd811.Obj);
  (Wrd814.pObj) = (& (Rhp [-2]));
  (Wrd812.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd814.pObj)));
  (Wrd815.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd812.Obj);
  (* (Rhp++)) = (Wrd815.Obj);
  (Wrd817.pObj) = (& (Rhp [-2]));
  (Wrd818.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd817.pObj)));
  (* (--Rsp)) = (Wrd818.Obj);
  (Wrd822.Obj) = (Rsp [1]);
  (Wrd823.uLng) = (OBJECT_TYPE (Wrd822.Obj));
  if (! ((Wrd823.uLng) == 1))
    goto label_573;
  (Wrd821.pObj) = (OBJECT_ADDRESS (Wrd822.Obj));
  (Wrd819.Obj) = ((Wrd821.pObj) [1]);

DEFLABEL (label_572)
  (Wrd830.uLng) = (OBJECT_TYPE (Wrd819.Obj));
  if (! ((Wrd830.uLng) == 1))
    goto label_571;
  (Wrd829.pObj) = (OBJECT_ADDRESS (Wrd819.Obj));
  (Wrd828.Obj) = ((Wrd829.pObj) [0]);

DEFLABEL (label_570)
  (Wrd835.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd828.Obj);
  (* (Rhp++)) = (Wrd835.Obj);
  (Wrd837.pObj) = (& (Rhp [-2]));
  (Wrd838.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd837.pObj)));
  (* (--Rsp)) = (Wrd838.Obj);
  (Wrd842.Obj) = (Rsp [1]);
  (Wrd843.uLng) = (OBJECT_TYPE (Wrd842.Obj));
  if (! ((Wrd843.uLng) == 1))
    goto label_569;
  (Wrd841.pObj) = (OBJECT_ADDRESS (Wrd842.Obj));
  (Wrd839.Obj) = ((Wrd841.pObj) [0]);

DEFLABEL (label_568)
  (Wrd848.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd839.Obj);
  (* (Rhp++)) = (Wrd848.Obj);
  goto label_459;

DEFLABEL (label_569)
  (Wrd847.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_53]))));
  (* (--Rsp)) = (Wrd847.Obj);
  (* (--Rsp)) = (Wrd842.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_330)
  (Wrd839.Obj) = Rvl;
  goto label_568;

DEFLABEL (label_571)
  (Wrd834.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_52]))));
  (* (--Rsp)) = (Wrd834.Obj);
  (* (--Rsp)) = (Wrd819.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_329)
  (Wrd828.Obj) = Rvl;
  goto label_570;

DEFLABEL (label_573)
  (Wrd827.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_51]))));
  (* (--Rsp)) = (Wrd827.Obj);
  (* (--Rsp)) = (Wrd822.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_328)
  (Wrd819.Obj) = Rvl;
  goto label_572;

DEFLABEL (label_575)
  (Wrd810.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_50]))));
  (* (--Rsp)) = (Wrd810.Obj);
  (* (--Rsp)) = (Wrd797.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_327)
  (Wrd804.Obj) = Rvl;
  goto label_574;

DEFLABEL (label_577)
  (Wrd803.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_49]))));
  (* (--Rsp)) = (Wrd803.Obj);
  (* (--Rsp)) = (Wrd790.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_326)
  (Wrd797.Obj) = Rvl;
  goto label_576;

DEFLABEL (label_579)
  (Wrd796.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_48]))));
  (* (--Rsp)) = (Wrd796.Obj);
  (* (--Rsp)) = (Wrd783.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_325)
  (Wrd790.Obj) = Rvl;
  goto label_578;

DEFLABEL (label_581)
  (Wrd789.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_47]))));
  (* (--Rsp)) = (Wrd789.Obj);
  (* (--Rsp)) = (Wrd774.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_324)
  (Wrd783.Obj) = Rvl;
  goto label_580;

DEFLABEL (label_583)
  (Wrd782.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_46]))));
  (* (--Rsp)) = (Wrd782.Obj);
  (* (--Rsp)) = (Wrd777.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_323)
  (Wrd774.Obj) = Rvl;
  goto label_582;

DEFLABEL (label_585)
  (Wrd773.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_45]))));
  (* (--Rsp)) = (Wrd773.Obj);
  (* (--Rsp)) = (Wrd760.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_322)
  (* (--Rsp)) = Rvl;
  goto label_584;

DEFLABEL (label_587)
  (Wrd766.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_44]))));
  (* (--Rsp)) = (Wrd766.Obj);
  (* (--Rsp)) = (Wrd753.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_321)
  (Wrd760.Obj) = Rvl;
  goto label_586;

DEFLABEL (label_589)
  (Wrd759.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_43]))));
  (* (--Rsp)) = (Wrd759.Obj);
  (* (--Rsp)) = (Wrd744.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_320)
  (Wrd753.Obj) = Rvl;
  goto label_588;

DEFLABEL (label_591)
  (Wrd752.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_42]))));
  (* (--Rsp)) = (Wrd752.Obj);
  (* (--Rsp)) = (Wrd747.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_319)
  (Wrd744.Obj) = Rvl;
  goto label_590;

DEFLABEL (label_593)
  (Wrd739.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_41]))));
  (* (--Rsp)) = (Wrd739.Obj);
  (* (--Rsp)) = (Wrd726.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_318)
  (Wrd733.Obj) = Rvl;
  goto label_592;

DEFLABEL (label_595)
  (Wrd732.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd732.Obj);
  (* (--Rsp)) = (Wrd719.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_317)
  (Wrd726.Obj) = Rvl;
  goto label_594;

DEFLABEL (label_597)
  (Wrd725.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_39]))));
  (* (--Rsp)) = (Wrd725.Obj);
  (* (--Rsp)) = (Wrd710.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_316)
  (Wrd719.Obj) = Rvl;
  goto label_596;

DEFLABEL (label_599)
  (Wrd718.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd718.Obj);
  (* (--Rsp)) = (Wrd713.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_315)
  (Wrd710.Obj) = Rvl;
  goto label_598;

DEFLABEL (label_601)
  (Wrd709.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd709.Obj);
  (* (--Rsp)) = (Wrd696.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_314)
  (* (--Rsp)) = Rvl;
  goto label_600;

DEFLABEL (label_603)
  (Wrd702.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd702.Obj);
  (* (--Rsp)) = (Wrd689.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_313)
  (Wrd696.Obj) = Rvl;
  goto label_602;

DEFLABEL (label_605)
  (Wrd695.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd695.Obj);
  (* (--Rsp)) = (Wrd680.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_312)
  (Wrd689.Obj) = Rvl;
  goto label_604;

DEFLABEL (label_607)
  (Wrd688.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd688.Obj);
  (* (--Rsp)) = (Wrd683.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_311)
  (Wrd680.Obj) = Rvl;
  goto label_606;

DEFLABEL (lambda_370)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd853.Obj) = (Rsp [0]);
  if ((Wrd853.Obj) == (current_block [OBJECT_3_0]))
    goto label_610;
  (Wrd856.uLng) = (OBJECT_TYPE (Wrd853.Obj));
  if (! ((Wrd856.uLng) == 1))
    goto label_433;
  if (! ((Wrd856.uLng) == 1))
    goto label_609;
  (Wrd860.pObj) = (OBJECT_ADDRESS (Wrd853.Obj));
  (Wrd858.Obj) = ((Wrd860.pObj) [1]);

DEFLABEL (label_608)
  (Rsp [0]) = (Wrd858.Obj);
  goto lambda_40;

DEFLABEL (label_609)
  (Wrd866.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd866.Obj);
  (* (--Rsp)) = (Wrd853.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_331)
  (Wrd858.Obj) = Rvl;
  goto label_608;

DEFLABEL (label_610)
  Rsp = (& (Rsp [1]));
  (Wrd871.Obj) = (Rsp [0]);
  (Wrd872.uLng) = (OBJECT_TYPE (Wrd871.Obj));
  if (! ((Wrd872.uLng) == 1))
    goto label_662;
  (Wrd870.pObj) = (OBJECT_ADDRESS (Wrd871.Obj));
  (Wrd868.Obj) = ((Wrd870.pObj) [1]);

DEFLABEL (label_661)
  (Wrd879.uLng) = (OBJECT_TYPE (Wrd868.Obj));
  if (! ((Wrd879.uLng) == 1))
    goto label_660;
  (Wrd878.pObj) = (OBJECT_ADDRESS (Wrd868.Obj));
  (Wrd877.Obj) = ((Wrd878.pObj) [1]);

DEFLABEL (label_659)
  (Wrd886.uLng) = (OBJECT_TYPE (Wrd877.Obj));
  if (! ((Wrd886.uLng) == 1))
    goto label_658;
  (Wrd885.pObj) = (OBJECT_ADDRESS (Wrd877.Obj));
  (Wrd884.Obj) = ((Wrd885.pObj) [1]);

DEFLABEL (label_657)
  (Wrd893.uLng) = (OBJECT_TYPE (Wrd884.Obj));
  if (! ((Wrd893.uLng) == 1))
    goto label_656;
  (Wrd891.pObj) = (OBJECT_ADDRESS (Wrd884.Obj));
  (Wrd892.Obj) = ((Wrd891.pObj) [1]);
  (* (--Rsp)) = (Wrd892.Obj);

DEFLABEL (label_655)
  (Wrd901.Obj) = (Rsp [1]);
  (Wrd902.uLng) = (OBJECT_TYPE (Wrd901.Obj));
  if (! ((Wrd902.uLng) == 1))
    goto label_654;
  (Wrd900.pObj) = (OBJECT_ADDRESS (Wrd901.Obj));
  (Wrd898.Obj) = ((Wrd900.pObj) [1]);

DEFLABEL (label_653)
  (Wrd909.uLng) = (OBJECT_TYPE (Wrd898.Obj));
  if (! ((Wrd909.uLng) == 1))
    goto label_652;
  (Wrd908.pObj) = (OBJECT_ADDRESS (Wrd898.Obj));
  (Wrd907.Obj) = ((Wrd908.pObj) [1]);

DEFLABEL (label_651)
  (Wrd916.uLng) = (OBJECT_TYPE (Wrd907.Obj));
  if (! ((Wrd916.uLng) == 1))
    goto label_650;
  (Wrd915.pObj) = (OBJECT_ADDRESS (Wrd907.Obj));
  (Wrd914.Obj) = ((Wrd915.pObj) [1]);

DEFLABEL (label_649)
  (Wrd923.uLng) = (OBJECT_TYPE (Wrd914.Obj));
  if (! ((Wrd923.uLng) == 1))
    goto label_648;
  (Wrd921.pObj) = (OBJECT_ADDRESS (Wrd914.Obj));
  (Wrd922.Obj) = ((Wrd921.pObj) [0]);
  (* (--Rsp)) = (Wrd922.Obj);

DEFLABEL (label_647)
  (Wrd931.Obj) = (Rsp [2]);
  (Wrd932.uLng) = (OBJECT_TYPE (Wrd931.Obj));
  if (! ((Wrd932.uLng) == 1))
    goto label_646;
  (Wrd930.pObj) = (OBJECT_ADDRESS (Wrd931.Obj));
  (Wrd928.Obj) = ((Wrd930.pObj) [1]);

DEFLABEL (label_645)
  (Wrd939.uLng) = (OBJECT_TYPE (Wrd928.Obj));
  if (! ((Wrd939.uLng) == 1))
    goto label_644;
  (Wrd938.pObj) = (OBJECT_ADDRESS (Wrd928.Obj));
  (Wrd937.Obj) = ((Wrd938.pObj) [1]);

DEFLABEL (label_643)
  (Wrd946.uLng) = (OBJECT_TYPE (Wrd937.Obj));
  if (! ((Wrd946.uLng) == 1))
    goto label_642;
  (Wrd945.pObj) = (OBJECT_ADDRESS (Wrd937.Obj));
  (Wrd944.Obj) = ((Wrd945.pObj) [0]);

DEFLABEL (label_641)
  (Wrd953.uLng) = (OBJECT_TYPE (Wrd944.Obj));
  if (! ((Wrd953.uLng) == 1))
    goto label_640;
  (Wrd952.pObj) = (OBJECT_ADDRESS (Wrd944.Obj));
  (Wrd951.Obj) = ((Wrd952.pObj) [0]);

DEFLABEL (label_639)
  (Wrd960.uLng) = (OBJECT_TYPE (Wrd951.Obj));
  if (! ((Wrd960.uLng) == 1))
    goto label_638;
  (Wrd959.pObj) = (OBJECT_ADDRESS (Wrd951.Obj));
  (Wrd958.Obj) = ((Wrd959.pObj) [1]);

DEFLABEL (label_637)
  (Wrd967.uLng) = (OBJECT_TYPE (Wrd958.Obj));
  if (! ((Wrd967.uLng) == 1))
    goto label_636;
  (Wrd966.pObj) = (OBJECT_ADDRESS (Wrd958.Obj));
  (Wrd965.Obj) = ((Wrd966.pObj) [0]);

DEFLABEL (label_635)
  (Wrd975.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd965.Obj);
  (* (Rhp++)) = (Wrd975.Obj);
  (Wrd973.pObj) = (& (Rhp [-2]));
  (Wrd974.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd973.pObj)));
  (* (--Rsp)) = (Wrd974.Obj);
  (Wrd979.Obj) = (Rsp [3]);
  (Wrd980.uLng) = (OBJECT_TYPE (Wrd979.Obj));
  if (! ((Wrd980.uLng) == 1))
    goto label_634;
  (Wrd978.pObj) = (OBJECT_ADDRESS (Wrd979.Obj));
  (Wrd976.Obj) = ((Wrd978.pObj) [1]);

DEFLABEL (label_633)
  (Wrd987.uLng) = (OBJECT_TYPE (Wrd976.Obj));
  if (! ((Wrd987.uLng) == 1))
    goto label_632;
  (Wrd986.pObj) = (OBJECT_ADDRESS (Wrd976.Obj));
  (Wrd985.Obj) = ((Wrd986.pObj) [1]);

DEFLABEL (label_631)
  (Wrd994.uLng) = (OBJECT_TYPE (Wrd985.Obj));
  if (! ((Wrd994.uLng) == 1))
    goto label_630;
  (Wrd993.pObj) = (OBJECT_ADDRESS (Wrd985.Obj));
  (Wrd992.Obj) = ((Wrd993.pObj) [0]);

DEFLABEL (label_629)
  (Wrd1001.uLng) = (OBJECT_TYPE (Wrd992.Obj));
  if (! ((Wrd1001.uLng) == 1))
    goto label_628;
  (Wrd1000.pObj) = (OBJECT_ADDRESS (Wrd992.Obj));
  (Wrd999.Obj) = ((Wrd1000.pObj) [0]);

DEFLABEL (label_627)
  (Wrd1008.uLng) = (OBJECT_TYPE (Wrd999.Obj));
  if (! ((Wrd1008.uLng) == 1))
    goto label_626;
  (Wrd1007.pObj) = (OBJECT_ADDRESS (Wrd999.Obj));
  (Wrd1006.Obj) = ((Wrd1007.pObj) [0]);

DEFLABEL (label_625)
  (Wrd1013.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd1006.Obj);
  (* (Rhp++)) = (Wrd1013.Obj);
  (Wrd1016.pObj) = (& (Rhp [-2]));
  (Wrd1014.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1016.pObj)));
  (Wrd1017.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd1014.Obj);
  (* (Rhp++)) = (Wrd1017.Obj);
  (Wrd1020.pObj) = (& (Rhp [-2]));
  (Wrd1018.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1020.pObj)));
  (Wrd1021.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd1018.Obj);
  (* (Rhp++)) = (Wrd1021.Obj);
  (Wrd1023.pObj) = (& (Rhp [-2]));
  (Wrd1024.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1023.pObj)));
  (* (--Rsp)) = (Wrd1024.Obj);
  (Wrd1028.Obj) = (Rsp [1]);
  (Wrd1029.uLng) = (OBJECT_TYPE (Wrd1028.Obj));
  if (! ((Wrd1029.uLng) == 1))
    goto label_624;
  (Wrd1027.pObj) = (OBJECT_ADDRESS (Wrd1028.Obj));
  (Wrd1025.Obj) = ((Wrd1027.pObj) [1]);

DEFLABEL (label_623)
  (Wrd1036.uLng) = (OBJECT_TYPE (Wrd1025.Obj));
  if (! ((Wrd1036.uLng) == 1))
    goto label_622;
  (Wrd1035.pObj) = (OBJECT_ADDRESS (Wrd1025.Obj));
  (Wrd1034.Obj) = ((Wrd1035.pObj) [1]);

DEFLABEL (label_621)
  (Wrd1043.uLng) = (OBJECT_TYPE (Wrd1034.Obj));
  if (! ((Wrd1043.uLng) == 1))
    goto label_620;
  (Wrd1042.pObj) = (OBJECT_ADDRESS (Wrd1034.Obj));
  (Wrd1041.Obj) = ((Wrd1042.pObj) [0]);

DEFLABEL (label_619)
  (Wrd1050.uLng) = (OBJECT_TYPE (Wrd1041.Obj));
  if (! ((Wrd1050.uLng) == 1))
    goto label_618;
  (Wrd1049.pObj) = (OBJECT_ADDRESS (Wrd1041.Obj));
  (Wrd1048.Obj) = ((Wrd1049.pObj) [1]);

DEFLABEL (label_617)
  (Wrd1055.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd1048.Obj);
  (* (Rhp++)) = (Wrd1055.Obj);
  (Wrd1057.pObj) = (& (Rhp [-2]));
  (Wrd1058.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1057.pObj)));
  (* (--Rsp)) = (Wrd1058.Obj);
  (Wrd1062.Obj) = (Rsp [1]);
  (Wrd1063.uLng) = (OBJECT_TYPE (Wrd1062.Obj));
  if (! ((Wrd1063.uLng) == 1))
    goto label_616;
  (Wrd1061.pObj) = (OBJECT_ADDRESS (Wrd1062.Obj));
  (Wrd1059.Obj) = ((Wrd1061.pObj) [1]);

DEFLABEL (label_615)
  (Wrd1070.uLng) = (OBJECT_TYPE (Wrd1059.Obj));
  if (! ((Wrd1070.uLng) == 1))
    goto label_614;
  (Wrd1069.pObj) = (OBJECT_ADDRESS (Wrd1059.Obj));
  (Wrd1068.Obj) = ((Wrd1069.pObj) [0]);

DEFLABEL (label_613)
  (Wrd1075.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd1068.Obj);
  (* (Rhp++)) = (Wrd1075.Obj);
  (Wrd1077.pObj) = (& (Rhp [-2]));
  (Wrd1078.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1077.pObj)));
  (* (--Rsp)) = (Wrd1078.Obj);
  (Wrd1082.Obj) = (Rsp [1]);
  (Wrd1083.uLng) = (OBJECT_TYPE (Wrd1082.Obj));
  if (! ((Wrd1083.uLng) == 1))
    goto label_612;
  (Wrd1081.pObj) = (OBJECT_ADDRESS (Wrd1082.Obj));
  (Wrd1079.Obj) = ((Wrd1081.pObj) [0]);

DEFLABEL (label_611)
  (Wrd1088.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd1079.Obj);
  (* (Rhp++)) = (Wrd1088.Obj);
  goto label_459;

DEFLABEL (label_612)
  (Wrd1087.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd1087.Obj);
  (* (--Rsp)) = (Wrd1082.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_357)
  (Wrd1079.Obj) = Rvl;
  goto label_611;

DEFLABEL (label_614)
  (Wrd1074.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd1074.Obj);
  (* (--Rsp)) = (Wrd1059.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_356)
  (Wrd1068.Obj) = Rvl;
  goto label_613;

DEFLABEL (label_616)
  (Wrd1067.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd1067.Obj);
  (* (--Rsp)) = (Wrd1062.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_355)
  (Wrd1059.Obj) = Rvl;
  goto label_615;

DEFLABEL (label_618)
  (Wrd1054.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd1054.Obj);
  (* (--Rsp)) = (Wrd1041.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_354)
  (Wrd1048.Obj) = Rvl;
  goto label_617;

DEFLABEL (label_620)
  (Wrd1047.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd1047.Obj);
  (* (--Rsp)) = (Wrd1034.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_353)
  (Wrd1041.Obj) = Rvl;
  goto label_619;

DEFLABEL (label_622)
  (Wrd1040.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd1040.Obj);
  (* (--Rsp)) = (Wrd1025.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_352)
  (Wrd1034.Obj) = Rvl;
  goto label_621;

DEFLABEL (label_624)
  (Wrd1033.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd1033.Obj);
  (* (--Rsp)) = (Wrd1028.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_351)
  (Wrd1025.Obj) = Rvl;
  goto label_623;

DEFLABEL (label_626)
  (Wrd1012.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd1012.Obj);
  (* (--Rsp)) = (Wrd999.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_350)
  (Wrd1006.Obj) = Rvl;
  goto label_625;

DEFLABEL (label_628)
  (Wrd1005.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd1005.Obj);
  (* (--Rsp)) = (Wrd992.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_349)
  (Wrd999.Obj) = Rvl;
  goto label_627;

DEFLABEL (label_630)
  (Wrd998.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd998.Obj);
  (* (--Rsp)) = (Wrd985.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_348)
  (Wrd992.Obj) = Rvl;
  goto label_629;

DEFLABEL (label_632)
  (Wrd991.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd991.Obj);
  (* (--Rsp)) = (Wrd976.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_347)
  (Wrd985.Obj) = Rvl;
  goto label_631;

DEFLABEL (label_634)
  (Wrd984.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd984.Obj);
  (* (--Rsp)) = (Wrd979.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_346)
  (Wrd976.Obj) = Rvl;
  goto label_633;

DEFLABEL (label_636)
  (Wrd971.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd971.Obj);
  (* (--Rsp)) = (Wrd958.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_345)
  (Wrd965.Obj) = Rvl;
  goto label_635;

DEFLABEL (label_638)
  (Wrd964.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd964.Obj);
  (* (--Rsp)) = (Wrd951.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_344)
  (Wrd958.Obj) = Rvl;
  goto label_637;

DEFLABEL (label_640)
  (Wrd957.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd957.Obj);
  (* (--Rsp)) = (Wrd944.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_343)
  (Wrd951.Obj) = Rvl;
  goto label_639;

DEFLABEL (label_642)
  (Wrd950.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd950.Obj);
  (* (--Rsp)) = (Wrd937.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_342)
  (Wrd944.Obj) = Rvl;
  goto label_641;

DEFLABEL (label_644)
  (Wrd943.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd943.Obj);
  (* (--Rsp)) = (Wrd928.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_341)
  (Wrd937.Obj) = Rvl;
  goto label_643;

DEFLABEL (label_646)
  (Wrd936.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd936.Obj);
  (* (--Rsp)) = (Wrd931.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_340)
  (Wrd928.Obj) = Rvl;
  goto label_645;

DEFLABEL (label_648)
  (Wrd927.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd927.Obj);
  (* (--Rsp)) = (Wrd914.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_339)
  (* (--Rsp)) = Rvl;
  goto label_647;

DEFLABEL (label_650)
  (Wrd920.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd920.Obj);
  (* (--Rsp)) = (Wrd907.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_338)
  (Wrd914.Obj) = Rvl;
  goto label_649;

DEFLABEL (label_652)
  (Wrd913.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd913.Obj);
  (* (--Rsp)) = (Wrd898.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_337)
  (Wrd907.Obj) = Rvl;
  goto label_651;

DEFLABEL (label_654)
  (Wrd906.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd906.Obj);
  (* (--Rsp)) = (Wrd901.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_336)
  (Wrd898.Obj) = Rvl;
  goto label_653;

DEFLABEL (label_656)
  (Wrd897.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd897.Obj);
  (* (--Rsp)) = (Wrd884.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_335)
  (* (--Rsp)) = Rvl;
  goto label_655;

DEFLABEL (label_658)
  (Wrd890.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd890.Obj);
  (* (--Rsp)) = (Wrd877.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_334)
  (Wrd884.Obj) = Rvl;
  goto label_657;

DEFLABEL (label_660)
  (Wrd883.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd883.Obj);
  (* (--Rsp)) = (Wrd868.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_333)
  (Wrd877.Obj) = Rvl;
  goto label_659;

DEFLABEL (label_662)
  (Wrd876.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd876.Obj);
  (* (--Rsp)) = (Wrd871.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_332)
  (Wrd868.Obj) = Rvl;
  goto label_661;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_5 3
#define LABEL_4_6 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_9 11
#define LABEL_4_11 13
#define LABEL_4_4 15
#define LABEL_4_12 17
#define LABEL_4_13 19
#define LABEL_4_10 21
#define ENVIRONMENT_LABEL_4_3 30
#define DEBUGGING_LABEL_4_2 29
#define OBJECT_4_3 28
#define OBJECT_4_2 27
#define OBJECT_4_1 26
#define OBJECT_4_0 25
#define EXECUTE_CACHE_4_14 23
#define FREE_REFERENCES_LABEL_4_0 22
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cell_sugar_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_4_5);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_4_4);
      goto lambda_19;

    case 7:
      current_block = (Rpc - LABEL_4_12);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_30)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;

DEFLABEL (label_31)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (label_32)
  if (! ((Wrd6.uLng) == 1))
    goto label_38;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_37)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_34;

DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));
  goto label_31;

DEFLABEL (label_34)
  if (! ((Wrd19.uLng) == 1))
    goto label_36;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd21.Obj);
  goto lambda_9;

DEFLABEL (label_36)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_29)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (current_block [OBJECT_4_0]))
    goto label_41;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_33;
  if (! ((Wrd33.uLng) == 1))
    goto label_40;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd35.Obj);
  goto lambda_9;

DEFLABEL (label_40)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_23)
  (Wrd35.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_49;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_48)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_47;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [1]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_46)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_45;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_44)
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_43;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd70.Obj) = ((Wrd71.pObj) [0]);

DEFLABEL (label_42)
  (Wrd80.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd81.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd89.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_27)
  (Wrd70.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_26)
  (Wrd61.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_24)
  (Wrd45.Obj) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_5 3
#define LABEL_5_6 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_11 15
#define LABEL_5_12 17
#define LABEL_5_13 19
#define LABEL_5_14 21
#define LABEL_5_16 23
#define LABEL_5_17 25
#define LABEL_5_18 27
#define LABEL_5_19 29
#define LABEL_5_20 31
#define LABEL_5_21 33
#define LABEL_5_22 35
#define LABEL_5_24 37
#define LABEL_5_4 39
#define LABEL_5_25 41
#define LABEL_5_26 43
#define LABEL_5_27 45
#define LABEL_5_28 47
#define LABEL_5_29 49
#define LABEL_5_30 51
#define LABEL_5_23 53
#define LABEL_5_15 55
#define ENVIRONMENT_LABEL_5_3 65
#define DEBUGGING_LABEL_5_2 64
#define OBJECT_5_4 63
#define OBJECT_5_3 62
#define OBJECT_5_2 61
#define OBJECT_5_1 60
#define OBJECT_5_0 59
#define EXECUTE_CACHE_5_31 57
#define FREE_REFERENCES_LABEL_5_0 56
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cell_sugar_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
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
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd245;
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
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd75;
  machine_word Wrd128;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd118;
  machine_word Wrd138;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd115;
  machine_word Wrd152;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd142;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd240;
  machine_word Wrd239;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd230;
  machine_word Wrd231;
  machine_word Wrd232;
  machine_word Wrd229;
  machine_word Wrd223;
  machine_word Wrd224;
  machine_word Wrd225;
  machine_word Wrd222;
  machine_word Wrd214;
  machine_word Wrd216;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd213;
  machine_word Wrd207;
  machine_word Wrd209;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd197;
  machine_word Wrd199;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd186;
  machine_word Wrd187;
  machine_word Wrd188;
  machine_word Wrd185;
  machine_word Wrd179;
  machine_word Wrd180;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd169;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd154;
  machine_word Wrd156;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd139;
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
      current_block = (Rpc - LABEL_5_5);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_69;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_70;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_71;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_72;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_73;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto label_74;

    case 7:
      current_block = (Rpc - LABEL_5_12);
      goto label_75;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto label_76;

    case 9:
      current_block = (Rpc - LABEL_5_14);
      goto label_77;

    case 10:
      current_block = (Rpc - LABEL_5_16);
      goto label_68;

    case 11:
      current_block = (Rpc - LABEL_5_17);
      goto lambda_12;

    case 12:
      current_block = (Rpc - LABEL_5_18);
      goto label_67;

    case 13:
      current_block = (Rpc - LABEL_5_19);
      goto label_66;

    case 14:
      current_block = (Rpc - LABEL_5_20);
      goto lambda_34;

    case 15:
      current_block = (Rpc - LABEL_5_21);
      goto label_64;

    case 16:
      current_block = (Rpc - LABEL_5_22);
      goto label_65;

    case 17:
      current_block = (Rpc - LABEL_5_24);
      goto label_63;

    case 18:
      current_block = (Rpc - LABEL_5_4);
      goto lambda_55;

    case 19:
      current_block = (Rpc - LABEL_5_25);
      goto label_60;

    case 20:
      current_block = (Rpc - LABEL_5_26);
      goto label_61;

    case 21:
      current_block = (Rpc - LABEL_5_27);
      goto label_62;

    case 22:
      current_block = (Rpc - LABEL_5_28);
      goto label_57;

    case 23:
      current_block = (Rpc - LABEL_5_29);
      goto label_58;

    case 24:
      current_block = (Rpc - LABEL_5_30);
      goto label_59;

    case 25:
      current_block = (Rpc - LABEL_5_23);
      goto continuation_37;

    case 26:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_82)
DEFLABEL (lambda_55)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_94;

DEFLABEL (label_93)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_31]));

DEFLABEL (label_84)
  if (! ((Wrd8.uLng) == 1))
    goto label_92;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_91)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_86;

DEFLABEL (label_85)
  Rsp = (& (Rsp [1]));
  goto label_83;

DEFLABEL (label_86)
  if (! ((Wrd21.uLng) == 1))
    goto label_90;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_89)
  if (! ((Wrd23.Obj) == (current_block [OBJECT_5_0])))
    goto label_85;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_88;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_87)
  (Rsp [0]) = (Wrd33.Obj);
  goto lambda_34;

DEFLABEL (label_88)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_59)
  (Wrd33.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_29]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_58)
  (Wrd23.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  if (! ((Wrd6.uLng) == 1))
    goto label_104;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_103)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 1)
    goto label_96;

DEFLABEL (label_95)
  Rsp = (& (Rsp [1]));
  goto label_93;

DEFLABEL (label_96)
  if (! ((Wrd52.uLng) == 1))
    goto label_102;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_101)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 1)
    goto label_98;

DEFLABEL (label_97)
  Rsp = (& (Rsp [1]));
  goto label_95;

DEFLABEL (label_98)
  if (! ((Wrd64.uLng) == 1))
    goto label_100;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_99)
  (Rsp [0]) = (Wrd66.Obj);
  goto lambda_12;

DEFLABEL (label_100)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_62)
  (Wrd66.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (lambda_81)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_5_20);
  (Wrd75.Obj) = (Rsp [0]);
  if ((Wrd75.Obj) == (current_block [OBJECT_5_0]))
    goto label_107;
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_85;
  if (! ((Wrd78.uLng) == 1))
    goto label_106;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [1]);

DEFLABEL (label_105)
  (Rsp [0]) = (Wrd80.Obj);
  goto lambda_34;

DEFLABEL (label_106)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_63)
  (Wrd80.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  Rsp = (& (Rsp [1]));
  (Wrd93.Obj) = (Rsp [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_112;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd90.Obj) = ((Wrd92.pObj) [1]);

DEFLABEL (label_111)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_110;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd99.Obj) = ((Wrd100.pObj) [1]);

DEFLABEL (label_109)
  (Wrd109.Obj) = (current_block [OBJECT_5_0]);
  (* (Rhp++)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd99.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd113.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd113.Obj);

DEFLABEL (label_108)
  (Wrd245.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd245.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_110)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_65)
  (Wrd99.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_64)
  (Wrd90.Obj) = Rvl;
  goto label_111;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_5_23);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_80)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_5_17);
  (Wrd115.Obj) = (Rsp [0]);
  if ((Wrd115.Obj) == (current_block [OBJECT_5_0]))
    goto label_115;
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_97;
  if (! ((Wrd118.uLng) == 1))
    goto label_114;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd120.Obj) = ((Wrd122.pObj) [1]);

DEFLABEL (label_113)
  (Rsp [0]) = (Wrd120.Obj);
  goto lambda_12;

DEFLABEL (label_114)
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_66)
  (Wrd120.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_115)
  Rsp = (& (Rsp [1]));
  (Wrd133.Obj) = (Rsp [0]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if (! ((Wrd134.uLng) == 1))
    goto label_117;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd133.Obj));
  (Wrd130.Obj) = ((Wrd132.pObj) [1]);

DEFLABEL (label_116)
  (Rsp [0]) = (Wrd130.Obj);
  goto lambda_20;

DEFLABEL (label_117)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_67)
  (Wrd130.Obj) = Rvl;
  goto label_116;

DEFLABEL (lambda_79)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd139.Obj) = (Rsp [0]);
  if ((Wrd139.Obj) == (current_block [OBJECT_5_0]))
    goto label_120;
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if (! ((Wrd142.uLng) == 1))
    goto label_95;
  if (! ((Wrd142.uLng) == 1))
    goto label_119;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd144.Obj) = ((Wrd146.pObj) [1]);

DEFLABEL (label_118)
  (Rsp [0]) = (Wrd144.Obj);
  goto lambda_20;

DEFLABEL (label_119)
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_68)
  (Wrd144.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  Rsp = (& (Rsp [1]));
  (Wrd157.Obj) = (Rsp [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd158.uLng) == 1))
    goto label_138;
  (Wrd156.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd154.Obj) = ((Wrd156.pObj) [1]);

DEFLABEL (label_137)
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd165.uLng) == 1))
    goto label_136;
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd164.Obj) = ((Wrd163.pObj) [1]);
  (* (--Rsp)) = (Wrd164.Obj);

DEFLABEL (label_135)
  (Wrd173.Obj) = (Rsp [1]);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd173.Obj));
  if (! ((Wrd174.uLng) == 1))
    goto label_134;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd173.Obj));
  (Wrd170.Obj) = ((Wrd172.pObj) [1]);

DEFLABEL (label_133)
  (Wrd181.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd181.uLng) == 1))
    goto label_132;
  (Wrd180.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd179.Obj) = ((Wrd180.pObj) [0]);

DEFLABEL (label_131)
  (Wrd188.uLng) = (OBJECT_TYPE (Wrd179.Obj));
  if (! ((Wrd188.uLng) == 1))
    goto label_130;
  (Wrd187.pObj) = (OBJECT_ADDRESS (Wrd179.Obj));
  (Wrd186.Obj) = ((Wrd187.pObj) [1]);

DEFLABEL (label_129)
  (Wrd193.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd186.Obj);
  (* (Rhp++)) = (Wrd193.Obj);
  (Wrd195.pObj) = (& (Rhp [-2]));
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd195.pObj)));
  (* (--Rsp)) = (Wrd196.Obj);
  (Wrd200.Obj) = (Rsp [1]);
  (Wrd201.uLng) = (OBJECT_TYPE (Wrd200.Obj));
  if (! ((Wrd201.uLng) == 1))
    goto label_128;
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd200.Obj));
  (Wrd197.Obj) = ((Wrd199.pObj) [0]);

DEFLABEL (label_127)
  (Wrd206.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd197.Obj);
  (* (Rhp++)) = (Wrd206.Obj);
  (Wrd209.pObj) = (& (Rhp [-2]));
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd209.pObj)));
  (Wrd213.Obj) = (current_block [OBJECT_5_0]);
  (* (Rhp++)) = (Wrd207.Obj);
  (* (Rhp++)) = (Wrd213.Obj);
  (Wrd211.pObj) = (& (Rhp [-2]));
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd211.pObj)));
  (* (--Rsp)) = (Wrd212.Obj);
  (Wrd217.Obj) = (Rsp [1]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if (! ((Wrd218.uLng) == 1))
    goto label_126;
  (Wrd216.pObj) = (OBJECT_ADDRESS (Wrd217.Obj));
  (Wrd214.Obj) = ((Wrd216.pObj) [1]);

DEFLABEL (label_125)
  (Wrd225.uLng) = (OBJECT_TYPE (Wrd214.Obj));
  if (! ((Wrd225.uLng) == 1))
    goto label_124;
  (Wrd224.pObj) = (OBJECT_ADDRESS (Wrd214.Obj));
  (Wrd223.Obj) = ((Wrd224.pObj) [0]);

DEFLABEL (label_123)
  (Wrd232.uLng) = (OBJECT_TYPE (Wrd223.Obj));
  if (! ((Wrd232.uLng) == 1))
    goto label_122;
  (Wrd231.pObj) = (OBJECT_ADDRESS (Wrd223.Obj));
  (Wrd230.Obj) = ((Wrd231.pObj) [0]);

DEFLABEL (label_121)
  (Wrd237.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd230.Obj);
  (* (Rhp++)) = (Wrd237.Obj);
  (Wrd239.pObj) = (& (Rhp [-2]));
  (Wrd240.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd239.pObj)));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd243.Obj);
  (Wrd244.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd244.Obj);
  goto label_108;

DEFLABEL (label_122)
  (Wrd236.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd223.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_77)
  (Wrd230.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd229.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd229.Obj);
  (* (--Rsp)) = (Wrd214.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_76)
  (Wrd223.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd222.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd222.Obj);
  (* (--Rsp)) = (Wrd217.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_75)
  (Wrd214.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd200.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_74)
  (Wrd197.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd192.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd192.Obj);
  (* (--Rsp)) = (Wrd179.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_73)
  (Wrd186.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_72)
  (Wrd179.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_71)
  (Wrd170.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_69)
  (Wrd154.Obj) = Rvl;
  goto label_137;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_7 5
#define LABEL_6_8 7
#define LABEL_6_9 9
#define LABEL_6_11 11
#define LABEL_6_12 13
#define LABEL_6_13 15
#define LABEL_6_17 17
#define LABEL_6_18 19
#define LABEL_6_19 21
#define LABEL_6_20 23
#define LABEL_6_21 25
#define LABEL_6_22 27
#define LABEL_6_23 29
#define LABEL_6_25 31
#define LABEL_6_26 33
#define LABEL_6_27 35
#define LABEL_6_28 37
#define LABEL_6_29 39
#define LABEL_6_30 41
#define LABEL_6_31 43
#define LABEL_6_32 45
#define LABEL_6_33 47
#define LABEL_6_34 49
#define LABEL_6_35 51
#define LABEL_6_36 53
#define LABEL_6_37 55
#define LABEL_6_4 57
#define LABEL_6_38 59
#define LABEL_6_39 61
#define LABEL_6_40 63
#define LABEL_6_41 65
#define LABEL_6_24 67
#define LABEL_6_6 69
#define LABEL_6_45 71
#define LABEL_6_46 73
#define LABEL_6_47 75
#define LABEL_6_48 77
#define LABEL_6_10 79
#define LABEL_6_14 81
#define TAG_6_15 39
#define LABEL_6_50 83
#define LABEL_6_51 85
#define LABEL_6_52 87
#define LABEL_6_44 89
#define LABEL_6_53 91
#define LABEL_6_54 93
#define ENVIRONMENT_LABEL_6_3 115
#define DEBUGGING_LABEL_6_2 114
#define OBJECT_6_8 113
#define OBJECT_6_7 112
#define OBJECT_6_6 111
#define OBJECT_6_5 110
#define OBJECT_6_4 109
#define OBJECT_6_3 108
#define OBJECT_6_2 107
#define OBJECT_6_1 106
#define OBJECT_6_0 105
#define EXECUTE_CACHE_6_49 95
#define EXECUTE_CACHE_6_43 97
#define EXECUTE_CACHE_6_42 99
#define EXECUTE_CACHE_6_16 101
#define FREE_REFERENCE_6_0 104
#define FREE_REFERENCES_LABEL_6_0 94
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cell_sugar_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd93;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd80;
  machine_word Wrd154;
  machine_word Wrd146;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd131;
  machine_word Wrd129;
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd164;
  machine_word Wrd156;
  machine_word Wrd158;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd104;
  machine_word Wrd178;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd168;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd220;
  machine_word Wrd222;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd209;
  machine_word Wrd210;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd200;
  machine_word Wrd202;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd199;
  machine_word Wrd195;
  machine_word Wrd189;
  machine_word Wrd190;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd180;
  machine_word Wrd182;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd165;
  machine_word Wrd251;
  machine_word Wrd243;
  machine_word Wrd245;
  machine_word Wrd241;
  machine_word Wrd308;
  machine_word Wrd307;
  machine_word Wrd305;
  machine_word Wrd306;
  machine_word Wrd304;
  machine_word Wrd299;
  machine_word Wrd298;
  machine_word Wrd300;
  machine_word Wrd297;
  machine_word Wrd291;
  machine_word Wrd292;
  machine_word Wrd293;
  machine_word Wrd290;
  machine_word Wrd282;
  machine_word Wrd284;
  machine_word Wrd286;
  machine_word Wrd285;
  machine_word Wrd281;
  machine_word Wrd278;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd274;
  machine_word Wrd271;
  machine_word Wrd265;
  machine_word Wrd266;
  machine_word Wrd267;
  machine_word Wrd264;
  machine_word Wrd256;
  machine_word Wrd258;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd255;
  machine_word Wrd238;
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
      current_block = (Rpc - LABEL_6_5);
      goto lambda_49;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto label_105;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_106;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_107;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto label_108;

    case 5:
      current_block = (Rpc - LABEL_6_12);
      goto label_109;

    case 6:
      current_block = (Rpc - LABEL_6_13);
      goto label_110;

    case 7:
      current_block = (Rpc - LABEL_6_17);
      goto label_104;

    case 8:
      current_block = (Rpc - LABEL_6_18);
      goto lambda_17;

    case 9:
      current_block = (Rpc - LABEL_6_19);
      goto label_99;

    case 10:
      current_block = (Rpc - LABEL_6_20);
      goto label_100;

    case 11:
      current_block = (Rpc - LABEL_6_21);
      goto label_101;

    case 12:
      current_block = (Rpc - LABEL_6_22);
      goto label_102;

    case 13:
      current_block = (Rpc - LABEL_6_23);
      goto label_103;

    case 14:
      current_block = (Rpc - LABEL_6_25);
      goto label_98;

    case 15:
      current_block = (Rpc - LABEL_6_26);
      goto lambda_42;

    case 16:
      current_block = (Rpc - LABEL_6_27);
      goto label_97;

    case 17:
      current_block = (Rpc - LABEL_6_28);
      goto label_93;

    case 18:
      current_block = (Rpc - LABEL_6_29);
      goto label_94;

    case 19:
      current_block = (Rpc - LABEL_6_30);
      goto label_95;

    case 20:
      current_block = (Rpc - LABEL_6_31);
      goto label_96;

    case 21:
      current_block = (Rpc - LABEL_6_32);
      goto lambda_10;

    case 22:
      current_block = (Rpc - LABEL_6_33);
      goto label_92;

    case 23:
      current_block = (Rpc - LABEL_6_34);
      goto label_91;

    case 24:
      current_block = (Rpc - LABEL_6_35);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_6_36);
      goto label_89;

    case 26:
      current_block = (Rpc - LABEL_6_37);
      goto label_90;

    case 27:
      current_block = (Rpc - LABEL_6_4);
      goto lambda_83;

    case 28:
      current_block = (Rpc - LABEL_6_38);
      goto label_87;

    case 29:
      current_block = (Rpc - LABEL_6_39);
      goto label_88;

    case 30:
      current_block = (Rpc - LABEL_6_40);
      goto label_85;

    case 31:
      current_block = (Rpc - LABEL_6_41);
      goto label_86;

    case 32:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_74;

    case 33:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_72;

    case 34:
      current_block = (Rpc - LABEL_6_45);
      goto label_111;

    case 35:
      current_block = (Rpc - LABEL_6_46);
      goto label_112;

    case 36:
      current_block = (Rpc - LABEL_6_47);
      goto label_113;

    case 37:
      current_block = (Rpc - LABEL_6_48);
      goto label_114;

    case 38:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_68;

    case 39:
      current_block = (Rpc - LABEL_6_14);
      goto lambda_120;

    case 40:
      current_block = (Rpc - LABEL_6_50);
      goto label_115;

    case 41:
      current_block = (Rpc - LABEL_6_51);
      goto label_116;

    case 42:
      current_block = (Rpc - LABEL_6_52);
      goto label_117;

    case 43:
      current_block = (Rpc - LABEL_6_44);
      goto continuation_57;

    case 44:
      current_block = (Rpc - LABEL_6_53);
      goto continuation_58;

    case 45:
      current_block = (Rpc - LABEL_6_54);
      goto continuation_53;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_124)
DEFLABEL (lambda_83)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_138;

DEFLABEL (label_137)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_126;

DEFLABEL (label_125)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_43]));

DEFLABEL (label_126)
  if (! ((Wrd8.uLng) == 1))
    goto label_136;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_135)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_128;

DEFLABEL (label_127)
  Rsp = (& (Rsp [1]));
  goto label_125;

DEFLABEL (label_128)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_6_6]);
  (* (--Rsp)) = (Wrd26.Obj);
  if (! ((Wrd21.uLng) == 1))
    goto label_134;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_133)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_42]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_6_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_127;
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_132;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_131)
  (Rsp [0]) = (Wrd59.Obj);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_127;
  if (! ((Wrd69.uLng) == 1))
    goto label_130;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_129)
  goto lambda_42;

DEFLABEL (label_130)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_37]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_36]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_89)
  (Wrd59.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_41]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_40]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  if (! ((Wrd6.uLng) == 1))
    goto label_144;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_143)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 1)
    goto label_140;

DEFLABEL (label_139)
  Rsp = (& (Rsp [1]));
  goto label_137;

DEFLABEL (label_140)
  if (! ((Wrd46.uLng) == 1))
    goto label_142;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_141)
  goto lambda_10;

DEFLABEL (label_142)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_38]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_143;

DEFLABEL (lambda_123)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_6_32);
  (Wrd80.Obj) = (Rsp [0]);
  if ((Wrd80.Obj) == (current_block [OBJECT_6_0]))
    goto label_148;
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd83.uLng) == 1)
    goto label_145;
  Rsp = (& (Rsp [1]));
  goto label_139;

DEFLABEL (label_145)
  if (! ((Wrd83.uLng) == 1))
    goto label_147;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [1]);

DEFLABEL (label_146)
  (Rsp [0]) = (Wrd85.Obj);
  goto label_141;

DEFLABEL (label_147)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_34]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_91)
  (Wrd85.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_148)
  Rsp = (& (Rsp [1]));
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_150;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd95.Obj) = ((Wrd97.pObj) [1]);

DEFLABEL (label_149)
  (Rsp [0]) = (Wrd95.Obj);
  goto lambda_17;

DEFLABEL (label_150)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_92)
  (Wrd95.Obj) = Rvl;
  goto label_149;

DEFLABEL (lambda_122)
DEFLABEL (lambda_42)
  INTERRUPT_CHECK (26, LABEL_6_26);
  (Wrd104.Obj) = (Rsp [0]);
  if ((Wrd104.Obj) == (current_block [OBJECT_6_0]))
    goto label_166;
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd107.uLng) == 1)
    goto label_152;

DEFLABEL (label_151)
  Rsp = (& (Rsp [1]));
  goto label_127;

DEFLABEL (label_152)
  if (! ((Wrd107.uLng) == 1))
    goto label_165;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (* (--Rsp)) = (Wrd111.Obj);

DEFLABEL (label_164)
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd119.uLng) == 1)
    goto label_154;

DEFLABEL (label_153)
  Rsp = (& (Rsp [1]));
  goto label_151;

DEFLABEL (label_154)
  if (! ((Wrd119.uLng) == 1))
    goto label_163;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd121.Obj) = ((Wrd123.pObj) [1]);

DEFLABEL (label_162)
  (Rsp [0]) = (Wrd121.Obj);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd131.uLng) == 1))
    goto label_153;
  if (! ((Wrd131.uLng) == 1))
    goto label_161;
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd133.Obj) = ((Wrd135.pObj) [1]);

DEFLABEL (label_160)
  if ((Wrd133.Obj) == (current_block [OBJECT_6_0]))
    goto label_156;
  (Wrd143.Obj) = (current_block [OBJECT_6_5]);
  goto label_155;

DEFLABEL (label_156)
  (Wrd143.Obj) = (current_block [OBJECT_6_4]);

DEFLABEL (label_155)
DEFLABEL (label_159)
  Rsp = (& (Rsp [1]));
  if ((Wrd143.Obj) == ((SCHEME_OBJECT) 0))
    goto label_151;
  (Wrd149.Obj) = (Rsp [0]);
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd149.Obj));
  if (! ((Wrd150.uLng) == 1))
    goto label_158;
  (Wrd148.pObj) = (OBJECT_ADDRESS (Wrd149.Obj));
  (Wrd146.Obj) = ((Wrd148.pObj) [1]);

DEFLABEL (label_157)
  (Rsp [0]) = (Wrd146.Obj);
  goto label_129;

DEFLABEL (label_158)
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_96)
  (Wrd146.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_161)
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_30]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_95)
  (Wrd133.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_94)
  (Wrd121.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (label_166)
  Rsp = (& (Rsp [1]));
  (Wrd159.Obj) = (Rsp [0]);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd159.Obj));
  if (! ((Wrd160.uLng) == 1))
    goto label_168;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd159.Obj));
  (Wrd156.Obj) = ((Wrd158.pObj) [1]);

DEFLABEL (label_167)
  (Rsp [0]) = (Wrd156.Obj);
  goto lambda_49;

DEFLABEL (label_168)
  (Wrd164.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_97)
  (Wrd156.Obj) = Rvl;
  goto label_167;

DEFLABEL (lambda_121)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_6_18);
  (Wrd165.Obj) = (Rsp [0]);
  if ((Wrd165.Obj) == (current_block [OBJECT_6_0]))
    goto label_171;
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd168.uLng) == 1))
    goto label_139;
  if (! ((Wrd168.uLng) == 1))
    goto label_170;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd170.Obj) = ((Wrd172.pObj) [1]);

DEFLABEL (label_169)
  (Rsp [0]) = (Wrd170.Obj);
  goto lambda_17;

DEFLABEL (label_170)
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_98)
  (Wrd170.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_171)
  Rsp = (& (Rsp [1]));
  (Wrd183.Obj) = (Rsp [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if (! ((Wrd184.uLng) == 1))
    goto label_181;
  (Wrd182.pObj) = (OBJECT_ADDRESS (Wrd183.Obj));
  (Wrd180.Obj) = ((Wrd182.pObj) [1]);

DEFLABEL (label_180)
  (Wrd191.uLng) = (OBJECT_TYPE (Wrd180.Obj));
  if (! ((Wrd191.uLng) == 1))
    goto label_179;
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd180.Obj));
  (Wrd189.Obj) = ((Wrd190.pObj) [1]);

DEFLABEL (label_178)
  (Wrd199.Obj) = (current_block [OBJECT_6_0]);
  (* (Rhp++)) = (Wrd199.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd197.pObj) = (& (Rhp [-2]));
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd197.pObj)));
  (* (--Rsp)) = (Wrd198.Obj);
  (Wrd203.Obj) = (Rsp [1]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if (! ((Wrd204.uLng) == 1))
    goto label_177;
  (Wrd202.pObj) = (OBJECT_ADDRESS (Wrd203.Obj));
  (Wrd200.Obj) = ((Wrd202.pObj) [1]);

DEFLABEL (label_176)
  (Wrd211.uLng) = (OBJECT_TYPE (Wrd200.Obj));
  if (! ((Wrd211.uLng) == 1))
    goto label_175;
  (Wrd210.pObj) = (OBJECT_ADDRESS (Wrd200.Obj));
  (Wrd209.Obj) = ((Wrd210.pObj) [0]);

DEFLABEL (label_174)
  (Wrd216.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd209.Obj);
  (* (Rhp++)) = (Wrd216.Obj);
  (Wrd218.pObj) = (& (Rhp [-2]));
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd218.pObj)));
  (* (--Rsp)) = (Wrd219.Obj);
  (Wrd223.Obj) = (Rsp [1]);
  (Wrd224.uLng) = (OBJECT_TYPE (Wrd223.Obj));
  if (! ((Wrd224.uLng) == 1))
    goto label_173;
  (Wrd222.pObj) = (OBJECT_ADDRESS (Wrd223.Obj));
  (Wrd220.Obj) = ((Wrd222.pObj) [0]);

DEFLABEL (label_172)
  (Wrd229.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd220.Obj);
  (* (Rhp++)) = (Wrd229.Obj);
  (Wrd231.pObj) = (& (Rhp [-2]));
  (Wrd232.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd231.pObj)));
  (* (--Rsp)) = (Wrd232.Obj);
  (Wrd235.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd235.Obj);
  (Wrd236.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd236.Obj);
  (Wrd237.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd237.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_6_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_173)
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd223.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_103)
  (Wrd220.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd200.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_102)
  (Wrd209.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_101)
  (Wrd200.Obj) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_100)
  (Wrd189.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  (Wrd188.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_99)
  (Wrd180.Obj) = Rvl;
  goto label_180;

DEFLABEL (lambda_119)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_6_5);
  (Wrd238.Obj) = (Rsp [0]);
  if ((Wrd238.Obj) == (current_block [OBJECT_6_0]))
    goto label_184;
  (Wrd241.uLng) = (OBJECT_TYPE (Wrd238.Obj));
  if (! ((Wrd241.uLng) == 1))
    goto label_127;
  if (! ((Wrd241.uLng) == 1))
    goto label_183;
  (Wrd245.pObj) = (OBJECT_ADDRESS (Wrd238.Obj));
  (Wrd243.Obj) = ((Wrd245.pObj) [1]);

DEFLABEL (label_182)
  (Rsp [0]) = (Wrd243.Obj);
  goto lambda_49;

DEFLABEL (label_183)
  (Wrd251.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd251.Obj);
  (* (--Rsp)) = (Wrd238.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_104)
  (Wrd243.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_184)
  Rsp = (& (Rsp [1]));
  (Wrd255.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd255.Obj);
  (Wrd259.Obj) = (Rsp [1]);
  (Wrd260.uLng) = (OBJECT_TYPE (Wrd259.Obj));
  if (! ((Wrd260.uLng) == 1))
    goto label_204;
  (Wrd258.pObj) = (OBJECT_ADDRESS (Wrd259.Obj));
  (Wrd256.Obj) = ((Wrd258.pObj) [1]);

DEFLABEL (label_203)
  (Wrd267.uLng) = (OBJECT_TYPE (Wrd256.Obj));
  if (! ((Wrd267.uLng) == 1))
    goto label_202;
  (Wrd266.pObj) = (OBJECT_ADDRESS (Wrd256.Obj));
  (Wrd265.Obj) = ((Wrd266.pObj) [1]);

DEFLABEL (label_201)
  (Wrd274.uLng) = (OBJECT_TYPE (Wrd265.Obj));
  if (! ((Wrd274.uLng) == 1))
    goto label_200;
  (Wrd272.pObj) = (OBJECT_ADDRESS (Wrd265.Obj));
  (Wrd273.Obj) = ((Wrd272.pObj) [1]);
  (* (--Rsp)) = (Wrd273.Obj);

DEFLABEL (label_199)
  (Wrd281.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd281.Obj);
  (Wrd285.Obj) = (Rsp [3]);
  (Wrd286.uLng) = (OBJECT_TYPE (Wrd285.Obj));
  if (! ((Wrd286.uLng) == 1))
    goto label_198;
  (Wrd284.pObj) = (OBJECT_ADDRESS (Wrd285.Obj));
  (Wrd282.Obj) = ((Wrd284.pObj) [1]);

DEFLABEL (label_197)
  (Wrd293.uLng) = (OBJECT_TYPE (Wrd282.Obj));
  if (! ((Wrd293.uLng) == 1))
    goto label_196;
  (Wrd292.pObj) = (OBJECT_ADDRESS (Wrd282.Obj));
  (Wrd291.Obj) = ((Wrd292.pObj) [1]);

DEFLABEL (label_195)
  (Wrd300.uLng) = (OBJECT_TYPE (Wrd291.Obj));
  if (! ((Wrd300.uLng) == 1))
    goto label_194;
  (Wrd298.pObj) = (OBJECT_ADDRESS (Wrd291.Obj));
  (Wrd299.Obj) = ((Wrd298.pObj) [0]);
  (* (--Rsp)) = (Wrd299.Obj);

DEFLABEL (label_193)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd306.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_14])));
  Rhp += 1;
  (Wrd305.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd306.pObj)));
  Wrd307 = Wrd306;
  (Wrd308.Obj) = (Rsp [5]);
  ((Wrd307.pObj) [2]) = (Wrd308.Obj);
  (* (--Rsp)) = (Wrd305.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_49]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_192;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_191)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_190;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_189)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_188;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_187)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_186;
  Wrd31 = Wrd35;

DEFLABEL (label_185)
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_6_44);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_54]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_6_8]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_6_54);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_186)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_48])), (Wrd32.pObj));

DEFLABEL (label_114)
  (Wrd31.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_47]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_113)
  (* (--Rsp)) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_46]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_112)
  (Wrd17.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_45]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_111)
  (Wrd8.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd304.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd304.Obj);
  (* (--Rsp)) = (Wrd291.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_110)
  (* (--Rsp)) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  (Wrd297.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd297.Obj);
  (* (--Rsp)) = (Wrd282.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_109)
  (Wrd291.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  (Wrd290.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd290.Obj);
  (* (--Rsp)) = (Wrd285.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_108)
  (Wrd282.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_200)
  (Wrd278.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd278.Obj);
  (* (--Rsp)) = (Wrd265.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_107)
  (* (--Rsp)) = Rvl;
  goto label_199;

DEFLABEL (label_202)
  (Wrd271.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd271.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_106)
  (Wrd265.Obj) = Rvl;
  goto label_201;

DEFLABEL (label_204)
  (Wrd264.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd264.Obj);
  (* (--Rsp)) = (Wrd259.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_105)
  (Wrd256.Obj) = Rvl;
  goto label_203;

DEFLABEL (lambda_120)
  CLOSURE_HEADER (LABEL_6_14);

DEFLABEL (lambda_64)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_210;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_209)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_208;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_207)
  (Wrd24.Obj) = (current_block [OBJECT_6_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_206;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_205)
  (Wrd34.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_53]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_6_7]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_6_53);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_206)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_52]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_117)
  (Wrd25.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_208)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_51]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_116)
  (Wrd14.Obj) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_50]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_115)
  (Wrd5.Obj) = Rvl;
  goto label_209;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_6 5
#define LABEL_7_7 7
#define LABEL_7_8 9
#define LABEL_7_9 11
#define LABEL_7_11 13
#define LABEL_7_4 15
#define LABEL_7_12 17
#define LABEL_7_13 19
#define LABEL_7_10 21
#define ENVIRONMENT_LABEL_7_3 30
#define DEBUGGING_LABEL_7_2 29
#define OBJECT_7_3 28
#define OBJECT_7_2 27
#define OBJECT_7_1 26
#define OBJECT_7_0 25
#define EXECUTE_CACHE_7_14 23
#define FREE_REFERENCES_LABEL_7_0 22
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cell_sugar_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd30;
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
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_7_4);
      goto lambda_19;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_7_13);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_30)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;

DEFLABEL (label_31)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (label_32)
  if (! ((Wrd6.uLng) == 1))
    goto label_38;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_37)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_34;

DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));
  goto label_31;

DEFLABEL (label_34)
  if (! ((Wrd19.uLng) == 1))
    goto label_36;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd21.Obj);
  goto lambda_9;

DEFLABEL (label_36)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_29)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_7_5);
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (current_block [OBJECT_7_0]))
    goto label_41;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_33;
  if (! ((Wrd33.uLng) == 1))
    goto label_40;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd35.Obj);
  goto lambda_9;

DEFLABEL (label_40)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_23)
  (Wrd35.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_49;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_48)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_47;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [1]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_46)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_45;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_44)
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_43;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd70.Obj) = ((Wrd71.pObj) [0]);

DEFLABEL (label_42)
  (Wrd80.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd81.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd89.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_27)
  (Wrd70.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_26)
  (Wrd61.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_24)
  (Wrd45.Obj) = Rvl;
  goto label_48;

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
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_22 37
#define LABEL_23 39
#define LABEL_24 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_27 47
#define ENVIRONMENT_LABEL_3 72
#define DEBUGGING_LABEL_2 71
#define PURIFICATION_ROOT 70
#define OBJECT_18 69
#define OBJECT_17 68
#define OBJECT_16 67
#define OBJECT_15 66
#define OBJECT_14 65
#define OBJECT_13 64
#define OBJECT_12 63
#define OBJECT_11 62
#define OBJECT_10 61
#define OBJECT_9 60
#define OBJECT_8 59
#define OBJECT_7 58
#define OBJECT_6 57
#define OBJECT_5 56
#define OBJECT_4 55
#define OBJECT_3 54
#define OBJECT_2 53
#define OBJECT_1 52
#define OBJECT_0 51
#define GLOBAL_EXECUTE_CACHE_7 49
#define FREE_REFERENCES_LABEL_0 48
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
cell_sugar_so_bcfa078c701b546e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_22;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_20;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_26;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_24;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto label_31;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto label_32;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto expression_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_28)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_26])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_32)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_31)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
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
    if (counter > 7)
      goto label_30;
    blocks = (current_block [OBJECT_18]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_25])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_30)
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
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_20)
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

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_23);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_cell_sugar_so_bcfa078c701b546e [7] =
  {
    { "cell_sugar_so_code_1", 24, cell_sugar_so_code_1 },
    { "cell_sugar_so_code_2", 43, cell_sugar_so_code_2 },
    { "cell_sugar_so_code_3", 133, cell_sugar_so_code_3 },
    { "cell_sugar_so_code_4", 10, cell_sugar_so_code_4 },
    { "cell_sugar_so_code_5", 27, cell_sugar_so_code_5 },
    { "cell_sugar_so_code_6", 46, cell_sugar_so_code_6 },
    { "cell_sugar_so_code_7", 10, cell_sugar_so_code_7 }
  };

int
decl_cell_sugar_so_bcfa078c701b546e (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_cell_sugar_so_bcfa078c701b546e);
  return (0);
}

DECLARE_COMPILED_CODE ("cell-sugar.so", 23, decl_cell_sugar_so_bcfa078c701b546e, cell_sugar_so_bcfa078c701b546e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_cell_sugar_so_data_bcfa078c701b546e [3065] =
  "\x9e\x02\x0f\xb8\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0d\xb9"
  "\x0d\xba\x0d\xbb\x0d\xbc\xc1\xbd\x06\x07\x08\xc1\xbe\x28\x0d\xbf"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\xb1\xb2\xb4\x0d\x0c\x06\x07"
  "\x0d\xba\xb5\xb6\x08\x28\x0d\xb9\x28\x0d\x1c\x28\xb7\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb3\x06\x07\x0c"
  "\xb4\xb5\xb6\x08\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
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
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbc\x1d\xb0\x84\x88\x0d\xbb\xb5\xb6\x08\x28\xb7"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb3\x0d\x1c"
  "\xb5\xb6\x08\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\xb3\x0d\x0c\x06\x07\xb2\xb5\xb6\x08\x0d\x24\x28"
  "\xb1\x28\x1b\x28\xb7\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\xb9\xb5\xb6"
  "\x08\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x9e\xbe\x88\xb6"
  "\xb1\xb7\x2a\x0d\x0d\x1b\x2a\x1b\x1b\x2a\xb2\x1b\x2a\xb3\xb4\x2a"
  "\xc2\x02\x02\xc3\x0d\x1b\x2a\x1b\x2a\x28\x0d\x26\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x0f\x63\x65"
  "\x6c\x6c\x2d\x73\x75\x67\x61\x72\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x07\x64\x65\x66\x69\x6e\x65\x11\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x64\x69\x61\x67\x72\x61\x6d\x0c\x65\x6e\x73\x75\x72"
  "\x65\x2d\x63\x65\x6c\x6c\x10\x6d\x61\x6b\x65\x2d\x6e\x61\x6d\x65"
  "\x64\x2d\x63\x65\x6c\x6c\x06\x71\x75\x6f\x74\x65\x04\x63\x61\x72"
  "\x04\x63\x64\x72\x03\x12\x69\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64"
  "\x2d\x73\x79\x6e\x74\x61\x78\x02\x2f\x32\x81\x89\x02\x2e\x30\x81"
  "\x89\x02\x2d\x2e\x81\x89\x02\x2c\x2c\x81\x89\x02\x2b\x2a\x81\x8b"
  "\x02\x2a\x28\x81\x89\x02\x29\x26\x81\x89\x02\x28\x24\x81\x89\x02"
  "\x27\x22\x81\x89\x02\x26\x20\x81\x89\x02\x25\x1e\x81\x89\x02\x24"
  "\x1c\x81\x89\x02\x23\x1a\x81\x89\x02\x22\x18\x81\x89\x02\x21\x16"
  "\x81\x87\x02\x20\x14\x81\x87\x02\x1f\x12\x81\x89\x02\x1e\x10\x81"
  "\x87\x02\x1d\x0e\x81\x87\x02\x1c\x0c\x81\x87\x02\x1b\x0a\x81\x89"
  "\x02\x1a\x08\x81\x89\x02\x19\x06\x81\x87\x02\x18\x04\x85\x08\x31"
  "\x41\x09\x02\x04\x6c\x65\x74\x05\x64\x6f\x6e\x65\x16\x6e\x6f\x72"
  "\x6d\x61\x6c\x69\x7a\x65\x2d\x6c\x65\x74\x2d\x63\x6c\x61\x75\x73"
  "\x65\x73\x04\x04\x6d\x61\x70\x04\x07\x65\x71\x75\x61\x6c\x3f\x0a"
  "\x03\x04\x5a\x58\x81\x87\x02\x59\x56\x81\x87\x02\x58\x54\x81\x89"
  "\x02\x57\x52\x81\x87\x02\x56\x50\x81\x87\x02\x55\x4e\x81\x87\x02"
  "\x54\x4c\x81\x89\x02\x53\x4a\x81\x85\x02\x52\x48\x81\x85\x02\x51"
  "\x46\x81\x89\x02\x50\x44\x81\x89\x02\x4f\x42\x81\x8d\x02\x4e\x40"
  "\x81\x87\x02\x4d\x3e\x81\x89\x02\x4c\x3c\x81\x87\x02\x4b\x3a\x85"
  "\x08\x4a\x38\x81\x89\x02\x49\x36\x81\x89\x02\x48\x34\x81\x89\x02"
  "\x47\x32\x81\x8b\x02\x46\x30\x81\x89\x02\x45\x2e\x81\x8b\x02\x44"
  "\x2c\x81\x8b\x02\x43\x2a\x81\x8d\x02\x42\x28\x81\x8d\x02\x41\x26"
  "\x81\x8b\x02\x40\x24\x81\x89\x02\x3f\x22\x81\x8b\x02\x3e\x20\x81"
  "\x89\x02\x3d\x1e\x81\x89\x02\x3c\x1c\x81\x89\x02\x3b\x1a\x81\x89"
  "\x02\x3a\x18\x81\x87\x02\x39\x16\x81\x87\x02\x38\x14\x81\x89\x02"
  "\x37\x12\x81\x89\x02\x36\x10\x81\x8b\x02\x35\x0e\x81\x8b\x02\x34"
  "\x0c\x81\x8b\x02\x33\x0a\x81\x87\x02\x32\x08\x81\x87\x02\x31\x06"
  "\x81\x87\x02\x30\x04\x81\x89\x02\x57\x6c\x0b\x02\x05\x64\x6f\x6e"
  "\x65\x03\x02\xdf\x01\x8c\x02\x81\x89\x02\xde\x01\x8a\x02\x81\x89"
  "\x02\xdd\x01\x88\x02\x81\x89\x02\xdc\x01\x86\x02\x81\x89\x02\xdb"
  "\x01\x84\x02\x81\x89\x02\xda\x01\x82\x02\x81\x89\x02\xd9\x01\x80"
  "\x02\x81\x89\x02\xd8\x01\xfe\x01\x81\x8d\x02\xd7\x01\xfc\x01\x81"
  "\x8d\x02\xd6\x01\xfa\x01\x81\x8d\x02\xd5\x01\xf8\x01\x81\x8d\x02"
  "\xd4\x01\xf6\x01\x81\x8d\x02\xd3\x01\xf4\x01\x81\x8d\x02\xd2\x01"
  "\xf2\x01\x81\x89\x02\xd1\x01\xf0\x01\x81\x89\x02\xd0\x01\xee\x01"
  "\x81\x89\x02\xcf\x01\xec\x01\x81\x89\x02\xce\x01\xea\x01\x81\x87"
  "\x02\xcd\x01\xe8\x01\x81\x8b\x02\xcc\x01\xe6\x01\x81\x89\x02\xcb"
  "\x01\xe4\x01\x81\x89\x02\xca\x01\xe2\x01\x81\x87\x02\xc9\x01\xe0"
  "\x01\x81\x8b\x02\xc8\x01\xde\x01\x81\x8d\x02\xc7\x01\xdc\x01\x81"
  "\x8b\x02\xc6\x01\xda\x01\x81\x89\x02\xc5\x01\xd8\x01\x81\x89\x02"
  "\xc4\x01\xd6\x01\x81\x87\x02\xc3\x01\xd4\x01\x81\x8b\x02\xc2\x01"
  "\xd2\x01\x81\x8d\x02\xc1\x01\xd0\x01\x81\x8d\x02\xc0\x01\xce\x01"
  "\x81\x8b\x02\xbf\x01\xcc\x01\x81\x89\x02\xbe\x01\xca\x01\x81\x89"
  "\x02\xbd\x01\xc8\x01\x81\x87\x02\xbc\x01\xc6\x01\x85\x08\xbb\x01"
  "\xc4\x01\x81\x89\x02\xba\x01\xc2\x01\x81\x89\x02\xb9\x01\xc0\x01"
  "\x81\x89\x02\xb8\x01\xbe\x01\x81\x89\x02\xb7\x01\xbc\x01\x81\x89"
  "\x02\xb6\x01\xba\x01\x81\x89\x02\xb5\x01\xb8\x01\x81\x89\x02\xb4"
  "\x01\xb6\x01\x81\x87\x02\xb3\x01\xb4\x01\x81\x87\x02\xb2\x01\xb2"
  "\x01\x81\x87\x02\xb1\x01\xb0\x01\x81\x87\x02\xb0\x01\xae\x01\x81"
  "\x89\x02\xaf\x01\xac\x01\x81\x8b\x02\xae\x01\xaa\x01\x81\x89\x02"
  "\xad\x01\xa8\x01\x81\x89\x02\xac\x01\xa6\x01\x81\x8b\x02\xab\x01"
  "\xa4\x01\x81\x8b\x02\xaa\x01\xa2\x01\x81\x89\x02\xa9\x01\xa0\x01"
  "\x81\x89\x02\xa8\x01\x9e\x01\x81\x8b\x02\xa7\x01\x9c\x01\x81\x8b"
  "\x02\xa6\x01\x9a\x01\x81\x89\x02\xa5\x01\x98\x01\x81\x89\x02\xa4"
  "\x01\x96\x01\x81\x8b\x02\xa3\x01\x94\x01\x81\x8b\x02\xa2\x01\x92"
  "\x01\x81\x89\x02\xa1\x01\x90\x01\x81\x8b\x02\xa0\x01\x8e\x01\x81"
  "\x8b\x02\x9f\x01\x8c\x01\x81\x89\x02\x9e\x01\x8a\x01\x81\x8b\x02"
  "\x9d\x01\x88\x01\x81\x8b\x02\x9c\x01\x86\x01\x81\x89\x02\x9b\x01"
  "\x84\x01\x81\x8b\x02\x9a\x01\x82\x01\x81\x89\x02\x99\x01\x80\x01"
  "\x81\x8b\x02\x98\x01\x7e\x81\x8b\x02\x97\x01\x7c\x81\x8b\x02\x96"
  "\x01\x7a\x81\x8b\x02\x95\x01\x78\x81\x89\x02\x94\x01\x76\x81\x89"
  "\x02\x93\x01\x74\x81\x89\x02\x92\x01\x72\x81\x89\x02\x91\x01\x70"
  "\x81\x87\x02\x90\x01\x6e\x81\x87\x02\x8f\x01\x6c\x81\x87\x02\x8e"
  "\x01\x6a\x81\x87\x02\x8d\x01\x68\x81\x89\x02\x8c\x01\x66\x81\x89"
  "\x02\x8b\x01\x64\x81\x89\x02\x8a\x01\x62\x81\x89\x02\x89\x01\x60"
  "\x81\x89\x02\x88\x01\x5e\x81\x8b\x02\x87\x01\x5c\x81\x8b\x02\x86"
  "\x01\x5a\x81\x8b\x02\x85\x01\x58\x81\x8b\x02\x84\x01\x56\x81\x8b"
  "\x02\x83\x01\x54\x81\x89\x02\x82\x01\x52\x81\x89\x02\x81\x01\x50"
  "\x81\x89\x02\x80\x01\x4e\x81\x89\x02\x7f\x4c\x81\x89\x02\x7e\x4a"
  "\x81\x89\x02\x7d\x48\x81\x89\x02\x7c\x46\x81\x89\x02\x7b\x44\x81"
  "\x87\x02\x7a\x42\x81\x87\x02\x79\x40\x81\x87\x02\x78\x3e\x81\x87"
  "\x02\x77\x3c\x81\x89\x02\x76\x3a\x81\x89\x02\x75\x38\x81\x89\x02"
  "\x74\x36\x81\x89\x02\x73\x34\x81\x89\x02\x72\x32\x81\x89\x02\x71"
  "\x30\x81\x89\x02\x70\x2e\x81\x89\x02\x6f\x2c\x81\x89\x02\x6e\x2a"
  "\x81\x8d\x02\x6d\x28\x81\x8d\x02\x6c\x26\x81\x8d\x02\x6b\x24\x81"
  "\x8d\x02\x6a\x22\x81\x8d\x02\x69\x20\x81\x8b\x02\x68\x1e\x81\x8b"
  "\x02\x67\x1c\x81\x8b\x02\x66\x1a\x81\x8b\x02\x65\x18\x81\x8b\x02"
  "\x64\x16\x81\x8b\x02\x63\x14\x81\x89\x02\x62\x12\x81\x89\x02\x61"
  "\x10\x81\x89\x02\x60\x0e\x81\x89\x02\x5f\x0c\x81\x87\x02\x5e\x0a"
  "\x81\x87\x02\x5d\x08\x81\x87\x02\x5c\x06\x81\x87\x02\x5b\x04\x81"
  "\x89\x02\x8b\x02\x99\x02\x02\x0a\x6c\x65\x74\x2d\x63\x65\x6c\x6c"
  "\x73\x03\x02\xe9\x01\x16\x81\x89\x02\xe8\x01\x14\x81\x89\x02\xe7"
  "\x01\x12\x81\x87\x02\xe6\x01\x10\x85\x08\xe5\x01\x0e\x81\x89\x02"
  "\xe4\x01\x0c\x81\x89\x02\xe3\x01\x0a\x81\x89\x02\xe2\x01\x08\x81"
  "\x87\x02\xe1\x01\x06\x81\x87\x02\xe0\x01\x04\x81\x89\x02\x15\x1f"
  "\x0c\x02\x09\x6c\x65\x74\x2d\x63\x65\x6c\x6c\x0d\x03\x02\x84\x02"
  "\x38\x81\x89\x02\x83\x02\x36\x81\x89\x02\x82\x02\x34\x81\x89\x02"
  "\x81\x02\x32\x81\x89\x02\x80\x02\x30\x81\x87\x02\xff\x01\x2e\x81"
  "\x8b\x02\xfe\x01\x2c\x81\x89\x02\xfd\x01\x2a\x81\x87\x02\xfc\x01"
  "\x28\x85\x08\xfb\x01\x26\x81\x89\x02\xfa\x01\x24\x81\x87\x02\xf9"
  "\x01\x22\x81\x87\x02\xf8\x01\x20\x81\x89\x02\xf7\x01\x1e\x81\x8b"
  "\x02\xf6\x01\x1c\x81\x89\x02\xf5\x01\x1a\x81\x8b\x02\xf4\x01\x18"
  "\x81\x89\x02\xf3\x01\x16\x81\x89\x02\xf2\x01\x14\x81\x89\x02\xf1"
  "\x01\x12\x81\x89\x02\xf0\x01\x10\x81\x89\x02\xef\x01\x0e\x81\x89"
  "\x02\xee\x01\x0c\x81\x89\x02\xed\x01\x0a\x81\x89\x02\xec\x01\x08"
  "\x81\x87\x02\xeb\x01\x06\x81\x87\x02\xea\x01\x04\x81\x89\x02\x37"
  "\x42\x0e\x02\x05\x63\x3a\x69\x64\x05\x64\x6f\x6e\x65\x04\x63\x61"
  "\x72\x02\x04\x04\x0a\x03\x04\x07\x61\x70\x70\x65\x6e\x64\x05\xb2"
  "\x02\x5e\x81\x89\x02\xb1\x02\x5c\x81\x87\x02\xb0\x02\x5a\x81\x89"
  "\x02\xaf\x02\x58\x81\x87\x02\xae\x02\x56\x81\x85\x02\xad\x02\x54"
  "\x81\x85\x02\xac\x02\x52\x81\x85\x02\xab\x02\x50\x81\x8b\x02\xaa"
  "\x02\x4e\x81\x8d\x02\xa9\x02\x4c\x81\x8b\x02\xa8\x02\x4a\x81\x8b"
  "\x02\xa7\x02\x48\x81\x8b\x02\xa6\x02\x46\x81\x87\x02\xa5\x02\x44"
  "\x81\x89\x02\xa4\x02\x42\x81\x8d\x02\xa3\x02\x40\x81\x87\x02\xa2"
  "\x02\x3e\x81\x89\x02\xa1\x02\x3c\x81\x87\x02\xa0\x02\x3a\x85\x08"
  "\x9f\x02\x38\x81\x89\x02\x9e\x02\x36\x81\x89\x02\x9d\x02\x34\x81"
  "\x89\x02\x9c\x02\x32\x81\x8b\x02\x9b\x02\x30\x81\x89\x02\x9a\x02"
  "\x2e\x81\x8b\x02\x99\x02\x2c\x81\x8b\x02\x98\x02\x2a\x81\x8d\x02"
  "\x97\x02\x28\x81\x8d\x02\x96\x02\x26\x81\x8b\x02\x95\x02\x24\x81"
  "\x89\x02\x94\x02\x22\x81\x8b\x02\x93\x02\x20\x81\x89\x02\x92\x02"
  "\x1e\x81\x89\x02\x91\x02\x1c\x81\x89\x02\x90\x02\x1a\x81\x89\x02"
  "\x8f\x02\x18\x81\x87\x02\x8e\x02\x16\x81\x87\x02\x8d\x02\x14\x81"
  "\x89\x02\x8c\x02\x12\x81\x89\x02\x8b\x02\x10\x81\x8d\x02\x8a\x02"
  "\x0e\x81\x8d\x02\x89\x02\x0c\x81\x8d\x02\x88\x02\x0a\x81\x89\x02"
  "\x87\x02\x08\x81\x89\x02\x86\x02\x06\x81\x89\x02\x85\x02\x04\x81"
  "\x89\x02\x5d\x74\x0a\x02\x08\x0e\x6c\x65\x74\x2d\x63\x65\x6c\x6c"
  "\x73\x2d\x72\x65\x63\x03\x02\xbc\x02\x16\x81\x89\x02\xbb\x02\x14"
  "\x81\x89\x02\xba\x02\x12\x81\x87\x02\xb9\x02\x10\x85\x08\xb8\x02"
  "\x0e\x81\x89\x02\xb7\x02\x0c\x81\x89\x02\xb6\x02\x0a\x81\x89\x02"
  "\xb5\x02\x08\x81\x87\x02\xb4\x02\x06\x81\x87\x02\xb3\x02\x04\x81"
  "\x89\x02\x15\x1f\x10\x0d\x6c\x65\x74\x2d\x63\x65\x6c\x6c\x2d\x72"
  "\x65\x63\x0b\x6c\x65\x74\x2d\x63\x65\x6c\x6c\x73\x2a\x0a\x3a\x0d"
  "\x0e\x28\x0c\x10\xc6\x01\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65"
  "\x33\x10\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x0c\x64\x65\x66\x69\x6e\x65\x2d\x63\x65\x6c\x6c\x0b"
  "\x3a\x09\x04\x04\x1f\x65\x72\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e"
  "\x64\x65\x72\x02\x17\x30\x80\x80\x04\x16\x2e\x81\x81\x02\x15\x2c"
  "\x81\x81\x02\x14\x2a\x81\x89\x02\x13\x28\x81\x87\x02\x12\x26\x81"
  "\x87\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x87"
  "\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x87\x02"
  "\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x87\x02\x08"
  "\x12\x81\x85\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x87\x02\x05\x0c"
  "\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x87\x02\x02\x06\x81"
  "\x85\x02\x01\x04\x81\x83\x02\x2f\x49";

SCHEME_OBJECT *
cell_sugar_so_data_bcfa078c701b546e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_cell_sugar_so_data_bcfa078c701b546e [0]))), (sizeof (prog_cell_sugar_so_data_bcfa078c701b546e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_27]));
}

DECLARE_COMPILED_DATA_NS ("cell-sugar.so", cell_sugar_so_data_bcfa078c701b546e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("cell-sugar.so", "5843890e7e54b85f")
