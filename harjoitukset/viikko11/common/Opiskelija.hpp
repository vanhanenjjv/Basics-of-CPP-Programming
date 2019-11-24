#include <string>

struct Opiskelija {
    std::string Etunimi;
    std::string Sukunimi;
    std::string Opiskelijanumero;
    int Opintopisteet;
};

void tulostaOpiskelijanTiedot(Opiskelija opiskelija);

void luoOpiskelija(Opiskelija& opiskelija);
