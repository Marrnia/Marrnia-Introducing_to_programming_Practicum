#include<iostream>

int main(){
	double num = 0.0;
	std::cin >> num;
	if (num < 1) std::cout << "Invalid input";
	else 
	while (num != 0.5){
		num -= 0.5;
		std::cout << num << " ";
	}
	return 0;
}
