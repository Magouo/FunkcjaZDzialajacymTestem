#include "pch.h"
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
//	vector<int>jeden = {};
//	vector<int>dwa = {};
//	if (czyDrugaKolekcjaZawieraWszystkieKwadratyElementowZPierwszej(jeden, dwa) == true) {
//		cout << "Posiada potegi";
//	}
//	else {
//		cout << "Nie posiada poteg";
//	}
//}
