#include <iostream>
#include <fstream>
#include <iomanip>


int main() {
	
	std::ofstream file("set.txt");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			file << "line number: " << j << i << std::endl;;
		}
		file << '\n';
	}

	int n;
	std::cout << "Enter number of line: ";
	std::cin >> n;

	std::ifstream ffile("set.txt");




	system("pause");
	return EXIT_SUCCESS;
}