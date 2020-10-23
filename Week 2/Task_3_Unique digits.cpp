#include<iostream>

int main(){
	int num = 0;
	std::cin >> num;
	bool flag[10] = {0};
	if (num > 999 && num <= 9999){
		while(num){
			int digit = num % 10;
			num /= 10;
			if ( flag[digit] == true){
				std::cout << "NO, not all numbers are different!";
				return 0;
			}
			flag[digit] = true;
		}
		std::cout << "YES, all the numbers are different!";
	}
	else std::cout << "NO";
	return 0;
}
