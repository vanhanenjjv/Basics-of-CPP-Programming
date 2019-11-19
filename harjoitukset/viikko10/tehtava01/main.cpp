#include <iostream>
#include "../common/Random.hpp"

using std::cin;
using std::cout;
using std::cerr;

int main() {
    int t, n;
    Random rng = Random();

    cout << "Kuinka monta tahkoa arpakuutiossa on? "; cin >> t;
    cout << "Kuinka monta kertaa arpakuutiota heitetään? "; cin >> n;

    for (int i = 0; i < n; ++i) {
        try {
            int v = rng.next(1, t);
            cout << (i + 1) << ". heitto tuotti tuloksen: " << v << "\n";
        } catch (const char* msg) {
            cerr << "Nopassa on oltava vähintään yksi tahko. (" << msg << ")\n";
            return 1;
        }
    }
    
    return 0;
}
