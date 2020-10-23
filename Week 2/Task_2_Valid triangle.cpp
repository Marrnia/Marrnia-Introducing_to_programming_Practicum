#include<iostream>

int main(){
	double a=0.0,b=0.0,c=0.0;
	std::cin >> a >> b >> c;
	(a < b + c && b < a + c && c < a + b) ? std::cout << "YES, you can make a triangle out of this :)" : std::cout << "NO, you can't make a triangle out of this :(";
	return 0;
}
