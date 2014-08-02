/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Capstone Disassembly Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2014 */


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM

enum {
    PPC_PHI	= 0,
    PPC_INLINEASM	= 1,
    PPC_PROLOG_LABEL	= 2,
    PPC_EH_LABEL	= 3,
    PPC_GC_LABEL	= 4,
    PPC_KILL	= 5,
    PPC_EXTRACT_SUBREG	= 6,
    PPC_INSERT_SUBREG	= 7,
    PPC_IMPLICIT_DEF	= 8,
    PPC_SUBREG_TO_REG	= 9,
    PPC_COPY_TO_REGCLASS	= 10,
    PPC_DBG_VALUE	= 11,
    PPC_REG_SEQUENCE	= 12,
    PPC_COPY	= 13,
    PPC_BUNDLE	= 14,
    PPC_LIFETIME_START	= 15,
    PPC_LIFETIME_END	= 16,
    PPC_STACKMAP	= 17,
    PPC_PATCHPOINT	= 18,
    PPC_ADD4	= 19,
    PPC_ADD4TLS	= 20,
    PPC_ADD4o	= 21,
    PPC_ADD8	= 22,
    PPC_ADD8TLS	= 23,
    PPC_ADD8TLS_	= 24,
    PPC_ADD8o	= 25,
    PPC_ADDC	= 26,
    PPC_ADDC8	= 27,
    PPC_ADDC8o	= 28,
    PPC_ADDCo	= 29,
    PPC_ADDE	= 30,
    PPC_ADDE8	= 31,
    PPC_ADDE8o	= 32,
    PPC_ADDEo	= 33,
    PPC_ADDI	= 34,
    PPC_ADDI8	= 35,
    PPC_ADDIC	= 36,
    PPC_ADDIC8	= 37,
    PPC_ADDICo	= 38,
    PPC_ADDIS	= 39,
    PPC_ADDIS8	= 40,
    PPC_ADDISdtprelHA	= 41,
    PPC_ADDISgotTprelHA	= 42,
    PPC_ADDIStlsgdHA	= 43,
    PPC_ADDIStlsldHA	= 44,
    PPC_ADDIStocHA	= 45,
    PPC_ADDIdtprelL	= 46,
    PPC_ADDItlsgdL	= 47,
    PPC_ADDItlsldL	= 48,
    PPC_ADDItocL	= 49,
    PPC_ADDME	= 50,
    PPC_ADDME8	= 51,
    PPC_ADDME8o	= 52,
    PPC_ADDMEo	= 53,
    PPC_ADDZE	= 54,
    PPC_ADDZE8	= 55,
    PPC_ADDZE8o	= 56,
    PPC_ADDZEo	= 57,
    PPC_ADJCALLSTACKDOWN	= 58,
    PPC_ADJCALLSTACKUP	= 59,
    PPC_AND	= 60,
    PPC_AND8	= 61,
    PPC_AND8o	= 62,
    PPC_ANDC	= 63,
    PPC_ANDC8	= 64,
    PPC_ANDC8o	= 65,
    PPC_ANDCo	= 66,
    PPC_ANDISo	= 67,
    PPC_ANDISo8	= 68,
    PPC_ANDIo	= 69,
    PPC_ANDIo8	= 70,
    PPC_ANDo	= 71,
    PPC_ATOMIC_CMP_SWAP_I16	= 72,
    PPC_ATOMIC_CMP_SWAP_I32	= 73,
    PPC_ATOMIC_CMP_SWAP_I64	= 74,
    PPC_ATOMIC_CMP_SWAP_I8	= 75,
    PPC_ATOMIC_LOAD_ADD_I16	= 76,
    PPC_ATOMIC_LOAD_ADD_I32	= 77,
    PPC_ATOMIC_LOAD_ADD_I64	= 78,
    PPC_ATOMIC_LOAD_ADD_I8	= 79,
    PPC_ATOMIC_LOAD_AND_I16	= 80,
    PPC_ATOMIC_LOAD_AND_I32	= 81,
    PPC_ATOMIC_LOAD_AND_I64	= 82,
    PPC_ATOMIC_LOAD_AND_I8	= 83,
    PPC_ATOMIC_LOAD_NAND_I16	= 84,
    PPC_ATOMIC_LOAD_NAND_I32	= 85,
    PPC_ATOMIC_LOAD_NAND_I64	= 86,
    PPC_ATOMIC_LOAD_NAND_I8	= 87,
    PPC_ATOMIC_LOAD_OR_I16	= 88,
    PPC_ATOMIC_LOAD_OR_I32	= 89,
    PPC_ATOMIC_LOAD_OR_I64	= 90,
    PPC_ATOMIC_LOAD_OR_I8	= 91,
    PPC_ATOMIC_LOAD_SUB_I16	= 92,
    PPC_ATOMIC_LOAD_SUB_I32	= 93,
    PPC_ATOMIC_LOAD_SUB_I64	= 94,
    PPC_ATOMIC_LOAD_SUB_I8	= 95,
    PPC_ATOMIC_LOAD_XOR_I16	= 96,
    PPC_ATOMIC_LOAD_XOR_I32	= 97,
    PPC_ATOMIC_LOAD_XOR_I64	= 98,
    PPC_ATOMIC_LOAD_XOR_I8	= 99,
    PPC_ATOMIC_SWAP_I16	= 100,
    PPC_ATOMIC_SWAP_I32	= 101,
    PPC_ATOMIC_SWAP_I64	= 102,
    PPC_ATOMIC_SWAP_I8	= 103,
    PPC_B	= 104,
    PPC_BA	= 105,
    PPC_BCC	= 106,
    PPC_BCCA	= 107,
    PPC_BCCL	= 108,
    PPC_BCCLA	= 109,
    PPC_BCCTR	= 110,
    PPC_BCCTR8	= 111,
    PPC_BCCTRL	= 112,
    PPC_BCCTRL8	= 113,
    PPC_BCLR	= 114,
    PPC_BCLRL	= 115,
    PPC_BCLalways	= 116,
    PPC_BCTR	= 117,
    PPC_BCTR8	= 118,
    PPC_BCTRL	= 119,
    PPC_BCTRL8	= 120,
    PPC_BDNZ	= 121,
    PPC_BDNZ8	= 122,
    PPC_BDNZA	= 123,
    PPC_BDNZAm	= 124,
    PPC_BDNZAp	= 125,
    PPC_BDNZL	= 126,
    PPC_BDNZLA	= 127,
    PPC_BDNZLAm	= 128,
    PPC_BDNZLAp	= 129,
    PPC_BDNZLR	= 130,
    PPC_BDNZLR8	= 131,
    PPC_BDNZLRL	= 132,
    PPC_BDNZLRLm	= 133,
    PPC_BDNZLRLp	= 134,
    PPC_BDNZLRm	= 135,
    PPC_BDNZLRp	= 136,
    PPC_BDNZLm	= 137,
    PPC_BDNZLp	= 138,
    PPC_BDNZm	= 139,
    PPC_BDNZp	= 140,
    PPC_BDZ	= 141,
    PPC_BDZ8	= 142,
    PPC_BDZA	= 143,
    PPC_BDZAm	= 144,
    PPC_BDZAp	= 145,
    PPC_BDZL	= 146,
    PPC_BDZLA	= 147,
    PPC_BDZLAm	= 148,
    PPC_BDZLAp	= 149,
    PPC_BDZLR	= 150,
    PPC_BDZLR8	= 151,
    PPC_BDZLRL	= 152,
    PPC_BDZLRLm	= 153,
    PPC_BDZLRLp	= 154,
    PPC_BDZLRm	= 155,
    PPC_BDZLRp	= 156,
    PPC_BDZLm	= 157,
    PPC_BDZLp	= 158,
    PPC_BDZm	= 159,
    PPC_BDZp	= 160,
    PPC_BL	= 161,
    PPC_BL8	= 162,
    PPC_BL8_NOP	= 163,
    PPC_BL8_NOP_TLS	= 164,
    PPC_BL8_TLS	= 165,
    PPC_BL8_TLS_	= 166,
    PPC_BLA	= 167,
    PPC_BLA8	= 168,
    PPC_BLA8_NOP	= 169,
    PPC_BLR	= 170,
    PPC_BLRL	= 171,
    PPC_CLRLSLDI	= 172,
    PPC_CLRLSLDIo	= 173,
    PPC_CLRLSLWI	= 174,
    PPC_CLRLSLWIo	= 175,
    PPC_CLRRDI	= 176,
    PPC_CLRRDIo	= 177,
    PPC_CLRRWI	= 178,
    PPC_CLRRWIo	= 179,
    PPC_CMPD	= 180,
    PPC_CMPDI	= 181,
    PPC_CMPLD	= 182,
    PPC_CMPLDI	= 183,
    PPC_CMPLW	= 184,
    PPC_CMPLWI	= 185,
    PPC_CMPW	= 186,
    PPC_CMPWI	= 187,
    PPC_CNTLZD	= 188,
    PPC_CNTLZDo	= 189,
    PPC_CNTLZW	= 190,
    PPC_CNTLZWo	= 191,
    PPC_CR6SET	= 192,
    PPC_CR6UNSET	= 193,
    PPC_CRAND	= 194,
    PPC_CRANDC	= 195,
    PPC_CREQV	= 196,
    PPC_CRNAND	= 197,
    PPC_CRNOR	= 198,
    PPC_CROR	= 199,
    PPC_CRORC	= 200,
    PPC_CRSET	= 201,
    PPC_CRUNSET	= 202,
    PPC_CRXOR	= 203,
    PPC_DCBA	= 204,
    PPC_DCBF	= 205,
    PPC_DCBI	= 206,
    PPC_DCBST	= 207,
    PPC_DCBT	= 208,
    PPC_DCBTST	= 209,
    PPC_DCBZ	= 210,
    PPC_DCBZL	= 211,
    PPC_DIVD	= 212,
    PPC_DIVDU	= 213,
    PPC_DIVDUo	= 214,
    PPC_DIVDo	= 215,
    PPC_DIVW	= 216,
    PPC_DIVWU	= 217,
    PPC_DIVWUo	= 218,
    PPC_DIVWo	= 219,
    PPC_DSS	= 220,
    PPC_DSSALL	= 221,
    PPC_DST	= 222,
    PPC_DST64	= 223,
    PPC_DSTST	= 224,
    PPC_DSTST64	= 225,
    PPC_DSTSTT	= 226,
    PPC_DSTSTT64	= 227,
    PPC_DSTT	= 228,
    PPC_DSTT64	= 229,
    PPC_DYNALLOC	= 230,
    PPC_DYNALLOC8	= 231,
    PPC_EH_SjLj_LongJmp32	= 232,
    PPC_EH_SjLj_LongJmp64	= 233,
    PPC_EH_SjLj_SetJmp32	= 234,
    PPC_EH_SjLj_SetJmp64	= 235,
    PPC_EH_SjLj_Setup	= 236,
    PPC_EIEIO	= 237,
    PPC_EQV	= 238,
    PPC_EQV8	= 239,
    PPC_EQV8o	= 240,
    PPC_EQVo	= 241,
    PPC_EXTLDI	= 242,
    PPC_EXTLDIo	= 243,
    PPC_EXTLWI	= 244,
    PPC_EXTLWIo	= 245,
    PPC_EXTRDI	= 246,
    PPC_EXTRDIo	= 247,
    PPC_EXTRWI	= 248,
    PPC_EXTRWIo	= 249,
    PPC_EXTSB	= 250,
    PPC_EXTSB8	= 251,
    PPC_EXTSB8_32_64	= 252,
    PPC_EXTSB8o	= 253,
    PPC_EXTSBo	= 254,
    PPC_EXTSH	= 255,
    PPC_EXTSH8	= 256,
    PPC_EXTSH8_32_64	= 257,
    PPC_EXTSH8o	= 258,
    PPC_EXTSHo	= 259,
    PPC_EXTSW	= 260,
    PPC_EXTSW_32_64	= 261,
    PPC_EXTSW_32_64o	= 262,
    PPC_EXTSWo	= 263,
    PPC_FABSD	= 264,
    PPC_FABSDo	= 265,
    PPC_FABSS	= 266,
    PPC_FABSSo	= 267,
    PPC_FADD	= 268,
    PPC_FADDS	= 269,
    PPC_FADDSo	= 270,
    PPC_FADDo	= 271,
    PPC_FADDrtz	= 272,
    PPC_FCFID	= 273,
    PPC_FCFIDS	= 274,
    PPC_FCFIDSo	= 275,
    PPC_FCFIDU	= 276,
    PPC_FCFIDUS	= 277,
    PPC_FCFIDUSo	= 278,
    PPC_FCFIDUo	= 279,
    PPC_FCFIDo	= 280,
    PPC_FCMPUD	= 281,
    PPC_FCMPUS	= 282,
    PPC_FCPSGND	= 283,
    PPC_FCPSGNDo	= 284,
    PPC_FCPSGNS	= 285,
    PPC_FCPSGNSo	= 286,
    PPC_FCTID	= 287,
    PPC_FCTIDUZ	= 288,
    PPC_FCTIDUZo	= 289,
    PPC_FCTIDZ	= 290,
    PPC_FCTIDZo	= 291,
    PPC_FCTIDo	= 292,
    PPC_FCTIW	= 293,
    PPC_FCTIWUZ	= 294,
    PPC_FCTIWUZo	= 295,
    PPC_FCTIWZ	= 296,
    PPC_FCTIWZo	= 297,
    PPC_FCTIWo	= 298,
    PPC_FDIV	= 299,
    PPC_FDIVS	= 300,
    PPC_FDIVSo	= 301,
    PPC_FDIVo	= 302,
    PPC_FMADD	= 303,
    PPC_FMADDS	= 304,
    PPC_FMADDSo	= 305,
    PPC_FMADDo	= 306,
    PPC_FMR	= 307,
    PPC_FMRo	= 308,
    PPC_FMSUB	= 309,
    PPC_FMSUBS	= 310,
    PPC_FMSUBSo	= 311,
    PPC_FMSUBo	= 312,
    PPC_FMUL	= 313,
    PPC_FMULS	= 314,
    PPC_FMULSo	= 315,
    PPC_FMULo	= 316,
    PPC_FNABSD	= 317,
    PPC_FNABSDo	= 318,
    PPC_FNABSS	= 319,
    PPC_FNABSSo	= 320,
    PPC_FNEGD	= 321,
    PPC_FNEGDo	= 322,
    PPC_FNEGS	= 323,
    PPC_FNEGSo	= 324,
    PPC_FNMADD	= 325,
    PPC_FNMADDS	= 326,
    PPC_FNMADDSo	= 327,
    PPC_FNMADDo	= 328,
    PPC_FNMSUB	= 329,
    PPC_FNMSUBS	= 330,
    PPC_FNMSUBSo	= 331,
    PPC_FNMSUBo	= 332,
    PPC_FRE	= 333,
    PPC_FRES	= 334,
    PPC_FRESo	= 335,
    PPC_FREo	= 336,
    PPC_FRIMD	= 337,
    PPC_FRIMDo	= 338,
    PPC_FRIMS	= 339,
    PPC_FRIMSo	= 340,
    PPC_FRIND	= 341,
    PPC_FRINDo	= 342,
    PPC_FRINS	= 343,
    PPC_FRINSo	= 344,
    PPC_FRIPD	= 345,
    PPC_FRIPDo	= 346,
    PPC_FRIPS	= 347,
    PPC_FRIPSo	= 348,
    PPC_FRIZD	= 349,
    PPC_FRIZDo	= 350,
    PPC_FRIZS	= 351,
    PPC_FRIZSo	= 352,
    PPC_FRSP	= 353,
    PPC_FRSPo	= 354,
    PPC_FRSQRTE	= 355,
    PPC_FRSQRTES	= 356,
    PPC_FRSQRTESo	= 357,
    PPC_FRSQRTEo	= 358,
    PPC_FSELD	= 359,
    PPC_FSELDo	= 360,
    PPC_FSELS	= 361,
    PPC_FSELSo	= 362,
    PPC_FSQRT	= 363,
    PPC_FSQRTS	= 364,
    PPC_FSQRTSo	= 365,
    PPC_FSQRTo	= 366,
    PPC_FSUB	= 367,
    PPC_FSUBS	= 368,
    PPC_FSUBSo	= 369,
    PPC_FSUBo	= 370,
    PPC_GETtlsADDR	= 371,
    PPC_GETtlsldADDR	= 372,
    PPC_ICBI	= 373,
    PPC_INSLWI	= 374,
    PPC_INSLWIo	= 375,
    PPC_INSRDI	= 376,
    PPC_INSRDIo	= 377,
    PPC_INSRWI	= 378,
    PPC_INSRWIo	= 379,
    PPC_ISEL	= 380,
    PPC_ISEL8	= 381,
    PPC_ISYNC	= 382,
    PPC_LA	= 383,
    PPC_LAx	= 384,
    PPC_LBZ	= 385,
    PPC_LBZ8	= 386,
    PPC_LBZU	= 387,
    PPC_LBZU8	= 388,
    PPC_LBZUX	= 389,
    PPC_LBZUX8	= 390,
    PPC_LBZX	= 391,
    PPC_LBZX8	= 392,
    PPC_LD	= 393,
    PPC_LDARX	= 394,
    PPC_LDBRX	= 395,
    PPC_LDU	= 396,
    PPC_LDUX	= 397,
    PPC_LDX	= 398,
    PPC_LDgotTprelL	= 399,
    PPC_LDgotTprelL32	= 400,
    PPC_LDinto_toc	= 401,
    PPC_LDtoc	= 402,
    PPC_LDtocCPT	= 403,
    PPC_LDtocJTI	= 404,
    PPC_LDtocL	= 405,
    PPC_LDtoc_restore	= 406,
    PPC_LFD	= 407,
    PPC_LFDU	= 408,
    PPC_LFDUX	= 409,
    PPC_LFDX	= 410,
    PPC_LFIWAX	= 411,
    PPC_LFIWZX	= 412,
    PPC_LFS	= 413,
    PPC_LFSU	= 414,
    PPC_LFSUX	= 415,
    PPC_LFSX	= 416,
    PPC_LHA	= 417,
    PPC_LHA8	= 418,
    PPC_LHAU	= 419,
    PPC_LHAU8	= 420,
    PPC_LHAUX	= 421,
    PPC_LHAUX8	= 422,
    PPC_LHAX	= 423,
    PPC_LHAX8	= 424,
    PPC_LHBRX	= 425,
    PPC_LHZ	= 426,
    PPC_LHZ8	= 427,
    PPC_LHZU	= 428,
    PPC_LHZU8	= 429,
    PPC_LHZUX	= 430,
    PPC_LHZUX8	= 431,
    PPC_LHZX	= 432,
    PPC_LHZX8	= 433,
    PPC_LI	= 434,
    PPC_LI8	= 435,
    PPC_LIS	= 436,
    PPC_LIS8	= 437,
    PPC_LMW	= 438,
    PPC_LVEBX	= 439,
    PPC_LVEHX	= 440,
    PPC_LVEWX	= 441,
    PPC_LVSL	= 442,
    PPC_LVSR	= 443,
    PPC_LVX	= 444,
    PPC_LVXL	= 445,
    PPC_LWA	= 446,
    PPC_LWARX	= 447,
    PPC_LWAUX	= 448,
    PPC_LWAX	= 449,
    PPC_LWAX_32	= 450,
    PPC_LWA_32	= 451,
    PPC_LWBRX	= 452,
    PPC_LWZ	= 453,
    PPC_LWZ8	= 454,
    PPC_LWZU	= 455,
    PPC_LWZU8	= 456,
    PPC_LWZUX	= 457,
    PPC_LWZUX8	= 458,
    PPC_LWZX	= 459,
    PPC_LWZX8	= 460,
    PPC_MCRF	= 461,
    PPC_MFCR	= 462,
    PPC_MFCR8	= 463,
    PPC_MFCTR	= 464,
    PPC_MFCTR8	= 465,
    PPC_MFFS	= 466,
    PPC_MFLR	= 467,
    PPC_MFLR8	= 468,
    PPC_MFMSR	= 469,
    PPC_MFOCRF	= 470,
    PPC_MFOCRF8	= 471,
    PPC_MFSPR	= 472,
    PPC_MFTB	= 473,
    PPC_MFTB8	= 474,
    PPC_MFVRSAVE	= 475,
    PPC_MFVRSAVEv	= 476,
    PPC_MFVSCR	= 477,
    PPC_MSYNC	= 478,
    PPC_MTCRF	= 479,
    PPC_MTCRF8	= 480,
    PPC_MTCTR	= 481,
    PPC_MTCTR8	= 482,
    PPC_MTCTR8loop	= 483,
    PPC_MTCTRloop	= 484,
    PPC_MTFSB0	= 485,
    PPC_MTFSB1	= 486,
    PPC_MTFSF	= 487,
    PPC_MTLR	= 488,
    PPC_MTLR8	= 489,
    PPC_MTMSR	= 490,
    PPC_MTMSRD	= 491,
    PPC_MTOCRF	= 492,
    PPC_MTOCRF8	= 493,
    PPC_MTSPR	= 494,
    PPC_MTVRSAVE	= 495,
    PPC_MTVRSAVEv	= 496,
    PPC_MTVSCR	= 497,
    PPC_MULHD	= 498,
    PPC_MULHDU	= 499,
    PPC_MULHDUo	= 500,
    PPC_MULHDo	= 501,
    PPC_MULHW	= 502,
    PPC_MULHWU	= 503,
    PPC_MULHWUo	= 504,
    PPC_MULHWo	= 505,
    PPC_MULLD	= 506,
    PPC_MULLDo	= 507,
    PPC_MULLI	= 508,
    PPC_MULLI8	= 509,
    PPC_MULLW	= 510,
    PPC_MULLWo	= 511,
    PPC_MovePCtoLR	= 512,
    PPC_MovePCtoLR8	= 513,
    PPC_NAND	= 514,
    PPC_NAND8	= 515,
    PPC_NAND8o	= 516,
    PPC_NANDo	= 517,
    PPC_NEG	= 518,
    PPC_NEG8	= 519,
    PPC_NEG8o	= 520,
    PPC_NEGo	= 521,
    PPC_NOP	= 522,
    PPC_NOP_GT_PWR6	= 523,
    PPC_NOP_GT_PWR7	= 524,
    PPC_NOR	= 525,
    PPC_NOR8	= 526,
    PPC_NOR8o	= 527,
    PPC_NORo	= 528,
    PPC_OR	= 529,
    PPC_OR8	= 530,
    PPC_OR8o	= 531,
    PPC_ORC	= 532,
    PPC_ORC8	= 533,
    PPC_ORC8o	= 534,
    PPC_ORCo	= 535,
    PPC_ORI	= 536,
    PPC_ORI8	= 537,
    PPC_ORIS	= 538,
    PPC_ORIS8	= 539,
    PPC_ORo	= 540,
    PPC_POPCNTD	= 541,
    PPC_POPCNTW	= 542,
    PPC_PPC32GOT	= 543,
    PPC_RESTORE_CR	= 544,
    PPC_RESTORE_VRSAVE	= 545,
    PPC_RLDCL	= 546,
    PPC_RLDCLo	= 547,
    PPC_RLDCR	= 548,
    PPC_RLDCRo	= 549,
    PPC_RLDIC	= 550,
    PPC_RLDICL	= 551,
    PPC_RLDICL_32_64	= 552,
    PPC_RLDICLo	= 553,
    PPC_RLDICR	= 554,
    PPC_RLDICRo	= 555,
    PPC_RLDICo	= 556,
    PPC_RLDIMI	= 557,
    PPC_RLDIMIo	= 558,
    PPC_RLWIMI	= 559,
    PPC_RLWIMIo	= 560,
    PPC_RLWINM	= 561,
    PPC_RLWINM8	= 562,
    PPC_RLWINM8o	= 563,
    PPC_RLWINMo	= 564,
    PPC_RLWNM	= 565,
    PPC_RLWNMo	= 566,
    PPC_ROTRDI	= 567,
    PPC_ROTRDIo	= 568,
    PPC_ROTRWI	= 569,
    PPC_ROTRWIo	= 570,
    PPC_SC	= 571,
    PPC_SELECT_CC_F4	= 572,
    PPC_SELECT_CC_F8	= 573,
    PPC_SELECT_CC_I4	= 574,
    PPC_SELECT_CC_I8	= 575,
    PPC_SELECT_CC_VRRC	= 576,
    PPC_SLBIA	= 577,
    PPC_SLBIE	= 578,
    PPC_SLBMFEE	= 579,
    PPC_SLBMTE	= 580,
    PPC_SLD	= 581,
    PPC_SLDI	= 582,
    PPC_SLDIo	= 583,
    PPC_SLDo	= 584,
    PPC_SLW	= 585,
    PPC_SLWI	= 586,
    PPC_SLWIo	= 587,
    PPC_SLWo	= 588,
    PPC_SPILL_CR	= 589,
    PPC_SPILL_VRSAVE	= 590,
    PPC_SRAD	= 591,
    PPC_SRADI	= 592,
    PPC_SRADIo	= 593,
    PPC_SRADo	= 594,
    PPC_SRAW	= 595,
    PPC_SRAWI	= 596,
    PPC_SRAWIo	= 597,
    PPC_SRAWo	= 598,
    PPC_SRD	= 599,
    PPC_SRDI	= 600,
    PPC_SRDIo	= 601,
    PPC_SRDo	= 602,
    PPC_SRW	= 603,
    PPC_SRWI	= 604,
    PPC_SRWIo	= 605,
    PPC_SRWo	= 606,
    PPC_STB	= 607,
    PPC_STB8	= 608,
    PPC_STBU	= 609,
    PPC_STBU8	= 610,
    PPC_STBUX	= 611,
    PPC_STBUX8	= 612,
    PPC_STBX	= 613,
    PPC_STBX8	= 614,
    PPC_STD	= 615,
    PPC_STDBRX	= 616,
    PPC_STDCX	= 617,
    PPC_STDU	= 618,
    PPC_STDUX	= 619,
    PPC_STDX	= 620,
    PPC_STFD	= 621,
    PPC_STFDU	= 622,
    PPC_STFDUX	= 623,
    PPC_STFDX	= 624,
    PPC_STFIWX	= 625,
    PPC_STFS	= 626,
    PPC_STFSU	= 627,
    PPC_STFSUX	= 628,
    PPC_STFSX	= 629,
    PPC_STH	= 630,
    PPC_STH8	= 631,
    PPC_STHBRX	= 632,
    PPC_STHU	= 633,
    PPC_STHU8	= 634,
    PPC_STHUX	= 635,
    PPC_STHUX8	= 636,
    PPC_STHX	= 637,
    PPC_STHX8	= 638,
    PPC_STMW	= 639,
    PPC_STVEBX	= 640,
    PPC_STVEHX	= 641,
    PPC_STVEWX	= 642,
    PPC_STVX	= 643,
    PPC_STVXL	= 644,
    PPC_STW	= 645,
    PPC_STW8	= 646,
    PPC_STWBRX	= 647,
    PPC_STWCX	= 648,
    PPC_STWU	= 649,
    PPC_STWU8	= 650,
    PPC_STWUX	= 651,
    PPC_STWUX8	= 652,
    PPC_STWX	= 653,
    PPC_STWX8	= 654,
    PPC_SUBF	= 655,
    PPC_SUBF8	= 656,
    PPC_SUBF8o	= 657,
    PPC_SUBFC	= 658,
    PPC_SUBFC8	= 659,
    PPC_SUBFC8o	= 660,
    PPC_SUBFCo	= 661,
    PPC_SUBFE	= 662,
    PPC_SUBFE8	= 663,
    PPC_SUBFE8o	= 664,
    PPC_SUBFEo	= 665,
    PPC_SUBFIC	= 666,
    PPC_SUBFIC8	= 667,
    PPC_SUBFME	= 668,
    PPC_SUBFME8	= 669,
    PPC_SUBFME8o	= 670,
    PPC_SUBFMEo	= 671,
    PPC_SUBFZE	= 672,
    PPC_SUBFZE8	= 673,
    PPC_SUBFZE8o	= 674,
    PPC_SUBFZEo	= 675,
    PPC_SUBFo	= 676,
    PPC_SUBI	= 677,
    PPC_SUBIC	= 678,
    PPC_SUBICo	= 679,
    PPC_SUBIS	= 680,
    PPC_SYNC	= 681,
    PPC_TAILB	= 682,
    PPC_TAILB8	= 683,
    PPC_TAILBA	= 684,
    PPC_TAILBA8	= 685,
    PPC_TAILBCTR	= 686,
    PPC_TAILBCTR8	= 687,
    PPC_TCRETURNai	= 688,
    PPC_TCRETURNai8	= 689,
    PPC_TCRETURNdi	= 690,
    PPC_TCRETURNdi8	= 691,
    PPC_TCRETURNri	= 692,
    PPC_TCRETURNri8	= 693,
    PPC_TD	= 694,
    PPC_TDI	= 695,
    PPC_TLBIE	= 696,
    PPC_TLBIEL	= 697,
    PPC_TLBSYNC	= 698,
    PPC_TRAP	= 699,
    PPC_TW	= 700,
    PPC_TWI	= 701,
    PPC_UPDATE_VRSAVE	= 702,
    PPC_VADDCUW	= 703,
    PPC_VADDFP	= 704,
    PPC_VADDSBS	= 705,
    PPC_VADDSHS	= 706,
    PPC_VADDSWS	= 707,
    PPC_VADDUBM	= 708,
    PPC_VADDUBS	= 709,
    PPC_VADDUHM	= 710,
    PPC_VADDUHS	= 711,
    PPC_VADDUWM	= 712,
    PPC_VADDUWS	= 713,
    PPC_VAND	= 714,
    PPC_VANDC	= 715,
    PPC_VAVGSB	= 716,
    PPC_VAVGSH	= 717,
    PPC_VAVGSW	= 718,
    PPC_VAVGUB	= 719,
    PPC_VAVGUH	= 720,
    PPC_VAVGUW	= 721,
    PPC_VCFSX	= 722,
    PPC_VCFSX_0	= 723,
    PPC_VCFUX	= 724,
    PPC_VCFUX_0	= 725,
    PPC_VCMPBFP	= 726,
    PPC_VCMPBFPo	= 727,
    PPC_VCMPEQFP	= 728,
    PPC_VCMPEQFPo	= 729,
    PPC_VCMPEQUB	= 730,
    PPC_VCMPEQUBo	= 731,
    PPC_VCMPEQUH	= 732,
    PPC_VCMPEQUHo	= 733,
    PPC_VCMPEQUW	= 734,
    PPC_VCMPEQUWo	= 735,
    PPC_VCMPGEFP	= 736,
    PPC_VCMPGEFPo	= 737,
    PPC_VCMPGTFP	= 738,
    PPC_VCMPGTFPo	= 739,
    PPC_VCMPGTSB	= 740,
    PPC_VCMPGTSBo	= 741,
    PPC_VCMPGTSH	= 742,
    PPC_VCMPGTSHo	= 743,
    PPC_VCMPGTSW	= 744,
    PPC_VCMPGTSWo	= 745,
    PPC_VCMPGTUB	= 746,
    PPC_VCMPGTUBo	= 747,
    PPC_VCMPGTUH	= 748,
    PPC_VCMPGTUHo	= 749,
    PPC_VCMPGTUW	= 750,
    PPC_VCMPGTUWo	= 751,
    PPC_VCTSXS	= 752,
    PPC_VCTSXS_0	= 753,
    PPC_VCTUXS	= 754,
    PPC_VCTUXS_0	= 755,
    PPC_VEXPTEFP	= 756,
    PPC_VLOGEFP	= 757,
    PPC_VMADDFP	= 758,
    PPC_VMAXFP	= 759,
    PPC_VMAXSB	= 760,
    PPC_VMAXSH	= 761,
    PPC_VMAXSW	= 762,
    PPC_VMAXUB	= 763,
    PPC_VMAXUH	= 764,
    PPC_VMAXUW	= 765,
    PPC_VMHADDSHS	= 766,
    PPC_VMHRADDSHS	= 767,
    PPC_VMINFP	= 768,
    PPC_VMINSB	= 769,
    PPC_VMINSH	= 770,
    PPC_VMINSW	= 771,
    PPC_VMINUB	= 772,
    PPC_VMINUH	= 773,
    PPC_VMINUW	= 774,
    PPC_VMLADDUHM	= 775,
    PPC_VMRGHB	= 776,
    PPC_VMRGHH	= 777,
    PPC_VMRGHW	= 778,
    PPC_VMRGLB	= 779,
    PPC_VMRGLH	= 780,
    PPC_VMRGLW	= 781,
    PPC_VMSUMMBM	= 782,
    PPC_VMSUMSHM	= 783,
    PPC_VMSUMSHS	= 784,
    PPC_VMSUMUBM	= 785,
    PPC_VMSUMUHM	= 786,
    PPC_VMSUMUHS	= 787,
    PPC_VMULESB	= 788,
    PPC_VMULESH	= 789,
    PPC_VMULEUB	= 790,
    PPC_VMULEUH	= 791,
    PPC_VMULOSB	= 792,
    PPC_VMULOSH	= 793,
    PPC_VMULOUB	= 794,
    PPC_VMULOUH	= 795,
    PPC_VNMSUBFP	= 796,
    PPC_VNOR	= 797,
    PPC_VOR	= 798,
    PPC_VPERM	= 799,
    PPC_VPKPX	= 800,
    PPC_VPKSHSS	= 801,
    PPC_VPKSHUS	= 802,
    PPC_VPKSWSS	= 803,
    PPC_VPKSWUS	= 804,
    PPC_VPKUHUM	= 805,
    PPC_VPKUHUS	= 806,
    PPC_VPKUWUM	= 807,
    PPC_VPKUWUS	= 808,
    PPC_VREFP	= 809,
    PPC_VRFIM	= 810,
    PPC_VRFIN	= 811,
    PPC_VRFIP	= 812,
    PPC_VRFIZ	= 813,
    PPC_VRLB	= 814,
    PPC_VRLH	= 815,
    PPC_VRLW	= 816,
    PPC_VRSQRTEFP	= 817,
    PPC_VSEL	= 818,
    PPC_VSL	= 819,
    PPC_VSLB	= 820,
    PPC_VSLDOI	= 821,
    PPC_VSLH	= 822,
    PPC_VSLO	= 823,
    PPC_VSLW	= 824,
    PPC_VSPLTB	= 825,
    PPC_VSPLTH	= 826,
    PPC_VSPLTISB	= 827,
    PPC_VSPLTISH	= 828,
    PPC_VSPLTISW	= 829,
    PPC_VSPLTW	= 830,
    PPC_VSR	= 831,
    PPC_VSRAB	= 832,
    PPC_VSRAH	= 833,
    PPC_VSRAW	= 834,
    PPC_VSRB	= 835,
    PPC_VSRH	= 836,
    PPC_VSRO	= 837,
    PPC_VSRW	= 838,
    PPC_VSUBCUW	= 839,
    PPC_VSUBFP	= 840,
    PPC_VSUBSBS	= 841,
    PPC_VSUBSHS	= 842,
    PPC_VSUBSWS	= 843,
    PPC_VSUBUBM	= 844,
    PPC_VSUBUBS	= 845,
    PPC_VSUBUHM	= 846,
    PPC_VSUBUHS	= 847,
    PPC_VSUBUWM	= 848,
    PPC_VSUBUWS	= 849,
    PPC_VSUM2SWS	= 850,
    PPC_VSUM4SBS	= 851,
    PPC_VSUM4SHS	= 852,
    PPC_VSUM4UBS	= 853,
    PPC_VSUMSWS	= 854,
    PPC_VUPKHPX	= 855,
    PPC_VUPKHSB	= 856,
    PPC_VUPKHSH	= 857,
    PPC_VUPKLPX	= 858,
    PPC_VUPKLSB	= 859,
    PPC_VUPKLSH	= 860,
    PPC_VXOR	= 861,
    PPC_V_SET0	= 862,
    PPC_V_SET0B	= 863,
    PPC_V_SET0H	= 864,
    PPC_V_SETALLONES	= 865,
    PPC_V_SETALLONESB	= 866,
    PPC_V_SETALLONESH	= 867,
    PPC_WAIT	= 868,
    PPC_XOR	= 869,
    PPC_XOR8	= 870,
    PPC_XOR8o	= 871,
    PPC_XORI	= 872,
    PPC_XORI8	= 873,
    PPC_XORIS	= 874,
    PPC_XORIS8	= 875,
    PPC_XORo	= 876,
    PPC_gBC	= 877,
    PPC_gBCA	= 878,
    PPC_gBCCTR	= 879,
    PPC_gBCCTRL	= 880,
    PPC_gBCL	= 881,
    PPC_gBCLA	= 882,
    PPC_gBCLR	= 883,
    PPC_gBCLRL	= 884,
    PPC_INSTRUCTION_LIST_END = 885
};

#endif // GET_INSTRINFO_ENUM