#include<iostream>

int main(){
	double x = 0.0, y = 0.0;
	std::cin >> x >> y;
	if (x > 0 && y > 0) std::cout << "First";
	else if ( x < 0 && y > 0) std::cout << "Second";
	else if ( x < 0 && y < 0) std::cout << "Third";
	else if ( x > 0 && y < 0) std::cout << "Fourth";
	else if ( x == 0 && y == 0) std::cout << "Center";
	else if ( x == 0 && y != 0) std::cout << "On axis";
	else if ( x != 0 && y == 0) std::cout << "On ordinate";
	return 0;
}
