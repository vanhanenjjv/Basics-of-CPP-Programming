#include <iostream>
#include "../common/Opiskelija.hpp"

int main() {
    Opiskelija opiskelija = {
        "Matti",
        "Meikäläinen",
        "4556747765",
        4342
    };

    tulostaOpiskelijanTiedot(opiskelija);

    return 0;
}

void tulostaOpiskelijanTiedot(Opiskelija opiskelija) {
    using std::cout;

    cout << "Etunimi: "          << opiskelija.Etunimi          << '\n'
         << "Sukunimi: "         << opiskelija.Sukunimi         << '\n'
         << "Opiskelijanumero: " << opiskelija.Opiskelijanumero << '\n'
         << "Opintopisteet: "    << opiskelija.Opintopisteet    << '\n';
}
