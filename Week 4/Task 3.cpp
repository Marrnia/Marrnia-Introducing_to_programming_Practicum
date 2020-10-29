#include<iostream>

bool isThreeDigit(int num){
	int count = 0;
	while (num){
		num /= 10;
		count++;
	}
	return count==3 ? true : false;
}

int main(){
	int num = 0;
	std::cin >> num;
	if (isThreeDigit(num)){
		int production = 1;
		int digit = 0;
		while (num){
			digit = num % 10;
			num /= 10;
			production *= digit;
		}
		production >= 100 || production <= -100 ? std::cout << "YES" : std::cout << "NO";
	}
	else std::cout << "Invalid input";
	return 0;
}
