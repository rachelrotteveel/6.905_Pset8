/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-03T21:49:00-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 11
#define DEBUGGING_LABEL_1_2 10
#define OBJECT_1_0 9
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
coercions_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_1_4);
      goto coercability_tester_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (coercability_tester_4)
DEFLABEL (coercability_tester_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (lambda_5)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_1_5);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
coercions_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto coercer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (coercer_3)
DEFLABEL (coercer_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 12
#define DEBUGGING_LABEL_3_2 11
#define OBJECT_3_1 10
#define OBJECT_3_0 9
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
coercions_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto tag_coercion_metadata_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tag_coercion_metadata_4)
DEFLABEL (tag_coercion_metadata_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_3_1]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_10 9
#define ENVIRONMENT_LABEL_4_3 23
#define DEBUGGING_LABEL_4_2 22
#define OBJECT_4_4 21
#define OBJECT_4_3 20
#define OBJECT_4_2 19
#define OBJECT_4_1 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_9 11
#define EXECUTE_CACHE_4_8 13
#define EXECUTE_CACHE_4_7 15
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
coercions_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto declare_coercion_5;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declare_coercion_8)
DEFLABEL (declare_coercion_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_10)
  (Wrd11.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_4_1]))
    goto label_11;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_4_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_4_10);
  Rvl = (current_block [OBJECT_4_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_9 13
#define LABEL_5_10 15
#define LABEL_5_11 17
#define LABEL_5_12 19
#define LABEL_5_13 21
#define LABEL_5_14 23
#define LABEL_5_15 25
#define LABEL_5_16 27
#define LABEL_5_17 29
#define LABEL_5_18 31
#define LABEL_5_20 33
#define LABEL_5_21 35
#define LABEL_5_22 37
#define LABEL_5_23 39
#define LABEL_5_24 41
#define LABEL_5_25 43
#define LABEL_5_26 45
#define LABEL_5_27 47
#define LABEL_5_28 49
#define LABEL_5_29 51
#define LABEL_5_30 53
#define LABEL_5_31 55
#define LABEL_5_32 57
#define LABEL_5_33 59
#define LABEL_5_19 61
#define LABEL_5_35 63
#define LABEL_5_36 65
#define LABEL_5_37 67
#define LABEL_5_38 69
#define LABEL_5_39 71
#define LABEL_5_40 73
#define LABEL_5_41 75
#define LABEL_5_42 77
#define LABEL_5_43 79
#define LABEL_5_44 81
#define LABEL_5_45 83
#define LABEL_5_46 85
#define LABEL_5_47 87
#define LABEL_5_48 89
#define LABEL_5_49 91
#define LABEL_5_50 93
#define LABEL_5_51 95
#define LABEL_5_52 97
#define LABEL_5_53 99
#define LABEL_5_54 101
#define LABEL_5_55 103
#define LABEL_5_56 105
#define LABEL_5_57 107
#define LABEL_5_58 109
#define LABEL_5_59 111
#define LABEL_5_60 113
#define LABEL_5_61 115
#define LABEL_5_62 117
#define LABEL_5_63 119
#define LABEL_5_64 121
#define LABEL_5_65 123
#define LABEL_5_66 125
#define LABEL_5_67 127
#define LABEL_5_68 129
#define LABEL_5_69 131
#define LABEL_5_70 133
#define ENVIRONMENT_LABEL_5_3 154
#define DEBUGGING_LABEL_5_2 153
#define OBJECT_5_15 152
#define OBJECT_5_14 151
#define OBJECT_5_13 150
#define OBJECT_5_12 149
#define OBJECT_5_11 148
#define OBJECT_5_10 147
#define OBJECT_5_9 146
#define OBJECT_5_8 145
#define OBJECT_5_7 144
#define OBJECT_5_6 143
#define OBJECT_5_5 142
#define OBJECT_5_4 141
#define OBJECT_5_3 140
#define OBJECT_5_2 139
#define OBJECT_5_1 138
#define OBJECT_5_0 137
#define EXECUTE_CACHE_5_34 135
#define FREE_REFERENCES_LABEL_5_0 134
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
coercions_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd91;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd10;
  machine_word Wrd38;
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
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd134;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd114;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
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
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd291;
  machine_word Wrd290;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd281;
  machine_word Wrd282;
  machine_word Wrd283;
  machine_word Wrd280;
  machine_word Wrd272;
  machine_word Wrd274;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd271;
  machine_word Wrd270;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd261;
  machine_word Wrd262;
  machine_word Wrd263;
  machine_word Wrd260;
  machine_word Wrd254;
  machine_word Wrd255;
  machine_word Wrd256;
  machine_word Wrd253;
  machine_word Wrd247;
  machine_word Wrd248;
  machine_word Wrd249;
  machine_word Wrd246;
  machine_word Wrd238;
  machine_word Wrd240;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd237;
  machine_word Wrd233;
  machine_word Wrd227;
  machine_word Wrd228;
  machine_word Wrd229;
  machine_word Wrd226;
  machine_word Wrd220;
  machine_word Wrd221;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd211;
  machine_word Wrd213;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd208;
  machine_word Wrd206;
  machine_word Wrd198;
  machine_word Wrd200;
  machine_word Wrd196;
  machine_word Wrd194;
  machine_word Wrd186;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd182;
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd172;
  machine_word Wrd170;
  machine_word Wrd162;
  machine_word Wrd164;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd152;
  machine_word Wrd151;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_118;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_133;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_134;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_135;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_136;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto label_137;

    case 6:
      current_block = (Rpc - LABEL_5_10);
      goto label_138;

    case 7:
      current_block = (Rpc - LABEL_5_11);
      goto label_139;

    case 8:
      current_block = (Rpc - LABEL_5_12);
      goto label_140;

    case 9:
      current_block = (Rpc - LABEL_5_13);
      goto label_141;

    case 10:
      current_block = (Rpc - LABEL_5_14);
      goto label_142;

    case 11:
      current_block = (Rpc - LABEL_5_15);
      goto label_143;

    case 12:
      current_block = (Rpc - LABEL_5_16);
      goto label_144;

    case 13:
      current_block = (Rpc - LABEL_5_17);
      goto label_145;

    case 14:
      current_block = (Rpc - LABEL_5_18);
      goto label_146;

    case 15:
      current_block = (Rpc - LABEL_5_20);
      goto label_120;

    case 16:
      current_block = (Rpc - LABEL_5_21);
      goto label_121;

    case 17:
      current_block = (Rpc - LABEL_5_22);
      goto label_122;

    case 18:
      current_block = (Rpc - LABEL_5_23);
      goto label_123;

    case 19:
      current_block = (Rpc - LABEL_5_24);
      goto label_124;

    case 20:
      current_block = (Rpc - LABEL_5_25);
      goto label_125;

    case 21:
      current_block = (Rpc - LABEL_5_26);
      goto label_126;

    case 22:
      current_block = (Rpc - LABEL_5_27);
      goto label_127;

    case 23:
      current_block = (Rpc - LABEL_5_28);
      goto label_128;

    case 24:
      current_block = (Rpc - LABEL_5_29);
      goto label_129;

    case 25:
      current_block = (Rpc - LABEL_5_30);
      goto label_130;

    case 26:
      current_block = (Rpc - LABEL_5_31);
      goto label_131;

    case 27:
      current_block = (Rpc - LABEL_5_32);
      goto label_132;

    case 28:
      current_block = (Rpc - LABEL_5_33);
      goto continuation_27;

    case 29:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_100;

    case 30:
      current_block = (Rpc - LABEL_5_35);
      goto label_147;

    case 31:
      current_block = (Rpc - LABEL_5_36);
      goto label_148;

    case 32:
      current_block = (Rpc - LABEL_5_37);
      goto continuation_90;

    case 33:
      current_block = (Rpc - LABEL_5_38);
      goto continuation_88;

    case 34:
      current_block = (Rpc - LABEL_5_39);
      goto continuation_87;

    case 35:
      current_block = (Rpc - LABEL_5_40);
      goto label_149;

    case 36:
      current_block = (Rpc - LABEL_5_41);
      goto label_150;

    case 37:
      current_block = (Rpc - LABEL_5_42);
      goto label_151;

    case 38:
      current_block = (Rpc - LABEL_5_43);
      goto label_152;

    case 39:
      current_block = (Rpc - LABEL_5_44);
      goto continuation_82;

    case 40:
      current_block = (Rpc - LABEL_5_45);
      goto label_153;

    case 41:
      current_block = (Rpc - LABEL_5_46);
      goto label_154;

    case 42:
      current_block = (Rpc - LABEL_5_47);
      goto label_155;

    case 43:
      current_block = (Rpc - LABEL_5_48);
      goto label_156;

    case 44:
      current_block = (Rpc - LABEL_5_49);
      goto label_157;

    case 45:
      current_block = (Rpc - LABEL_5_50);
      goto label_158;

    case 46:
      current_block = (Rpc - LABEL_5_51);
      goto label_159;

    case 47:
      current_block = (Rpc - LABEL_5_52);
      goto label_160;

    case 48:
      current_block = (Rpc - LABEL_5_53);
      goto label_161;

    case 49:
      current_block = (Rpc - LABEL_5_54);
      goto continuation_64;

    case 50:
      current_block = (Rpc - LABEL_5_55);
      goto continuation_63;

    case 51:
      current_block = (Rpc - LABEL_5_56);
      goto label_162;

    case 52:
      current_block = (Rpc - LABEL_5_57);
      goto label_163;

    case 53:
      current_block = (Rpc - LABEL_5_58);
      goto label_164;

    case 54:
      current_block = (Rpc - LABEL_5_59);
      goto label_165;

    case 55:
      current_block = (Rpc - LABEL_5_60);
      goto continuation_58;

    case 56:
      current_block = (Rpc - LABEL_5_61);
      goto label_166;

    case 57:
      current_block = (Rpc - LABEL_5_62);
      goto label_167;

    case 58:
      current_block = (Rpc - LABEL_5_63);
      goto label_168;

    case 59:
      current_block = (Rpc - LABEL_5_64);
      goto continuation_47;

    case 60:
      current_block = (Rpc - LABEL_5_65);
      goto continuation_46;

    case 61:
      current_block = (Rpc - LABEL_5_66);
      goto label_169;

    case 62:
      current_block = (Rpc - LABEL_5_67);
      goto label_170;

    case 63:
      current_block = (Rpc - LABEL_5_68);
      goto label_171;

    case 64:
      current_block = (Rpc - LABEL_5_69);
      goto continuation_42;

    case 65:
      current_block = (Rpc - LABEL_5_70);
      goto continuation_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_173)
DEFLABEL (lambda_118)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_209;

DEFLABEL (label_208)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_175;

DEFLABEL (label_174)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (label_175)
  if (! ((Wrd8.uLng) == 1))
    goto label_207;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_206)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_177;

