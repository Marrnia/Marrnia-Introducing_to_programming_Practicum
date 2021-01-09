#include <iostream>

void truncate(const char* , int);

int main() {
    truncate("The Dark Knight Rises", 10);
    std::cout << '\n';
    return 0;
}

void truncate(const char* str, int n) {
    if (*str == '\0') return;
    static unsigned countSize = 0;
    countSize++;
    std::cout << *str;
    if (countSize == n) {
        return;
    }
    truncate(str+1,n);
}
