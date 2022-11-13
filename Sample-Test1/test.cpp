#include "pch.h"
#include <gtest/gtest.h>

TEST(TestFunkcji, TestCzyJednaKolekcjaNieJestPusta) {
	vector <int> liczba = {3};
	vector<int>liczba2 = {9};
	bool mniejsze = false;
	if (liczba.size() == 0 || liczba2.size() == 0 || (liczba.size() == 0 && liczba2.size() == 0))
	{
		mniejsze = true;
	}
	
	EXPECT_FALSE(mniejsze);

}

TEST(TestFunkcji, TestCzyFunkcjaPoprawnieDziala) {
	vector <int> liczba3 = {3};
	vector<int>liczba4 = {0};
	EXPECT_TRUE(czyDrugaKolekcjaZawieraWszystkieKwadratyElementowZPierwszej(liczba3, liczba4));
}

TEST(TestFunkcji, ) {
	vector <int> liczba3 = { 3 };
	vector<int>liczba4 = { 9 };
}
