#include <iostream>

int sumOfDigits(const int &num);

int main() {
    std::cout << sumOfDigits(123) << '\n';
    return 0;
}

int sumOfDigits(const int &num) {
    if (num == 0) return num;
    return num % 10 + sumOfDigits(num / 10);
}
