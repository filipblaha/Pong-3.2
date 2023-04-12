//#include "MenuSkiny.h"
//
////-----------------------  Input  -----------------------//
//
//int MenuSkiny::VstupMenu(Profily& data)
//{
//	if (!_kbhit())
//		OznaceniVykresleni();
//	else
//		switch (_getch())
//		{
//		case 'w': case 's':
//		{
//			if (nahore)
//				nahore = 0;
//			else
//				nahore = 1;
//			OznaceniVykresleni(1);
//			return -5;
//		}
//		case 'a':
//		{
//			if (nahore)
//			{
//				if (data.plosina_skin == 0)
//					ref_plosina_skin = data.NacteniSkinyPlosina().size();
//				else
//					ref_plosina_skin--;
//				NacteniAktualSkinyPlosina(data);
//			}
//			else
//			{
//				if (ref_mic_skin == 0)
//					ref_mic_skin = data.NacteniSkinyMic().size();
//				else
//					ref_mic_skin--;
//				NacteniAktualSkinyMic(data);
//			}
//			return 1;
//		}
//		case 'd':
//		{
//			if (nahore)
//			{
//				if (ref_plosina_skin == data.NacteniSkinyPlosina().size())
//					ref_plosina_skin = 0;
//				else
//					ref_plosina_skin++;
//				if (ref_mic_skin == 0)
//					ref_mic_skin++;
//				NacteniAktualSkinyPlosina(data);
//			}
//			else
//			{
//				if (ref_mic_skin == data.NacteniSkinyMic().size())
//					ref_mic_skin = 0;
//				else
//					ref_mic_skin++;
//				if (ref_mic_skin == 0)
//					ref_mic_skin++;
//				NacteniAktualSkinyMic(data);
//			}
//			return 1;
//		}
//		case 224:
//		{
//			switch (_getch())
//			{
//			case 72: case 80:
//			{
//				if (nahore)
//					nahore = 0;
//				else
//					nahore = 1;
//				return 1;
//			}
//			case 75:
//			{
//				if (nahore)
//				{
//					if (ref_plosina_skin == 0)
//						ref_plosina_skin = data.NacteniSkinyPlosina().size();
//					else
//						ref_plosina_skin--;
//					NacteniAktualSkinyPlosina(data);
//				}
//				else
//				{
//					if (ref_mic_skin == 0)
//						ref_mic_skin = data.NacteniSkinyMic().size();
//					else
//						ref_mic_skin--;
//					NacteniAktualSkinyMic(data);
//				}
//				return 1;
//			}
//			case 77:
//			{
//				if (nahore)
//				{
//					if (ref_plosina_skin == data.NacteniSkinyPlosina().size())
//						ref_plosina_skin = 0;
//					else
//						ref_plosina_skin++;
//					if (ref_mic_skin == 0)
//						ref_mic_skin++;
//					NacteniAktualSkinyPlosina(data);
//				}
//				else
//				{
//					if (ref_mic_skin == data.NacteniSkinyMic().size())
//						ref_mic_skin = 0;
//					else
//						ref_mic_skin++;
//					if (ref_mic_skin == 0)
//						ref_mic_skin++;
//					NacteniAktualSkinyMic(data);
//				}
//				return 1;
//			}
//			}
//		}
//		case 'q':
//		{
//			return exit;
//		}
//		default:
//			return -5;
//		}
//}
//void MenuSkiny::Rozhodovac(Profily& data)
//{
//	if (nahore)
//	{
//		if (data.level < potrebna_uroven.at(ref_plosina_skin))
//		{
//			NedostatecnaUrovenVykresleni(potrebna_uroven.at(ref_plosina_skin), 0);
//			NedostatecnaUrovenSmazani(0);
//		}
//		else
//		{
//			data.plosina_skin = ref_plosina_skin;
//		}
//
//	}
//	else
//	{
//		if (data.level < potrebna_uroven.at(data.plosina_skin))
//		{
//			NedostatecnaUrovenVykresleni(potrebna_uroven.at(ref_plosina_skin), 1);
//		}
//		else
//		{
//			NedostatecnaUrovenSmazani(1);
//			data.mic_skin = ref_mic_skin;
//		}
//	}
//}
//
////-----------------------  Vykresleni -----------------------//
//
//void MenuSkiny::SkinyVykresleni(Profily data)
//{
//	set.SetCursorPosition(3, 8);
//	wcout << L"\x25c4";
//	set.SetCursorPosition(36, 8);
//	wcout << L"\x25ba";
//
//	set.SetCursorPosition(3, 14);
//	wcout << L"\x25c4";
//	set.SetCursorPosition(36, 14);
//	wcout << L"\x25ba";
//
//	PlosinaVykresleni(data);
//	MicVykresleni(data);
//	OznaceniVykresleni();
//	VykresleniUroven(data);
//	TextSkinyVykresleni(data);
//}
//void MenuSkiny::PlosinaVykresleni(Profily data)
//{
//	set.SetCursorPosition(7, 8);
//	wcout << aktual_skiny_plosina.at(0);
//	set.SetCursorPosition(17, 8);
//	wcout << aktual_skiny_plosina.at(1);
//	set.SetCursorPosition(27, 8);
//	wcout << aktual_skiny_plosina.at(2);
//}
//void MenuSkiny::MicVykresleni(Profily data)
//{
//	set.SetCursorPosition(7, 14);
//	wcout << aktual_skiny_mic.at(0);
//	set.SetCursorPosition(13, 14);
//	wcout << aktual_skiny_mic.at(1);
//	set.SetCursorPosition(19, 14);
//	wcout << aktual_skiny_mic.at(2);
//	set.SetCursorPosition(25, 14);
//	wcout << aktual_skiny_mic.at(3);
//	set.SetCursorPosition(31, 14);
//	wcout << aktual_skiny_mic.at(4);
//}
//void MenuSkiny::TextSkinyVykresleni(Profily data)
//{
//	text = transl.NacteniTextSkiny(data);
//
//	///-------  Text  -------//
//
//	set.SetCursorPosition(13, 3);
//	wcout << text.at(0);
//
//	set.SetCursorPosition(5, 5);
//	wcout << text.at(1);
//	set.SetCursorPosition(5, 11);
//	wcout << text.at(2);
//
//}
//void MenuSkiny::OznaceniVykresleni(bool prepnuti)
//{
//	if (nahore)
//	{
//		if (prepnuti)
//		{
//			if (!blikani)
//				Blikani();
//			OznaceniVykresleniNahoreSilna();
//			OznaceniVykresleniDoleSlaba();
//		}
//		else
//		{
//			if (Blikani())
//				OznaceniVykresleniNahoreSilna();
//			
//			else
//				OznaceniVykresleniNahoreSlaba();
//		}
//	}
//	else
//	{
//		if (prepnuti)
//		{
//			if (!blikani)
//				Blikani();
//			OznaceniVykresleniDoleSilna();
//			OznaceniVykresleniNahoreSlaba();
//		}
//		else
//		{
//			if (Blikani())
//				OznaceniVykresleniDoleSilna();
//
//			else
//				OznaceniVykresleniDoleSlaba();
//		}
//	}
//}
//void MenuSkiny::OznaceniVykresleniNahoreSilna()
//{
//	set.SetCursorPosition(15, 7);
//	std::wcout << L"\x2554";
//	set.SetCursorPosition(15, 9);
//	std::wcout << L"\x255a";
//	set.SetCursorPosition(24, 7);
//	std::wcout << L"\x2557";
//	set.SetCursorPosition(24, 9);
//	std::wcout << L"\x255d";
//}
//void MenuSkiny::OznaceniVykresleniNahoreSlaba()
//{
//	set.SetCursorPosition(15, 7);
//	std::wcout << L"\x250c";
//	set.SetCursorPosition(15, 9);
//	std::wcout << L"\x2514";
//	set.SetCursorPosition(24, 7);
//	std::wcout << L"\x2510";
//	set.SetCursorPosition(24, 9);
//	std::wcout << L"\x2518";
//}
//void MenuSkiny::OznaceniVykresleniDoleSilna()
//{
//	set.SetCursorPosition(17, 13);
//	std::wcout << L"\x2554";
//	set.SetCursorPosition(17, 15);
//	std::wcout << L"\x255a";
//	set.SetCursorPosition(21, 13);
//	std::wcout << L"\x2557";
//	set.SetCursorPosition(21, 15);
//	std::wcout << L"\x255d";
//}
//void MenuSkiny::OznaceniVykresleniDoleSlaba()
//{
//	set.SetCursorPosition(17, 13);
//	std::wcout << L"\x250c";
//	set.SetCursorPosition(17, 15);
//	std::wcout << L"\x2514";
//	set.SetCursorPosition(21, 13);
//	std::wcout << L"\x2510";
//	set.SetCursorPosition(21, 15);
//	std::wcout << L"\x2518";
//}
//void MenuSkiny::NedostatecnaUrovenVykresleni(int uroven, int objekt)
//{
//	if (objekt == 0)
//		set.SetCursorPosition(15, 5);
//	else
//		set.SetCursorPosition(15, 11);
//
//	wcout << text.at(3) << uroven;
//}
//void MenuSkiny::NedostatecnaUrovenSmazani(int objekt)
//{
//	if (objekt == 0)
//		set.SetCursorPosition(15, 5);
//	else
//		set.SetCursorPosition(15, 11);
//
//	for (int i = 0; i < 15; i++)
//	{
//		wcout << " ";
//	}
//}
//
////-----------------------  Scroll  -----------------------//
//
//void MenuSkiny::NacteniAktualSkinyPlosina(Profily data)
//{
//	vector<wstring> skiny = data.NacteniSkinyPlosina();
//	vector<wstring>::iterator itr = skiny.begin();
//	aktual_skiny_plosina.clear();
//
//	advance(itr, ref_plosina_skin - 1);
//	if (itr == skiny.begin())
//		itr = skiny.end();
//	itr--;
//
//	for (int i = 0; i < 3; i++)
//	{
//		if (itr == skiny.end())
//		{
//			itr = skiny.begin();
//		}
//		if (*itr == skiny.at(0))
//			itr++;
//
//		aktual_skiny_plosina.push_back(*itr);
//		itr++;
//	}
//}
//void MenuSkiny::NacteniAktualSkinyMic(Profily data)
//{
//	vector<wchar_t> skiny = data.NacteniSkinyMic();
//	vector<wchar_t>::iterator itr = skiny.begin();
//	aktual_skiny_mic.clear();
//
//	advance(itr, ref_mic_skin - 1);
//	for (int i = 0; i < 2; i++)
//	{
//		if (itr == skiny.begin())
//			itr = skiny.end();
//		itr--;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (itr == skiny.end())
//		{
//			itr = skiny.begin();
//		}
//		if (*itr == skiny.at(0))
//			itr++;
//
//		aktual_skiny_mic.push_back(*itr);
//		itr++;
//	}
//}

