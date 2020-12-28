#include <iostream>

void readSize(size_t &);
void readArray(int *, const size_t &);
void readElement(int &);
void push_front(int *, size_t &, const int &);
void printArray(const int *, const size_t &);

const size_t CAPACITY = 10;

int main() {
    size_t size = 0;
    int *array = new int[CAPACITY];
    int element = 0;
    readSize(size);
    readArray(array, size);
    readElement(element);
    push_front(array, size, element);
    printArray(array, size);
    delete[] array;
    return 0;
}

void readSize(size_t &size) {
    std::cout << "Enter size of the array: ";
    std::cin >> size;
    if (!std::cin)
        throw std::invalid_argument("Invalid argument!");
    if (size > CAPACITY)
        throw std::invalid_argument("Size is bigger than capacity!");
}

void readArray(int *array, const size_t &size) {
    std::cout << "Enter the array:" << '\n';
    for (size_t i = 0; i < size; i++) {
        std::cin >> array[i];
        if (!std::cin)
            throw std::invalid_argument("Invalid argument!");
    }
}

void readElement(int &element) {
    std::cout << "Push front element: ";
    std::cin >> element;
    if (!std::cin)
        throw std::invalid_argument("Invalid argument!");
}

void push_front(int *array, size_t &size, const int &element) {
    if (size == CAPACITY) {
        std::cout << "The size of the array is full!" << '\n';
        return;
    }
    for (size_t index = size; index ; index--) {
        array[index] = array[index-1];
    }
    array[0] = element;
    size++;
}

void printArray(const int *array, const size_t &size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}
