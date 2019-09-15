#include <iostream>

int main() {
    int m,
        x = 0,
        s;

    std::cout << "Syötä hissin painoraja (kg): "; std::cin >> m;

    for (int i = 0; i < 4; ++i) {
        std::cout << "Syötä " << i + 1 << ". henkilön paino (kg): "; std::cin >> s;
        x += s;
    }

    std::cout << (x > m ? "Ylipainoa, hissiä ei saa käyttää!" : "Hissi käytettävissänne!") << "\n";
}
