#include <iostream>
#include <string>
#include <array>
#include "../common/Opiskelija.hpp"

using std::cin;
using std::cout;
using std::string;
using std::array;

int main() {
    array<Opiskelija, 5> students;

    for (int i = 0; i < students.size(); ++i) {
        cout << "Syötä " << (i + 1) << ". opiskelijan tiedot.\n";

        cout << "Etunimi: ";          cin >> students[i].Etunimi;
        cout << "Sukunimi: ";         cin >> students[i].Sukunimi;
        cout << "Opiskelijanumero: "; cin >> students[i].Opiskelijanumero;
        cout << "Opintopisteet: ";    cin >> students[i].Opintopisteet;

        cout << '\n';
    }

    // I wish I had reflection for this
    cout << "Opiskelija\t";
    for (int i = 0; i < students.size(); ++i)
        cout << "\t" << (i + 1);

    cout << "\nEtunimi\t\t";
    for (int i = 0; i < students.size(); ++i)
        cout << "\t" << students[i].Etunimi;

    cout << "\nSukunimi\t";
    for (int i = 0; i < students.size(); ++i)
        cout << "\t" << students[i].Sukunimi;
    
    cout << "\nOpiskelijanumero";
    for (int i = 0; i < students.size(); ++i)
        cout << "\t" << students[i].Opiskelijanumero;

    cout << "\nOpintopisteet\t";
    for (int i = 0; i < students.size(); ++i)
        cout << "\t" << students[i].Opintopisteet;

    cout << '\n';

    return 0;
}