DEFLABEL (label_176)
  Rsp = (& (Rsp [1]));
  goto label_174;

DEFLABEL (label_177)
  if (! ((Wrd21.uLng) == 1))
    goto label_205;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_204)
  (Rsp [0]) = (Wrd23.Obj);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_176;
  if (! ((Wrd33.uLng) == 1))
    goto label_203;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_202)
  (Rsp [0]) = (Wrd35.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_176;
  if (! ((Wrd45.uLng) == 1))
    goto label_201;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_200)
  if ((Wrd47.Obj) == (current_block [OBJECT_5_1]))
    goto label_179;
  (Wrd57.Obj) = (current_block [OBJECT_5_3]);
  goto label_178;

DEFLABEL (label_179)
  (Wrd57.Obj) = (current_block [OBJECT_5_2]);

DEFLABEL (label_178)
DEFLABEL (label_199)
  Rsp = (& (Rsp [1]));
  if ((Wrd57.Obj) == ((SCHEME_OBJECT) 0))
    goto label_174;
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_198;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_197)
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_196;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd69.Obj) = ((Wrd70.pObj) [1]);

DEFLABEL (label_195)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_194;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd76.Obj) = ((Wrd77.pObj) [1]);

DEFLABEL (label_193)
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_192;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd83.Obj) = ((Wrd84.pObj) [0]);

