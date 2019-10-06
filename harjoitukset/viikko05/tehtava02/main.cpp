#include <iostream>

int main() {
    int result = 0;

    int input;
    do {
        std::cout << "Syötä luku: "; std::cin >> input;
        result += input;
    } while (input != 0);

    std::cout << "Lukujen summa: " << result << "\n";
}
