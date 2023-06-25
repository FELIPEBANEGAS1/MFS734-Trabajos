void myMacro2 ()
{	
	//WRITE HERE YOUR OWN CODE
	TCanvas c1;
	TF2 f1("f1", "sin(x)*sin(y)/(x*y)", -10., 10., -10.,10.);
	f1.Draw("surf1");
	c1.Draw("surf1");
	c1.SaveAs("grafica-de-seno-3D.pdf");

}
