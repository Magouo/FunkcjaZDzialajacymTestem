#include "pch.h"
#include <gtest/gtest.h>

TEST(TestFunkcji, TestCzyJednaKolekcjaNieJestPusta) {
	vector <int> liczba = {};
	vector<int>liczba2 = {};
	bool mniejsze = false;
	if ((liczba.size() == 0 && liczba2.size() != 0) || (liczba2.size() == 0 && liczba.size() != 0))
	{
		mniejsze = true;
	}
	
	EXPECT_FALSE(mniejsze);

}

TEST(TestFunkcji, TestCzyFunkcjaPoprawnieDzialaZwracaTrue) {
	vector <int> liczba3 = {};
	vector<int>liczba4 = {};
	EXPECT_TRUE(czyDrugaKolekcjaZawieraWszystkieKwadratyElementowZPierwszej(liczba3, liczba4));
}

//TEST(TestFunkcji, TestCzyFunkcjaPoprawnieDzialaZwracaTrue1) {
//	vector <int> liczba3 = {1};
//	vector<int>liczba4 = {1};
//	EXPECT_TRUE(czyDrugaKolekcjaZawieraWszystkieKwadratyElementowZPierwszej(liczba3, liczba4));
//}
//
//TEST(TestFunkcji, TestCzyFunkcjaPoprawnieDzialaZwracaTrue2) {
//	vector <int> liczba3 = {1,2};
//	vector<int>liczba4 = {4,1};
//	EXPECT_TRUE(czyDrugaKolekcjaZawieraWszystkieKwadratyElementowZPierwszej(liczba3, liczba4));
//}
//
//TEST(TestFunkcji, TestCzyFunkcjaPoprawnieDzialaZwracaTrue3) {
//	vector <int> liczba3 = {1,2};
//	vector<int>liczba4 = {1,2,3,4};
//	EXPECT_TRUE(czyDrugaKolekcjaZawieraWszystkieKwadratyElementowZPierwszej(liczba3, liczba4));
//}
//
//TEST(TestFunkcji, TestCzyFunkcjaPoprawnieDzialaZwracaTrue4) {
//	vector <int> liczba3 = {1,1,1,1,1};
//	vector<int>liczba4 = {1};
//	EXPECT_TRUE(czyDrugaKolekcjaZawieraWszystkieKwadratyElementowZPierwszej(liczba3, liczba4));
//}
//
//TEST(TestFunkcji, TestCzyFunkcjaPoprawnieDzialaZwracaFalse) {
//	vector <int> liczba3 = {1,3,2};
//	vector<int>liczba4 = {4,8,1};
//	EXPECT_FALSE(czyDrugaKolekcjaZawieraWszystkieKwadratyElementowZPierwszej(liczba3, liczba4));
//}
