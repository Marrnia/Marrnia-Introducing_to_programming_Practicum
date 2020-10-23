#include<iostream>

int main(){
	double degree = 0.0;
	std::cin >> degree;
	double Fahrenheit = degree * ((double)9/5) + 32;
	double Celsius = (degree - 32) * ((double)5/9);
	std::cout << "From C to F -> " << Fahrenheit << " F, From F to C -> " << Celsius << " C.";
	return 0;
}
