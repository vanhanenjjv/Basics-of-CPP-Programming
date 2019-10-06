#include <iostream>

using std::cout;
using std::cin;

int main() {
    double length;

    cout << "Hypyn pituus: "; cin >> length;

    const int judgesAmount = 5;
    double scores[judgesAmount] = {};

    for (int i = 0; i < judgesAmount;  ++i) {
        cout << "Tuomarin " << i + 1 << " pisteet: "; cin >> scores[i];
    }

    int min = -1, max = -1;

    for (int i = 1; i < judgesAmount; ++i) {
        if (scores[i] < scores[i - 1])
            min = i;
        if (scores[i] > scores[i - 1])
            max = i;
    }

    double result = length * 0.9;

    for (int i = 0; i < judgesAmount; ++i)
        if (i != min && i != max)
            result += scores[i];

    cout << "Hypyn pisteet: " << result << "\n";

    return 0;
}
