#include <iostream>

using std::cin;
using std::cout;

int main() {
    int seconds;
    cout << "Syötä aika (sekunteina): "; cin >> seconds;

    cout << "Aika\tNopeus(km/h)\n";
    for (int i = 0; i <= seconds; ++i)
        cout << i << "\t" << (9.81 * i * 3.6) << "\n";

    return 0;
}
