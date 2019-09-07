#include <iostream>

int main() {
    int lukuEka;
    int lukuToka;

    std::cout << "Syötä 1. luku: "; std::cin >> lukuEka;
    std::cout << "Syötä 2. luku: "; std::cin >> lukuToka;

    std::cout << "Lukujen erotus on " << lukuEka - lukuToka << ".\n";
    std::cout << "Lukujen tulo on " << lukuEka * lukuToka << ".\n";

    return 0;
}