DEFLABEL (label_191)
  (Wrd93.Obj) = (current_block [OBJECT_5_6]);
  (Wrd94.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd93.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  (* (Rhp++)) = (Wrd83.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd96.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd96.pObj)));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd101.Obj) = (Rsp [1]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_190;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd98.Obj) = ((Wrd100.pObj) [1]);

DEFLABEL (label_189)
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd109.uLng) == 1))
    goto label_188;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd107.Obj) = ((Wrd108.pObj) [1]);

DEFLABEL (label_187)
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd116.uLng) == 1))
    goto label_186;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd114.Obj) = ((Wrd115.pObj) [0]);

DEFLABEL (label_185)
  (Wrd121.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd114.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  (Wrd123.pObj) = (& (Rhp [-2]));
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd123.pObj)));
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd128.Obj) = (Rsp [1]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_184;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd125.Obj) = ((Wrd127.pObj) [1]);

DEFLABEL (label_183)
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd136.uLng) == 1))
    goto label_182;
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd134.Obj) = ((Wrd135.pObj) [0]);

DEFLABEL (label_181)
  (Wrd141.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd134.Obj);
  (* (Rhp++)) = (Wrd141.Obj);
  (Wrd143.pObj) = (& (Rhp [-2]));
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd143.pObj)));
  (* (--Rsp)) = (Wrd144.Obj);
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_33]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd148.Obj) = (current_block [OBJECT_5_7]);
  (* (--Rsp)) = (Wrd148.Obj);

DEFLABEL (label_180)
  (Wrd149.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd149.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_182)
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_32]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_132)
  (Wrd134.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_131)
  (Wrd125.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_130)
  (Wrd114.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_29]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_129)
  (Wrd107.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_128)
  (Wrd98.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_127)
  (Wrd83.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_126)
  (Wrd76.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_125)
  (Wrd69.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_124)
  (Wrd60.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_201)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_123)
  (Wrd47.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_122)
  (Wrd35.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_121)
  (Wrd23.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_207)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_120)
  (* (--Rsp)) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  if (! ((Wrd6.uLng) == 1))
    goto label_242;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [1]);
  (* (--Rsp)) = (Wrd152.Obj);

DEFLABEL (label_241)
  (Wrd159.Obj) = (Rsp [0]);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd159.Obj));
  if ((Wrd160.uLng) == 1)
    goto label_211;

DEFLABEL (label_210)
  Rsp = (& (Rsp [1]));
  goto label_208;

