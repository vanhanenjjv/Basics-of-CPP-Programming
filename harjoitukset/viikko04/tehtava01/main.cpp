#include <iostream>

std::string bmi(double i) {
    // Work of art
    return i <= 20.7 ?
        "alipaino" : i <= 26.4 ?
            "normaali" : i <= 27.8 ?
                "lievää ylipainoa" : i <= 31.1 ?
                    "ylipainoa" : "paljon ylipainoa";
}

int main() {
    double k, m;

    std::cout << "Syötä paino (kiloina): "; std::cin >> k;
    std::cout << "Syötä pituus (metreinä): "; std::cin >> m;
    
    double w = k / (m * m);

    std::cout << "Painoindeksisi on " << w << " (" << bmi(w) << ").\n";

    return 0;
}
