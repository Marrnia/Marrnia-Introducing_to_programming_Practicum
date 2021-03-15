#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::nothrow;

const int MAX_SIZE = 100;

size_t strlen(const char* text) {
    size_t len = 0;
    while (text[len])
        ++len;
    return len;
}

void compareStringsLexicographyRecursive(const char *changeble_str_1, const char *changeble_str_2, const char *str_1, const char *str_2) {
    if (*changeble_str_1 > * changeble_str_2) {
        cout << str_1 << endl;
        return;
    }
    if (*changeble_str_2 > *changeble_str_1) {
        cout << str_2 << endl;
        return;
    }
    if (!*changeble_str_1) {
        cout << str_1 << endl;
        return;
    }
    if (!*changeble_str_2) {
        cout << str_2 << endl;
        return;
    }
    return compareStringsLexicographyRecursive(changeble_str_1 + 1, changeble_str_2 + 2, str_1, str_2);
}

void compareStringsLexicography(const char *str_1, const char *str_2) {
    compareStringsLexicographyRecursive(str_1,str_2,str_1,str_2);
    /*if (*str_1 < *str_2) {
        cout << str_1 << endl;
        return;
    }
    if (*str_1 > *str_2) {
        cout << str_2 << endl;
        return;
    }
    return compareStringsLexicography(str_1 + 1, str_2 + 1);*/
}


int main() {
    const char *str = "chill";
    const char *substr = "chilldren";
    compareStringsLexicography(str,substr);
    return 0;
}
