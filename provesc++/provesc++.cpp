#include <iostream>
#include "Aleatori.h"

using namespace std;

int main()
{
    int c, g, gen, aug;
    float fcc, fcg, fmc, fmg;
    cout << "Benvingut al FoxRabbit! Si us plau, quantes generacions vols estudiar?" << endl;
	cin >> gen;
	while (gen <= 0)
	{
		cout << "Introdueix un nombre enter positiu: quantes generacions vols estudiar?" << endl;
		cin >> gen;
	}

    cout << "Introdueix el nombre inicial de conills:" << endl;
    cin >> c;
    while (c <= 0) {
        cout << "Error. Introdueix el nombre inicila de conills:" << endl;
        cin >> c;
    }

    cout << "Introdueix el nombre inicial de guineus:" << endl;
    cin >> g;
    while (g <= 0) {
        cout << "Error. Introdueix el nombre inicila de guineus:" << endl;
        cin >> g;
    }

    cout << "Introdueix el factor de creixement dels conills:" << endl;
    cin >> fcc;
    while (fcc <= 0)
    {
        cout << "Error. Introdueix el factor de creixement dels conills:" << endl;
        cin >> fcc;
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

    for (int i = 1; c >= 1 && g >= 1 || i = gen; i++;) {
        aug = Aleatori(-2, 2);
        switch (aug)
        {
        case -2: fmc = fmc + (fmc * (1 / 100)); break;
        case -1: fmg = fmg + (fmg * (1 / 100)); break;
        case 1:fcg = fcg + (fcg * (1 / 100)); break;
        case 2: fcc = fcc + (fcc * (1 / 100)); break;
        default:
            break;
        }

        c = c + (fcc * c) - (fmc * c * g);
        g = g - (fmg * c) + (fcg * c * g);

        if (c <= 0) {
            cout << "Ho sento, has fet fallida. No et queden conills" << endl;
            return 1;
        }
        else {
            if (g <= 0) {
                cout << "Ho sento, has fet fallida. No et queden guineus" << endl;
                return 1;
            }
        }

        cout << "Hem estudiat " << i << " generacions i.." << endl;
        cout << "tenim " << g << " guineus" << endl;
        cout << "tenim " << c << " conills" << endl;
    }

    cout << "Felicitats tens " << c << " conills i " << g << " guineus." << endl;
}