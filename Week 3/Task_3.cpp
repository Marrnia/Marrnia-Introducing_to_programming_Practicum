#include<iostream>
#include<cmath>

int main() {
	double a = 0.0, b = 0.0, c = 0.0;
	std::cin >> a >> b >> c;
	double D = (b*b) - (4*a*c);
	if(a != 0) {
		if (D > 0) {
			double x1 = (-b+sqrt(D))/(2*a);
			double x2 = (-b-sqrt(D))/(2*a);
			std::cout << "x1 = " << x1 << std::endl;
			std::cout << "x2 = " << x2 << std::endl;
		} else if (D == 0) {
			std::cout << "Only one root has the equation!";
		} else std::cout << "No real roots in the equation!";
	} else std::cout << "Not a quadratic equation!";
	return 0;
}
