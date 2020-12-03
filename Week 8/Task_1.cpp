#include <iostream>

template <typename T>
T abs(T);

double pow(double , int);

template <typename T>
T min(T,T);

template <typename T>
T max(T, T);

template <typename T>
T minOfThree(T,T,T);

template <typename T>
T maxOfThree(T,T,T);

bool isUpper(char);
bool isLower(char);
bool isLetter(char);
bool isDigit(char);

int main () {
    double num = 0;
    int num_2 = 0;
    std::cin >> num_1 >> num_2;
    std::cout << pow(num_1,num_2) << '\n';
    return 0;
}

template <typename T>
T abs(T a) {
    return a < 0 ? -a : a;
}

double pow(double x, int y) {
    double result = 1.0;
    int c = abs(y);
    for (int i = 0; i < c; i++){
        result *= x;
    }
    return y < 0 ? 1/result : result;
}

template <typename T>
T min(T a, T b) {
    return a > b ? b : a;
}

template <typename T>
T max(T a, T b) {
    return a < b ? b : a;
}

template <typename T>
T minOfThree(T a, T b, T c) {
    return min(min(a,b),c);
}

template <typename T>
T maxOfThree(T a, T b, T c) {
    return max(max(a,b),c);
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z'
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';;
}

bool isLetter(char c) {
    return isUpper(c) || isLower(c);
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}
