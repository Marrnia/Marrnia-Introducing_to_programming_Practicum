#include <iostream>

#define FORi(x) for (int i = 0; i < x; i++)
#define FORj(x) for (int j = 0; j < x; j++)
#define ERROR_MESSAGE std::cerr << "Ivalid input." << '\n'

const int MAX_ARRAY_SIZE = 100;

bool input(int[][MAX_ARRAY_SIZE], int &);
void solve(int[][MAX_ARRAY_SIZE], int [][MAX_ARRAY_SIZE],const int);

int main() {
    int matrixA[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE],
        matrixB[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE];
    int n = 0;
    if (!input(matrixA, n) || !input(matrixB, n)) {
        ERROR_MESSAGE;
        return 1;
    }
    solve(matrixA, matrixB, n);
    return 0;
}

bool input(int array[][MAX_ARRAY_SIZE], int &n) {
    static char count = 'A';
    static bool flag = true;
    if (flag) {
        do {
            flag = false;
            std::cout << "n = ";
            std::cin >> n;
        } while (n < 0 || n > 100);
    }
    std::cout << "Input matrix " << count++ << ":\n";
    FORi(n) {
        FORj(n) {
            std::cin >> array[i][j];
            if (!std::cin) {
                return false;
            }
        }
    }
    return true;
}

void solve(int A[][MAX_ARRAY_SIZE], int B[][MAX_ARRAY_SIZE], const int n) {
    //A + B
    std::cout << "Result of A + B:" << '\n';
    FORi(n) {
        FORj(n) {
            std::cout.width(3);
            std::cout << A[i][j] + B[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << "Result of -(A):" << '\n';
    FORi(n) {
        FORj(n) {
            std::cout.width(3);
            std::cout << -A[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << "Result of 2A + 3B:" << '\n';
    FORi(n) {
        FORj(n) {
            std::cout.width(3);
            std::cout << 2 * A[i][j] + 3 * B[i][j];
        }
        std::cout << std::endl;
    }
}
