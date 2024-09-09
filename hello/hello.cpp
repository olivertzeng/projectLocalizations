#include <clocale>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
	std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
	std::cout << "Za Warudo! Tokio tamare!\n";
	std::cout
		<< "The World! Time stops now!\n"; // NOTE: This determines if `make`
										   // will update the binary
	return 0;
}
