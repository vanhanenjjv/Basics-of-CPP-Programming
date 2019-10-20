#include <iostream>

using std::cin;
using std::cout;

int main() {
    int n;
    cout << "Haluttu tarkkuus: "; cin >> n;

    double result = 0;
    for (int i = 0; i < n; ++i)
        result += (4.0 / (1.0 + 2.0 * i)) * (i % 2 == 0 ? 1.0 : -1.0);

    cout << "Piin arvo on " << n << ":n termin tarkkuudella on " << result << "\n";
}