DEFLABEL (label_211)
  if (! ((Wrd160.uLng) == 1))
    goto label_240;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd159.Obj));
  (Wrd162.Obj) = ((Wrd164.pObj) [1]);

DEFLABEL (label_239)
  (Rsp [0]) = (Wrd162.Obj);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if (! ((Wrd172.uLng) == 1))
    goto label_210;
  if (! ((Wrd172.uLng) == 1))
    goto label_238;
  (Wrd176.pObj) = (OBJECT_ADDRESS (Wrd162.Obj));
  (Wrd174.Obj) = ((Wrd176.pObj) [1]);

DEFLABEL (label_237)
  (Rsp [0]) = (Wrd174.Obj);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if (! ((Wrd184.uLng) == 1))
    goto label_210;
  if (! ((Wrd184.uLng) == 1))
    goto label_236;
  (Wrd188.pObj) = (OBJECT_ADDRESS (Wrd174.Obj));
  (Wrd186.Obj) = ((Wrd188.pObj) [1]);

DEFLABEL (label_235)
  (Rsp [0]) = (Wrd186.Obj);
  (Wrd196.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if (! ((Wrd196.uLng) == 1))
    goto label_210;
  if (! ((Wrd196.uLng) == 1))
    goto label_234;
  (Wrd200.pObj) = (OBJECT_ADDRESS (Wrd186.Obj));
  (Wrd198.Obj) = ((Wrd200.pObj) [1]);

DEFLABEL (label_233)
  if ((Wrd198.Obj) == (current_block [OBJECT_5_1]))
    goto label_213;
  (Wrd208.Obj) = (current_block [OBJECT_5_3]);
  goto label_212;

DEFLABEL (label_213)
  (Wrd208.Obj) = (current_block [OBJECT_5_2]);

DEFLABEL (label_212)
DEFLABEL (label_232)
  Rsp = (& (Rsp [1]));
  if ((Wrd208.Obj) == ((SCHEME_OBJECT) 0))
    goto label_208;
  (Wrd214.Obj) = (Rsp [0]);
  (Wrd215.uLng) = (OBJECT_TYPE (Wrd214.Obj));
  if (! ((Wrd215.uLng) == 1))
    goto label_231;
  (Wrd213.pObj) = (OBJECT_ADDRESS (Wrd214.Obj));
  (Wrd211.Obj) = ((Wrd213.pObj) [1]);

DEFLABEL (label_230)
  (Wrd222.uLng) = (OBJECT_TYPE (Wrd211.Obj));
  if (! ((Wrd222.uLng) == 1))
    goto label_229;
  (Wrd221.pObj) = (OBJECT_ADDRESS (Wrd211.Obj));
  (Wrd220.Obj) = ((Wrd221.pObj) [1]);

DEFLABEL (label_228)
  (Wrd229.uLng) = (OBJECT_TYPE (Wrd220.Obj));
  if (! ((Wrd229.uLng) == 1))
    goto label_227;
  (Wrd228.pObj) = (OBJECT_ADDRESS (Wrd220.Obj));
  (Wrd227.Obj) = ((Wrd228.pObj) [0]);

DEFLABEL (label_226)
  (Wrd237.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd227.Obj);
  (* (Rhp++)) = (Wrd237.Obj);
  (Wrd235.pObj) = (& (Rhp [-2]));
  (Wrd236.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd235.pObj)));
  (* (--Rsp)) = (Wrd236.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if (! ((Wrd242.uLng) == 1))
    goto label_225;
  (Wrd240.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd238.Obj) = ((Wrd240.pObj) [1]);

DEFLABEL (label_224)
  (Wrd249.uLng) = (OBJECT_TYPE (Wrd238.Obj));
  if (! ((Wrd249.uLng) == 1))
    goto label_223;
  (Wrd248.pObj) = (OBJECT_ADDRESS (Wrd238.Obj));
  (Wrd247.Obj) = ((Wrd248.pObj) [1]);

DEFLABEL (label_222)
  (Wrd256.uLng) = (OBJECT_TYPE (Wrd247.Obj));
  if (! ((Wrd256.uLng) == 1))
    goto label_221;
  (Wrd255.pObj) = (OBJECT_ADDRESS (Wrd247.Obj));
  (Wrd254.Obj) = ((Wrd255.pObj) [1]);

DEFLABEL (label_220)
  (Wrd263.uLng) = (OBJECT_TYPE (Wrd254.Obj));
  if (! ((Wrd263.uLng) == 1))
    goto label_219;
  (Wrd262.pObj) = (OBJECT_ADDRESS (Wrd254.Obj));
  (Wrd261.Obj) = ((Wrd262.pObj) [0]);

DEFLABEL (label_218)
  (Wrd268.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd261.Obj);
  (* (Rhp++)) = (Wrd268.Obj);
  (Wrd270.pObj) = (& (Rhp [-2]));
  (Wrd271.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd270.pObj)));
  (* (--Rsp)) = (Wrd271.Obj);
  (Wrd275.Obj) = (Rsp [1]);
  (Wrd276.uLng) = (OBJECT_TYPE (Wrd275.Obj));
  if (! ((Wrd276.uLng) == 1))
    goto label_217;
  (Wrd274.pObj) = (OBJECT_ADDRESS (Wrd275.Obj));
  (Wrd272.Obj) = ((Wrd274.pObj) [1]);

