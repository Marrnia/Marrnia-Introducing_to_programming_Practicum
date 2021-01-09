#include <iostream>
#define ULL unsigned long long

ULL fib(const int &);

int main() {
    std::cout << fib(100) << '\n';
    return 0;
}

ULL fib(const int &num) { // Time complexity - O(2^n); Space complexity - O(1)
    if (num == 1) return 1;
    if (num == 0) return 0;
    return fib(num-1) + fib(num-2);
}

// Fn = {[(√5 + 1)/2] ^ n} / √5
// Time complexity - O(1)
// Space complexity - O(1)
