#include <iostream>

bool areEqual(char* str1, char* str2);
void toLowercase(char &);

int main() {
    char str1[100];
    std::cin.getline(str1,100);
    char str2[100];
    std::cin.getline(str2,100);
    areEqual(str1,str2) ? std::cout << "true" : std::cout << "false";
    std::cout << '\n';
    return 0;
}

bool areEqual(char* str1, char* str2) {
    if (*str1 == '\0' && *str2 == '\0') return true;
    if (*str1 >= 'A' && *str1 <= 'Z') toLowercase(*str1);
    if (*str2 >= 'A' && *str2 <= 'Z') toLowercase(*str2);
    if (*str1 != *str2) return false;
    return areEqual(str1+1,str2+1);
}

void toLowercase(char &letter) {
    letter += ('a' - 'A');
}
