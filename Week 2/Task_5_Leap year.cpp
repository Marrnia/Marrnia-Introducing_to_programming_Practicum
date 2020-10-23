#include<iostream>

int main(){
	int year = 0;
	std::cin >> year;
	if (year%4==0){
		if (year%100==0 && year%400!=0) std::cout << "The year is not leap";
		else std::cout << "The year is leap";
	}
	else std::cout << "The year is not leap"; 
	return 0;
}
