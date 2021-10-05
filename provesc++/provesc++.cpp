#include <iostream>
#include "Aleatori.h"

using namespace std;

int main()
{
	int gen, fcc, fcg, fmc, fmg;
	cout << "Benvingut al FoxRabbit! Si us plau, quantes generacions vols estudiar?" << endl;
	cin >> gen;
	while (gen <= 0)
	{
		cout << "Introdueix un nombre enter positiu: quantes generacions vols estudiar?" << endl;
		cin >> gen;
	}
	

}
