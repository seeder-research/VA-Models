VBIC Output Test Ic=f(Vc,Ib) vs self heating
.option absmos=1e-12 relmos=1e-6 relv=1e-6 absv=1e-9 post
vc c 0 0
vb b 0 1
ve e 0 0
vs s 0 0
vc1 c c1 0
vb1 b b1 0
ve1 e e1 0
vs1 s s1 0
.temp 27
NQ1 c1 b1 e1 s1 mod1 sw_et=1 m=5
* area=1
.model mod1 vbic13_4t
+ Type=-1
+ Tnom=27 RCX=10 RCI=60 VO=2 GAMM=2.e-11
+ HRCF=2 RBX=10 RBI=40 RE=2
+ RS=20 RBP=40 IS=1e-16 NF=1.00000e+00
+ NR=1.00000e+00 FC=9.00000e-01 CBEO=0
+ CJE=1.e-13 PE=0.75 ME=0.33
+ AJE=-5.00000e-01 CBCO=0 CJC=2e-14
+ QCO=1e-12 CJEP=1e-13 PC=7.50000e-01
+ MC=3.30000e-01 AJC=-5.00000e-01 CJCP=4e-13
+ PS=7.50000e-01 MS=3.30000e-01 AJS=-5.00000e-01
+ IBEI=1e-18 WBE=1.0000 NEI=1.00000e+00
+ IBEN=5e-15 NEN=2.00000e+00 IBCI=2e-17
+ NCI=1.00000e+00 IBCN=5e-15 NCN=2.00000e+00
+ AVC1=2 AVC2=15 ISP=1e-15
+ WSP=1.000e+00 NFP=1.00000e+00 IBEIP=0
+ IBENP=0 IBCIP=0 NCIP=1.00000e+00
+ IBCNP=0 NCNP=2.00000e+00 VEF=10
+ VER=4 IKF=0.002 IKR=0.0002 IKP=0.0002
+ TF=1.e-11 QTF=0 XTF=20
+ VTF=0 ITF=0.08 TR=1e-10
+ KFN=0 AFN=1.0e+00
+ BFN=1.0000e+00 XRE=0 XRB=0
+ XRC=0 XRS=0 XVO=0
+ EA=1.12000e+00 EAIE=1.12000e+00
+ EANE=1.12000e+00 EANC=1.12000e+00
+ EANS=1.12000e+00 XIS=3.00000e+00
+ XII=3.00000e+00 XIN=3.00000e+00
+ TNF=0 TAVC=0
+ RTH=300 CTH=0
+ TD=0
*+ TD=2.e-11
.control
pre_osdi ../osdilibs/vbic_1p3.osdi
dc vc 0.0 5.0001 0.05 vb 0.7 1.0001 0.05
altermod @mod1[RTH]=0
dc vc 0.0 5.0001 0.05 vb 0.7 1.0001 0.05
plot dc1.vc1#branch dc2.vc1#branch
.endc
.end

