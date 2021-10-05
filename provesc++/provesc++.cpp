#include <iostream>
#include "Aleatori.h"

using namespace std;

int main()
{
    int c, g, gen, fcc, fcg, fmc, fmg, cg, gg, aug;

    cout << "Benvingut al FoxRabbit! Si us plau, quantes generacions vols estudiar?" << endl;
	cin >> gen;
	while (gen <= 0)
	{
		cout << "Introdueix un nombre enter positiu: quantes generacions vols estudiar?" << endl;
		cin >> gen;
	}

    cout << "Introdueix el nombre inicial de conills:" << endl;
    cin >> c;
    while (g <= 0) {
        cout << "Error. Introdueix el nombre inicila de conills:" << endl;
        cin >> c;
    }

    cout << "Introdueix el nombre inicial de guineus:" << endl;
    cin >> g;
    while (g <= 0) {
        cout << "Error. Introdueix el nombre inicila de guineus:" << endl;
        cin >> g;
    }

    cout << "Introdueix el factor depredador guineu-conill:" << endl;
    cin >> fmc;
    while (fmc<=0)
    {
        cout << "Error. Introdueix el factor depredador guineu-conill:" << endl;
        cin >> fmc;
    }

    cout << "Introdueix el factor de mortalitat de les guineus:" << endl;
    cin >> fmg;
    while (fmg<=0)
    {
        cout << "Error. Introdueix el factor de mortalitat de les guineus:" << endl;
        cin >> fmg;
    }

    cout << "Introdueix el factor de creixement de les guineus:" << endl;
    cin >> fcg;
    while (fcg<=0)
    {
        cout << "Error. Introdueix el factor de creixement de les guineus:" << endl;
        cin >> fcg;
    }

    for (int i = 1; c >= 1 && g >= 1 || i = gen; i++;)

        cg = cg + (fcc * cg) - (fmc * cg * gg);
        gg = gg - (fmg * cg) + (fcg * cg * gg);
}