DEFLABEL (label_216)
  (Wrd283.uLng) = (OBJECT_TYPE (Wrd272.Obj));
  if (! ((Wrd283.uLng) == 1))
    goto label_215;
  (Wrd282.pObj) = (OBJECT_ADDRESS (Wrd272.Obj));
  (Wrd281.Obj) = ((Wrd282.pObj) [0]);

DEFLABEL (label_214)
  (Wrd288.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd281.Obj);
  (* (Rhp++)) = (Wrd288.Obj);
  (Wrd290.pObj) = (& (Rhp [-2]));
  (Wrd291.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd290.pObj)));
  (* (--Rsp)) = (Wrd291.Obj);
  (Wrd294.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd294.Obj);
  (Wrd295.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd295.Obj);
  goto label_180;

DEFLABEL (label_215)
  (Wrd287.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd287.Obj);
  (* (--Rsp)) = (Wrd272.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_146)
  (Wrd281.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  (Wrd280.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd280.Obj);
  (* (--Rsp)) = (Wrd275.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_145)
  (Wrd272.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  (Wrd267.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd267.Obj);
  (* (--Rsp)) = (Wrd254.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_144)
  (Wrd261.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  (Wrd260.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd260.Obj);
  (* (--Rsp)) = (Wrd247.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_143)
  (Wrd254.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  (Wrd253.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd253.Obj);
  (* (--Rsp)) = (Wrd238.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_142)
  (Wrd247.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  (Wrd246.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd246.Obj);
  (* (--Rsp)) = (Wrd241.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_141)
  (Wrd238.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  (Wrd233.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd233.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_140)
  (Wrd227.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  (Wrd226.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd226.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_139)
  (Wrd220.Obj) = Rvl;
  goto label_228;

DEFLABEL (label_231)
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd219.Obj);
  (* (--Rsp)) = (Wrd214.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_138)
  (Wrd211.Obj) = Rvl;
  goto label_230;

DEFLABEL (label_234)
  (Wrd206.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_137)
  (Wrd198.Obj) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  (Wrd194.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd194.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_136)
  (Wrd186.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_238)
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_135)
  (Wrd174.Obj) = Rvl;
  goto label_237;

DEFLABEL (label_240)
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_134)
  (Wrd162.Obj) = Rvl;
  goto label_239;

DEFLABEL (label_242)
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_133)
  (* (--Rsp)) = Rvl;
  goto label_241;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_5_33);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_292;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_291)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_290;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_289)
  (Wrd33.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_37]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_5_8]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_5_37);
  (Wrd9.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_5_8]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_5_38);
  (Wrd9.Obj) = (current_block [OBJECT_5_1]);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_39]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_5_9]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_5_39);
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
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_288;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_287)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_286;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_285)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_284;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_283)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_282;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_281)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_44]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_5_10]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd52.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_5_44);
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
    goto label_280;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_279)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_278;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_277)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_276;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_275)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_274;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_273)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_272;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd44.Obj) = ((Wrd45.pObj) [0]);

DEFLABEL (label_271)
  (Wrd54.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_270;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_269)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_268;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd64.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_267)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_266;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd71.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_265)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_264;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd78.Obj) = ((Wrd79.pObj) [0]);

DEFLABEL (label_263)
  (Wrd88.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd88.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_54]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd92.Obj) = (current_block [OBJECT_5_11]);
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd93.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd93.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_5_54);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_55]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_5_12]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_5_55);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_262;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_261)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_260;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_259)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_258;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_257)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_256;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_255)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_60]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_5_13]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd52.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_5_60);
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
    goto label_254;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_253)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_252;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_251)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_250;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_249)
  (Wrd40.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_64]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_5_11]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_5_64);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_65]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_5_14]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_5_65);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_248;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_247)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_246;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_245)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_244;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_243)
  (Wrd37.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_69]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_5_13]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_5_69);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_70]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_5_15]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_5_70);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_244)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_68]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_171)
  (Wrd30.Obj) = Rvl;
  goto label_243;

DEFLABEL (label_246)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_67]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_170)
  (Wrd23.Obj) = Rvl;
  goto label_245;

DEFLABEL (label_248)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_66]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_169)
  (Wrd14.Obj) = Rvl;
  goto label_247;

DEFLABEL (label_250)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_63]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_168)
  (Wrd30.Obj) = Rvl;
  goto label_249;

DEFLABEL (label_252)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_62]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_167)
  (Wrd23.Obj) = Rvl;
  goto label_251;

