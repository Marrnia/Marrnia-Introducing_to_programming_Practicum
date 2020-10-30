#include<iostream>

int main() {
	int num = 0;
	std::cin >> num;
	if (num >= 0)
		for (int row = 0; row < num; row++) {
			for (int col = 0; col < num; col++) {
				if (row == 0 || col == 0 || col == num-1 || row == num - 1) std::cout << "*";
				else if (row == col || row < col) std::cout << " ";
				else std::cout << "*";
			}
			std::cout << std::endl;
		}
	else std::cout << "Invalid input";
	return 0;
}
