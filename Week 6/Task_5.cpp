#include <iostream>

#define FOR(x) for (int i = 0; i < x; i++)
#define ERROR_MESSAGE std::cerr << "Invalid input." << '\n';

const int MAX_ARRAY_SIZE = 100;

bool input(char[], int &, int &);
void solve(char[], int, int);

int main() {
  char array[MAX_ARRAY_SIZE];
  int n = 33, digit = 0;
  if (!input(array, n, digit)) {
    ERROR_MESSAGE
    return 1;
  }
  solve(array, n, digit);
  return 0;
}

bool input(char array[MAX_ARRAY_SIZE], int &sizeArr, int &number) {
  std::cin >> number;
  std::cin.get();
  std::cin.getline(array, sizeArr);
  if (!std::cin) {
    return false;
  }
  int lenghtArray = 0;
  while (array[lenghtArray++] != '\0')
    ;
  sizeArr = lenghtArray;
  return true;
}

void solve(char array[MAX_ARRAY_SIZE], int n, int number) {
  char symbols[13] = ".,!?()[]{}+-";
  char answer[MAX_ARRAY_SIZE];
  int index = 0;
  bool isValid = true;
  switch (number) {
  case 1: {
    FOR(n) {
      if (array[i] >= 'a' && array[i] <= 'z' ||
          array[i] >= 'A' && array[i] <= 'Z') {
        answer[index++] = array[i];
      }
    }
    break;
  }
  case 2: {
    FOR(n) {
      if (array[i] >= '0' && array[i] <= '9') {
        answer[index++] = array[i];
      }
    }
    break;
  }
  case 3: {
    FOR(n) {
      for (int j = 0; j < 13; j++) {
        if (array[i] == symbols[j]) {
          answer[index++] = array[i];
        }
      }
    }
    break;
  }
  default: {
    isValid = false;
    std::cout << "Please enter a valid number." << '\n';
  }
  }
  if (isValid)
    FOR(index) { std::cout << answer[i]; }
}
