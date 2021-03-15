#include <iostream>

void pop_back(int *array, size_t &size, const size_t &capacity) {
    size--;
    resize(array,size,capacity);
}

void pop_front(int *array, size_t &size, const size_t &capacity) {
    size_t firstIndex = 0;
    removeElement(array,size,firstIndex);
    resize(array,size,capacity);
}

void push_back(int *array, size_t &size, const int &element, size_t &capacity) {
    if (capacity >= size) {
        capacity *= 2;
        resize(array,size,capacity);
    }
    array[size] = element;
    size++;
}

void push_front(int *array, size_t &size, const int &element, size_t &capacity) {
    if (capacity >= size) {
        capacity *= 2;
        resize(array,size,capacity);
    }
    size_t insertIndex = 0;
    insertElement(array,size,element,insertIndex);
}

void resize(int *array,const size_t &size, const size_t &capacity) {
    int *copyArray = new int[size];
    for (size_t i = 0; i < size; i++) {
        copyArray[i] = array[i];
    }
    delete[] array;
    array = new int[capacity];
    for (size_t i = 0; i < size; i++) {
        array[i] = copyArray[i];
    }
    delete[] copyArray;
}

void create(int *array, size_t &size, size_t &capacity) {
    if (size >= size) {
        capacity *= 2;
        resize(array,size,capacity);
    }
    for (size_t i = 0; i < size; i++) {
        array[i] = i+1;
    }
}

void showHelp() {
    std::cout << '\n';
    std::cout << "HELP" << '\n';
    std::cout << "ARRAY\t\t\tSHOWS ELEMENTS OF THE ARRAY" << '\n';
    std::cout << "ARRAY PUSH_BACK <number>" << '\n';
    std::cout << "ARRAY PUSH_FRONT <number>" << '\n';
    std::cout << "ARRAY POP_BACK" << '\n';
    std::cout << "ARRAY POP_FRONT" << '\n';
    std::cout << "CREATE <size>\t\t\tCREATES RANDOM INT ARRAY" << '\n';
    std::cout << "EXIT" << '\n';
    std::cout << '\n';
}
