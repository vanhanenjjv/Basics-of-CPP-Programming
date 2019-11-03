#include "Palkka.hpp"

int Palkka(int h) {
    int p = 0;

    p += (h - (h - 40)) * 10;
    
    if (h > 40) 
        p += (h - 40) * 15;

    return p;
}
