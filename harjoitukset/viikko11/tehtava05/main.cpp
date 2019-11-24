#include <iostream>
#include "../common/Opiskelija.hpp"

int main() {
    Opiskelija opiskelija;

    luoOpiskelija(opiskelija);

    return 0;
}

void luoOpiskelija(Opiskelija& opiskelija) {
    using std::cout; 
    using std::cin;

    cout << "Syötä opiskelijan tiedot.\n";
    cout << "Etunimi: ";          cin >> opiskelija.Etunimi;
    cout << "Sukunimi: ";         cin >> opiskelija.Sukunimi;
    cout << "Opiskelijanumero: "; cin >> opiskelija.Opiskelijanumero;
    cout << "Opintopisteet: ";    cin >> opiskelija.Opintopisteet;
}
