#include <iostream>

const size_t CAPACITY = 100;

void readCharArray(char *);
bool checkSubstr(const char *, const char *);
bool recursionWordCheck(const char *, const char *);

int main() {
    char *str = new char[CAPACITY];
    char *substr = new char[CAPACITY];
    readCharArray(str);
    readCharArray(substr);
    recursionWordCheck(str, substr) ? std::cout << "YES" : std::cout << "NO";
    std::cout << std::endl;
    delete[] str;
    delete[] substr;
    return 0;
}

void readCharArray(char *array) {
    std::cin.getline(array, CAPACITY);
    if (!std::cin)
        throw std::invalid_argument("Invalid argument!");
}

bool checkSubstr(const char *str, const char *substr) {
    if (*substr == '\0')
        return false;
    if (*str == *substr)
        return true;
    return checkSubstr(str, substr + 1);
}

bool recursionWordCheck(const char *str, const char *substr) {
    if (*str == '\0')
        return true;
    if (checkSubstr(str, substr))
        return recursionWordCheck(str + 1, substr);
    return false;
}
