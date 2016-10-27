#include "TH1.h"
#include "TH1F.h"
#include "TFile.h"

void plots(){

 
  TFile *OldFile = TFile::Open("DQM_V0001_R000000001__Global__CMSSW_X_Y_Z__RECO_LC_old.root");


  TFile *NewFile = TFile::Open("DQM_V0001_R000000001__Global__CMSSW_X_Y_Z__RECO_LC_new.root");
  
  TCanvas *c0 = new TCanvas("c0","",800,600);
  c0->cd();

  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Client_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLToverOffline_energy_ee");

  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Client_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLToverOffline_energy_ee");

  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE");
  c0->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);
  oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("histo SAMES");
  c0->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLToverOffline_energy_ee.png");
  
  newLC_ee->Fit("pol0","","",0,300);
  oldLC_ee->Fit("pol0","","",0,300);
  oldLC_ee->Draw();
  newLC_ee->Draw("SAMES");
  c0->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLToverOffline_energy_ee_FIT.png");

  TCanvas *c0_1 = new TCanvas("c0_1","",800,600);
  c0_1->cd();
  
  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Client_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLToverOffline_eta_ee");

  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Client_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLToverOffline_eta_ee");

  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE");
  c0_1->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("histo SAMES");
  newLC_ee->Draw("PE same");
  c0_1->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLToverOffline_eta_ee.png");

  TCanvas *c0_2 = new TCanvas("c0_2","",800,600);
  c0_2->cd();

  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Client_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLToverOffline_phi_ee");

  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Client_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLToverOffline_phi_ee");

  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE");
  c0_2->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("histo SAMES");
  c0_2->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLToverOffline_phi_ee.png");

  TCanvas *c1 = new TCanvas("c1","",800,600);
  c1->cd();
  c1->SetLogy(0);
  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_DeltaE_ee");

  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_DeltaE_ee");

  //oldLC_ee->Draw("");
  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE");
  c1->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("HISTO SAMES");
  c1->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_DeltaE_ee.png");

  TCanvas *c2 = new TCanvas("c2","",800,600);
  c2->cd();

  TH1F* oldLC_eb=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_DeltaE_eb");

  TH1F* newLC_eb=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_DeltaE_eb");

  newLC_eb->SetLineColor(kRed);oldLC_eb->SetLineColor(kBlue);
  newLC_eb->Draw("PE");
  oldLC_eb->Draw("SAMES");
  c2->Update();
  TPaveStats *st = (TPaveStats*)oldLC_eb->FindObject("stats");
  st->SetName("oldLCstats");
  newLC_eb->Draw("PE SAMES");
  c2->Update();
  TPaveStats *st2 = (TPaveStats*)newLC_eb->FindObject("stats");
  st2->SetName("newLCstats");
  st2->SetY1NDC(.593);st2->SetY2NDC(.793);
  st2->SetTextColor(kRed);
  st2->Draw("HISTO SAMES");
  c2->Update();
  c2->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_DeltaE_eb.png"); 

  TCanvas *c1_2 = new TCanvas("c1_2","",800,600);
  c1_2->cd();
 
  TH1F* oldLC_eb=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergy_eb");
 
  TH1F* newLC_eb=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergy_eb");

  TH1F* diffH =(TH1F*)newLC_eb->Clone(); 
  diffH->Add(oldLC_eb,-1);

  newLC_eb->SetLineColor(kRed);
  newLC_eb->Draw("PE");
  c1_2->Update();
  TPaveStats *st = (TPaveStats*)newLC_eb->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_eb->SetLineColor(kBlue);
  oldLC_eb->Draw("HISTO SAMES");
  c1_2->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergy_eb.png");

  TCanvas *c1_3 = new TCanvas("c1_3","",800,600);
  c1_3->cd();

  TH1F* oldLC_eb=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_energy_eb");

  TH1F* newLC_eb=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_energy_eb");

  newLC_eb->SetLineColor(kRed);
  newLC_eb->Draw("PE");
  c1_3->Update();
  TPaveStats *st = (TPaveStats*)newLC_eb->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_eb->SetLineColor(kBlue);
  oldLC_eb->Draw("HISTO SAMES");
  c1_3->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_energy_eb.png");

  TCanvas *c1_2b = new TCanvas("c1_2b","",800,600);
  c1_2b->cd();
 
  TH1F* diffR =(TH1F*)newLC_eb->Clone();
  diffR->Add(oldLC_eb,-1);
  diffR->Draw("PE");
  diffH->Draw("HISTO SAMES");
  c1_2b->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_energyDiff_eb.png");

  TCanvas *c1_4 = new TCanvas("c1_4","",800,600);
  c1_4->cd();

  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergy_ee");

  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergy_ee");

  TH1F* diffHee =(TH1F*)newLC_ee->Clone(); 
  diffHee->Add(oldLC_ee,-1);
oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("HISTO");
  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE sames");
  c1_4->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("HISTO SAMES");
  c1_4->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergy_ee.png");

  TCanvas *c1_5 = new TCanvas("c1_5","",800,600);
  c1_5->cd();

  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_energy_ee");

  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_energy_ee");

  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE");
  c1_5->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("HISTO SAMES");
  c1_5->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_energy_ee.png");

  TCanvas *c1_5_1 = new TCanvas("c1_5_1","",800,600);
  c1_5_1->cd();

  TH1F* diffRee =(TH1F*)newLC_ee->Clone();
  diffRee->Add(oldLC_ee,-1);
  diffHee->Draw(""); 
  diffRee->Draw("sames");
  diffHee->Draw("HISTO SAMES"); 
  c1_5_1->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_energyDiff_ee.png");



  TCanvas *c3 = new TCanvas("c3","",800,600);
  c3->cd();
  //---
  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEle27WP80TrackIsoFilter/hltEle27WP80TrackIsoFilter_gsfEle_passFilter_DeltaE_ee");

  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEle27WP80TrackIsoFilter/hltEle27WP80TrackIsoFilter_gsfEle_passFilter_DeltaE_ee");

  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE");
  c3->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("HISTO SAMES");
  c3->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEle27WP80TrackIsoFilter_gsfEle_passFilter_DeltaE_ee.png");

  TCanvas *c4 = new TCanvas("c4","",800,600);
  c4->cd();

  TH1F* oldLC_eb=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEle27WP80TrackIsoFilter/hltEle27WP80TrackIsoFilter_gsfEle_passFilter_DeltaE_eb");

  TH1F* newLC_eb=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEle27WP80TrackIsoFilter/hltEle27WP80TrackIsoFilter_gsfEle_passFilter_DeltaE_eb");

  newLC_eb->SetLineColor(kRed);oldLC_eb->SetLineColor(kBlue);
  oldLC_eb->Draw("");
  c4->Update();
  TPaveStats *st = (TPaveStats*)oldLC_eb->FindObject("stats");
  st->SetName("oldLCstats");
  newLC_eb->Draw("PE SAMES");
  c4->Update();
  TPaveStats *st2 = (TPaveStats*)newLC_eb->FindObject("stats");
  st2->SetName("newLCstats");
  st2->SetY1NDC(.593);st2->SetY2NDC(.793);
  st2->SetTextColor(kRed);
  st2->Draw("HISTO SAMES");
  c4->Update();
  c4->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEle27WP80TrackIsoFilter_gsfEle_passFilter_DeltaE_eb.png");

  TCanvas *c5 = new TCanvas("c5","",800,600);
  c5->cd();
  //--

  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_DeltaE_ee");

  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_DeltaE_ee");

  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE");
  c5->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("HISTO SAMES");
  c5->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEG30CaloIdVLHEFilter_pho_passFilter_DeltaE_ee.png");

  TCanvas *c6 = new TCanvas("c6","",800,600);
  c6->cd();

  TH1F* oldLC_eb=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_DeltaE_eb");

  TH1F* newLC_eb=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_DeltaE_eb");

  newLC_eb->SetLineColor(kRed);oldLC_eb->SetLineColor(kBlue);
  oldLC_eb->Draw("");
  c6->Update();
  TPaveStats *st = (TPaveStats*)oldLC_eb->FindObject("stats");
  st->SetName("oldLCstats");
  newLC_eb->Draw("PE SAMES");
  c6->Update();
  TPaveStats *st2 = (TPaveStats*)newLC_eb->FindObject("stats");
  st2->SetName("newLCstats");
  st2->SetY1NDC(.593);st2->SetY2NDC(.793);
  st2->SetTextColor(kRed);
  st2->Draw("HISTO SAMES");
  c6->Update();
  c6->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEG30CaloIdVLHEFilter_pho_passFilter_DeltaE_eb.png");

  TCanvas *c1_2_1 = new TCanvas("c1_2_1","",800,600);
  c1_2_1->cd();
 
  TH1F* oldLC_eb=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_HLTenergy_eb");
 
  TH1F* newLC_eb=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_HLTenergy_eb");
 
  newLC_eb->SetLineColor(kRed);
  newLC_eb->Draw("PE");
  c1_2_1->Update();
  TPaveStats *st = (TPaveStats*)newLC_eb->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_eb->SetLineColor(kBlue);
  oldLC_eb->Draw("histo SAMES");
  c1_2_1->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEG30CaloIdVLHEFilter_pho_passFilter_HLTenergy_eb.png");

  TCanvas *c1_3_1 = new TCanvas("c1_3_1","",800,600);
  c1_3_1->cd();

  TH1F* oldLC_eb=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_energy_eb");
  TH1F* newLC_eb=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_energy_eb");

  newLC_eb->SetLineColor(kRed);
  newLC_eb->Draw("PE");
  c1_3_1->Update();
  TPaveStats *st = (TPaveStats*)newLC_eb->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_eb->SetLineColor(kBlue);
  oldLC_eb->Draw("histo SAMES");
  c1_3_1->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEG30CaloIdVLHEFilter_pho_passFilter_energy_eb.png");

  TCanvas *c1_2_2 = new TCanvas("c1_2_2","",800,600);
  c1_2_2->cd();
 
  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_HLTenergy_ee");
 
  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_HLTenergy_ee");
 
  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE");
  c1_2_2->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("histo SAMES");
  c1_2_2->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEG30CaloIdVLHEFilter_pho_passFilter_HLTenergy_ee.png");

  TCanvas *c1_3_2 = new TCanvas("c1_3_2","",800,600);
  c1_3_2->cd();

  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_energy_ee");

  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG30CaloIdVLHEFilter/hltEG30CaloIdVLHEFilter_pho_passFilter_energy_ee");

  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE");
  c1_3_2->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("HISTO SAMES");
  c1_3_2->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEG30CaloIdVLHEFilter_pho_passFilter_energy_ee.png");

  TCanvas *c7 = new TCanvas("c7","",800,600);
  c7->cd();
  //--

  TH1F* oldLC_ee=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG18HE10DoubleLastFilterUnseeded/hltEG18HE10DoubleLastFilterUnseeded_pho_passFilter_DeltaE_ee");

  TH1F* newLC_ee=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG18HE10DoubleLastFilterUnseeded/hltEG18HE10DoubleLastFilterUnseeded_pho_passFilter_DeltaE_ee");

  newLC_ee->SetLineColor(kRed);
  newLC_ee->Draw("PE");
  c7->Update();
  TPaveStats *st = (TPaveStats*)newLC_ee->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_ee->SetLineColor(kBlue);
  oldLC_ee->Draw("HISTO SAMES");
  c7->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEG18HE10DoubleLastFilterUnseeded_pho_passFilter_DeltaE_ee.png");

  TCanvas *c8 = new TCanvas("c8","",800,600);
  c8->cd();

  TH1F* oldLC_eb=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG18HE10DoubleLastFilterUnseeded/hltEG18HE10DoubleLastFilterUnseeded_pho_passFilter_DeltaE_eb");

  TH1F* newLC_eb=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG18HE10DoubleLastFilterUnseeded/hltEG18HE10DoubleLastFilterUnseeded_pho_passFilter_DeltaE_eb");

  newLC_eb->SetLineColor(kRed);
  newLC_eb->Draw("PE");
  c8->Update();
  TPaveStats *st = (TPaveStats*)newLC_eb->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_eb->SetLineColor(kBlue);
  oldLC_eb->Draw("HISTO SAMES");
  c8->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEG18HE10DoubleLastFilterUnseeded_pho_passFilter_DeltaE_eb.png");

  TCanvas *c9 = new TCanvas("c9","",800,600);
  c9->cd();

  TH1F* oldLC_eb=(TH1F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG18HE10DoubleLastFilterUnseeded/hltEG18HE10DoubleLastFilterUnseeded_pho_passFilter_HLTenergy_eb");

  TH1F* newLC_eb=(TH1F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEG18HE10DoubleLastFilterUnseeded/hltEG18HE10DoubleLastFilterUnseeded_pho_passFilter_HLTenergy_eb");

  newLC_eb->SetLineColor(kRed);
  newLC_eb->Draw("PE");
  c9->Update();
  TPaveStats *st = (TPaveStats*)newLC_eb->FindObject("stats");
  st->SetName("newLCstats");
  st->SetY1NDC(.593);st->SetY2NDC(.793);
  st->SetTextColor(kRed);oldLC_eb->SetLineColor(kBlue);
  oldLC_eb->Draw("HISTO SAMES");
  c9->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEG18HE10DoubleLastFilterUnseeded_pho_passFilter_HLTenergy_eb.png");

  /*
  TCanvas *c10 = new TCanvas("c10","",800,600);
  c10->cd();
 
  TH2F* oldLC_eb2=(TH2F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergyVsDeltaE_eb");
 
  TH2F* newLC_eb2=(TH2F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergyVsDeltaE_eb");

  newLC_eb2->SetTitle("hltEgammaSelectEcalSuperClustersActivityFilterSC7 HLTenergyVsDeltaE -- newLC");
  newLC_eb2->Draw("colz");
  c10->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergyVsDeltaE_newLC_colz.png");

  TCanvas *c11 = new TCanvas("c11","",800,600);
  c11->cd();
  oldLC_eb2->SetTitle("hltEgammaSelectEcalSuperClustersActivityFilterSC7 HLTenergyVsDeltaE -- oldLC");
  oldLC_eb2->Draw("colz");
  c11->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergyVsDeltaE_oldLC_colz.png");

  TCanvas *c12 = new TCanvas("c12","",800,600);
  c12->cd();
  c12->SetLogz(1);
  TH2F* newLC_eb2c = (TH2F*)newLC_eb2->Clone();
  newLC_eb2c->Add(oldLC_eb2,-1);
  newLC_eb2c->SetTitle("hltEgammaSelectEcalSuperClustersActivityFilterSC7 HLTenergyVsDeltaE -- newLC minus oldLC");
  newLC_eb2c->Draw("colz");
  c12->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTenergyVsDeltaE_oldLCminusnewLC_colz.png");
  */
   TH2F* newLC=(TH2F*)NewFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTetaVsHLTphi");
   TH2F* oldLC=(TH2F*)OldFile->Get("DQMData/Run 1/HLT/Run summary/EgOffline/Source_Histos/hltEgammaSelectEcalSuperClustersActivityFilterSC7/hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTetaVsHLTphi");
  
  
  TCanvas *c14 = new TCanvas("c14","",800,600);
  c14->cd();  
  newLC->Draw("colz");
  newLC->SetStats(0);
  c14->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTetaVsHLTphi_newLC.png");

  TCanvas *c15 = new TCanvas("c15","",800,600);
  c15->cd();
  oldLC->Draw("colz");
  oldLC->SetStats(0);
  c15->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTetaVsHLTphi_oldLC.png");
  

  TCanvas *c16 = new TCanvas("c16","",800,600);
  c16->cd();
  //c16->SetLogz(1);
  TH2F* diff2 = (TH2F*)newLC->Clone();
  diff2->SetStats(0);
  diff2->Add(oldLC,-1);
  float max = diff2->GetMaximum();
  diff2->GetZaxis()->SetRangeUser(0,max+1);
  diff2->Draw("colz");
  c16->Print("Plots/MinBias/VsOld/WeekJune10-June16hltEgammaSelectEcalSuperClustersActivityFilterSC7_pho_passFilter_HLTetaVsHLTphi_newLCminusoldLC.png");

}
