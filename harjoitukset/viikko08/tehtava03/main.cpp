#include <iostream>
#include "Virta.hpp"

using std::cin;
using std::cout;


int main() {
    float u, r;

    cout << "Syötä jännite: "; cin >> u;
    cout << "Syötä resistanssi: "; cin >> r;

    cout << "\nVirta on " << virta(u, r) << "\n";

    return 0;
}
