#include <iostream>

void readSize(size_t &);
void readArray(int *, const size_t &);
void leaderElement(int *, size_t &);
void printArray(const int *, const size_t &);
void pop_out_element(int *, size_t &, const size_t &);

int main() {
    size_t size = 0;
    try {
        readSize(size);
        int *array = new (std::nothrow) int[size];
        readArray(array, size);
        leaderElement(array, size);
        printArray(array, size);
        delete[] array;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return 0;
}

void readSize(size_t &size) {
    std::cin >> size;
    if (!std::cin)
        throw std::invalid_argument("Invalid argument!");
}

void readArray(int *array, const size_t &size) {
    for (size_t i = 0; i < size; i++) {
        std::cin >> array[i];
        if (!std::cin)
            throw std::invalid_argument("Invalid argument!");
    }
}

void pop_out_element(int *array, size_t &size, const size_t &index) {
    for (size_t i = index; i < size; i++) {
        array[i] = array[i + 1];
    }
    size--;
}

void leaderElement(int *array, size_t &size) {
    size_t index = 0;
    bool flag;
    while (index < size - 1) {
        flag = true;
        for (size_t j = index + 1; j < size; j++) {
            if (array[index] <= array[j]) {
                pop_out_element(array, size, index);
                flag = false;
                break;
            }
        }
        if (flag)
            index++;
    }
}

void printArray(const int *array, const size_t &size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}
