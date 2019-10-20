#include <iostream>

int main() {
	int n;

	std::cout << "Tulostusten määrä: "; std::cin >> n;

	std::cout << "\n";

	for (int i = 0; i < n; ++i)
		std::cout << "Hello world!\n";

	std::cout << "\n";

	for (int i = 0; i < 15; ++i)
		std::cout << i + 1 << " ";

	std::cout << "\n";

	return 0;
}
