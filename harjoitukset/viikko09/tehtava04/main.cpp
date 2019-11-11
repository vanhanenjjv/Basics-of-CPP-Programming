#include <iostream>

bool isPrimeNumber(int number);

int main() {
    for (int i = 0; i <= 1000; ++i)
        if (isPrimeNumber(i))
            printf("%i\n", i);

    return 0;
}

bool isPrimeNumber(int n) {
    return n <= 1 ? false
        : [=]() -> bool {
            for (int i = 2; i < n; ++i)
                if (n % i == 0)
                    return false;

            return true;
        }();
}
