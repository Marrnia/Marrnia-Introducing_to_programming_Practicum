#include <iostream>

#define FOR(x) for (int i = 0; i < x; i++)
#define ERROR_MESSAGE std::cerr << "Invalid input." << '\n';

const int MAX_ARRAY_SIZE = 100;

bool input(int[], int &);
void solve(int[], int);

int main() {
  int array[MAX_ARRAY_SIZE];
  int n = 0;
  if (!input(array, n)) {
    ERROR_MESSAGE
    return 1;
  }
  solve(array, n);
  return 0;
}

bool input(int array[MAX_ARRAY_SIZE], int &sizeArr) {
  do {
    std::cout << "n = ";
    std::cin >> sizeArr;
  } while (sizeArr < 0 || sizeArr > 100);
  FOR(sizeArr) {
    std::cin >> array[i];
    if (!std::cin) {
      return false;
    }
  }
  return true;
}

void solve(int array[MAX_ARRAY_SIZE], int n) {
  // Palindrome
  bool isPalindrome = true;
  int j = n - 1;
  FOR(n) {
    if (array[i] != array[j--]) {
      isPalindrome = false;
    }
  }
  isPalindrome ? std::cout << "YES" : std::cout << "NO";
}