#include "MenuSkiny.h"

//-----------------------  Input  -----------------------//

int MenuSkiny::VstupMenu(Profily& data)
{
	switch (_getch())
	{
	case 'w':
	{
		OznaceniSmazani();
		if (oznaceni.at(y) > zavory.at(0))
		{
			oznaceni.at(y) -= 4;
		}
		OznaceniVykresleni();
		return 1;
	}
	case 's':
	{
		OznaceniSmazani();
		if (oznaceni.at(y) < zavory.at(1))
		{
			oznaceni.at(y) += 4;
		}
		OznaceniVykresleni();
		return 1;
	}
	case 'a':
	{
		OznaceniSmazani();
		if (oznaceni.at(x) > zavory.at(2))
		{
			oznaceni.at(x) -= 10;
		}
		OznaceniVykresleni();
		return 1;
	}
	case 'd':
	{
		OznaceniSmazani();
		if (oznaceni.at(x) < zavory.at(3))
		{
			oznaceni.at(x) += 10;
		}
		OznaceniVykresleni();
		return 1;
	}
	case 224:
	{
		switch (_getch())
		{
		case 72:
		{
			OznaceniSmazani();
			if (oznaceni.at(y) > zavory.at(0))
			{
				oznaceni.at(y) -= 4;
			}
			OznaceniVykresleni();
			return 1;
		}
		case 80:
		{
			OznaceniSmazani();
			if (oznaceni.at(y) < zavory.at(1))
			{
				oznaceni.at(y) += 4;
			}
			OznaceniVykresleni();
			return 1;
		}
		case 75:
		{
			OznaceniSmazani();
			if (oznaceni.at(x) > zavory.at(2))
			{
				oznaceni.at(x) -= 10;
			}
			OznaceniVykresleni();
			return 1;
		}
		case 77:
		{
			OznaceniSmazani();
			if (oznaceni.at(x) < zavory.at(3))
			{
				oznaceni.at(x) += 10;
			}
			OznaceniVykresleni();
			return 1;
		}
		}
	}
	case '\r': case ' ':
	{
		return 2;
	}
	case 'q':
	{
		return 0;
	}
	}
}
int MenuSkiny::Rozhodovac(Profily& data)
{
	if (oznaceni.at(y) == 9)
	{
		if (oznaceni.at(x) == 6)
		{
			if (data.level < potrebna_uroven.at(0))
			{
				NedostatecnaUrovenVykresleni(potrebna_uroven.at(0));
				return 1;
			}
			else
			{
				data.plosina_skin = 1;
				return 0;
			}
		}
		if (oznaceni.at(x) == 16)
		{
			if (data.level < potrebna_uroven.at(1))
			{
				NedostatecnaUrovenVykresleni(potrebna_uroven.at(1));
				return 1;
			}
			else
			{
				data.plosina_skin = 2;
				return 0;
			}
		}
		if (oznaceni.at(x) == 26)
		{
			if (data.level < potrebna_uroven.at(2))
			{
				NedostatecnaUrovenVykresleni(potrebna_uroven.at(2));
				return 1;
			}
			else
			{
				data.plosina_skin = 3;
				return 0;
			}
		}
	}
	else if (oznaceni.at(y) == 13)
	{

		if (oznaceni.at(x) == 6)
		{
			if (data.level < potrebna_uroven.at(3))
			{
				NedostatecnaUrovenVykresleni(potrebna_uroven.at(3));
				return 1;
			}
			else
			{
				data.plosina_skin = 4;
				return 0;
			}
		}
		if (oznaceni.at(x) == 16)
		{
			if (data.level < potrebna_uroven.at(4))
			{
				NedostatecnaUrovenVykresleni(potrebna_uroven.at(4));
				return 1;
			}
			else
			{
				data.plosina_skin = 5;
				return 0;
			}
		}
		if (oznaceni.at(x) == 26)
		{
			if (data.level < potrebna_uroven.at(5))
			{
				NedostatecnaUrovenVykresleni(potrebna_uroven.at(5));
				return 1;
			}
			else
			{
				data.plosina_skin = 6;
				return 0;
			}
		}
	}
}

