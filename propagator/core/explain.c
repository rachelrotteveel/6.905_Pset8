/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-03T22:04:50-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_8 9
#define LABEL_1_11 11
#define LABEL_1_13 13
#define LABEL_1_14 15
#define TAG_1_15 6
#define LABEL_1_22 17
#define LABEL_1_18 19
#define TAG_1_19 8
#define LABEL_1_23 21
#define LABEL_1_16 23
#define TAG_1_17 10
#define LABEL_1_20 25
#define LABEL_1_24 27
#define LABEL_1_35 29
#define LABEL_1_36 31
#define LABEL_1_37 33
#define LABEL_1_38 35
#define LABEL_1_39 37
#define LABEL_1_40 39
#define LABEL_1_41 41
#define LABEL_1_42 43
#define LABEL_1_43 45
#define LABEL_1_44 47
#define LABEL_1_45 49
#define LABEL_1_26 51
#define LABEL_1_48 53
#define LABEL_1_27 55
#define LABEL_1_28 57
#define LABEL_1_29 59
#define LABEL_1_33 61
#define LABEL_1_31 63
#define LABEL_1_49 65
#define LABEL_1_52 67
#define LABEL_1_51 69
#define LABEL_1_55 71
#define LABEL_1_56 73
#define LABEL_1_64 75
#define LABEL_1_46 77
#define LABEL_1_61 79
#define LABEL_1_63 81
#define LABEL_1_66 83
#define LABEL_1_67 85
#define LABEL_1_76 87
#define LABEL_1_68 89
#define LABEL_1_70 91
#define LABEL_1_78 93
#define LABEL_1_71 95
#define TAG_1_72 46
#define LABEL_1_79 97
#define LABEL_1_82 99
#define LABEL_1_74 101
#define LABEL_1_83 103
#define LABEL_1_86 105
#define LABEL_1_77 107
#define LABEL_1_80 109
#define LABEL_1_81 111
#define ENVIRONMENT_LABEL_1_3 186
#define DEBUGGING_LABEL_1_2 185
#define OBJECT_1_20 184
#define OBJECT_1_19 183
#define OBJECT_1_18 182
#define OBJECT_1_17 181
#define OBJECT_1_16 180
#define OBJECT_1_15 179
#define OBJECT_1_14 178
#define OBJECT_1_13 177
#define OBJECT_1_12 176
#define OBJECT_1_11 175
#define OBJECT_1_10 174
#define OBJECT_1_9 173
#define OBJECT_1_8 172
#define OBJECT_1_7 171
#define OBJECT_1_6 170
#define OBJECT_1_5 169
#define OBJECT_1_4 168
#define OBJECT_1_3 167
#define OBJECT_1_2 166
#define OBJECT_1_1 165
#define OBJECT_1_0 164
#define EXECUTE_CACHE_1_85 113
#define EXECUTE_CACHE_1_84 115
#define EXECUTE_CACHE_1_75 117
#define EXECUTE_CACHE_1_73 119
#define EXECUTE_CACHE_1_69 121
#define EXECUTE_CACHE_1_65 123
#define EXECUTE_CACHE_1_62 125
#define EXECUTE_CACHE_1_60 127
#define EXECUTE_CACHE_1_59 129
#define EXECUTE_CACHE_1_58 131
#define EXECUTE_CACHE_1_57 133
#define EXECUTE_CACHE_1_54 135
#define EXECUTE_CACHE_1_53 137
#define EXECUTE_CACHE_1_50 139
#define EXECUTE_CACHE_1_47 141
#define EXECUTE_CACHE_1_34 143
#define EXECUTE_CACHE_1_32 145
#define EXECUTE_CACHE_1_30 147
#define EXECUTE_CACHE_1_25 149
#define EXECUTE_CACHE_1_21 151
#define EXECUTE_CACHE_1_12 153
#define EXECUTE_CACHE_1_10 155
#define EXECUTE_CACHE_1_9 157
#define EXECUTE_CACHE_1_7 159
#define FREE_REFERENCE_1_1 162
#define FREE_REFERENCE_1_0 163
#define FREE_REFERENCES_LABEL_1_0 112
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
explain_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd58;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd40;
  machine_word Wrd57;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd46;
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd101;
  machine_word Wrd91;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd74;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd161;
  machine_word Wrd149;
  machine_word Wrd151;
  machine_word Wrd152;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd157;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd10;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
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
      goto explain_73;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto label_75;

    case 6:
      current_block = (Rpc - LABEL_1_14);
      goto explain_89;

    case 7:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_1_18);
      goto reason_91;

    case 9:
      current_block = (Rpc - LABEL_1_23);
      goto label_76;

    case 10:
      current_block = (Rpc - LABEL_1_16);
      goto explain_cell_51;

    case 11:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_52;

    case 12:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_1_35);
      goto continuation_31;

    case 14:
      current_block = (Rpc - LABEL_1_36);
      goto continuation_48;

    case 15:
      current_block = (Rpc - LABEL_1_37);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_1_38);
      goto label_80;

    case 17:
      current_block = (Rpc - LABEL_1_39);
      goto label_84;

    case 18:
      current_block = (Rpc - LABEL_1_40);
      goto label_83;

    case 19:
      current_block = (Rpc - LABEL_1_41);
      goto label_82;

    case 20:
      current_block = (Rpc - LABEL_1_42);
      goto label_81;

    case 21:
      current_block = (Rpc - LABEL_1_43);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_1_44);
      goto continuation_20;

    case 23:
      current_block = (Rpc - LABEL_1_45);
      goto label_78;

    case 24:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_17;

    case 25:
      current_block = (Rpc - LABEL_1_48);
      goto label_77;

    case 26:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_55;

    case 27:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_54;

    case 28:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_53;

    case 29:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_11;

    case 30:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_10;

    case 31:
      current_block = (Rpc - LABEL_1_49);
      goto continuation_19;

    case 32:
      current_block = (Rpc - LABEL_1_52);
      goto continuation_56;

    case 33:
      current_block = (Rpc - LABEL_1_51);
      goto continuation_57;

    case 34:
      current_block = (Rpc - LABEL_1_55);
      goto continuation_14;

    case 35:
      current_block = (Rpc - LABEL_1_56);
      goto continuation_13;

    case 36:
      current_block = (Rpc - LABEL_1_64);
      goto label_79;

    case 37:
      current_block = (Rpc - LABEL_1_46);
      goto continuation_30;

    case 38:
      current_block = (Rpc - LABEL_1_61);
      goto continuation_58;

    case 39:
      current_block = (Rpc - LABEL_1_63);
      goto continuation_12;

    case 40:
      current_block = (Rpc - LABEL_1_66);
      goto continuation_47;

    case 41:
      current_block = (Rpc - LABEL_1_67);
      goto continuation_44;

    case 42:
      current_block = (Rpc - LABEL_1_76);
      goto continuation_43;

    case 43:
      current_block = (Rpc - LABEL_1_68);
      goto continuation_40;

    case 44:
      current_block = (Rpc - LABEL_1_70);
      goto continuation_66;

    case 45:
      current_block = (Rpc - LABEL_1_78);
      goto continuation_60;

    case 46:
      current_block = (Rpc - LABEL_1_71);
      goto lambda_92;

    case 47:
      current_block = (Rpc - LABEL_1_79);
      goto label_85;

    case 48:
      current_block = (Rpc - LABEL_1_82);
      goto continuation_33;

    case 49:
      current_block = (Rpc - LABEL_1_74);
      goto continuation_34;

    case 50:
      current_block = (Rpc - LABEL_1_83);
      goto label_86;

    case 51:
      current_block = (Rpc - LABEL_1_86);
      goto continuation_38;

    case 52:
      current_block = (Rpc - LABEL_1_77);
      goto continuation_35;

    case 53:
      current_block = (Rpc - LABEL_1_80);
      goto continuation_64;

    case 54:
      current_block = (Rpc - LABEL_1_81);
      goto continuation_63;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (explain_88)
