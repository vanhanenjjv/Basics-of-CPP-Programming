#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::string;
using std::to_string;

string result(string operation, double value) {
    return string()
        .append("Syöttämäsi luvun ")
        .append(operation)
        .append(" on ")
        .append(to_string(value))
        .append("\n");
}

int main() {
    double value;
    char operation;

    while (true) {
        cout << "Valitse laskutoimitus (1=neliöjuuri, 2=log, 3=exp ja 4=tan, L=lopetus): "; cin >> operation;

        if (operation == 'L')
            break;

        cout << "Syötä luku: "; cin >> value;
        
        switch (operation) {
            case '1':
                cout << result("neliöjuuri", sqrt(value));
                break;
            case '2':
                cout << result("luonnollinen logaritmi", log(value));
                break;
            case '3':
                cout << result("eksponenttifunktio", exp(value));
                break;
            case '4':
                cout << result("tangentti", tan(value));
                break;
        }
    }

    return 0;
}
