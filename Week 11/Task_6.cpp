#include <iostream>

void evaluate(const char*);
void evaluate(const char *,const unsigned &,const unsigned &,const unsigned &);

int main() {
    evaluate("3 Doors Down.");
    return 0;
}

void evaluate(const char *str) {
    static unsigned u = 0;
    static unsigned l = 0;
    static unsigned d = 0;
    if (*str == '\0') {
        std::cout << "Count lowercase letters: " << l << '\n';
        std::cout << "Count uppercase letters: " << u << '\n';
        std::cout << "Count digits: " << d << '\n';
        return;
    }
    if (*str >= 'a' && *str <= 'z') {
        l++;
        evaluate(str + 1);
    }
    else if (*str >= 'A' && *str <= 'Z') {
        u++;
        evaluate(str + 1);
    }
    else if (*str >= '0' && *str <= '9') {
        d++;
        evaluate(str + 1);
    }
    else evaluate(str + 1);
}

/*void evaluate(const char *str) {
    evaluate(str,0,0,0);
}

void evaluate(const char *str,const unsigned &uppercaseCount,const unsigned &lowercaseCount,const unsigned &digitCount) {
    if (*str == '\0') {
        std::cout << "Count lowercase letters: " << lowercaseCount << '\n';
        std::cout << "Count uppercase letters: " << uppercaseCount << '\n';
        std::cout << "Count digits: " << digitCount << '\n';
        return;
    }
    if (*str >= 'a' && *str <= 'z') evaluate(str + 1, uppercaseCount, lowercaseCount+1, digitCount);
    else if (*str >= 'A' && *str <= 'Z') evaluate(str + 1, uppercaseCount+1, lowercaseCount, digitCount);
    else if (*str >= '0' && *str <= '9') evaluate(str + 1, uppercaseCount, lowercaseCount, digitCount+1);
    else evaluate(str + 1, uppercaseCount, lowercaseCount, digitCount);
}*/
