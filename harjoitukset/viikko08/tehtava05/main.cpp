#include <iostream>
#include <list>
#include <time.h>
#include <algorithm>

using std::cout;
using std::list;
using std::find;

int random(int min, int max) {
    // Source: https://stackoverflow.com/questions/12657962/how-do-i-generate-a-random-number-between-two-variables-that-i-have-stored
    // Biased towards the lower end
    return rand() % (max - min + 1) + min;
}

int main() {
    list<int> numbers;

    srand(time(NULL));

    for (int i = 0; i < 7; ++i) {
        int num;

        do num = random(1, 40);
        while (find(numbers.begin(), numbers.end(), num) != numbers.end());
        numbers.push_back(num);

        cout << num << "\t";
    }

    cout << "\n";

    return 0;
}
