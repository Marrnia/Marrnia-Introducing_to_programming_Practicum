#include <iostream>

bool containsDigitIn(const int &,const int &);

int main() {
    containsDigitIn(1234,3) ? std::cout << "TRUE" : std::cout << "FALSE";
    std::cout << '\n';
    return 0;

}

bool containsDigitIn(const int &num,const int &k) {
    if (num == 0) return false;
    if (num % 10 == k) return true;
    return containsDigitIn(num/10,k);
}
