#include <iostream>

using std::cout;
using std::cin;

int main() {
    int balance = 0;

    cout << "Tervetuloa pankkiin!\nTilillä on rahaa " << balance << " Euroa.\n";

    int input = -1;
    while (true) {
        cout << "Valitse toiminto (1.Talleta, 2.Nosta, 3.Lopeta): "; cin >> input;

        int summa;
        switch (input) {
            case 1:
                cout << "Syötä talletettava rahasumma: "; cin >> summa;
                balance += summa;
                break;
            case 2:
                cout << "Syötä nostettava rahasumma: "; cin >> summa;
                balance -= summa;
                break;
            default: 
                break;
        }

        if (input == 3) {
            cout << "Näkemiin!\n";
            break;
        }

        cout << "Tilillä on rahaa " << balance << " Euroa.\n";
    }    
    
    return 0;
}