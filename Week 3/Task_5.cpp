#include <iostream>

int main() {
	int day = 0, month = 0, year = 0;
	int pastDays = 0;
	std::cin >> day >> month >> year;
	bool isLeapYear = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
	if (day >= 0 && day <= 31) {
		pastDays += day;
		switch (month) {
			case 12: pastDays += 30;
			case 11: pastDays += 31;
			case 10: pastDays += 30;
			case 9: pastDays += 31;
			case 8: pastDays += 31;
			case 7: pastDays += 30;
			case 6: pastDays += 31;
			case 5: pastDays += 30;
			case 4: pastDays += 31;
			case 3:
				if (isLeapYear) pastDays += 29;
				else pastDays += 28;
			case 2: pastDays += 31;
			case 1: break;
			default: std::cout << "Invalid input" << '\n';
		}
		std::cout << pastDays << '\n';
	} else std::cout << "Invalid input";
	return 0;
}