DEFLABEL (explain_73)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_1_1])))
    goto label_95;
  (Wrd14.Obj) = (current_block [OBJECT_1_2]);
  ((Wrd6.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_95)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_94;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_94;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd19.Lng) + (Wrd23.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_94;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_93)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_14])));
  Rhp += 3;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd51.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_16])));
  Rhp += 2;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd49.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_18])));
  Rhp += 2;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd49.pObj)));
  (* (--Rsp)) = (Wrd50.Obj);
  Wrd32 = Wrd49;
  (Wrd33.Obj) = (Rsp [6]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  ((Wrd32.pObj) [3]) = (Wrd30.Obj);
  Wrd38 = Wrd51;
  ((Wrd38.pObj) [2]) = (Wrd50.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  ((Wrd38.pObj) [3]) = (Wrd36.Obj);
  Wrd47 = Wrd53;
  ((Wrd47.pObj) [2]) = (Wrd33.Obj);
  ((Wrd47.pObj) [3]) = (Wrd52.Obj);
  (Wrd42.Obj) = (Rsp [4]);
  ((Wrd47.pObj) [4]) = (Wrd42.Obj);
  (Rsp [5]) = (Wrd54.Obj);
  (Rsp [6]) = (Wrd30.Obj);
  Rsp = (& (Rsp [5]));
  goto explain_71;

DEFLABEL (label_94)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (explain_89)
  CLOSURE_HEADER (LABEL_1_14);

DEFLABEL (explain_71)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  Rvl = (current_block [OBJECT_1_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_53]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_1_27);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_51]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_52]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_1_52);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_98;
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_60]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_1_51);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_97)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_62]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_1_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_72);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_71])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  ((Wrd13.pObj) [3]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_73]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_1_70);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto explain_cell_51;

