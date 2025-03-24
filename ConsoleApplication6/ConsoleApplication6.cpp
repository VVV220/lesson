#include <iostream>
#include <string>

int banana = 125;
int pearl = 352;
int chocolate = 546;
int chicen = 239;



void eat() {
	std::cout << "1. банан: " << banana << std::endl;
	std::cout << "2. perlovka: " << pearl << std::endl;
	std::cout << "3. chocolate: " << chocolate << std::endl;
	std::cout << "4. chicen: " << chicen << std::endl;

}


int main() {
	setlocale(LC_ALL, "Russian");

	eat();
	int temp;
	
	std::cin >> temp;
	if (temp == 1) {
		std::cout << "banana: " << banana << std::endl;
	}
	if (temp == 2) {
		std::cout << "2. perlovka: " << pearl << std::endl;

	}
	if (temp == 3) {
		std::cout << "3. chocolate: " << chocolate << std::endl;
	}
	if (temp == 4) {
		std::cout << "4. chicen: " << chicen << std::endl;
	}
}

