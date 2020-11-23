#include <iostream>

#define FORi(x) for (int i = 0; i < x; i++)
#define FORj(x) for (int j = 0; j < x; j++)
#define ERROR_MESSAGE std::cerr << "Ivalid input." << '\n'

const int MAX_ARRAY_SIZE = 100;

bool input(int[][MAX_ARRAY_SIZE], int &, int &);
void solve(const int[][MAX_ARRAY_SIZE], const int, const int);

int main() {
    int matrix[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE];
    int n = 0, m = 0;
    if (!input(matrix, n, m)) {
        ERROR_MESSAGE;
        return 1;
    }
    solve(matrix, n,m);
    return 0;
}

bool input(int array[][MAX_ARRAY_SIZE], int &row, int &col) {
    do {
        std::cout << "n = ";
        std::cin >> row;
        std::cout << "m = ";
        std::cin >> col;
    } while (row < 0 || row > 100 || col < 0 || col > 100);
    FORi(row) {
        FORj(col) {
            std::cin >> array[i][j];
            if (!std::cin) {
                return false;
            }
        }
    }
    return true;
}

void solve(const int matrix[][MAX_ARRAY_SIZE], const int row, const int col)
{
    int sumFirstDiagonal = 0;
    int sumSecondDiagonal = 0;
    FORi(row) {
        FORj(col) {
            if (i == j)
            sumFirstDiagonal += matrix[i][j];
            if (i == col - j - 1)
            sumSecondDiagonal += matrix[i][j];
        }
    }
    std::cout << "First Diagonal - " << sumFirstDiagonal << std::endl;
    std::cout << "Second Diagonal - " << sumSecondDiagonal << std::endl;
}