DEFLABEL (label_98)
  (Wrd16.Obj) = (current_block [OBJECT_1_8]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_97;

DEFLABEL (reason_91)
  CLOSURE_HEADER (LABEL_1_18);

DEFLABEL (reason_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_1_3]);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd39.Lng))))
    goto label_110;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_109;

DEFLABEL (label_108)
  (Wrd13.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_99;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_99)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_101;
  (Wrd15.Obj) = (current_block [OBJECT_1_7]);
  goto label_100;

DEFLABEL (label_101)
  (Wrd15.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_100)
DEFLABEL (label_107)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_103;

DEFLABEL (label_102)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_34]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_33);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_55]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_56]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_57]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_56);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_105;
  Wrd5 = Wrd9;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_65]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_55);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_50]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_63);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_64])), (Wrd6.pObj));

DEFLABEL (label_79)
  (Wrd5.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_106)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_32]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_31);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_1_17]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_58]));

DEFLABEL (label_109)
  Rsp = (& (Rsp [2]));
  goto label_102;

DEFLABEL (label_110)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_76)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_108;
  goto label_109;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  goto label_102;

DEFLABEL (explain_cell_90)
DEFLABEL (explain_cell_51)
  INTERRUPT_CHECK (26, LABEL_1_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (Wrd5.Obj) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_118;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_118;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd40.Lng) < (Wrd44.Lng))
    goto label_116;

DEFLABEL (label_115)
  (Wrd20.Obj) = (current_block [OBJECT_1_7]);

DEFLABEL (label_114)
  Rsp = (& (Rsp [3]));
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd21.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd22.Obj) = (Rsp [0]);
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_112;
  (Wrd29.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  goto label_111;

DEFLABEL (label_112)
  Rvl = (Rsp [1]);

DEFLABEL (label_111)
DEFLABEL (label_113)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_116)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_117)
  (Wrd58.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_50]));

DEFLABEL (label_118)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [3]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_77)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  goto label_116;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_59]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_44);
  (Wrd46.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd46.uLng) == 26))
    goto label_131;
  if (Rvl == (current_block [OBJECT_1_16]))
    goto label_130;

