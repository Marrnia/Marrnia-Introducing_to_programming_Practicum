#include<iostream>

int main(){
	int num = 0;
	std::cin >> num;
	if (num < 0) std::cout << "Invalid input";
	else{
		if (num==0) std::cout << 1; // base case
		else{
			int fact = 1;
			for (int i = 1; i <= num; i++){
				fact *= i;
			}
			std::cout << fact;
		}
	}
	return 0;
}
