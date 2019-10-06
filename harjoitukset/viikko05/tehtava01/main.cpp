#include <iostream>

int main() {
    for (int i = 5; i >= -5; --i)
        std::cout << i << " ";

    std::cout << "\n";        

    for (int i = 1; i <= 50; ++i) {
        if (i % 2 != 0)
            continue;

        std::cout << i << " ";
    }

    std::cout << "\n";

    return 0;
}