#include <iostream>

void asetaika(int &age);

int main()
{
    int ika;

    asetaika(ika);

    printf("Ikäsi on %i.", ika);
    
    /*
        Normaalisti C++:ssa funktioiden parameterit ovat arvoja, jolloin niiden manipulointi
        funktiossa ei näy funktiota kutsuvassa koodissa. &-merkki parameterin muuttujanimen
        alussa kertoo, että muuttuja tulisi syöttää funktiolle viittauksena, jolloin 
        funktion sisällä tehdyt muutokset muuttujaan näkyisivät myös funktiota kutsuvassa koodissa.
    */

    return 0;
}

void asetaika(int &a) {
    printf("Syötä ikäsi: ");
    scanf("%i", &a);
}
