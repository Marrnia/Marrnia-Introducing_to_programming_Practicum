#include <iostream>

void swapcase(char *);

int main() {
    char str[] = "Yellow Submarine.";
    swapcase(str);
    std::cout << str << '\n';
    return 0;
}
void swapcase(char *str) {
    if (*str == '\0')return;
    if (*str >= 'a' && *str <= 'z') {
        *str -= ('a' - 'A');
        swapcase(str+1);
    }
    else if (*str >= 'A' && *str <= 'Z') {
        *str += ('a' - 'A');
        swapcase(str+1);
    }
    else swapcase(str+1);
}
