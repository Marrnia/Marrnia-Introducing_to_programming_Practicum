#include <iostream>

const size_t CAPACITY = 50;

char *initializeArray(char *);
char *deleteArray(char *);

void removeSpaces(char *);
size_t getSize(const char *);
void removeElement(char *array, size_t &,const size_t &);

void readText(char *);
void printText(const char *);

int main() {
    char *command;
    command = initializeArray(command);
    readText(command);
    removeSpaces(command);
    printText(command);
    command = deleteArray(command);
}

char *initializeArray(char *array) {
    try {
        array = new char[CAPACITY];
    }
    catch(std::exception &e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return array;
}

char *deleteArray(char *array) {
    delete[] array;
    array = nullptr;
    return array;
}

void removeSpaces(char *command) {
    size_t size = getSize(command);
    size_t index = 0;
    while (index < size) {
        if (command[0] == ' ') {
            removeElement(command,size,0);
        }
        else if (command[index] == ' ' && command[index+1] == ' ') {
            removeElement(command,size,index);
        }
        else index++;
    }
}

size_t getSize(const char *array) {
    size_t size = 0;
    while (array[size] != '\0') {
        size++;
    }
    return size;
}

void removeElement(char *array, size_t &size,const size_t &index) {
    for (size_t i = index; i < size; i++) {
        array[i] = array[i+1];
    }
    size--;
}

void readText(char *text) {
    std::cin.getline(text,CAPACITY);
    if (!std::cin) throw std::invalid_argument("Invalid command!");
}

void printText(const char *text) {
    std::cout << text << std::endl;
}
