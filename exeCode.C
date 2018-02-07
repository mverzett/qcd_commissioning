{
   
    // Declare the root files on which you want to run  (MC & Data) :
    TChain *superTree = new TChain("btagana/ttree");


    int which_case=1;

//    cout << " which case? 1= PFJet, 2= DiJets" << endl;
//    cin >> which_case;


    if (which_case==1) {

    // Data 
 /*
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/JetHT/runB/171220_125115/0000/J*root");

    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/JetHT/runC/171220_125350/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/JetHT/runC/171220_125350/0001/J*root");

    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/JetHT/runD/171220_125424/0000/J*root");

    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/JetHT/runE/171220_125459/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/JetHT/runE/171220_125459/0001/J*root");

    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/JetHT/runF/171220_125533/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/JetHT/runF/171220_125533/0001/J*root");
*/

/*
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/JetHT/runB/180117_081955/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/JetHT/runC/180117_082031/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/JetHT/runC/180117_082031/0001/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/JetHT/runD/180117_082105/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/JetHT/runE/180117_082141/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/JetHT/runE/180117_082141/0001/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/JetHT/runF/180117_082215/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/JetHT/runF/180117_082215/0001/J*root");
*/
    
    // MC


/*
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/incQCD/QCD_Pt_30to50_TuneCP5_13TeV_pythia8/incl_qcd_30/171219_105015/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/incQCD/QCD_Pt_50to80_TuneCP5_13TeV_pythia8/incl_qcd_50/171219_110425/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/incQCD/QCD_Pt_80to120_TuneCP5_13TeV_pythia8/incl_qcd_80/171219_110520/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/incQCD/QCD_Pt_120to170_TuneCP5_13TeV_pythia8/incl_qcd_120/171219_110554/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/incQCD/QCD_Pt_170to300_TuneCP5_13TeV_pythia8/incl_qcd_170/171219_110629/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/incQCD/QCD_Pt_300to470_TuneCP5_13TeV_pythia8/incl_qcd_300/180110_084536/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18/incQCD/QCD_Pt_470to600_TuneCP5_13TeV_pythia8/incl_qcd_470/171219_110926/0000/J*root");
*/



    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/QCD_Pt_30to50_TuneCP5_13TeV_pythia8/incl_qcd_30/180117_082536/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/QCD_Pt_50to80_TuneCP5_13TeV_pythia8/incl_qcd_50/180117_082611/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/QCD_Pt_80to120_TuneCP5_13TeV_pythia8/incl_qcd_80/180117_082645/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/QCD_Pt_120to170_TuneCP5_13TeV_pythia8/incl_qcd_120/180117_082718/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/QCD_Pt_170to300_TuneCP5_13TeV_pythia8/incl_qcd_170/180117_082753/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/QCD_Pt_300to470_TuneCP5_13TeV_pythia8/incl_qcd_300/180117_082827/0000/J*root");
    superTree->Add("/opt/sbg/cms/ui3_data1/ccollard/BTAntuples/Moriond18_withCTag/withCtag/QCD_Pt_470to600_TuneCP5_13TeV_pythia8/incl_qcd_470/180117_082905/0000/J*root");



    }
/*
    else if (which_case==2) {


    }
*/

    CommPlotProducer m(superTree);


    // Setting up of the information
    // with generator = pythia or herwig, qcdtype =0 for inclusive or 1 for MuEnriched, and TeV = 8 or 13.
    if (which_case==1) {
      m.SetInfo("pythia",0,13);
    }
    else if (which_case==2) {
      m.SetInfo("pythia",1,13);
    }
 
    // Here put the number of events for each samples you are running on.
    // BE CAREFULL !!!!!
    // You should enter 12 numbers and following the increasing order in pthat of the MC samples.
    // n15_20, n20_30, n30_50, n50_80,  n80_120,  n120_170, n170_300,  n300_470,  n470_600, n600_800, n800_1000, n1000 ;
    //
    //  -->  m.Fill_nevent(n15_20,n20_30,n30_50,n50_80,n80_120,n120_170,n170_300,n300_470,n470_600,n600_800,n800_1000,n1000);
    //       for muenriched pythia and herwig.
    //  or
    //  -->  m.Fill_nevent(    0.,n15_30,n30_50,n50_80,n80_120,n120_170,n170_300,n300_470,n470_600,n600_800,n800_1000,n1000);
    //       for inclusive pythia and herwig.
    //
    // If you want to run only on the 50-80 and 80-120 samples for pythia 8 TeV, the correct syntaxe is
    //   m.Fill_nevent(0,0,0,n50_80,n80_120,0,0,0,0,0,0,0);
    //
    // Remark for 7TeV QCD MC:
    // for  inclusive QCD pythia at 7TeV, provide : 
    //  -->  m.Fill_nevent(    0.,n15_30,n30_50,n50_80,n80_120,n120_170,n170_300,n300,0.,0.,0.,0.);
    // for  MuEnriched QCD pythia at 7TeV, provide : 
    //  -->  m.Fill_nevent(    0.,n15_30,n30_50,n50_80,n80_120,n120_150,n150,0.,0.,0.,0.,0.);
    //
    // if you don't know how many events you have in your datasets
    // m.Counter(); --> TAKES 4 HOURS ON DATA+MC :(

   
//   m.Fill_nevent(n15_20,n20_30,n30_50,n50_80,n80_120,n120_170,n170_300,n300_470,n470_600,n600_800,n800_1000,n1000);
    double   n15    = 0;
    double   n20    = 0;
    double   n30    = 0; 
    double   n50    = 0;
    double   n80   =  0;
    double   n120  =  0;
    double   n170  =  0;
    double   n300  = 0;
    double   n470  = 0;
    double   n600  = 0;
    double   n800 = 0;
    double   n1000     = 0;


    if (which_case==1) {
            n20   =  0.;
/*
            n30   =  19378747.;
            n50   =  7656887.; 
            n80   =  27054007.;
            n120  =  10479769.;
            n170  =  25114533.;
            n300  =  23622076.;
            n470  =  15033212.;
*/

            n30   =  19503604.;
            n50   =  18828383.; 
            n80   =  27989430.;
            n120  =  25098641.;
            n170  =  29394249.;
            n300  =  29115849.;
            n470  =  25011264.;

	    n600  =  0.;
            n800  =  0.;
            n1000  =  0.;
    }
    else if (which_case==2) {
            n15    = 0.;
            n20    = 0.;
            n30    = 0.; 
            n50    = 0.;
            n80   =  0.;
            n120  =  0.;
            n170  =  0.;
            n300  =  0.;
            n470  =  0.;
            n600  =  0.;
            n800  =  0;
            n1000 = 0;

    }
    m.Fill_nevent(n15,n20,n30,n50,n80,n120,n170,n300,n470,n600,n800,n1000);

    m.SetXS();     // Assign the correct x-sections to QCD pthat bins, depending on SetInfo(), default = use inclusive pythia x-sections for 8 TeV.
    m.SetSumXS();  // Compute the Total x-section of all the samples
   
    // no PU info
    m.SetPV("incl_full_nopv.root");  // use PV
//    m.SetPV("incl_pfjet40_runcv3.root","incl_pfjet40_rund.root");  // use PV
//    m.SetJetPtCorr("musel_2fb1_dj40_pt.root","musel_2fb1_dj40_pv.root");  // use PV
   
//    m.SetPersonalConfig(false, false, false, false);

//    m.SetPS();

    if (which_case==1) {
//       m.Loop("jet", 40, 50, 300,   "incl_pfjet40_runcv3_npv2");
//       m.Loop("jet", 40, 50, 250,   "incl_pfjet40_mc_pvfull");
       m.Loop("jet", 40, 50, 250,   "incl_ctag_mc_pv_nmin1");
    }
    else if (which_case==2) {
      m.Loop("btag", 40, 50, 250,   "musel_40_50_250_mia");
    }

   
}
