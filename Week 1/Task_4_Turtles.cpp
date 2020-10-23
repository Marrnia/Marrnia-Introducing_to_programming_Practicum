#include<iostream>
#include<iomanip>

int main(){
	int turtlesBuy = 0, restBuy = 0;
	std::cin >> turtlesBuy >> restBuy;
	std::cout << std::setprecision(2) << std::fixed << (turtlesBuy*2.50 + restBuy*4.00) << " lv.";
	return 0;
}
