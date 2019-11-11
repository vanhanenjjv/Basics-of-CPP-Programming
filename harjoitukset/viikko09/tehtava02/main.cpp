#include <iostream>
#include <array>
#include <string>

using std::string;
using std::array;
using std::cin;
using std::cout;

void tulostaTahtia(int lukumaara);

int main() {
    array<int, 12> sademaara;

    for (int i = 0; i < sademaara.size(); ++i) {
        cout << "Syötä sademäärä: ";
        cin >> sademaara[i];
    }

    for (int i = 0; i < sademaara.size(); ++i)
        tulostaTahtia(sademaara[i]);

    return 0;
}

void tulostaTahtia(int n) {
    cout << string(n, '*') << "\n";
}
