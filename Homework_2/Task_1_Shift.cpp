#include <iostream>

void readSize(unsigned &);
void shift(const unsigned &);
void removeFirstElement(unsigned *, const unsigned &);

int main() {
    unsigned m = 0;
    readSize(m);
    shift(m);
    return 0;
}

void readSize(unsigned &size) {
    std::cin >> size;
    if(!std::cin) throw std::invalid_argument("Invalid number!");
}

void shift(const unsigned &m) {
    const unsigned sizeArray = 9;
    unsigned digits[sizeArray] = {1,2,3,4,5,6,7,8,9};
    for (unsigned i = 0; i < m; i++) {
        for (unsigned index = 0; index < sizeArray; index++) {
            std::cout << digits[index] << ' ';
        }
        std::cout << '\n';
        if (i == m-1) break;
        unsigned firstElement = digits[0];
        removeFirstElement(digits,sizeArray);
        digits[sizeArray-1] = firstElement;
    }
}

void removeFirstElement(unsigned *array,const unsigned &size) {
    for (unsigned i = 0; i < size; i++) {
        array[i] = array[i+1];
    }
}
