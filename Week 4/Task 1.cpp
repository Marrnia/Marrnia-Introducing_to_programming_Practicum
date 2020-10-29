#include<iostream>

int main(){
	int sum = 0, num = 0;
	for (int i = 1; i <= 10; i++){
		std::cin >> num;
		sum += num;
	}
	std::cout << sum;
	return 0;
}
