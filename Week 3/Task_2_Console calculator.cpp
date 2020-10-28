#include<iostream>

int main(){
	double a = 0.0, b = 0.0;
	char symbol = ' ';
	std::cin >> a >> symbol >> b;
	switch(symbol){
		case '+': std::cout << a << " " << symbol << " " << b << " = " << a + b;break;
		case '-': std::cout << a << " " << symbol << " " << b << " = " << a - b;break;
		case '*': std::cout << a << " " << symbol << " " << b << " = " << a * b;break;
		case '/': 
			switch((int)b){
				case 0: std::cout << "???";break;
				default: std::cout << a << " " << symbol << " " << b << " = " << a / b;
				}break;
		default: std::cout << "Invalid symbol";
	}
	return 0;
}
