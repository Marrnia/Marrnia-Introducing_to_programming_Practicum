#include<iostream>

int main() {
	int y = 0;
	double x = 0.0;
	std::cin >> x >> y;

	if (x == 0 && y == 0) {
		std::cout << "Unknown";
	} else {
		double answer = 1.0;
		if (y < 0) {
			for (int i = y; i!=0; i++) {
				answer *= 1/x;
			}
		} else {
			for (int i = 0; i < y; i++) {
				answer *= x;
			}
		}
		std::cout << answer;
	}
	return 0;
}
