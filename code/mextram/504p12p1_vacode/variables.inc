// Copyright (c) 2000-2007, NXP Semiconductor
// Copyright (c) 2007-2014, Delft University of Technology
// Copyright (c) 2015, Auburn University
// All rights reserved, see IP_NOTICE_DISCLAIMER_LICENSE for further information.

// Declaration of variables

// Model constants

real An, Bn;

// Temperature scaling variables

real Tk, Trk, tN, Tamb;
real Vt, Vtr, VtINV, VtrINV, VdtINV;
real Vdt;

`ifdef __NGSPICE__
real tVCrit;
`endif

real UdeT, VDE_T, UdcT, VDC_T;
real CJE_T, CJC_T, XP_T;
real CJCscale, CJCscaleINV;

real RE_T, RBV_T, RBC_T, RCV_T;
// RvdT: 30-01-2007, new collector resistances:
real RCCxx_T, RCCex_T, RCCin_T;

real BF_T, BRI_T;

real IS_T, IK_T, IBF_T, IBR_T, VEF_T, VER_T;

// RvdT: November 2008, Zener tunneling parameters and variables:
real Izteb, IZEB_T, E0BE, dE0BE,nZEB_T, pow2_2mPE, pow2_PEm2, inv_VDE, inv_VDE_T;
real eZEB, edZEB, DZEB, VGZEB_T, VGZEB_Tr, inv_VGZEB_Tr, CJE_T_div_CJE ;

// RvdT: March 2009, Zener tunneling parameters and variables:
real VGZEBOK;

// end Zener tunneling parameters

real TAUE_T, TAUB_T, TEPI_T, TAUR_T;
real BnT, DEG_T, Tk300;

`ifdef SELFHEATING
real RTH_Tamb;
`endif

`ifdef SUBSTRATE
real UdsT, VDS_T, CJS_T, ISS_T, ICSS_T, IKS_T;
`endif

// MULT - scaling variables

real invMULT;
real IS_TM, IK_TM, IBF_TM, IBR_TM, IHC_M;
// RvdT: November 2008, Zener tunneling parameters
real IZEB_TM ;

// end Zener tunneling parameters




real CJE_TM, CJC_TM;

real RE_TM, RBC_TM, RBV_TM, RCV_TM, SCRCV_M;
// RvdT: 30-01-2007, new collector resistances:
real RCCxx_TM, RCCex_TM, RCCin_TM;
// RvdT: 03-12-2007, new collector conductances:
real GCCxx_TM, GCCex_TM, GCCin_TM;


real KF_M, KFN_M;

`ifdef SELFHEATING
real RTH_Tamb_M, CTH_M;
`endif

`ifdef SUBSTRATE
real ISS_TM, ICSS_TM, IKS_TM, CJS_TM;
`endif


// Epilayer model variables

real K0, Kw, pW, Ec, Ic1c2;
real Vqs_th, Vqs, Iqs;
real alpha, vyi, yi, xi_w, xi_w1;
real gp0, gp02, p0star, Vb2c2star, eVb2c2star;
real B1, B2, Vxi0, Vch, Icap, pav;

// Effective emitter and collector junction bias variables

real Vfe, Vje, Vte;
real Vjunc, bjc, Vfc, Vjc, fI, Vcv, Vtc;

// Transfer current variables

real If0, f1, f2, n0, nB;
real q0I, q1I, qBI, Ir, If, In;

// Base and substrate current(s) variables

real Xext1;
real Ib1, Ib1_s, Ib2, Ib3;
real Ibf0, Iex;
real g1, g2, pWex, nBex;
real Xg1, XnBex, XIMex, XIMsub, Vex, VBex, Fex, XIex;

`ifdef SUBSTRATE
real Isub, XIsub, Isf;
`endif

// Distributed base effects variables

real q0Q, q1Q, qBQ, Rb2, Ib1b2;
real dVteVb2e1, dVteVje, dVjeVb2e1;
real dQteVb2e1, dQbeVb2e1, dQeVb2e1;
real dn0Vb2e1;

// Weak-avalanche current variables

real dEdx0, xd, Weff, Wd, Eav, E0, Em, SHw, Efi, Ew;
real lambda, Gem, Gmax, Iavl;
real Icap_IHC;

`ifdef SELFHEATING
real Tki, power;
`endif

// Charges and capacitances variables

real Qte, Vje_s, Qte_s;
real Qtc;
real Qb0, Qbe, Qbc, Qb1b2;
real Qbe_qs, Qbc_qs;
real Vjcex, Vtexv, Qtex, XVjcex, XVtexv, XQtex;

`ifdef SUBSTRATE
real Vfs, Vjs, Qts;
`endif

real Qe0, Qe;
real Qe_qs;
real Qepi0, Qepi, Xg2, XpWex, XQex;
real Qex;
real CBEO_M, CBCO_M;

// Biases and exponential terms variables

real Vb2c1, Vb2c2, Vb2e1, Vb1e1, Vb1b2, Vb1c4, Vc1c2;
real Vc3c4, Vc4c1;
`ifdef  SUBSTRATE
real Vsc1, Vsc3, Vsc4, eVsc1, eVsc3, eVsc4;
`endif
real Vee1, Vbb1, Vbc3, Vcc3, Vbe, Vbc;
real eVb2c2, eVb2e1, eVb1e1, eVb1b2, eVb1c4, eVbc3;
real eVb1c4VDC, eVb2c2VDC, eVbc3VDC, eVb2c1VDC;

// Help variables

// RvdT, November 2008, lntN introduced to speed up T-scaling:
// Acknowledgements due to Geoffrey Coram
real lntN ;

// RvdT, November 2008 variables for local use; may be re-used globally:
real x, y ;

real dxa, sqr_arg;
real eps2, x2;
real alpha1, vdif, Ic1c2_Iqs, gp0_help;
real EmEav_Em, Vb2e1Vfe, termE, termC;
real Vex_bias;
real eps_VDC, a_VDE, a_VDC;

real expl, tmpExp, tmpV;


`ifdef  SUBSTRATE
real a_VDS;
`endif

// Noise variables
real common;
real powerREC, powerRBC, powerRCCxx, powerRCCex, powerRCCin, powerRBV;
real powerCCS;
real powerFBCS, powerFBC1fB1, exponentFBC1fB2, powerFBC1fB2;
real powerEBSCS, powerEBSC1f;
real powerRBCS, powerRBC1f;
real powerExCS, powerExCSMOD, powerExC1f, powerExC1fMOD;
real powerIIS;

`ifdef SUBSTRATE
real powerSubsCS_B1S, powerSubsCS_BS;
`endif

// noise correlation help variables
real In_N, Gem_N, Taub_N, taun, Qbe_qs_eff;
