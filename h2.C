#ifdef __CLING__
#pragma cling optimize(0)
#endif
void h2()
{
//=========Macro generated from canvas: c2/
//=========  (Sat Jun 24 11:24:01 2023) by ROOT version 6.26/10
   TCanvas *c2 = new TCanvas("c2", "",0,0,600,800);
   c2->Range(-125,2117.044,125,4677.601);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   
   TH1F *h2__2 = new TH1F("h2__2","Histograma h2",100,-100,100);
   h2__2->SetBinContent(0,2322558);
   h2__2->SetBinContent(1,4272);
   h2__2->SetBinContent(2,4216);
   h2__2->SetBinContent(3,4324);
   h2__2->SetBinContent(4,4189);
   h2__2->SetBinContent(5,4183);
   h2__2->SetBinContent(6,4028);
   h2__2->SetBinContent(7,4138);
   h2__2->SetBinContent(8,4015);
   h2__2->SetBinContent(9,4077);
   h2__2->SetBinContent(10,4055);
   h2__2->SetBinContent(11,3933);
   h2__2->SetBinContent(12,3969);
   h2__2->SetBinContent(13,3962);
   h2__2->SetBinContent(14,4006);
   h2__2->SetBinContent(15,3910);
   h2__2->SetBinContent(16,3894);
   h2__2->SetBinContent(17,4054);
   h2__2->SetBinContent(18,3966);
   h2__2->SetBinContent(19,3892);
   h2__2->SetBinContent(20,3888);
   h2__2->SetBinContent(21,3976);
   h2__2->SetBinContent(22,3852);
   h2__2->SetBinContent(23,3992);
   h2__2->SetBinContent(24,3798);
   h2__2->SetBinContent(25,3937);
   h2__2->SetBinContent(26,3717);
   h2__2->SetBinContent(27,3828);
   h2__2->SetBinContent(28,3788);
   h2__2->SetBinContent(29,3790);
   h2__2->SetBinContent(30,3777);
   h2__2->SetBinContent(31,3720);
   h2__2->SetBinContent(32,3797);
   h2__2->SetBinContent(33,3652);
   h2__2->SetBinContent(34,3725);
   h2__2->SetBinContent(35,3754);
   h2__2->SetBinContent(36,3551);
   h2__2->SetBinContent(37,3561);
   h2__2->SetBinContent(38,3609);
   h2__2->SetBinContent(39,3375);
   h2__2->SetBinContent(40,3417);
   h2__2->SetBinContent(41,3319);
   h2__2->SetBinContent(42,3301);
   h2__2->SetBinContent(43,3136);
   h2__2->SetBinContent(44,2923);
   h2__2->SetBinContent(45,2961);
   h2__2->SetBinContent(46,2671);
   h2__2->SetBinContent(47,2676);
   h2__2->SetBinContent(48,2609);
   h2__2->SetBinContent(49,2466);
   h2__2->SetBinContent(50,2555);
   h2__2->SetBinContent(51,2622);
   h2__2->SetBinContent(52,2496);
   h2__2->SetBinContent(53,2601);
   h2__2->SetBinContent(54,2790);
   h2__2->SetBinContent(55,2827);
   h2__2->SetBinContent(56,2991);
   h2__2->SetBinContent(57,3008);
   h2__2->SetBinContent(58,3082);
   h2__2->SetBinContent(59,3204);
   h2__2->SetBinContent(60,3323);
   h2__2->SetBinContent(61,3278);
   h2__2->SetBinContent(62,3420);
   h2__2->SetBinContent(63,3502);
   h2__2->SetBinContent(64,3442);
   h2__2->SetBinContent(65,3775);
   h2__2->SetBinContent(66,3597);
   h2__2->SetBinContent(67,3652);
   h2__2->SetBinContent(68,3696);
   h2__2->SetBinContent(69,3544);
   h2__2->SetBinContent(70,3730);
   h2__2->SetBinContent(71,3786);
   h2__2->SetBinContent(72,3797);
   h2__2->SetBinContent(73,3647);
   h2__2->SetBinContent(74,3734);
   h2__2->SetBinContent(75,3855);
   h2__2->SetBinContent(76,3760);
   h2__2->SetBinContent(77,3846);
   h2__2->SetBinContent(78,3806);
   h2__2->SetBinContent(79,3757);
   h2__2->SetBinContent(80,3843);
   h2__2->SetBinContent(81,3943);
   h2__2->SetBinContent(82,3842);
   h2__2->SetBinContent(83,3888);
   h2__2->SetBinContent(84,3973);
   h2__2->SetBinContent(85,4001);
   h2__2->SetBinContent(86,3917);
   h2__2->SetBinContent(87,3991);
   h2__2->SetBinContent(88,4000);
   h2__2->SetBinContent(89,4061);
   h2__2->SetBinContent(90,4201);
   h2__2->SetBinContent(91,4090);
   h2__2->SetBinContent(92,4128);
   h2__2->SetBinContent(93,4246);
   h2__2->SetBinContent(94,4074);
   h2__2->SetBinContent(95,4111);
   h2__2->SetBinContent(96,4202);
   h2__2->SetBinContent(97,4187);
   h2__2->SetBinContent(98,4265);
   h2__2->SetBinContent(99,4236);
   h2__2->SetBinContent(100,4285);
   h2__2->SetBinContent(101,2445009);
   h2__2->SetEntries(5135823);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5135823");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.01977");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  60.34");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h2__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h2__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h2__2->SetLineColor(ci);
   h2__2->GetXaxis()->SetLabelFont(42);
   h2__2->GetXaxis()->SetTitleOffset(1);
   h2__2->GetXaxis()->SetTitleFont(42);
   h2__2->GetYaxis()->SetLabelFont(42);
   h2__2->GetYaxis()->SetTitleFont(42);
   h2__2->GetZaxis()->SetLabelFont(42);
   h2__2->GetZaxis()->SetTitleOffset(1);
   h2__2->GetZaxis()->SetTitleFont(42);
   h2__2->Draw("");
   
   TPaveText *pt = new TPaveText(0.3096309,0.94,0.6903691,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Histograma h2");
   pt->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
