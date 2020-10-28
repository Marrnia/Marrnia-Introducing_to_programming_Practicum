#include <iostream>

bool isYearLeap(int y){
	if (y % 4 == 0){
		if (y % 100 == 0){
			if (y % 400 == 0){
				return true;
			}
			return false;
		}
		return true;
	}
	return false;
}

int main() {
	int day = 0, month = 0, year = 0;
	int count = 0;
	int monthDays[12] = {31, 28, 31, 30, 31, 30, 
       31, 31, 30, 31, 30, 31};
	std::cin >> day >> month >> year;
	if (day >= 0 && day <= 31 && month >= 0 && month <= 12) {
		count += day;
		month--;
		if (!isYearLeap(year)){
			while (month){
				count += monthDays[--month];
			}
		}
		else {
			monthDays[1]++;
			while (month){
				count += monthDays[--month];
			}
		}
		std::cout << count;
	} else std::cout << "Invalid input";
	return 0;
}
