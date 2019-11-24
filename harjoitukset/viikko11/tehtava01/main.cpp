#include <iostream>
#include "../common/Opiskelija.hpp"

using std::cin;
using std::cout;

int main() {
    Opiskelija opiskelija;

    cout << "Syötä opiskelijan tiedot.\n";
    cout << "Etunimi: ";          cin >> opiskelija.Etunimi;
    cout << "Sukunimi: ";         cin >> opiskelija.Sukunimi;
    cout << "Opiskelijanumero: "; cin >> opiskelija.Opiskelijanumero;
    cout << "Opintopisteet: ";    cin >> opiskelija.Opintopisteet;

        cout << "Etunimi: "                  << opiskelija.Etunimi          << '\n'
             << "Sukunimi: "                 << opiskelija.Sukunimi         << '\n'
             << "Opiskelijanumero: "         << opiskelija.Opiskelijanumero << '\n'
             << "Suoritetut opintopisteet: " << opiskelija.Opintopisteet    << '\n';

    return 0;
}