#include <iostream>
#define index(row,col) (row*size + col)

const size_t CAPACITY = 10;


int *initializeMatrix(int *);
int *deleteMatrix(int *);

void read2DArray(int *, const size_t &);
void print2DArray(const int *, const size_t &);
void transposeMatrix(int *, const size_t &);
void readSize(size_t &);

int main() {
    size_t size = 0;
    int *matrix;
    matrix = initializeMatrix(matrix);
    readSize(size);
    read2DArray(matrix, size);
    transposeMatrix(matrix, size);
    print2DArray(matrix, size);
    matrix = deleteMatrix(matrix);
    return 0;
}

int *initializeMatrix(int *matrix) {
    try {
    matrix = new int[CAPACITY*CAPACITY];
    }
    catch(std::exception &e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return matrix;
}

int *deleteMatrix(int *matrix) {
    delete[] matrix;
    matrix = nullptr;
    return matrix;
}

void readSize(size_t &size) {
    std::cout << "Enter size of the matrix: ";
    std::cin >> size;
    if (!std::cin)
        throw std::invalid_argument("Invalid argument!");
    if (size > CAPACITY)
        throw std::invalid_argument("Size is bigger than capacity!");
}

void transposeMatrix(int *array, const size_t &size) {
    int *copyArray;
    copyArray = initializeMatrix(copyArray);
    for (size_t row = 0; row < size; row++) {
        for (size_t col = 0; col < size; col++) {
            copyArray[index(row,col)] = array[index(row,col)];
        }
    }
    for (size_t row = 0; row < size; row++) {
        for (size_t col = 0; col < size; col++) {
            array[index(row,col)] = copyArray[index(row,col)];
        }
    }
    copyArray = deleteMatrix(copyArray);
}

void read2DArray(int *array, const size_t &size) {
    std::cout << "Enter the matrix: " << '\n';
    for (size_t row = 0; row < size; row++) {
        for (size_t col = 0; col < size; col++) {
            std::cin >> array[index(row,col)];
            if (!std::cin) throw std::invalid_argument("Invalid argument!");
        }
    }
}

void print2DArray(const int *array, const size_t &size) {
    for (size_t row = 0; row < size; row++) {
        for (size_t col = 0; col < size; col++) {
            std::cout << array[index(row,col)];
            std::cout.width(4);
        }
        std::cout << '\n';
    }
}
