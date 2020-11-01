#include<iostream>

int main() {
	int num = 0;
	std::cin >> num;
	unsigned long long int fib[2] = {0,1};
	int count = 2;
	if (num < 0) std::cout << "Invalid input";
	else if (num == 0) std::cout << fib[0];
	else if (num == 1) std::cout << fib[1];
	else {
		std::cout << fib[0] << " ";
		while (count <= num) {
			unsigned long long int temp = fib[0] + fib[1];
			std::cout << temp << " ";
			fib[1] = fib[0];
			fib[0] = temp;
			count++;
		}
	}

	return 0;
}
