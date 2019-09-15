#include <iostream>
#include <algorithm>

int main() {
    int a, b;

    std::cout << "Syötä 1. henkilön pituus (cm): "; std::cin >> a;
    std::cout << "Syötä 2. henkilön pituus (cm): "; std::cin >> b;

    std::cout << "Pidempi henkilö on " << std::max(a, b) << "cm.\n";
}
