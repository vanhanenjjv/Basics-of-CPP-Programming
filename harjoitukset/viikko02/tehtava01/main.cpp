#include <iostream>

int main() {
    double w, h;

    std::cout << "Anna kolmion kanta metreinä: "; std::cin >> w;
    std::cout << "Anna kolmion korkeus metreinä: "; std::cin >> h;

    std::cout << "Kolmion pinta-ala on " << w * h / 2 << "\n";

    return 0;
}