DEFLABEL (label_254)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_61]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_166)
  (Wrd14.Obj) = Rvl;
  goto label_253;

DEFLABEL (label_256)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_59]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_165)
  (Wrd37.Obj) = Rvl;
  goto label_255;

DEFLABEL (label_258)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_58]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_164)
  (Wrd30.Obj) = Rvl;
  goto label_257;

DEFLABEL (label_260)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_57]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_163)
  (Wrd23.Obj) = Rvl;
  goto label_259;

DEFLABEL (label_262)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_56]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_162)
  (Wrd14.Obj) = Rvl;
  goto label_261;

DEFLABEL (label_264)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_53]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_161)
  (Wrd78.Obj) = Rvl;
  goto label_263;

DEFLABEL (label_266)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_52]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_160)
  (Wrd71.Obj) = Rvl;
  goto label_265;

DEFLABEL (label_268)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_51]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_159)
  (Wrd64.Obj) = Rvl;
  goto label_267;

DEFLABEL (label_270)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_50]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_158)
  (Wrd55.Obj) = Rvl;
  goto label_269;

DEFLABEL (label_272)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_49]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_157)
  (Wrd44.Obj) = Rvl;
  goto label_271;

DEFLABEL (label_274)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_48]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_156)
  (Wrd37.Obj) = Rvl;
  goto label_273;

DEFLABEL (label_276)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_47]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_155)
  (Wrd30.Obj) = Rvl;
  goto label_275;

DEFLABEL (label_278)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_46]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_154)
  (Wrd23.Obj) = Rvl;
  goto label_277;

DEFLABEL (label_280)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_45]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_153)
  (Wrd14.Obj) = Rvl;
  goto label_279;

DEFLABEL (label_282)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_43]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_152)
  (Wrd37.Obj) = Rvl;
  goto label_281;

DEFLABEL (label_284)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_42]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_151)
  (Wrd30.Obj) = Rvl;
  goto label_283;

DEFLABEL (label_286)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_41]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_150)
  (Wrd23.Obj) = Rvl;
  goto label_285;

DEFLABEL (label_288)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_40]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_149)
  (Wrd14.Obj) = Rvl;
  goto label_287;

DEFLABEL (label_290)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_148)
  (Wrd23.Obj) = Rvl;
  goto label_289;

DEFLABEL (label_292)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_35]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_147)
  (Wrd14.Obj) = Rvl;
  goto label_291;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define LABEL_6_9 13
#define LABEL_6_11 15
#define LABEL_6_12 17
#define ENVIRONMENT_LABEL_6_3 28
#define DEBUGGING_LABEL_6_2 27
#define OBJECT_6_5 26
#define OBJECT_6_4 25
#define OBJECT_6_3 24
#define OBJECT_6_2 23
#define OBJECT_6_1 22
#define OBJECT_6_0 21
#define EXECUTE_CACHE_6_10 19
#define FREE_REFERENCES_LABEL_6_0 18
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
coercions_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_27;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_26)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_23;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_22)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_21;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_6_5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_17)
  (Wrd30.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_16)
  (Wrd21.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_15)
  (Wrd14.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_8 9
#define LABEL_7_10 11
#define LABEL_7_11 13
#define LABEL_7_13 15
#define ENVIRONMENT_LABEL_7_3 26
#define DEBUGGING_LABEL_7_2 25
#define OBJECT_7_1 24
#define OBJECT_7_0 23
#define EXECUTE_CACHE_7_12 17
#define EXECUTE_CACHE_7_9 19
#define EXECUTE_CACHE_7_6 21
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
coercions_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7_4);
      goto defhandler_coercing_7;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (defhandler_coercing_10)
DEFLABEL (defhandler_coercing_7)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd7.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_10 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_18 27
#define ENVIRONMENT_LABEL_3 54
#define DEBUGGING_LABEL_2 53
#define PURIFICATION_ROOT 52
#define OBJECT_18 51
#define OBJECT_17 50
#define OBJECT_16 49
#define OBJECT_15 48
#define OBJECT_14 47
#define OBJECT_13 46
#define OBJECT_12 45
#define OBJECT_11 44
#define OBJECT_10 43
#define OBJECT_9 42
#define OBJECT_8 41
#define OBJECT_7 40
#define OBJECT_6 39
#define OBJECT_5 38
#define OBJECT_4 37
#define OBJECT_3 36
#define OBJECT_2 35
#define OBJECT_1 34
#define OBJECT_0 33
#define GLOBAL_EXECUTE_CACHE_15 29
#define GLOBAL_EXECUTE_CACHE_11 31
#define FREE_REFERENCES_LABEL_0 28
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
coercions_so_a23cb9f852c0d919 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto label_17;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto expression_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_13)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_17])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_17)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_16)
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 7)
      goto label_15;
    blocks = (current_block [OBJECT_18]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_16])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_15)
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
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8);
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

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_16]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_coercions_so_a23cb9f852c0d919 [7] =
  {
    { "coercions_so_code_1", 2, coercions_so_code_1 },
    { "coercions_so_code_2", 1, coercions_so_code_2 },
    { "coercions_so_code_3", 2, coercions_so_code_3 },
    { "coercions_so_code_4", 4, coercions_so_code_4 },
    { "coercions_so_code_5", 66, coercions_so_code_5 },
    { "coercions_so_code_6", 8, coercions_so_code_6 },
    { "coercions_so_code_7", 7, coercions_so_code_7 }
  };

