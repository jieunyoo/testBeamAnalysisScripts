void drawChewieHistogramsCellEfficiency() {

	TFile* file1 = new TFile("Chewie_Runs1000_1003.root");

//CELL EFFICIENCY PLOTS FOR DUT 0 *******************************
	TH2F* hCellEfficiencyDut0;
	TH2F* hCellEfficiencyNorm_Dut0;
	TH2F* hCellEfficiencyEvenColumns_Dut0;
	TH2F* hCellEfficiencyEvenColumnsNorm_Dut0;
	TH2F* hCellEfficiencyOddColumns_Dut0;
	TH2F* hCellEfficiencyOddColumnsNorm_Dut0;
	TH2F* h2D4cellEfficiency_Dut0;
	TH2F* h2D4cellEfficiencyNorm_Dut0;

	file1->cd("Efficiency/Dut0/CellEfficiency");

	gDirectory->GetObject("hCellEfficiency_Dut0;1",hCellEfficiencyDut0);
	gDirectory->GetObject("hCellEfficiencyNorm_Dut0;1", hCellEfficiencyNorm_Dut0);
	gDirectory->GetObject("hCellEfficiencyEvenColumns_Dut0;1", hCellEfficiencyEvenColumns_Dut0);
	gDirectory->GetObject("hCellEfficiencyEvenColumnsNorm_Dut0;1", hCellEfficiencyEvenColumnsNorm_Dut0);
	gDirectory->GetObject("hCellEfficiencyOddColumns_Dut0;1", hCellEfficiencyOddColumns_Dut0);
	gDirectory->GetObject("hCellEfficiencyOddColumnsNorm_Dut0;1", hCellEfficiencyOddColumnsNorm_Dut0);
	gDirectory->GetObject("h2D4cellEfficiency_Dut0;1", h2D4cellEfficiency_Dut0);
	gDirectory->GetObject("h2D4cellEfficiencyNorm_Dut0;1", h2D4cellEfficiencyNorm_Dut0);

	gStyle->SetPalette(1);
	gStyle->SetStatX(0.3);
	gStyle->SetStatY(0.9);

	TCanvas* c1 = new TCanvas();
	hCellEfficiencyDut0->Draw("colz");
	c1->SaveAs("hCellEfficiencyDut0.png");

	TCanvas* c2 = new TCanvas();
	c2->cd();
	hCellEfficiencyNorm_Dut0->Draw("colz");
	c2->SaveAs("hCellEfficiencyNorm_Dut0.png");
	
	TCanvas* c3 = new TCanvas();
	hCellEfficiencyEvenColumns_Dut0->Draw("colz");
	c3->SaveAs("hCellEfficiencyEvenColumns_Dut0.png");

	TCanvas* c4 = new TCanvas();
	hCellEfficiencyEvenColumnsNorm_Dut0->Draw("colz");
	c4->SaveAs("hCellEfficiencyEvenColumnsNorm_Dut0.png");

	TCanvas* c5 = new TCanvas();
	hCellEfficiencyOddColumns_Dut0->Draw("colz");
	c5->SaveAs("hCellEfficiencyOddColumns_Dut0.png");

	TCanvas* c6 = new TCanvas();
	hCellEfficiencyOddColumnsNorm_Dut0->Draw("colz");
	c6->SaveAs("hCellEfficiencyOddColumnsNorm_Dut0.png");

	TCanvas* c7 = new TCanvas();
	h2D4cellEfficiency_Dut0->Draw("colz");
	c7->SaveAs("h2D4cellEfficiency_Dut0.png");

	TCanvas* c8 = new TCanvas();
	h2D4cellEfficiencyNorm_Dut0->Draw("colz");
	c8->SaveAs("h2D4cellEfficiencyNorm_Dut0.png");



//CELL EFFICIENCY PLOTS FOR DUT 1 *******************************
	TH2F* hCellEfficiencyDut1;
	TH2F* hCellEfficiencyNorm_Dut1;
	TH2F* hCellEfficiencyEvenColumns_Dut1;
	TH2F* hCellEfficiencyEvenColumnsNorm_Dut1;
	TH2F* hCellEfficiencyOddColumns_Dut1;
	TH2F* hCellEfficiencyOddColumnsNorm_Dut1;
	TH2F* h2D4cellEfficiency_Dut1;
	TH2F* h2D4cellEfficiencyNorm_Dut1;

	file1->cd("Efficiency/Dut1/CellEfficiency");

	gDirectory->GetObject("hCellEfficiency_Dut1;1",hCellEfficiencyDut1);
	gDirectory->GetObject("hCellEfficiencyNorm_Dut1;1", hCellEfficiencyNorm_Dut1);
	gDirectory->GetObject("hCellEfficiencyEvenColumns_Dut1;1", hCellEfficiencyEvenColumns_Dut1);
	gDirectory->GetObject("hCellEfficiencyEvenColumnsNorm_Dut1;1", hCellEfficiencyEvenColumnsNorm_Dut1);
	gDirectory->GetObject("hCellEfficiencyOddColumns_Dut1;1", hCellEfficiencyOddColumns_Dut1);
	gDirectory->GetObject("hCellEfficiencyOddColumnsNorm_Dut1;1", hCellEfficiencyOddColumnsNorm_Dut1);
	gDirectory->GetObject("h2D4cellEfficiency_Dut1;1", h2D4cellEfficiency_Dut1);
	gDirectory->GetObject("h2D4cellEfficiencyNorm_Dut1;1", h2D4cellEfficiencyNorm_Dut1);

	gStyle->SetPalette(1);
	gStyle->SetStatX(0.3);
	gStyle->SetStatY(0.9);

	TCanvas* c9 = new TCanvas();
	hCellEfficiencyDut1->Draw("colz");
	c9->SaveAs("hCellEfficiencyDut1.png");

	TCanvas* c10 = new TCanvas();
	c10->cd();
	hCellEfficiencyNorm_Dut1->Draw("colz");
	c10->SaveAs("hCellEfficiencyNorm_Dut1.png");
	
	TCanvas* c11 = new TCanvas();
	hCellEfficiencyEvenColumns_Dut1->Draw("colz");
	c11->SaveAs("hCellEfficiencyEvenColumns_Dut1.png");

	TCanvas* c12 = new TCanvas();
	hCellEfficiencyEvenColumnsNorm_Dut1->Draw("colz");
	c12->SaveAs("hCellEfficiencyEvenColumnsNorm_Dut1.png");

	TCanvas* c13 = new TCanvas();
	hCellEfficiencyOddColumns_Dut1->Draw("colz");
	c13->SaveAs("hCellEfficiencyOddColumns_Dut1.png");

	TCanvas* c14 = new TCanvas();
	hCellEfficiencyOddColumnsNorm_Dut1->Draw("colz");
	c14->SaveAs("hCellEfficiencyOddColumnsNorm_Dut1.png");

	TCanvas* c15 = new TCanvas();
	h2D4cellEfficiency_Dut1->Draw("colz");
	c15->SaveAs("h2D4cellEfficiency_Dut1.png");

	TCanvas* c16 = new TCanvas();
	h2D4cellEfficiencyNorm_Dut1->Draw("colz");
	c16->SaveAs("h2D4cellEfficiencyNorm_Dut1.png");

}
