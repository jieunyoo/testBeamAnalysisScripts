void drawChewieHistogramsEfficiency2() {

	TFile* file1 = new TFile("Chewie_Run1001.root");

//CELL EFFICIENCY PLOTS FOR DUT 0 *******************************
	TH2F* histo2DEfficiency_Dut0;
	TH2F* histo2DEfficiencyRef_Dut0;

	file1->cd("Efficiency/Dut0/Efficiency");

	gDirectory->GetObject("2DEfficiency_Dut0;1",histo2DEfficiency_Dut0);
	gDirectory->GetObject("2DEfficiencyRef_Dut0;1", histo2DEfficiencyRef_Dut0);

	gStyle->SetPalette(1);
	gStyle->SetStatX(0.3);
	gStyle->SetStatY(0.9);

	TCanvas* c1 = new TCanvas();
	histo2DEfficiency_Dut0->Draw("colz");
	c1->SaveAs("2DEfficiencyDut0.png");

	TCanvas* c2 = new TCanvas();
	c2->cd();
	histo2DEfficiencyRef_Dut0->Draw("colz");
	c2->SaveAs("2DEfficiencyRef_Dut0.png");
	
//CELL EFFICIENCY PLOTS FOR DUT 1 *******************************

	TH2F* histo2DEfficiency_Dut1;
	TH2F* histo2DEfficiencyRef_Dut1;

	file1->cd("Efficiency/Dut1/Efficiency");

	gDirectory->GetObject("2DEfficiency_Dut1;1",histo2DEfficiency_Dut1);
	gDirectory->GetObject("2DEfficiencyRef_Dut1;1", histo2DEfficiencyRef_Dut1);

	gStyle->SetPalette(1);
	gStyle->SetStatX(0.3);
	gStyle->SetStatY(0.9);

	TCanvas* c3 = new TCanvas();
	histo2DEfficiency_Dut1->Draw("colz");
	c3->SaveAs("2DEfficiencyDut1.png");

	TCanvas* c4 = new TCanvas();
	c4->cd();
	histo2DEfficiencyRef_Dut1->Draw("colz");
	c4->SaveAs("2DEfficiencyRef_Dut1.png");
}
