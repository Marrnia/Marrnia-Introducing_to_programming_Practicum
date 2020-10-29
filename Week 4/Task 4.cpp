#include<iostream>

bool isPrime(int num){
	int count = 0;
	for (int i = 2; i < num; i++){
		if (num % i == 0) count++;
	}
	return count == 0 ? 1 : 0;
}

int main(){
	int num = 0;
	std::cin >> num;
	if (isPrime(num)) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}
