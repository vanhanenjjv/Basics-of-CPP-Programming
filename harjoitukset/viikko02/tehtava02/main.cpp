#include <iostream>

int main() {
    double m, k;
    int t;

    std::cout << "Syötä lainan määrä (euroa): "; std::cin >> m;
    std::cout << "Syötä korkoprosentti: "; std::cin >> k;
    std::cout << "Syötä laina-aika (vuosia): "; std::cin >> t;

    std::cout << "Lainan korot laina-ajalta ovat " << m * (k * 0.01) * t << " euroa.\n";

    return 0;
}
