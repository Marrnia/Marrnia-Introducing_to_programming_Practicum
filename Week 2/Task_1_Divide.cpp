#include<iostream>

int main(){
	int num = 0;
	std::cin >> num;
	if (num % 2==0) std::cout << "YES";
	else std::cout << "NO";
	
	std::cout << "\nIs the num is divided by 2,3 and 5?\n";
	(num%2==0 && num%3==0 && num%5==0)?std::cout<<"YES":std::cout <<"NO";
	return 0;
}
