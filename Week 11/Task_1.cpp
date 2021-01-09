#include <iostream>

int restrlen(const char *);
int countLetters(const char*);

int main() {
    std::cout << restrlen("Pesko") << std::endl;
    std::cout << countLetters("Happy New Year!") << '\n';
    return 0;
}

int restrlen(const char *str) {
    if (*str == '\0') return 0;
    return 1 + restrlen(str + 1);
}

int countLetters(const char *str) {
    if (*str == '\0') return 0;
    if (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z') {
        return 1 + countLetters(str + 1);
    }
    return countLetters(str + 1);
}
