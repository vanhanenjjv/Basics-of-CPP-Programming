#include <iostream>
#include "Common.hpp"
#include "Nelio.hpp"
#include "Suorakaide.hpp"
#include "MatkanHinta.hpp"
#include "Palkka.hpp"
#define SPACING cout << "\n\n";

using std::cin;
using std::cout;

void exercise_1() {
    int n;
    cout << "Syötä luku: "; cin >> n;
    cout << "\nSyöttämäsi luvun neliö on: "
         << Nelio(n)
         << "\n";
}

void exercise_2() {
    float a, b;
    cout << "Syötä suorakaiteen ensimmäisen sivun pituus: "; cin >> a;
    cout << "Syötä suorakaiteen toisen sivun pituus: "; cin >> b;
    
    cout << "\nSuorakaiteen pinta-ala on " 
         << Suorakaide(a, b) 
         << "\n";
}

void exercise_3() {
    float d, c, p;
    cout << "Syötä ajettu matka kilometreinä: ";            cin >> d;
    cout << "Syötä auton kulutus sadalla kilometrillä: ";   cin >> c;
    cout << "Syötä polttoaineen hinta euroina: ";           cin >> p;

    cout << "\nMatkan hinta on yhteensä: " 
         << MatkanHinta(d, c, p) 
         << " euroa.\n";
}

void exercise_4() {
    float h;
    cout << "Syötä tekemäsi tuntimäärä viikossa: "; cin >> h;

    cout << "\nBruttopalkkasi on: " 
         << Palkka(h) 
         << " euroa.\n";
}

int main() {
    cout << create_heading("Neliö") << "\n";
    exercise_1();
    SPACING;

    cout << create_heading("Suorakaide") << "\n";
    exercise_2();
    SPACING;

    cout << create_heading("Matkan hinta") << "\n";
    exercise_3();
    SPACING;

    cout << create_heading("Palkka") << "\n";
    exercise_4();

    return 0;
}
