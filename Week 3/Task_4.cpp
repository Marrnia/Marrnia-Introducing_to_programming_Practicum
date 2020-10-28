#include<iostream>

int main() {
	int hour = 0, minutes = 0;
	std::cin >> hour >> minutes;
	if (minutes >= 0 && minutes <= 59 && hour >= 0 && hour <= 23) {
		minutes+=30;
		if (minutes >= 60) {
			hour++;
			minutes -= 60;
			if (hour >= 24) {
				hour -= 24;
			}
		}
		std::cout << hour << ":" << minutes;
	} else {
		std::cout << "Invalid input";
	}
	return 0;
}
