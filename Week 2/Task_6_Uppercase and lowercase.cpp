#include<iostream>

int main(){
	//Part 1
	
	char symbol = ' ';
	std::cin >> symbol;
	if (symbol >= 'a' && symbol <= 'z') std::cout << "lowercase letter\n";
	else if (symbol >= 'A' && symbol <= 'Z') std::cout << "uppercase letter\n";
	else std::cout << "The character is not a letter\n";
	
	//Part 2
	
	if (symbol >= 'a' && symbol <= 'z') symbol &= '_';
	else if (symbol >= 'A' && symbol <= 'Z') symbol |= ' ';
	std::cout << symbol;
	return 0;
}