DEFLABEL (label_129)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_46]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_120;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_50]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_1_36);
  (Wrd147.Obj) = (Rsp [2]);
  (Wrd148.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd148.Obj);
  (Wrd146.pObj) = (& (Rhp [-2]));
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd146.pObj)));
  (Wrd152.Obj) = (current_block [OBJECT_1_9]);
  (* (Rhp++)) = (Wrd152.Obj);
  (* (Rhp++)) = (Wrd144.Obj);
  (Wrd151.pObj) = (& (Rhp [-2]));
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd151.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd149.Obj);

DEFLABEL (label_119)
  (Wrd161.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd161.pObj)));
  goto label_114;

DEFLABEL (label_120)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_66]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_67]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_68]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_69]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_1_68);
  (Wrd6.Obj) = (current_block [OBJECT_1_8]);
  if (Rvl == (Wrd6.Obj))
    goto label_128;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_76]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_69]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_1_76);
  (Wrd20.Obj) = (current_block [OBJECT_1_18]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_127)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_77]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_60]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_1_77);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_1_8]);
  if (Rvl == (Wrd6.Obj))
    goto label_126;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_86]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_65]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_1_86);
  (Wrd21.Obj) = (current_block [OBJECT_1_20]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_125)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_84]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_1_67);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_75]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_1_74);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_19]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_124;
  Wrd14 = Wrd18;

DEFLABEL (label_123)
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_122;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_82]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_85]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_82);
  (Wrd30.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_121)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_84]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_1_66);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_50]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_35);
  (Wrd157.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd157.Obj);
  goto label_119;

DEFLABEL (label_122)
  (Wrd25.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_83])), (Wrd15.pObj));

DEFLABEL (label_86)
  (Wrd14.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd6.Obj);
  goto label_125;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd6.Obj);
  goto label_127;

DEFLABEL (label_130)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_43]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd57.Obj);
  goto label_117;

DEFLABEL (label_131)
  (Wrd60.Obj) = (current_block [OBJECT_1_16]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_45]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_78)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_129;
  goto label_130;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_37);
  (Wrd70.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd70.uLng) == 1))
    goto label_146;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_145)
  (Wrd134.Obj) = (current_block [OBJECT_1_11]);
  (Wrd137.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd137.Lng))))
    goto label_144;
  (Wrd76.uLng) = (OBJECT_DATUM (Wrd134.Obj));
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd76.Obj) == (Wrd78.Obj))
    goto label_137;

DEFLABEL (label_143)
  (Wrd124.Obj) = (current_block [OBJECT_1_12]);
  (Wrd127.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd127.Lng))))
    goto label_142;
  (Wrd80.uLng) = (OBJECT_DATUM (Wrd124.Obj));
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if ((Wrd80.Obj) == (Wrd82.Obj))
    goto label_137;

DEFLABEL (label_141)
  (Wrd114.Obj) = (current_block [OBJECT_1_13]);
  (Wrd117.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd117.Lng))))
    goto label_140;
  (Wrd84.uLng) = (OBJECT_DATUM (Wrd114.Obj));
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd84.Obj) == (Wrd86.Obj))
    goto label_137;

DEFLABEL (label_139)
  (Wrd104.Obj) = (current_block [OBJECT_1_14]);
  (Wrd107.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd107.Lng))))
    goto label_138;
  (Wrd88.uLng) = (OBJECT_DATUM (Wrd104.Obj));
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd88.Obj) == (Wrd90.Obj))
    goto label_137;

