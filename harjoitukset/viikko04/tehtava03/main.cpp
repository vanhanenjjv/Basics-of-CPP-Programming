#include <iostream>

double ftoc(double f) {
	return (f - 32) / 1.8;
}

double ctof(double c) {
	return (c * 1.8) + 32;
}

int main() {
	double l;
	std::string y;

	std::cout << "Syötä lämpötila: "; std::cin >> l;
	std::cout << "Syötä yksikkö (F = Fahrenheit, C = Celsius): "; std::cin >> y;

	if (y.compare("F") == 0)
		std::cout << l << " Fahrenheit = " << ftoc(l) << " Celcius\n";
	else if (y.compare("C") == 0)
		std::cout << l << " Celsius = " << ctof(l) << " Fahrenheit\n";

    return 0;
}
