#include <iostream>

const int MAX_ARRAY_SIZE = 100;

void inputSize(int&);
void generateMatrix(int[][MAX_ARRAY_SIZE], const int);
void printMatrix(const int[][MAX_ARRAY_SIZE], const int);

int main () {
    int matrix[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE];
    int n = 0, m = 0;
    inputSize(n);
    generateMatrix(matrix,n);
    printMatrix(matrix,n);
    return 0;
}

void inputSize(int &size) {
    std::cin >> size;
    if (!std::cin) {
        std::cin.clear();
        std::cin.ignore(0x7fffffff, '\n');
        throw std::invalid_argument("Not a number.");
    }
    if (size < 0) {
        throw std::invalid_argument("Not a positive number.");
    }
}

void generateMatrix(int a[][MAX_ARRAY_SIZE], const int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                a[i][j] = i+1;
            }
            if (i < j) {
                a[i][j] = (j+1) - (i+1);
            }
            if (i > j) {
                a[i][j] = (i+1) * (j+1);
            }
        }
    }
}

void printMatrix(const int a[][MAX_ARRAY_SIZE], const int size) {
    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout.width(5);
            std::cout << a[i][j];
        }
        std::cout << '\n';
    }
}