DEFLABEL (label_136)
  (Wrd91.Obj) = (current_block [OBJECT_1_15]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd101.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd101.Lng)))
    goto label_132;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_132)
  (Wrd95.uLng) = (OBJECT_DATUM (Wrd91.Obj));
  (Wrd96.Obj) = (Rsp [1]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if ((Wrd95.Obj) == (Wrd97.Obj))
    goto label_134;
  (Wrd93.Obj) = (current_block [OBJECT_1_7]);
  goto label_133;

DEFLABEL (label_134)
  (Wrd93.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_133)
DEFLABEL (label_135)
  Rsp = (& (Rsp [3]));
  if ((Wrd93.Obj) == ((SCHEME_OBJECT) 0))
    goto label_129;
  goto label_115;

DEFLABEL (label_137)
  Rsp = (& (Rsp [2]));
  goto label_115;

DEFLABEL (label_138)
  (Wrd109.Obj) = (Rsp [0]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_81)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_136;
  goto label_137;

DEFLABEL (label_140)
  (Wrd119.Obj) = (Rsp [0]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_82)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_139;
  goto label_137;

DEFLABEL (label_142)
  (Wrd129.Obj) = (Rsp [0]);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_83)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;
  goto label_137;

DEFLABEL (label_144)
  (Wrd139.Obj) = (Rsp [0]);
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_84)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_143;
  goto label_137;

DEFLABEL (label_146)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_10]), 1);

DEFLABEL (label_80)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_43);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_129;
  goto label_115;

DEFLABEL (lambda_92)
  CLOSURE_HEADER (LABEL_1_71);

DEFLABEL (lambda_65)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_1_3]);
  (Wrd43.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd43.Lng))))
    goto label_155;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_154;

DEFLABEL (label_153)
  (Wrd13.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_147;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_147)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_149;
  (Wrd15.Obj) = (current_block [OBJECT_1_7]);
  goto label_148;

DEFLABEL (label_149)
  (Wrd15.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_148)
DEFLABEL (label_152)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_151;

DEFLABEL (label_150)
  Rvl = (current_block [OBJECT_1_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_151)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_80]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_81]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_34]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_1_81);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_57]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_1_80);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_73]));

DEFLABEL (label_154)
  Rsp = (& (Rsp [2]));
  goto label_150;

DEFLABEL (label_155)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_79]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_85)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_153;
  goto label_154;

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_1_78);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_151;
  goto label_150;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_8 9
#define EXECUTE_CACHE_2_6 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
explain_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_2_4);
      goto diagram_depth_4;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (diagram_depth_7)
DEFLABEL (diagram_depth_4)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_10)
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd11.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd9.Lng)))
    goto label_9;
  Rvl = (LONG_TO_FIXNUM (Wrd9.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_10 13
#define LABEL_3_12 15
#define ENVIRONMENT_LABEL_3_3 22
#define DEBUGGING_LABEL_3_2 21
#define EXECUTE_CACHE_3_11 17
#define EXECUTE_CACHE_3_6 19
#define FREE_REFERENCES_LABEL_3_0 16
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
explain_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto explanation_ancestor_8;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto lp_6;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (explanation_ancestor_14)
DEFLABEL (explanation_ancestor_8)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_17;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_17;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) - (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_17;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd11.Obj);
  goto lp_6;

DEFLABEL (label_17)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_16;

DEFLABEL (lp_15)
DEFLABEL (lp_6)
  INTERRUPT_CHECK (26, LABEL_3_8);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_22;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd19.Lng) > 0)
    goto label_19;

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [0]) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_21;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_21;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd10.Obj);
  goto lp_6;

DEFLABEL (label_21)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5 3
#define LABEL_6 5
#define LABEL_7 7
#define ENVIRONMENT_LABEL_3 16
#define DEBUGGING_LABEL_2 15
#define PURIFICATION_ROOT 14
#define OBJECT_2 13
#define OBJECT_1 12
#define OBJECT_0 11
#define GLOBAL_EXECUTE_CACHE_4 9
#define FREE_REFERENCES_LABEL_0 8
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
explain_so_5b8cfd7dfcf6d7e9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5);
      goto label_4;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto expression_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_1)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_6])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_5)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_4)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 3)
      goto label_3;
    blocks = (current_block [OBJECT_2]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_3)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_4]));

INVOKE_INTERFACE_TARGET_4
}

