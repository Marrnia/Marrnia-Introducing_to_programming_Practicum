#include <iostream>

const size_t CAPACITY = 100;

void readCharArray(char *);
size_t getSize(char *);
void setArray(char *, const size_t &);
void uppercasePromotion(char *, char *, const size_t &, const size_t &);
void toUppercase(char &);
void printCharArray(const char *,const size_t &);

int main() {
    char *string_1 = new char[CAPACITY];
    char *string_2 = new char[CAPACITY];
    readCharArray(string_1);
    size_t size_1 = getSize(string_1);
    setArray(string_1,size_1);
    readCharArray(string_2);
    size_t size_2 = getSize(string_2);
    setArray(string_2,size_2);
    uppercasePromotion(string_1,string_2,size_1,size_2);
    delete[] string_2;
    string_2 = nullptr;
    printCharArray(string_1,size_1);
    delete[] string_1;
    string_1 = nullptr;
    return 0;
}

void readCharArray(char *array) {
    std::cin.getline(array, CAPACITY);
    if (!std::cin)
        throw std::invalid_argument("Invalid argument!");
}

size_t getSize(char *array) {
    size_t n = 0;
    while (array[n] != '\0') {
        n++;
    }
    if (n == 0) throw std::invalid_argument("Empty string!");
    return n;
}

void setArray(char *array, const size_t &size) {
    bool flag = false;
    for (size_t i = 0; i < size; i++) {
        if (array[i] >= 'a' && array[i] <= 'z') {
            flag = true;
        }
    }
    if (!flag) {
        throw std::invalid_argument("Doesn't exist any lowercase letters!");
    }
}

void uppercasePromotion(char *str1, char *str2, const size_t &s1, const size_t &s2) {
    bool isCommonLetters = false;
    for (size_t indexStr1 = 0; indexStr1 < s1; indexStr1++) {
        for (size_t indexStr2 = 0; indexStr2 < s2; indexStr2++) {
            if (str1[indexStr1] == str2[indexStr2] && str1[indexStr1] >= 'a' && str1[indexStr1] <= 'z') {
                toUppercase(str1[indexStr1]);
            }
        }
    }
}

void toUppercase(char &letter) {
    letter -= ('a' - 'A');
}

void printCharArray(const char *array,const size_t &size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i];
    }
    std::cout << std::endl;
}
