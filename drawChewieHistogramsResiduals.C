void drawChewieHistogramsResiduals() {

	TFile* file1 = new TFile("Chewie_Runs1000_1003.root");

//Residuals plots for DUT 0 *******************************
	TH1F* hXResiduals_Dut0;
	file1->cd("Resolution/Dut0/XResiduals");
	gDirectory->GetObject("hXResiduals_Dut0;1",hXResiduals_Dut0);

	TCanvas* c1 = new TCanvas();
	hXResiduals_Dut0->Draw();
	c1->SaveAs("XResidualsDut0.png");

	TH1F* hYResiduals_Dut0;
	file1->cd("Resolution/Dut0/YResiduals");
	gDirectory->GetObject("hYResiduals_Dut0;1",hYResiduals_Dut0);

	TCanvas* c2 = new TCanvas();
	hYResiduals_Dut0->Draw();
	c2->SaveAs("YResidualsDut0.png");


//Residuals plots for DUT 1 *******************************
	TH1F* hXResiduals_Dut1;
	file1->cd("Resolution/Dut1/XResiduals");
	gDirectory->GetObject("hXResiduals_Dut1;1",hXResiduals_Dut1);

	TCanvas* c3 = new TCanvas();
	hXResiduals_Dut1->Draw();
	c3->SaveAs("XResidualsDut1.png");

	TH1F* hYResiduals_Dut1;
	file1->cd("Resolution/Dut1/YResiduals");
	gDirectory->GetObject("hYResiduals_Dut1;1",hYResiduals_Dut1);

	TCanvas* c4 = new TCanvas();
	hYResiduals_Dut1->Draw();
	c4->SaveAs("YResidualsDut1.png");

}
