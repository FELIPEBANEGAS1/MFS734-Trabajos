void myMacro1 ()
{	
	//Abrir la Tree usando el comando Tchain
	TChain *misDatos = new TChain("DecayTree","");
	misDatos -> Add("/home/felipe/Proyectos/B2HHH_MagnetDown.root");
	
	TH1F *h1= new TH1F("h1", "Histograma h1", 100,-100,100);
	TH1F *h2= new TH1F("h2", "Histograma h2", 100,-100,100);
	TH1F *h3= new TH1F("h3", "Histograma h3", 300,0,45000);
	
	misDatos -> Draw("H1_PX>>h1");
	misDatos -> Draw("H1_PY>>h2");
	misDatos -> Draw("H1_PZ>>h3");
	
	TCanvas *c1 = new TCanvas("c1","", 600, 800);
	h1 -> Draw();
	TCanvas *c2 = new TCanvas("c2","", 600, 800);
	h2 -> Draw();
	TCanvas *c3 = new TCanvas("c3","", 600, 800);
	h3 -> Draw();
	c1-> SaveAs("h1.pdf");
	c1->SaveAs("h1.C");
	c2-> SaveAs("h2.pdf");
	c2->SaveAs("h2.C");
	c3-> SaveAs("h3.pdf");
	c3->SaveAs("h3.C");

	
		
		
}