//-----------------------  Vykresleni -----------------------//

void MenuSkiny::VzhledPlosinyVykresleni(Profily& data)
{
	SkinyVykresleni(data);
	OznaceniVykresleni();
	VykresleniUroven(data);
	TextVzhledPlosinyVykresleni(data);
}
void MenuSkiny::SkinyVykresleni(Profily data)
{
	int n = 7;
	int m = 10;
	for (int i = 0; i < 6; i++)
	{
		if (i == 3)
		{
			n = 7;
			m = 14;
		}
		set.SetCursorPosition(n, m);
		if (data.level >= potrebna_uroven.at(i))
			wcout << skiny.at(i + 1);
		else
			wcout << skiny.at(0);

		n += 10;
	}
}
void MenuSkiny::TextVzhledPlosinyVykresleni(Profily& data)
{
	text = transl.NacteniTextSkiny(data);

	///-------  Text  -------//

	set.SetCursorPosition(13, 3);
	wcout << text.at(0);
}
void MenuSkiny::OznaceniVykresleni()
{
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 8; i++)
		{
			if (j == 0 && i == 0)
			{
				set.SetCursorPosition(oznaceni.at(x), oznaceni.at(y));
				std::wcout << L"\x2554";
			}
			if (j == 0 && i == 7)
			{
				set.SetCursorPosition(oznaceni.at(x) + 7, oznaceni.at(y));
				std::wcout << L"\x2557";
			}
			if (j == 2 && i == 0)
			{
				set.SetCursorPosition(oznaceni.at(x), oznaceni.at(y) + 2);
				std::wcout << L"\x255a";
			}
			if (j == 2 && i == 7)
			{
				set.SetCursorPosition(oznaceni.at(x) + 7, oznaceni.at(y) + 2);
				std::wcout << L"\x255d";
			}
		}
	}
}
void MenuSkiny::OznaceniSmazani()
{
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 8; i++)
		{
			if (i == 0 && j == 0)
			{
				set.SetCursorPosition(oznaceni.at(x), oznaceni.at(y));
				std::wcout << ' ';
			}
			if (i == 7 && j == 0)
			{
				set.SetCursorPosition(oznaceni.at(x) + 7, oznaceni.at(y));
				std::wcout << ' ';
			}
			if (i == 0 && j == 2)
			{
				set.SetCursorPosition(oznaceni.at(x), oznaceni.at(y) + 2);
				std::wcout << ' ';
			}
			if (i == 7 && j == 2)
			{
				set.SetCursorPosition(oznaceni.at(x) + 7, oznaceni.at(y) + 2);
				std::wcout << ' ';
			}
		}
	}
}
void MenuSkiny::NedostatecnaUrovenVykresleni(int uroven)
{
	set.SetCursorPosition(9, 7);
	wcout << text.at(3) << uroven;
}

//-----------------------  Vykresleni -----------------------//

void MenuVzhledProfily(Profily& data)
{

}