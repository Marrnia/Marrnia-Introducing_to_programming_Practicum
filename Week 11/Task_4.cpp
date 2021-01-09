#include <iostream>
#define ULL unsigned long long

ULL factorial(const ULL &);

int main() {
    std::cout << factorial(5) << '\n';
    return 0;
}

ULL factorial(const ULL &num) {
    if (num == 0) return 0;
    if (num == 1) return 1;
    return num * factorial(num - 1);
}
