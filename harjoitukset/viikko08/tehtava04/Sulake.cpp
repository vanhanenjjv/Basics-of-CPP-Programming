#include <iostream>
#include "Sulake.hpp"

using std::cout;
using std::string;

void sulake(float p) {
    float i = p / 220.0;

    cout << (i > 20 ? "Laitteen taakse tarvitaan useampi sulake"
        : string()
            .append("Sulake on ")
            .append(
                (i <= 10 ? "10"
                    : i <= 16 ? "16" 
                        : "20"))
            .append("A"))
         << "\n";
}
