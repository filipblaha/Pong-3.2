//#pragma once
//#include "Menu.h"
//
//class MenuSkiny : public Menu
//{
//public:
//
//    MenuSkiny(Profily& data) : Menu(data, hlavni_e, 6, 9, 9, 13, 6, 26)
//    {
//        Preklad trans;
//        nahore = 1;
//        ref_plosina_skin = data.plosina_skin;
//        ref_mic_skin = data.mic_skin;
//
//        potrebna_uroven = { 0,1,2,3,4,5 };
//        NacteniAktualSkinyPlosina(data);
//        NacteniAktualSkinyMic(data);
//
//        SkinyVykresleni(data);
//        OznaceniVykresleni(1);
//    }
//
//    //-----------------------  Input  -----------------------//
//
//    int VstupMenu(Profily& data);
//    void Rozhodovac(Profily& data);
//
//    //-----------------------  Vykresleni Menu  -----------------------//
//
//    void SkinyVykresleni(Profily data);
//
//private: ///////////////////////////////////  PRIVATE  /////////////////////////////////////////
//    bool nahore;
//    int ref_plosina_skin;
//    int ref_mic_skin;
//
//    vector<int> potrebna_uroven;
//    vector<wstring> aktual_skiny_plosina;
//    vector<wchar_t> aktual_skiny_mic;
//
//    //-----------------------  Vykresleni  -----------------------//
//
//    void TextSkinyVykresleni(Profily data);
//    void PlosinaVykresleni(Profily data);
//    void MicVykresleni(Profily data);
//    void OznaceniVykresleni(bool prepnuti = 0);
//    void OznaceniVykresleniNahoreSilna();
//    void OznaceniVykresleniNahoreSlaba();
//    void OznaceniVykresleniDoleSilna();
//    void OznaceniVykresleniDoleSlaba();
//    void NedostatecnaUrovenVykresleni(int uroven, int objekt);
//    void NedostatecnaUrovenSmazani(int objekt);
//
//    //-----------------------  Scroll  -----------------------//
//    void NacteniAktualSkinyPlosina(Profily data);
//    void NacteniAktualSkinyMic(Profily data);
//};
#pragma once
#include "Menu.h"

class MenuSkiny : public Menu
{
public:

    MenuSkiny(Profily& data) : Menu(data, hlavni_e, 6, 9, 9, 13, 6, 26)
    {
        Preklad trans;

        potrebna_uroven = { 0,1,2,3,4,5 };
        skiny = data.NacteniSkiny();

        VzhledPlosinyVykresleni(data);
    }

    //-----------------------  Input  -----------------------//

    int VstupMenu(Profily& data);
    int Rozhodovac(Profily& data);

    //-----------------------  Vykresleni Menu  -----------------------//

    void VzhledPlosinyVykresleni(Profily& data);

private: ///////////////////////////////////  PRIVATE  /////////////////////////////////////////
    vector<int> potrebna_uroven;
    vector<wstring> skiny;

    //-----------------------  Vykresleni  -----------------------//

    void TextVzhledPlosinyVykresleni(Profily& data);
    void SkinyVykresleni(Profily data);
    void OznaceniVykresleni();
    void OznaceniSmazani();
    void NedostatecnaUrovenVykresleni(int uroven);

    //-----------------------  Vykresleni -----------------------//

    void CustomSkin(Profily data);
};