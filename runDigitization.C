{
  gSystem->Load("libactar.sl");
  gROOT->ProcessLine(".L digitizationMacro.C+");
  thePadsGeometry.SetGeometryValues("ActarTPC");
  theDriftManager.SetDriftVelocity(50.0e-3);
  theDriftManager.SetDiffusionParameters(5.e-4, 5.e-4);
  digitEvents("root_files/sim_files/simFile.root","root_files/dig_files/digFile.root",0,10);
}
