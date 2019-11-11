#include <iostream>
#include <array>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::array;
using std::string;
using std::vector;
using std::to_string;

int main() {
    array<float, 2> vars;

    for (int i = 0; i < vars.size(); ++i) {
        cout << "Syötä " << i + 1 << ". luku: "; cin >> vars[i];
    }

    cout << '\n';

    const vector<string> opNames = { "summan", "erotuksen", "tulon", "osamaaran" };
    for (int i = 0; i < opNames.size(); ++i)
        cout << "Valitse " << i + 1 << ", jos haluat lukujen " << opNames[i] << "\n";

    int op;
    cout << "Syötä haluttu operaatio: "; cin >> op;

    cout << '\n'
         << ([&]() {
                switch (op) {
                case 1: return to_string(vars[0] + vars[1]);
                case 2: return to_string(vars[0] - vars[1]);
                case 3: return to_string(vars[0] * vars[1]);
                case 4: return to_string(vars[0] / vars[1]);
                default: return string("Virheellinen syöte!");
                }
            })()
         << "\n";

    return 0;
}
