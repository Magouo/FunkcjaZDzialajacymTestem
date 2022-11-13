#include "pch.h"

//Zadanie: Napisz funkcj� przyjmuj�c� dwie kolekcje liczb ca�kowitych, kt�ra sprawdza,
//czy druga kolekcja zawiera wszystkie kwadraty element�w z pierwszej kolekcji, kolejno�� nie ma znaczenia.
//
//Przyk�ady :
//    pusta lista; pusta lista > prawda
//    1; 1 > prawda
//    1, 2; 4, 1 > prawda
//    1, 2; 1, 2, 3, 4 > prawda, bo posiada 1 i 4
//    1, 1, 1, 1, 1; 1 > prawda, bo wielokrotno�ci nie maj� znaczenia
//    1, 3, 2; 4, 8, 1 > fa�sz
//
//    Zadanie mo�esz napisa� w dowolnym j�zyku.Uwzgl�dnij przypadki testowe i napisz testy tej�e funkcji,
//  najlepiej wykorzystuj�c frameworki do test�w(w skr�cie chodzi o mo�liwo�� wykonywania zautomatyzowanych test�w).
//

bool czyDrugaKolekcjaZawieraWszystkieKwadratyElementowZPierwszej(vector<int>lista1, vector<int>lista2)
{
	vector<int>potegiLiczb;
	bool czyIstniejePotegaWDrugiejKolekcji = false;

	sort(lista1.begin(), lista1.end());
	lista1.erase(unique(lista1.begin(), lista1.end()), lista1.end());

	sort(lista2.begin(), lista2.end());
	lista2.erase(unique(lista2.begin(), lista2.end()), lista2.end());

	if (lista1.size() == 0 && lista2.size() == 0) {
		return true;
	}
	else if (lista1.size() == 0 || lista2.size() == 0)
	{
		return false;
	}
	else if (lista1.size() < lista2.size())
	{
		for (int i = 0; i < lista1.size(); i++)
		{
			potegiLiczb.push_back(pow(lista1[i], 2));
		}

		for (int i = 0; i < potegiLiczb.size(); i++)
		{
			czyIstniejePotegaWDrugiejKolekcji = false;

			for (int j = 0; j < lista2.size(); j++)
			{
				if (potegiLiczb[i] == lista2[j])
				{
					czyIstniejePotegaWDrugiejKolekcji = true;
				}
			}
			if (czyIstniejePotegaWDrugiejKolekcji == false) {
				return false;
			}
		}
	}
	else if (lista2.size() < lista1.size()) {

		for (int i = 0; i < lista2.size(); i++)
		{
			potegiLiczb.push_back(pow(lista2[i], 2));
		}

		for (int i = 0; i < potegiLiczb.size(); i++)
		{
			czyIstniejePotegaWDrugiejKolekcji = false;

			for (int j = 0; j < lista1.size(); j++)
			{
				if (potegiLiczb[i] == lista1[j])
				{
					czyIstniejePotegaWDrugiejKolekcji = true;
				}
			}
			if (czyIstniejePotegaWDrugiejKolekcji == false)
			{
				return false;
			}
		}
	}

	else
	{
		if (lista1[lista1.size() - 1] > lista2[lista2.size() - 1])
		{
			for (int i = 0; i < lista2.size(); i++)
			{
				potegiLiczb.push_back(pow(lista2[i], 2));
			}

			for (int i = 0; i < potegiLiczb.size(); i++)
			{
				czyIstniejePotegaWDrugiejKolekcji = false;

				for (int j = 0; j < lista1.size(); j++)
				{
					if (potegiLiczb[i] == lista1[j])
					{
						czyIstniejePotegaWDrugiejKolekcji = true;
					}
				}
				if (czyIstniejePotegaWDrugiejKolekcji == false) {
					return false;
				}
			}
		}

		else
		{
			for (int i = 0; i < lista1.size(); i++)
			{
				potegiLiczb.push_back(pow(lista1[i], 2));
			}

			for (int i = 0; i < potegiLiczb.size(); i++)
			{
				czyIstniejePotegaWDrugiejKolekcji = false;

				for (int j = 0; j < lista2.size(); j++)
				{
					if (potegiLiczb[i] == lista2[j])
					{
						czyIstniejePotegaWDrugiejKolekcji = true;
					}
				}
				if (czyIstniejePotegaWDrugiejKolekcji == false) {
					return false;
				}
			}
		}
	}

	return czyIstniejePotegaWDrugiejKolekcji;
}
//int main()
//{
//	vector<int>jeden = {1,1,1,7,2,2,212,5,2,4,12,1,21};
//	vector<int>dwa = {8,575,7,57,5,6,4,5,7,1,4,4,4,45,1};
//	if (czyDrugaKolekcjaZawieraWszystkieKwadratyElementowZPierwszej(jeden, dwa) == true) {
//		cout << "Posiada potegi";
//	}
//	else {
//		cout << "Nie posiada poteg";
//	}
//}
