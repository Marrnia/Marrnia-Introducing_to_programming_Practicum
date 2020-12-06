#include <iostream>

// Declaration of function
template <typename T> bool isPrime(T);

bool isPaired(unsigned, unsigned);

template <typename T> T abs(T);

// Main function
int main() {
    int num_1 = 0, num_2 = 0;
    try {
        std::cin >> num_1 >> num_2;
        if (num_1 < 0 || num_2 < 0)
            throw "Not a positve number.";
        std::cout << std::boolalpha << isPaired(num_1, num_2) << std::endl;
    } catch (const char *msg) {
        std::cerr << msg << std::endl;
    }
    return 0;
}

// Definition of functions
template <typename T> bool isPrime(T num) {
    num = abs(num);
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool isPaired(unsigned a, unsigned b) {
    return (a + 2 == b) && isPrime(a) && isPrime(b) ? true : false;
}

template <typename T> T abs(T a) {
    return a < 0 ? -a : a;
}
