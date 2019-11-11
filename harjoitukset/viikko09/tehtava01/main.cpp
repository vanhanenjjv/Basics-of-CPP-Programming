#include <iostream>
#include <array>

using std::array;
using std::string;

int main() {
    array<int, 10> results;

    for (int i = 0; i < results.size(); ++i) {
        printf("Syötä %i. tenttitulos: ", i + 1);
        scanf("%i", &results[i]);
    }

    printf("\n");

    auto average = [=]() {
        int avg = 0;
        for (int res : results) 
            avg += res;
        avg /= results.size();
        return avg;
    };

    for (int i = 0; i < results.size(); ++i)
        printf("%24i\n", results[i]);

    printf("\n%20s%4i\n", "Keskiarvo:", average());

    return 0;
}
