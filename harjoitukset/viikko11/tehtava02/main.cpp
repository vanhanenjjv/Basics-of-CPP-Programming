#include <iostream>
#include <string>
#include <array>

using std::cin;
using std::cout;
using std::string;
using std::array;

struct Valtio {
    string Nimi;
    int Asukasluku;
    int Pinta_ala;
    string Johtaja;
};

int main() {
    array<Valtio, 2> countries;

    for (int i = 0; i < 2; ++i) {
        cout << "Syötä " << (i + 1) << ". valtion tiedot.\n";

        cout << "Valtion nimi: "; cin >> countries[i].Nimi;
        cout << "Asukasluku: ";   cin >> countries[i].Asukasluku;
        cout << "Pinta-ala: ";    cin >> countries[i].Pinta_ala;
        cout << "Johtaja: ";      cin >> countries[i].Johtaja;

        cout << '\n';
    }

    // I wish I had reflection for this
    cout << "Valtio\t";
    for (int i = 0; i < countries.size(); ++i)
        cout << "\t" << (i + 1);

    cout << "\nNimi\t";
    for (int i = 0; i < countries.size(); ++i)
        cout << "\t" << countries[i].Nimi;
    
    cout << "\nAsukasluku";
    for (int i = 0; i < countries.size(); ++i)
        cout << "\t" << countries[i].Asukasluku;

    cout << "\nPinta-ala";
    for (int i = 0; i < countries.size(); ++i)
        cout << "\t" << countries[i].Pinta_ala;

    cout << "\nJohtaja\t";
    for (int i = 0; i < countries.size(); ++i)
        cout << "\t" << countries[i].Johtaja;

    cout << '\n';

    return 0;
}
