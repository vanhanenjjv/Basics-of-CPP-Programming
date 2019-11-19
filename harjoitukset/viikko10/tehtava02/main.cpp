#include <iostream>
#include "../common/Random.hpp"

void arvoLottonumerot(int taulukko[], int koko);

int main() {
    int n = 20;
    int t[n];

    arvoLottonumerot(t, n);

    for (int m : t)
        printf("%i\n", m);

    return 0;
}

void arvoLottonumerot(int taulukko[], int koko) {
    Random rng = Random();

    for (int i = 0; i < koko; ++i) {   
        int n;

        while (true) {
            n = rng.next(1, 41);
            
            for (int j = 0; j <= i; ++j)
                if (taulukko[j] == n)
                    continue;

            break;
        } 

        taulukko[i] = n;
    }
}