int
decl_coercions_so_a23cb9f852c0d919 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_coercions_so_a23cb9f852c0d919);
  return (0);
}

DECLARE_COMPILED_CODE ("coercions.so", 13, decl_coercions_so_a23cb9f852c0d919, coercions_so_a23cb9f852c0d919)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_coercions_so_data_a23cb9f852c0d919 [1419] =
  "\xa2\x01\x10\xf7\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x81\x28\x0d"
  "\xb9\x23\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x81\x28"
  "\xb1\x23\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x83\x88\x0d\xbb\x0d\xbc"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84\x88\x07"
  "\x0c\x1d\x1d\xb4\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0d\xb4\x0d"
  "\x0d\x1c\x0d\xb7\x0d\x0d\x0d\x1c\x1d\x0d\x1c\xc1\x1c\x06\x07\x08"
  "\xc1\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\x1b\x0d\x0d\x0d\x1b\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\xb4\x28\xb6\x28\xb7\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x9e\xbf\x88"
  "\xb7\x0d\x1b\x2a\x0d\xc2\x02\x02\x1b\x1b\x2a\x1b\x2a\x0d\x1b\x2a"
  "\x1b\xb5\x2a\x1b\xb1\x2a\xc3\xb4\xb2\x2a\x28\x0d\x28\x0d\x26\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x0e\x63\x6f\x65"
  "\x72\x63\x69\x6f\x6e\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x05\x16\x6d\x61\x6b\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x6f"
  "\x70\x65\x72\x61\x74\x6f\x72\x02\x0f\x06\x83\x04\x0e\x04\x83\x04"
  "\x05\x0c\x02\x05\x02\x10\x04\x84\x04\x03\x0a\x02\x0a\x70\x72\x65"
  "\x64\x69\x63\x61\x74\x65\x14\x63\x6f\x65\x72\x63\x61\x62\x69\x6c"
  "\x69\x74\x79\x2d\x74\x65\x73\x74\x65\x72\x05\x08\x65\x71\x2d\x70"
  "\x75\x74\x21\x02\x12\x06\x81\x87\x02\x11\x04\x85\x08\x05\x0d\x02"
  "\x18\x4e\x6f\x20\x74\x65\x73\x74\x65\x72\x20\x61\x76\x61\x69\x6c"
  "\x61\x62\x6c\x65\x20\x66\x6f\x72\x02\x08\x04\x07\x65\x71\x2d\x67"
  "\x65\x74\x05\x0b\x64\x65\x66\x68\x61\x6e\x64\x6c\x65\x72\x04\x06"
  "\x65\x72\x72\x6f\x72\x04\x16\x0a\x83\x04\x15\x08\x81\x89\x02\x14"
  "\x06\x81\x87\x02\x13\x04\x85\x06\x09\x18\x09\x02\x06\x62\x65\x67"
  "\x69\x6e\x07\x64\x65\x66\x69\x6e\x65\x08\x63\x6f\x65\x72\x63\x65"
  "\x72\x0a\x06\x71\x75\x6f\x74\x65\x07\x6c\x61\x6d\x62\x64\x61\x02"
  "\x78\x1e\x64\x65\x63\x6c\x61\x72\x65\x2d\x6e\x61\x6d\x65\x64\x2d"
  "\x63\x6f\x65\x72\x63\x69\x6f\x6e\x2d\x74\x61\x72\x67\x65\x74\x0b"
  "\x08\x16\x74\x61\x67\x2d\x63\x6f\x65\x72\x63\x69\x6f\x6e\x2d\x6d"
  "\x65\x74\x61\x64\x61\x74\x61\x0c\x04\x63\x61\x72\x0d\x04\x63\x64"
  "\x72\x0e\x03\x12\x69\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73"
  "\x79\x6e\x74\x61\x78\x02\x58\x86\x01\x81\x89\x02\x57\x84\x01\x81"
  "\x8b\x02\x56\x82\x01\x81\x8b\x02\x55\x80\x01\x81\x8b\x02\x54\x7e"
  "\x81\x8b\x02\x53\x7c\x81\x8b\x02\x52\x7a\x81\x8b\x02\x51\x78\x81"
  "\x89\x02\x50\x76\x81\x89\x02\x4f\x74\x81\x89\x02\x4e\x72\x81\x8b"
  "\x02\x4d\x70\x81\x8b\x02\x4c\x6e\x81\x8b\x02\x4b\x6c\x81\x8b\x02"
  "\x4a\x6a\x81\x8b\x02\x49\x68\x81\x8b\x02\x48\x66\x81\x8d\x02\x47"
  "\x64\x81\x8b\x02\x46\x62\x81\x8b\x02\x45\x60\x81\x8b\x02\x44\x5e"
  "\x81\x8b\x02\x43\x5c\x81\x89\x02\x42\x5a\x81\x89\x02\x41\x58\x81"
  "\x89\x02\x40\x56\x81\x89\x02\x3f\x54\x81\x89\x02\x3e\x52\x81\x8b"
  "\x02\x3d\x50\x81\x8b\x02\x3c\x4e\x81\x8b\x02\x3b\x4c\x81\x8b\x02"
  "\x3a\x4a\x81\x8b\x02\x39\x48\x81\x8d\x02\x38\x46\x81\x8d\x02\x37"
  "\x44\x81\x8b\x02\x36\x42\x81\x89\x02\x35\x40\x81\x89\x02\x34\x3e"
  "\x81\x89\x02\x33\x3c\x81\x89\x02\x32\x3a\x81\x89\x02\x31\x38\x81"
  "\x89\x02\x30\x36\x81\x89\x02\x2f\x34\x81\x89\x02\x2e\x32\x81\x89"
  "\x02\x2d\x30\x81\x87\x02\x2c\x2e\x81\x87\x02\x2b\x2c\x81\x87\x02"
  "\x2a\x2a\x81\x87\x02\x29\x28\x81\x89\x02\x28\x26\x81\x89\x02\x27"
  "\x24\x81\x89\x02\x26\x22\x81\x87\x02\x25\x20\x81\x89\x02\x24\x1e"
  "\x81\x89\x02\x23\x1c\x81\x89\x02\x22\x1a\x81\x89\x02\x21\x18\x81"
  "\x89\x02\x20\x16\x81\x89\x02\x1f\x14\x81\x87\x02\x1e\x12\x81\x87"
  "\x02\x1d\x10\x81\x87\x02\x1c\x0e\x81\x89\x02\x1b\x0c\x81\x89\x02"
  "\x1a\x0a\x81\x89\x02\x19\x08\x81\x89\x02\x18\x06\x81\x87\x02\x17"
  "\x04\x85\x08\x85\x01\x9b\x01\x0f\x02\x0b\x02\x3f\x07\x2d\x61\x62"
  "\x6c\x65\x3f\x03\x2d\x3e\x0d\x0e\x04\x07\x73\x79\x6d\x62\x6f\x6c"
  "\x02\x60\x12\x81\x89\x02\x5f\x10\x81\x87\x02\x5e\x0e\x81\x85\x02"
  "\x5d\x0c\x81\x85\x02\x5c\x0a\x81\x85\x02\x5b\x08\x81\x85\x02\x5a"
  "\x06\x81\x85\x02\x59\x04\x84\x06\x11\x1d\x0e\x02\x08\x04\x06\x04"
  "\x09\x63\x6f\x65\x72\x63\x69\x6e\x67\x04\x67\x10\x81\x8b\x02\x66"
  "\x0e\x81\x91\x02\x65\x0c\x81\x8b\x02\x64\x0a\x81\x8b\x02\x63\x08"
  "\x81\x89\x02\x62\x06\x81\x87\x02\x61\x04\x85\x08\x0f\x1b\x0d\x18"
  "\x64\x65\x63\x6c\x61\x72\x65\x2d\x63\x6f\x65\x72\x63\x69\x6f\x6e"
  "\x2d\x74\x61\x72\x67\x65\x74\x0d\x04\x14\x64\x65\x66\x68\x61\x6e"
  "\x64\x6c\x65\x72\x2d\x63\x6f\x65\x72\x63\x69\x6e\x67\x1a\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73"
  "\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x0b\x0e\x04\x0f\x04\x11\x64"
  "\x65\x63\x6c\x61\x72\x65\x2d\x63\x6f\x65\x72\x63\x69\x6f\x6e\x09"
  "\x04\x0c\x04\x0a\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x04\x04\x1f\x65\x72\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x03\x0d\x1c\x80\x80\x04\x0c\x1a\x81"
  "\x81\x02\x0b\x18\x81\x81\x02\x0a\x16\x81\x87\x02\x09\x14\x81\x85"
  "\x02\x08\x12\x81\x83\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x85\x02"
  "\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02"
  "\x06\x81\x83\x02\x01\x04\x81\x83\x02\x1b\x37";

SCHEME_OBJECT *
coercions_so_data_a23cb9f852c0d919 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_coercions_so_data_a23cb9f852c0d919 [0]))), (sizeof (prog_coercions_so_data_a23cb9f852c0d919)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_18]));
}

DECLARE_COMPILED_DATA_NS ("coercions.so", coercions_so_data_a23cb9f852c0d919)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("coercions.so", "635a8df5c5f96503")
