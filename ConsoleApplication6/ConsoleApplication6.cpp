#include <iostream>
#include <string>
#include <Windows.h>
//int banana = 125;
//int pearl = 352;
//int chocolate = 546;
//int chicen = 239;
//int tomatoes = 20;
//int kefir = 38;
//int oranges = 45;
//int garlic = 60;
//int green_bean = 328;
//int flour = 340;
//int eggs = 65;
//
//
//void eat() {
//	std::cout << "1. банан: "  << std::endl;
//	std::cout << "2. перловкa: "  << std::endl;
//	std::cout << "3. шоколад: "  << std::endl;
//	std::cout << "4. курица: "  << std::endl;
//	std::cout << "5. помидоры:" << std::endl;
//	std::cout << "6. кефир:" << std::endl;
//	std::cout << "7. апельсины:" << std::endl;
//	std::cout << "8. чеснок:" << std::endl;
//	std::cout << "9. фасоль:" << std::endl;
//	std::cout << "10. мука:" << std::endl;
//	std::cout << "11. яйца:" << std::endl;
//}
//
//
//int main() {
//
//	//eat();
//
//	int sum;
//	int temp = 1;
//	
//	std::cin >> sum;
//	while (temp != 0) {
//
//		std::cin >> temp;
//		std::cout << "\n";
//		sum = sum + temp;
//		std::cout << sum;
//	}
//
//}
void name(){
std::cout << "1.камень\n";
std::cout << "2.ножницы\n";
std::cout << "3.бумага \n";
}



int main()
{ 
	setlocale(LC_ALL, "Russian");
	//SetConsoleCP(1251);
	name();
	srand(time(NULL));
	int user;

	int gr= 1 + rand() % 3;
	std::cin >> user;
	if (user == 1 && gr == 2 || user == 2 && gr == 3 || user == 3 && gr == 1)
	{
		std::cout << "Victory!!";
	}
	else if (user == gr) {
		std::cout << "Ничья";
	}
	else {
		std::cout << "Loose";
	}
}


