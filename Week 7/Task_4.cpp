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

bool input(int array[][MAX_ARRAY_SIZE], int &n) {
    do {
        std::cin >> n;
    } while (n < 0 || n > 100);
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

void solve(const int matrix[][MAX_ARRAY_SIZE], const int n)
{
    int searchNum = 0;
    std::cin >> searchNum;
    bool isFound = false;
    FORi(n){
        FORj(n) {
            if (searchNum == matrix[i][j]) {
                isFound = true;
                std::cout << "(" << i << "," << j << ")";
            }
        }
    }
    if (!isFound) {
        std::cout << "Element not found anywhere." << '\n';
    }
}
