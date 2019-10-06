#include <iostream>

int main() {
    double length;

    std::cout << "Hypyn pituus: "; std::cin >> length;

    const int judgesAmount = 5;
    double scores[judgesAmount] = {};

    for (int i = 0; i < judgesAmount;  ++i) {
        std::cout << "Tuomarin " << i + 1 << " pisteet: "; std::cin >> scores[i];
    }

    double result = length * 0.9;

    for (int i = 0; i < judgesAmount; ++i)
        result += scores[i];

    std::cout << "Hypyn pisteet: " << result << "\n";

    return 0;
}
