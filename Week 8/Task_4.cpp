#include <iostream>

const int MAX_ARRAY_SIZE = 100;

bool isArithmeticProgression(const int[],const int);
void inputSize(int&);
void inputArray(int [], const int);

int main() {
    int progression[MAX_ARRAY_SIZE];
    int n = 0;
    inputSize(n);
    inputArray(progression,n);
    std::cout << std::boolalpha << isArithmeticProgression(progression,n) << '\n';
    return 0;
}

void inputSize(int &size){
    std::cin >> size;
    if (!std::cin) {
        std::cin.clear();
        std::cin.ignore(0x7fffffff,'\n');
        throw std::invalid_argument("Not a number.");
    }
    if (size < 0) {
        throw std::invalid_argument("Not a positive number.");
    }
}

void inputArray(int array[], const int size) {
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
        if (!std::cin) {
            std::cin.clear();
            std::cin.ignore(0x7fffffff, '\n');
            throw std::invalid_argument("Not a number.");
        }
    }
}

bool isArithmeticProgression(const int array[], const int size) {
    if (size < 2) {
        return true;
    }
    int difference = array[1] - array[0];
    for (unsigned i = 0; i < size-1; i++) {
        if (array[i+1] - array[i] == difference){
            continue;
        }
        return false;
    }
    return true;
}
