#include<iostream>

int main(){
	double x = 0.0;
	std::cin >> x;
	double volume = x*x*x + x*(x/2.0)*(2*x) + 2*(x*(x/2.0)*(x*(3/4.0)));
	std::cout << volume;
	return 0;
}
