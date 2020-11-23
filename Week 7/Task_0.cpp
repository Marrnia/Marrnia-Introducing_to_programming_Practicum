#include <iostream>

#define FORi(x) for (int i = 0; i < x; i++)
#define FORj(x) for (int j = 0; j < x; j++)
#define ERROR_MESSAGE std::cerr << "Ivalid input." << '\n'

const int MAX_ARRAY_SIZE = 100;

bool input(int[][MAX_ARRAY_SIZE], int &);
void solve(const int[][MAX_ARRAY_SIZE], const int);

int main() {
    int matrix[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE];
    int n = 0;
    if (!input(matrix, n)) {
        ERROR_MESSAGE;
        return 1;
    }
    solve(matrix, n);
    return 0;
}

bool input(int array[][MAX_ARRAY_SIZE], int &sizeArr) {
    do {
        std::cout << "n = ";
        std::cin >> sizeArr;
    } while (sizeArr < 0 || sizeArr > 100);
    FORi(sizeArr) {
        FORj(sizeArr) {
            std::cin >> array[i][j];
            if (!std::cin) {
                return false;
            }
        }
    }
    return true;
}

void solve(const int matrix[][MAX_ARRAY_SIZE], const int n)
{
    FORi(n) {
        int sumRow = 0;
        FORj(n) {
            sumRow += matrix[i][j];
        }
        std::cout << i+1 << " row - " << (double)sumRow/n << '\n';
    }
    std::cout << std::endl;
    FORi(n) {
        int sumCol = 0;
        FORj(n) {
            sumCol += matrix[j][i];
        }
        std::cout << i+1 << " col - " << (double)sumCol/n << '\n';
    }
}
