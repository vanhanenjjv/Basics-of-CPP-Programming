#include <iostream>
#include <tuple>

double v(double b) {
	// More works of art
	std::tuple<int, double, double> t[] = {
		std::make_tuple(17600, 8.00, 6.00),
		std::make_tuple(26400, 536.00, 17.25),
		std::make_tuple(43500, 3485.75, 21.25),
		std::make_tuple(76100, 10413.25, 31.25)
	};

	double v = b * (19.75 * 0.01);

	for (int i = (sizeof(t) / sizeof(t[0])) - 1; i >= 0; --i) {
		int r = std::get<0>(t[i]);

		if (b < r)
			continue;

		double e = std::get<1>(t[i]);
		double p = std::get<2>(t[i]);

		v += ((b - r) * (p * 0.01)) + e;

		break;
	}

	return v;
}

int main() {
	double b;

	std::cout << "Syötä bruttotulosi: "; std::cin >> b;
	std::cout << "Maksat veroja yhteensä " << v(b) << " euroa.\n";
	
	return 0;
}
