#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::max;

int main() {
    string Etunimi,
           Sukunimi,
           Osoite,
           Katunumero,
           Postinumero,
           Kunta;

    cout << "Syötä etunimi: ";   cin >> Etunimi;
    cout << "Syötä sukunimi: ";  cin >> Sukunimi;
    cout << "Syötä kadunnimi: "; cin >> Osoite;
    cout << "Syötä postinro: ";  cin >> Postinumero;
    cout << "Syötä kunta: ";     cin >> Kunta;

    cout << "Osoitteesi on: "
         << Etunimi << " " << Sukunimi    << " " 
         << Osoite  << " " << Postinumero << " " << Kunta << "\n";

    cout << (Etunimi < Sukunimi ? "Etunimi" : "Sukunimi") 
         << " on ensimmäisenä aakkosissa.\n";

    cout << (Etunimi.length() == Sukunimi.length() ? "Nimet ovat yhtä pitkiä." 
        : (string((Etunimi.length() > Sukunimi.length() ? "Etunimi" 
            : "Sukunimi")).append(" on pidempi.")))
         << " ("
         << (max(Etunimi.length(), Sukunimi.length()))
         << " merkkiä)\n";

    return 0;
}
