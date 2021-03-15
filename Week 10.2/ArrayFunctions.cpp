#include <iostream>

template <typename T>
T *getArray(T *array,const size_t &capacity) {
    try {
        array = new T[capacity];
        std::cout << sizeof(array)/(sizeof(array[0])) << '\n';
    }
    catch(std::exception &e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return array;
}

template <typename T>
T *deallocateArray(T *array) {
    delete[] array;
    array = nullptr;
    return array;
}

char *readText(char *text,const size_t max_size) {
    std::cin.getline(text,max_size);
    if (!std::cin) throw std::invalid_argument("Invalid argument!");
    return text;
}

char *formatText(char *text) {
    size_t sizeText = getSize(text);
    removeSpaces(text, sizeText);
    toLowerCase(text, sizeText);
    return text;
}

size_t getSize(const char *text) {
    size_t size = 0;
    while (text[size] != '\0') {
        size++;
    }
    return size;
}

void removeSpaces(char *text, size_t &size) {
    size_t index = 0;
    while (index < size) {
        if (text[0] == ' ') {
            size_t firstIndex = 0;
            removeElement(text,size,firstIndex);
        }
        else if (text[index] == ' ' && text[index+1] == ' ') {
            removeElement(text,size,index);
        }
        else index++;
    }
    if (text[size-1] == ' ') {
        size_t lastIndex = size - 1;
        removeElement(text,size,lastIndex);
    }
}

template <typename T>
void removeElement(T *const array, size_t &size, size_t &removeIndex) {
    if (removeIndex >= size) throw std::invalid_argument("Removing index is out of range of the array!");
    for (size_t i = removeIndex; i < size; i++) {
        array[i] = array[i+1];
    }
    size--;
}

void toLowerCase(char *text,const size_t &size) {
    for (size_t index = 0; index < size; index++) {
        if (text[index] >= 'A' && text[index] <= 'Z') {
            text[index] += ('a' - 'A');
        }
    }
}

void getWord(const char *text, char *word, const unsigned &countWords) {
    static int words = 0;
    words++;
    static size_t indexText = 0;
    size_t indexWord = 0;
    std::cout << "text - " << text << '\n';
    std::cout << "indexText - " << indexText << '\n';
    std::cout << "word - " << word << '\n';
    while (text[indexWord] != ' ') {
        word[indexWord++] = text[indexText++];
    }
    indexText++;
    if (words == countWords) {
        indexText = 0;
        words = 0;
    }
}

void stringToInt(char *string,const size_t &countDigits, int &number) {
    for (size_t index = 0; index < countDigits; index++) {
        number += string[index] - '0';
        number *= 10;
    }
    number /= 10;
}

void stringToInt(char *string,const size_t &countDigits, size_t &number) {
    for (size_t index = 0; index < countDigits; index++) {
        number += string[index] - '0';
        number *= 10;
    }
    number /= 10;
}

bool isValidNumber(char *number, const size_t &size) {
    for (size_t index = 0; index < size; index++) {
        if (number[index] < '0' || number[index] > '9') {
            return false;
        }
    }
    return true;
}

void insertElement(int *array, size_t &size, const int &element,const size_t &insertIndex) {
    for (size_t i = size; i > insertIndex; i--) {
        array[i] = array[i-1];
    }
    array[insertIndex] = element;
    size++;
}

void printArray(const int *const array, const size_t &size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}

bool compareStrings(const char *string, const char *text) {
    size_t sizeString = getSize(string);
    size_t sizeText = getSize(text);
    if (sizeString == 0) return false;
    if (sizeString != sizeText) return false;
    for (size_t i = 0; i < sizeString; i++) {
        if (string[i] != text[i]) {
            return false;
        }
    }
    return true;
}
