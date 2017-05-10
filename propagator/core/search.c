/* Emacs: this is -*- C -*- code, */
/* generated 2017-05-10T00:19:48-04 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_10 9
#define LABEL_1_14 11
#define LABEL_1_15 13
#define LABEL_1_8 15
#define TAG_1_9 6
#define LABEL_1_17 17
#define LABEL_1_21 19
#define LABEL_1_12 21
#define LABEL_1_22 23
#define LABEL_1_18 25
#define LABEL_1_19 27
#define LABEL_1_23 29
#define LABEL_1_33 31
#define LABEL_1_34 33
#define LABEL_1_35 35
#define LABEL_1_26 37
#define LABEL_1_36 39
#define LABEL_1_39 41
#define LABEL_1_41 43
#define LABEL_1_27 45
#define LABEL_1_28 47
#define TAG_1_29 22
#define LABEL_1_31 49
#define LABEL_1_42 51
#define LABEL_1_40 53
#define LABEL_1_37 55
#define LABEL_1_44 57
#define TAG_1_45 27
#define LABEL_1_46 59
#define LABEL_1_48 61
#define LABEL_1_49 63
#define LABEL_1_50 65
#define LABEL_1_51 67
#define LABEL_1_53 69
#define LABEL_1_55 71
#define LABEL_1_56 73
#define LABEL_1_58 75
#define LABEL_1_61 77
#define LABEL_1_62 79
#define LABEL_1_64 81
#define ENVIRONMENT_LABEL_1_3 137
#define DEBUGGING_LABEL_1_2 136
#define OBJECT_1_8 135
#define OBJECT_1_7 134
#define OBJECT_1_6 133
#define OBJECT_1_5 132
#define OBJECT_1_4 131
#define OBJECT_1_3 130
#define OBJECT_1_2 129
#define OBJECT_1_1 128
#define OBJECT_1_0 127
#define EXECUTE_CACHE_1_66 83
#define EXECUTE_CACHE_1_65 85
#define EXECUTE_CACHE_1_63 87
#define EXECUTE_CACHE_1_60 89
#define EXECUTE_CACHE_1_59 91
#define EXECUTE_CACHE_1_57 93
#define EXECUTE_CACHE_1_54 95
#define EXECUTE_CACHE_1_52 97
#define EXECUTE_CACHE_1_47 99
#define EXECUTE_CACHE_1_43 101
#define EXECUTE_CACHE_1_38 103
#define EXECUTE_CACHE_1_32 105
#define EXECUTE_CACHE_1_30 107
#define EXECUTE_CACHE_1_25 109
#define EXECUTE_CACHE_1_24 111
#define EXECUTE_CACHE_1_20 113
#define EXECUTE_CACHE_1_16 115
#define EXECUTE_CACHE_1_13 117
#define EXECUTE_CACHE_1_11 119
#define EXECUTE_CACHE_1_6 121
#define FREE_REFERENCE_1_2 124
#define FREE_REFERENCE_1_1 125
#define FREE_REFERENCE_1_0 126
#define FREE_REFERENCES_LABEL_1_0 82
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
search_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd44;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd83;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd119;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd115;
  machine_word Wrd104;
  machine_word Wrd106;
  machine_word Wrd109;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd87;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_1_4);
      goto binary_amb_58;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_22;

    case 5:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_21;

    case 6:
      current_block = (Rpc - LABEL_1_8);
      goto amb_choose_67;

    case 7:
      current_block = (Rpc - LABEL_1_17);
      goto label_60;

    case 8:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_1_22);
      goto label_61;

    case 11:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_32;

    case 12:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_31;

    case 13:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_53;

    case 15:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_47;

    case 16:
      current_block = (Rpc - LABEL_1_35);
      goto continuation_39;

    case 17:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_27;

    case 18:
      current_block = (Rpc - LABEL_1_36);
      goto label_64;

    case 19:
      current_block = (Rpc - LABEL_1_39);
      goto label_63;

    case 20:
      current_block = (Rpc - LABEL_1_41);
      goto label_62;

    case 21:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_26;

    case 22:
      current_block = (Rpc - LABEL_1_28);
      goto lambda_68;

    case 23:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_7;

    case 24:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_40;

    case 25:
      current_block = (Rpc - LABEL_1_40);
      goto continuation_48;

    case 26:
      current_block = (Rpc - LABEL_1_37);
      goto continuation_54;

    case 27:
      current_block = (Rpc - LABEL_1_44);
      goto lambda_69;

    case 28:
      current_block = (Rpc - LABEL_1_46);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_1_48);
      goto continuation_8;

    case 30:
      current_block = (Rpc - LABEL_1_49);
      goto continuation_18;

    case 31:
      current_block = (Rpc - LABEL_1_50);
      goto continuation_17;

    case 32:
      current_block = (Rpc - LABEL_1_51);
      goto continuation_14;

    case 33:
      current_block = (Rpc - LABEL_1_53);
      goto continuation_41;

    case 34:
      current_block = (Rpc - LABEL_1_55);
      goto continuation_23;

    case 35:
      current_block = (Rpc - LABEL_1_56);
      goto continuation_29;

    case 36:
      current_block = (Rpc - LABEL_1_58);
      goto continuation_19;

    case 37:
      current_block = (Rpc - LABEL_1_61);
      goto continuation_11;

    case 38:
      current_block = (Rpc - LABEL_1_62);
      goto continuation_42;

    case 39:
      current_block = (Rpc - LABEL_1_64);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binary_amb_66)
DEFLABEL (binary_amb_58)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_8])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  Wrd17 = Wrd19;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd15.Obj);
  ((Wrd17.pObj) [4]) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_72;
  Wrd5 = Wrd9;

DEFLABEL (label_71)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_70;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_21);

DEFLABEL (label_70)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_32]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_51]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (Rsp [9]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_52]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_51);
  (Wrd9.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_61]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [9]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_52]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_61);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_65]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_50);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_60]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_49);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_59]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_58);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_22])), (Wrd6.pObj));

DEFLABEL (label_61)
  (Wrd5.Obj) = Rvl;
  goto label_71;

DEFLABEL (amb_choose_67)
  CLOSURE_HEADER (LABEL_1_8);

DEFLABEL (amb_choose_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_91;
  Wrd5 = Wrd9;

DEFLABEL (label_90)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_89;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_1_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;

DEFLABEL (label_73)
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_73;

DEFLABEL (label_89)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_28])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_1_27);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_44])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_1_4]);
  if (Rvl == (Wrd6.Obj))
    goto label_84;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_80;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_79;
  Wrd9 = Wrd13;

DEFLABEL (label_78)
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd31.Obj) = ((Wrd23.pObj) [3]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd37.Obj) = ((Wrd23.pObj) [4]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd32.Obj);

DEFLABEL (label_75)
  (Wrd117.pObj) = (& (Rhp [-2]));
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd117.pObj)));
  (* (--Rsp)) = (Wrd118.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (label_76)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_77)
  (Wrd84.Obj) = (Rsp [3]);
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [4]);
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_41])), (Wrd10.pObj));

DEFLABEL (label_62)
  (Wrd9.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_80)
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_83;
  Wrd48 = Wrd52;

DEFLABEL (label_82)
  if ((Wrd48.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [2]);
  (Wrd64.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd70.Obj) = ((Wrd62.pObj) [3]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (Wrd76.Obj) = ((Wrd62.pObj) [4]);
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd80.Obj) = (current_block [OBJECT_1_6]);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  goto label_75;

DEFLABEL (label_81)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd83.Obj);
  goto label_77;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_39])), (Wrd49.pObj));

DEFLABEL (label_63)
  (Wrd48.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_84)
  (Wrd88.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd91.Obj) = ((Wrd88.pObj) [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd92.uLng) == 50)
    goto label_88;
  Wrd87 = Wrd91;

DEFLABEL (label_87)
  if (! ((Wrd87.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_86;

DEFLABEL (label_85)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = (Rsp [3]);
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd125.Obj) = ((Wrd124.pObj) [3]);
  (* (--Rsp)) = (Wrd125.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_1_37);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (label_86)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd100.Obj) = (Rsp [3]);
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [2]);
  (Wrd103.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd102.Obj);
  (* (Rhp++)) = (Wrd103.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (Wrd109.Obj) = ((Wrd101.pObj) [3]);
  (* (Rhp++)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  (Wrd115.Obj) = ((Wrd101.pObj) [4]);
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (Wrd119.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  goto label_75;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_36])), (Wrd88.pObj));

DEFLABEL (label_64)
  (Wrd87.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_17])), (Wrd6.pObj));

DEFLABEL (label_60)
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_1_35);
  goto label_76;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_1_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_1_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_63]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_1_62);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_66]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_1_34);
  goto label_81;

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_1_40);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_1_33);
  goto label_85;

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_1_28);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_46);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_92;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_56]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_57]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_1_56);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_93;

DEFLABEL (label_94)
  Rvl = (current_block [OBJECT_1_8]);

DEFLABEL (label_93)
DEFLABEL (label_95)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_1_44);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_55);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_96;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_64]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_57]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_64);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_97;

DEFLABEL (label_98)
  Rvl = (current_block [OBJECT_1_8]);

DEFLABEL (label_97)
DEFLABEL (label_99)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_8 7
#define TAG_2_9 2
#define LABEL_2_11 9
#define ENVIRONMENT_LABEL_2_3 20
#define DEBUGGING_LABEL_2_2 19
#define EXECUTE_CACHE_2_12 11
#define EXECUTE_CACHE_2_10 13
#define EXECUTE_CACHE_2_7 15
#define FREE_REFERENCE_2_0 18
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
search_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_2_4);
      goto pairwise_resolve_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_2_11);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pairwise_resolve_6)
DEFLABEL (pairwise_resolve_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_8])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_2_8);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_8 7
#define LABEL_3_6 9
#define LABEL_3_11 11
#define LABEL_3_10 13
#define ENVIRONMENT_LABEL_3_3 27
#define DEBUGGING_LABEL_3_2 26
#define OBJECT_3_0 25
#define EXECUTE_CACHE_3_13 15
#define EXECUTE_CACHE_3_12 17
#define EXECUTE_CACHE_3_9 19
#define EXECUTE_CACHE_3_7 21
#define FREE_REFERENCE_3_0 24
#define FREE_REFERENCES_LABEL_3_0 14
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
search_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto process_contradictions_4;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_3_6);
      goto lambda_1;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_contradictions_9)
DEFLABEL (process_contradictions_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_12;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (label_12)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_10)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_3_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_11])), (Wrd10.pObj));

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_5 3
#define LABEL_4_4 5
#define LABEL_4_6 7
#define LABEL_4_8 9
#define LABEL_4_11 11
#define LABEL_4_12 13
#define LABEL_4_7 15
#define LABEL_4_13 17
#define LABEL_4_15 19
#define LABEL_4_17 21
#define LABEL_4_19 23
#define LABEL_4_16 25
#define LABEL_4_20 27
#define TAG_4_21 12
#define ENVIRONMENT_LABEL_4_3 51
#define DEBUGGING_LABEL_4_2 50
#define OBJECT_4_5 49
#define OBJECT_4_4 48
#define OBJECT_4_3 47
#define OBJECT_4_2 46
#define OBJECT_4_1 45
#define OBJECT_4_0 44
#define EXECUTE_CACHE_4_23 29
#define EXECUTE_CACHE_4_22 31
#define EXECUTE_CACHE_4_18 33
#define EXECUTE_CACHE_4_14 35
#define EXECUTE_CACHE_4_10 37
#define EXECUTE_CACHE_4_9 39
#define FREE_REFERENCE_4_1 42
#define FREE_REFERENCE_4_0 43
#define FREE_REFERENCES_LABEL_4_0 28
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
search_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_4_4);
      goto process_one_contradiction_15;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_4_17);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_4_19);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_4_20);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_one_contradiction_24)
DEFLABEL (process_one_contradiction_15)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_42;
  Wrd5 = Wrd9;

DEFLABEL (label_41)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_4_0]);
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);

DEFLABEL (label_40)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_39;
  Wrd24 = Wrd28;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_4_1]))
    goto label_33;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_32;
  Wrd7 = Wrd11;

DEFLABEL (label_31)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_30;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_29)
  (Wrd29.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_4_5]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_12);

DEFLABEL (label_28)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_27;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_20])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (label_27)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_20)
  (Wrd17.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_15])), (Wrd8.pObj));

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_37;
  Wrd46 = Wrd50;

DEFLABEL (label_36)
  if (! ((Wrd46.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_35;

DEFLABEL (label_34)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd65.Obj) = (current_block [OBJECT_4_2]);
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Rsp [1]) = (Wrd62.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (label_35)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_11);
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_13])), (Wrd47.pObj));

DEFLABEL (label_22)
  (Wrd46.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_8])), (Wrd25.pObj));

DEFLABEL (label_18)
  (Wrd24.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_4_20);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_9 9
#define LABEL_5_10 11
#define TAG_5_11 4
#define LABEL_5_17 13
#define LABEL_5_13 15
#define LABEL_5_21 17
#define LABEL_5_14 19
#define TAG_5_15 8
#define LABEL_5_23 21
#define LABEL_5_19 23
#define LABEL_5_20 25
#define LABEL_5_25 27
#define ENVIRONMENT_LABEL_5_3 48
#define DEBUGGING_LABEL_5_2 47
#define EXECUTE_CACHE_5_26 29
#define EXECUTE_CACHE_5_24 31
#define EXECUTE_CACHE_5_22 33
#define EXECUTE_CACHE_5_18 35
#define EXECUTE_CACHE_5_16 37
#define EXECUTE_CACHE_5_12 39
#define EXECUTE_CACHE_5_8 41
#define EXECUTE_CACHE_5_6 43
#define FREE_REFERENCE_5_0 46
#define FREE_REFERENCES_LABEL_5_0 28
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
search_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_5_4);
      goto assimilate_nogoodB_10;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto lambda_18;

    case 5:
      current_block = (Rpc - LABEL_5_17);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_5_21);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_5_14);
      goto lambda_19;

    case 9:
      current_block = (Rpc - LABEL_5_23);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_5_25);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assimilate_nogoodB_17)
DEFLABEL (assimilate_nogoodB_10)
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
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_10])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_14])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_24;
  Wrd14 = Wrd18;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_22;
  Wrd5 = Wrd9;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_26]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_25])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_21])), (Wrd15.pObj));

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_5_10);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_26;
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_17])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_5_14);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_28;
  Wrd5 = Wrd9;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_23])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define ENVIRONMENT_LABEL_6_3 18
#define DEBUGGING_LABEL_6_2 17
#define EXECUTE_CACHE_6_8 11
#define FREE_REFERENCE_6_0 14
#define FREE_ASSIGNMENT_6_0 16
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
search_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_6_4);
      goto process_nogoodB_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_nogoodB_7)
DEFLABEL (process_nogoodB_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  Wrd5 = Wrd6;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_12;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd18.Lng) = ((Wrd19.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_12;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_11)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd28.Obj) = ((Wrd20.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd20.pObj) [0]) = (Wrd16.Obj);

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (label_10)
  if ((Wrd28.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_7])), (Wrd20.pObj), (Wrd16.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_12)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_4)
  (Wrd16.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_11 9
#define LABEL_8 11
#define TAG_9 4
#define LABEL_10 13
#define LABEL_12 15
#define TAG_13 6
#define LABEL_14 17
#define LABEL_20 19
#define LABEL_21 21
#define LABEL_17 23
#define TAG_18 10
#define LABEL_15 25
#define TAG_16 11
#define LABEL_22 27
#define LABEL_23 29
#define LABEL_24 31
#define LABEL_25 33
#define LABEL_26 35
#define LABEL_27 37
#define ENVIRONMENT_LABEL_3 63
#define DEBUGGING_LABEL_2 62
#define PURIFICATION_ROOT 61
#define OBJECT_10 60
#define OBJECT_9 59
#define OBJECT_8 58
#define OBJECT_7 57
#define OBJECT_6 56
#define OBJECT_5 55
#define OBJECT_4 54
#define OBJECT_3 53
#define OBJECT_2 52
#define OBJECT_1 51
#define OBJECT_0 50
#define EXECUTE_CACHE_19 39
#define FREE_REFERENCE_2 42
#define FREE_REFERENCE_1 43
#define FREE_REFERENCE_0 44
#define FREE_ASSIGNMENT_0 46
#define GLOBAL_EXECUTE_CACHE_5 48
#define FREE_REFERENCES_LABEL_0 38
#define NUMBER_OF_LINKER_SECTIONS_1 4

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
search_so_59ca4ed1a1ce075f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd17;
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
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_11);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto lambda_31;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_20;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto lambda_32;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_20);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_21);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto lambda_34;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto swapB_33;

    case 12:
      current_block = (Rpc - LABEL_22);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_23);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_24);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_26);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_27);
      goto expression_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_22)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_26])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_37)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_36)
  {
    static const short sections [] =
      {
	0,
	3,
	2,
	2,
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 6)
      goto label_35;
    blocks = (current_block [OBJECT_10]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_25])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_35)
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
    goto label_41;
  Wrd8 = Wrd12;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  ((Wrd17.pObj) [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_39;
  Wrd8 = Wrd12;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  ((Wrd17.pObj) [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_6]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14);
  Rsp = (& (Rsp [1]));
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  Wrd5 = Wrd9;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_0]));
  (Wrd18.Obj) = (current_block [OBJECT_7]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_42)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_26)
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_20])), (Wrd6.pObj));

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_45;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_12);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  ((Wrd24.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19]));

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_17);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 2);

DEFLABEL (swapB_33)
  CLOSURE_HEADER (LABEL_15);

DEFLABEL (swapB_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  Wrd5 = Wrd9;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_51)
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
    goto label_50;

DEFLABEL (label_49)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_50)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_29)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_28)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_22])), (Wrd6.pObj));

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_search_so_59ca4ed1a1ce075f [6] =
  {
    { "search_so_code_1", 40, search_so_code_1 },
    { "search_so_code_2", 4, search_so_code_2 },
    { "search_so_code_3", 6, search_so_code_3 },
    { "search_so_code_4", 13, search_so_code_4 },
    { "search_so_code_5", 13, search_so_code_5 },
    { "search_so_code_6", 4, search_so_code_6 }
  };

int
decl_search_so_59ca4ed1a1ce075f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_search_so_59ca4ed1a1ce075f);
  return (0);
}

DECLARE_COMPILED_CODE ("search.so", 18, decl_search_so_59ca4ed1a1ce075f, search_so_59ca4ed1a1ce075f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_search_so_data_59ca4ed1a1ce075f [1876] =
  "\x8d\x01\x12\xbb\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x0d\x0d"
  "\x0d\x08\x0d\x0d\x0d\x0d\x0d\xb9\x0d\xba\x0d\xbb\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\xbc\x28\x0d\x28\x0d\x28\x0d\xbd\x28"
  "\x0d\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x82\x88\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc1\x1c"
  "\x0d\x1c\x24\x28\x0d\x28\x0d\x1c\x28\xb5\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\x0d\x1b\x0d\x0d\x08\x0d\xb3\x1b\x24\x28\xb5\x28\xb7\x28\x0d"
  "\x28\xb6\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1b\x24\x28\xb4\x28\x0d"
  "\x28\x0d\x28\xb5\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0d"
  "\xbf\x25\xb7\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbe\x9d\xbd\x88\xb5\x1d\xc2\x80\xb6\x2a\x06\x99\x0d\xb3"
  "\x99\x0d\xbe\xc3\x0d\xbd\xb7\x1b\x1b\x1b\x1b\x0d\xb1\xb2\x9f\x80"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x06\x07\x9f\x28\x0d\x26"
  "\xb7\x25\xb5\xb6\xb7\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x0b\x73\x65\x61\x72\x63\x68\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x09\x61\x6d\x62\x2d\x66\x61\x69\x6c\x10\x61\x73\x73\x65\x72"
  "\x74\x69\x6e\x67\x2d\x66\x61\x6c\x73\x65\x0f\x61\x73\x73\x65\x72"
  "\x74\x69\x6e\x67\x2d\x74\x72\x75\x65\x03\x6f\x6b\x0b\x61\x6d\x62"
  "\x2d\x63\x68\x6f\x6f\x73\x65\x05\x74\x72\x75\x65\x06\x66\x61\x6c"
  "\x73\x65\x19\x2a\x61\x76\x6f\x69\x64\x2d\x66\x61\x6c\x73\x65\x2d"
  "\x74\x72\x75\x65\x2d\x66\x6c\x69\x70\x73\x2a\x1b\x2a\x66\x61\x6c"
  "\x73\x65\x2d\x70\x72\x65\x6d\x69\x73\x65\x2d\x73\x74\x61\x72\x74"
  "\x73\x2d\x6f\x75\x74\x2a\x16\x2a\x63\x6f\x6e\x74\x72\x61\x64\x69"
  "\x63\x74\x69\x6f\x6e\x2d\x77\x61\x6c\x6c\x70\x2a\x04\x04\x12\x6d"
  "\x61\x6b\x65\x2d\x68\x79\x70\x6f\x74\x68\x65\x74\x69\x63\x61\x6c"
  "\x04\x06\x6e\x61\x6d\x65\x21\x03\x0a\x74\x61\x67\x2d\x73\x6c\x6f"
  "\x77\x21\x03\x0c\x70\x72\x65\x6d\x69\x73\x65\x2d\x69\x6e\x3f\x03"
  "\x10\x70\x72\x65\x6d\x69\x73\x65\x2d\x6e\x6f\x67\x6f\x6f\x64\x73"
  "\x04\x0b\x70\x72\x6f\x70\x61\x67\x61\x74\x6f\x72\x03\x12\x6d\x61"
  "\x72\x6b\x2d\x70\x72\x65\x6d\x69\x73\x65\x2d\x6f\x75\x74\x21\x04"
  "\x07\x66\x69\x6c\x74\x65\x72\x05\x1b\x6d\x61\x6b\x65\x2d\x61\x6e"
  "\x6f\x6e\x79\x6d\x6f\x75\x73\x2d\x69\x2f\x6f\x2d\x64\x69\x61\x67"
  "\x72\x61\x6d\x03\x0a\x6b\x69\x63\x6b\x2d\x6f\x75\x74\x21\x03\x03"
  "\x70\x70\x03\x11\x61\x6c\x6c\x2d\x70\x72\x65\x6d\x69\x73\x65\x73"
  "\x2d\x69\x6e\x3f\x05\x0a\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x03"
  "\x0a\x62\x72\x69\x6e\x67\x2d\x69\x6e\x21\x04\x07\x6d\x65\x6d\x62"
  "\x65\x72\x03\x11\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x64\x69\x61"
  "\x67\x72\x61\x6d\x03\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x04\x11"
  "\x70\x61\x69\x72\x77\x69\x73\x65\x2d\x72\x65\x73\x6f\x6c\x76\x65"
  "\x09\x03\x09\x6d\x61\x6b\x65\x2d\x74\x6d\x73\x03\x17\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74\x72\x61\x64\x69\x63\x74\x69"
  "\x6f\x6e\x73\x0a\x15\x3a\x52\x81\x85\x02\x39\x50\x81\x87\x02\x38"
  "\x4e\x81\x95\x02\x37\x4c\x81\x8b\x02\x36\x4a\x81\x85\x02\x35\x48"
  "\x81\x85\x02\x34\x46\x81\x87\x02\x33\x44\x81\x93\x02\x32\x42\x81"
  "\x91\x02\x31\x40\x81\x8f\x02\x30\x3e\x81\x8b\x02\x2f\x3c\x81\x85"
  "\x02\x2e\x3a\x81\x85\x02\x2d\x38\x81\x87\x02\x2c\x36\x81\x87\x02"
  "\x2b\x34\x81\x87\x02\x2a\x32\x81\x89\x02\x29\x30\x81\x85\x02\x28"
  "\x2e\x81\x87\x02\x27\x2c\x81\x87\x02\x26\x2a\x81\x87\x02\x25\x28"
  "\x81\x87\x02\x24\x26\x81\x85\x02\x23\x24\x81\x87\x02\x22\x22\x81"
  "\x87\x02\x21\x20\x81\x87\x02\x20\x1e\x81\x89\x02\x1f\x1c\x81\x85"
  "\x02\x1e\x1a\x81\x83\x02\x1d\x18\x81\x89\x02\x1c\x16\x81\x89\x02"
  "\x1b\x14\x81\x89\x02\x1a\x12\x81\x83\x02\x19\x10\x81\x83\x02\x18"
  "\x0e\x81\x83\x02\x17\x0c\x81\x83\x02\x16\x0a\x81\x89\x02\x15\x08"
  "\x81\x85\x02\x14\x06\x81\x83\x02\x13\x04\x83\x04\x51\x8a\x01\x0b"
  "\x02\x04\x65\x71\x3f\x0c\x02\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d"
  "\x6d\x61\x70\x04\x04\x6d\x61\x70\x05\x0b\x6c\x73\x65\x74\x2d\x75"
  "\x6e\x69\x6f\x6e\x04\x3e\x0a\x81\x85\x02\x3d\x08\x81\x85\x02\x3c"
  "\x06\x81\x85\x02\x3b\x04\x84\x06\x09\x15\x0d\x02\x04\x63\x61\x72"
  "\x0e\x0e\x68\x79\x70\x6f\x74\x68\x65\x74\x69\x63\x61\x6c\x3f\x0f"
  "\x02\x04\x08\x73\x6f\x72\x74\x2d\x62\x79\x03\x1a\x70\x72\x6f\x63"
  "\x65\x73\x73\x2d\x6f\x6e\x65\x2d\x63\x6f\x6e\x74\x72\x61\x64\x69"
  "\x63\x74\x69\x6f\x6e\x10\x04\x03\x07\x6c\x65\x6e\x67\x74\x68\x05"
  "\x44\x0e\x81\x83\x02\x43\x0c\x81\x87\x02\x42\x0a\x83\x04\x41\x08"
  "\x81\x83\x02\x40\x06\x81\x83\x02\x3f\x04\x83\x04\x0d\x1c\x11\x02"
  "\x0c\x6b\x69\x63\x6b\x69\x6e\x67\x2d\x6f\x75\x74\x0e\x0f\x6e\x6f"
  "\x67\x6f\x6f\x64\x2d\x61\x62\x6f\x72\x74\x65\x64\x0e\x63\x6f\x6e"
  "\x74\x72\x61\x64\x69\x63\x74\x69\x6f\x6e\x07\x6e\x6f\x67\x6f\x6f"
  "\x64\x0f\x03\x04\x03\x03\x0e\x61\x62\x6f\x72\x74\x2d\x70\x72\x6f"
  "\x63\x65\x73\x73\x03\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04"
  "\x13\x61\x73\x73\x69\x6d\x69\x6c\x61\x74\x65\x2d\x6e\x6f\x67\x6f"
  "\x6f\x64\x21\x0f\x07\x51\x1c\x81\x85\x02\x50\x1a\x81\x85\x02\x4f"
  "\x18\x81\x87\x02\x4e\x16\x81\x87\x02\x4d\x14\x81\x85\x02\x4c\x12"
  "\x81\x85\x02\x4b\x10\x81\x83\x02\x4a\x0e\x81\x85\x02\x49\x0c\x81"
  "\x85\x02\x48\x0a\x81\x87\x02\x47\x08\x81\x83\x02\x46\x06\x83\x04"
  "\x45\x04\x81\x83\x02\x1b\x34\x0e\x02\x0c\x02\x03\x04\x05\x64\x65"
  "\x6c\x71\x04\x04\x61\x6e\x79\x04\x05\x07\x6c\x73\x65\x74\x3c\x3d"
  "\x05\x10\x6c\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63"
  "\x65\x04\x15\x73\x65\x74\x2d\x70\x72\x65\x6d\x69\x73\x65\x2d\x6e"
  "\x6f\x67\x6f\x6f\x64\x73\x21\x05\x0c\x6c\x73\x65\x74\x2d\x61\x64"
  "\x6a\x6f\x69\x6e\x09\x5e\x1c\x81\x91\x02\x5d\x1a\x81\x8f\x02\x5c"
  "\x18\x81\x8b\x02\x5b\x16\x81\x85\x02\x5a\x14\x81\x85\x02\x59\x12"
  "\x81\x95\x02\x58\x10\x81\x89\x02\x57\x0e\x81\x85\x02\x56\x0c\x81"
  "\x85\x02\x55\x0a\x81\x89\x02\x54\x08\x81\x87\x02\x53\x06\x81\x85"
  "\x02\x52\x04\x84\x06\x1b\x31\x0c\x02\x1a\x2a\x6e\x75\x6d\x62\x65"
  "\x72\x2d\x6f\x66\x2d\x63\x61\x6c\x6c\x73\x2d\x74\x6f\x2d\x66\x61"
  "\x69\x6c\x2a\x02\x02\x03\x10\x02\x62\x0a\x81\x83\x02\x61\x08\x81"
  "\x83\x02\x60\x06\x81\x83\x02\x5f\x04\x83\x04\x09\x13\x02\x06\x61"
  "\x70\x70\x6c\x79\x04\x10\x70\x72\x6f\x63\x65\x73\x73\x2d\x6e\x6f"
  "\x67\x6f\x6f\x64\x21\x1b\x77\x69\x74\x68\x2d\x69\x6e\x64\x65\x70"
  "\x65\x6e\x64\x65\x6e\x74\x2d\x73\x63\x68\x65\x64\x75\x6c\x65\x72"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x15\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x73\x63\x68"
  "\x65\x64\x75\x6c\x65\x72\x0f\x10\x0a\x09\x0b\x62\x69\x6e\x61\x72"
  "\x79\x2d\x61\x6d\x62\x0c\x04\x0e\x06\x11\x04\x0d\x04\x0b\x04\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x02\x04\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75"
  "\x69\x64\x2d\x62\x69\x6e\x64\x02\x12\x26\x80\x80\x04\x11\x24\x81"
  "\x81\x02\x10\x22\x81\x81\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85"
  "\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02"
  "\x0a\x16\x81\x83\x02\x09\x14\x81\x81\x02\x08\x12\x81\x83\x02\x07"
  "\x10\x81\x85\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a"
  "\x81\x85\x02\x03\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04\x81"
  "\x83\x02\x25\x40";

SCHEME_OBJECT *
search_so_data_59ca4ed1a1ce075f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_search_so_data_59ca4ed1a1ce075f [0]))), (sizeof (prog_search_so_data_59ca4ed1a1ce075f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_27]));
}

DECLARE_COMPILED_DATA_NS ("search.so", search_so_data_59ca4ed1a1ce075f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("search.so", "b48828987415d8a1")
