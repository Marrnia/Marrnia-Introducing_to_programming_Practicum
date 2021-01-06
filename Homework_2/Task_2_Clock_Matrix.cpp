#include <iostream>

void readSize(unsigned &);
void read2DArray(int *, const unsigned &);
void print2DArray(int *, const unsigned &);
void clockMatrix(int *,const unsigned &, unsigned &);

int main() {
    unsigned m = 0;
    std::cout << "m = ";
    readSize(m);
    if (m <= 1) throw std::invalid_argument("Invalid number!");
    int *matrix = new int[m*m];
    std::cout << "matrix:" << '\n';
    read2DArray(matrix,m);
    unsigned n = 0;
    std::cout << "n = ";
    readSize(n);
    clockMatrix(matrix,m,n);
    print2DArray(matrix,m);
    delete[] matrix;
    matrix = nullptr;
    return 0;
}

void readSize(unsigned &size) {
    std::cin >> size;
    if(!std::cin || size > 100) throw std::invalid_argument("Invalid number!");
}

void read2DArray(int *array, const unsigned &size) {
    for (unsigned row = 0; row < size; row++) {
        for (unsigned col = 0; col < size; col++) {
            std::cin >> array[row*size + col];
            if (!std::cin) throw std::invalid_argument("Invalid argument!");
        }
    }
}

void print2DArray(int *array, const unsigned &size) {
    for (unsigned row = 0; row < size; row++) {
        for (unsigned col = 0; col < size; col++) {
            std::cout << array[row*size + col];
            std::cout.width(4);
        }
        std::cout << '\n';
    }
}

void clockMatrix(int *matrix,const unsigned &sizeMatrix, unsigned &n) {
    unsigned start = 0;
    int temp = 0;
    unsigned count = 0;
    unsigned m = sizeMatrix;
    unsigned sizeClock = m / 2;
    for (unsigned i = 0; i < sizeClock; i++) {
        count++;
        for (unsigned moves = 0; moves < n; moves++) {
            if (count % 2 != 0) {
                temp = matrix[start*sizeMatrix + start];
                matrix[start*sizeMatrix + start] = matrix[(m-1)*sizeMatrix + start];// 0 0
                matrix[(m-1)*sizeMatrix + start] = matrix[(m-1)*sizeMatrix + (m-1)]; //m 0
                matrix[(m-1)*sizeMatrix + (m-1)] = matrix[start*sizeMatrix + (m-1)]; // m m
                matrix[start*sizeMatrix + (m-1)] = temp; // 0 m
            }
            else {
                temp = matrix[start*sizeMatrix + start];
                matrix[start*sizeMatrix + start] = matrix[start*sizeMatrix + (m-1)];
                matrix[start*sizeMatrix + (m-1)] = matrix[(m-1)*sizeMatrix + (m-1)];
                matrix[(m-1)*sizeMatrix + (m-1)] = matrix[(m-1)*sizeMatrix + start];
                matrix[(m-1)*sizeMatrix + start] = temp;
            }
        }
        start++;
        m--;
    }
}