static const struct liarc_code_S arr_decl_explain_so_5b8cfd7dfcf6d7e9 [3] =
  {
    { "explain_so_code_1", 55, explain_so_code_1 },
    { "explain_so_code_2", 3, explain_so_code_2 },
    { "explain_so_code_3", 7, explain_so_code_3 }
  };

int
decl_explain_so_5b8cfd7dfcf6d7e9 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_explain_so_5b8cfd7dfcf6d7e9);
  return (0);
}

DECLARE_COMPILED_CODE ("explain.so", 3, decl_explain_so_5b8cfd7dfcf6d7e9, explain_so_5b8cfd7dfcf6d7e9)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_explain_so_data_5b8cfd7dfcf6d7e9 [1115] =
  "\xbe\x01\x08\x94\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0d\x0d"
  "\x0c\x81\x02\x86\x02\x02\x02\xc1\x0d\x08\x06\x07\x85\xc2\x02\x02"
  "\x1d\x0c\x0d\xb9\x0d\xba\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbb"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbc\x28\x0d\x28\xb1\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x82\x88"
  "\x80\x28\x0d\xbd\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbe\x1d\xb0\x83\x88\x28\xb3\x28\xb5\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x9a\xb8\x88\xb0"
  "\xb5\x2a\xb6\x2a\xb1\x2a\x06\x9b\xb4\xb3\x0d\xb2\x9b\x28\x0d\x26"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x0c\x65\x78\x70\x6c\x61\x69"
  "\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x62\x79\x0a\x68"
  "\x61\x73\x2d\x76\x61\x6c\x75\x65\x0e\x77\x69\x74\x68\x2d\x70\x72"
  "\x65\x6d\x69\x73\x65\x73\x22\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x69"
  "\x6e\x66\x6f\x72\x6d\x61\x6e\x74\x20\x74\x79\x70\x65\x20\x2d\x2d"
  "\x20\x45\x58\x50\x4c\x41\x49\x4e\x3d\x3b\x0f\x1b\x04\x63\x61\x72"
  "\x04\x68\x61\x73\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65"
  "\x3f\x1e\x65\x08\x19\x43\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x65\x78"
  "\x70\x6c\x61\x69\x6e\x20\x61\x20\x63\x65\x6c\x6c\x2e\x08\x6e\x61"
  "\x6d\x65\x2d\x6f\x66\x10\x2a\x65\x78\x70\x6c\x61\x69\x6e\x2d\x64"
  "\x65\x62\x75\x67\x2a\x03\x03\x06\x63\x65\x6c\x6c\x3f\x02\x13\x6d"
  "\x61\x6b\x65\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c"
  "\x65\x04\x07\x61\x73\x73\x65\x72\x74\x03\x0e\x64\x69\x61\x67\x72"
  "\x61\x6d\x2d\x64\x65\x70\x74\x68\x05\x0f\x68\x61\x73\x68\x2d\x74"
  "\x61\x62\x6c\x65\x2f\x67\x65\x74\x03\x09\x64\x69\x61\x67\x72\x61"
  "\x6d\x3f\x03\x08\x63\x6f\x6e\x74\x65\x6e\x74\x03\x05\x6e\x61\x6d"
  "\x65\x04\x15\x65\x78\x70\x6c\x61\x6e\x61\x74\x69\x6f\x6e\x2d\x61"
  "\x6e\x63\x65\x73\x74\x6f\x72\x03\x09\x6e\x6f\x74\x68\x69\x6e\x67"
  "\x3f\x03\x03\x0a\x74\x6d\x73\x2d\x71\x75\x65\x72\x79\x03\x06\x2d"
  "\x3e\x74\x6d\x73\x03\x0f\x64\x69\x61\x67\x72\x61\x6d\x2d\x69\x6e"
  "\x70\x75\x74\x73\x04\x06\x65\x72\x72\x6f\x72\x03\x07\x6c\x65\x6e"
  "\x67\x74\x68\x03\x0f\x76\x26\x73\x2d\x69\x6e\x66\x6f\x72\x6d\x61"
  "\x6e\x74\x73\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f"
  "\x70\x75\x74\x21\x04\x04\x6d\x61\x70\x03\x0c\x76\x26\x73\x2d\x73"
  "\x75\x70\x70\x6f\x72\x74\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d"
  "\x61\x70\x03\x0a\x76\x26\x73\x2d\x76\x61\x6c\x75\x65\x04\x07\x61"
  "\x70\x70\x65\x6e\x64\x03\x05\x68\x61\x73\x68\x19\x3a\x70\x81\x87"
  "\x02\x39\x6e\x81\x85\x02\x38\x6c\x81\x97\x02\x37\x6a\x81\x99\x02"
  "\x36\x68\x81\x95\x02\x35\x66\x81\x95\x02\x34\x64\x81\x95\x02\x33"
  "\x62\x81\x83\x02\x32\x60\x81\x85\x02\x31\x5e\x81\x85\x02\x30\x5c"
  "\x81\x89\x02\x2f\x5a\x81\x95\x02\x2e\x58\x81\x95\x02\x2d\x56\x81"
  "\x93\x02\x2c\x54\x81\x91\x02\x2b\x52\x81\x85\x02\x2a\x50\x81\x89"
  "\x02\x29\x4e\x81\x91\x02\x28\x4c\x81\x87\x02\x27\x4a\x81\x85\x02"
  "\x26\x48\x81\x83\x02\x25\x46\x81\x87\x02\x24\x44\x81\x89\x02\x23"
  "\x42\x81\x93\x02\x22\x40\x81\x85\x02\x21\x3e\x81\x85\x02\x20\x3c"
  "\x81\x8b\x02\x1f\x3a\x81\x89\x02\x1e\x38\x81\x87\x02\x1d\x36\x81"
  "\x91\x02\x1c\x34\x81\x91\x02\x1b\x32\x81\x91\x02\x1a\x30\x81\x91"
  "\x02\x19\x2e\x81\x91\x02\x18\x2c\x81\x83\x02\x17\x2a\x81\x83\x02"
  "\x16\x28\x81\x83\x02\x15\x26\x81\x83\x02\x14\x24\x81\x93\x02\x13"
  "\x22\x81\x93\x02\x12\x20\x81\x91\x02\x11\x1e\x81\x93\x02\x10\x1c"
  "\x81\x85\x02\x0f\x1a\x81\x85\x02\x0e\x18\x81\x91\x02\x0d\x16\x81"
  "\x83\x02\x0c\x14\x81\x85\x02\x0b\x12\x81\x85\x02\x0a\x10\x81\x85"
  "\x02\x09\x0e\x81\x87\x02\x08\x0c\x81\x87\x02\x07\x0a\x81\x85\x02"
  "\x06\x08\x81\x89\x02\x05\x06\x81\x85\x02\x04\x04\x84\x04\x6f\xbb"
  "\x01\x02\x03\x10\x64\x69\x61\x67\x72\x61\x6d\x2d\x63\x72\x65\x61"
  "\x74\x6f\x72\x03\x03\x3d\x08\x81\x83\x02\x3c\x06\x81\x83\x02\x3b"
  "\x04\x83\x04\x07\x10\x02\x03\x03\x03\x44\x10\x81\x85\x02\x43\x0e"
  "\x81\x85\x02\x42\x0c\x81\x85\x02\x41\x0a\x81\x85\x02\x40\x08\x81"
  "\x85\x02\x3f\x06\x81\x85\x02\x3e\x04\x84\x06\x0f\x17\x04\x04\x04"
  "\x08\x65\x78\x70\x6c\x61\x69\x6e\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02"
  "\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
explain_so_data_5b8cfd7dfcf6d7e9 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_explain_so_data_5b8cfd7dfcf6d7e9 [0]))), (sizeof (prog_explain_so_data_5b8cfd7dfcf6d7e9)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("explain.so", explain_so_data_5b8cfd7dfcf6d7e9)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("explain.so", "fb470fad41cf741a")
