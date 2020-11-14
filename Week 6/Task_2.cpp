#include <iostream>

const int MAX_ARRAY_SIZE = 100;

bool input(int[], int &);
void solve(int[], int);

int main() {
  int array[MAX_ARRAY_SIZE];
  int n = 0;
  if (!input(array, n)) {
    std::cerr << "Invalid input." << '\n';
    return 1;
  }
  solve(array, n);
  return 0;
}

bool input(int array[MAX_ARRAY_SIZE], int &n) {
  do {
    std::cout << "n = ";
    std::cin >> n;
  } while (n < 4 || n > 100);
  for (int i = 0; i < n; i++) {
    std::cin >> array[i];
    if (!std::cin) {
      return false;
    }
  }
  return true;
}

void solve(int array[MAX_ARRAY_SIZE], int n) {
  int min = 0, indexMin = 0;
  int max = 0, indexMax = 0;
  min = array[0];
  max = array[0];
  int copyArray[MAX_ARRAY_SIZE];
  for (int i = 0; i < n; i++) {
    copyArray[i] = array[i];
    if (min > array[i]) {
      min = array[i];
      indexMin = i;
    }
    if (max < array[i]) {
      max = array[i];
      indexMax = i;
    }
  }
  std::cout << "Min " << min << ", Max " << max;
  array[indexMax] = -0x80000000;
  copyArray[indexMin] = 0x7fffffff;
  max = array[0];
  min = copyArray[0];
  for (int i = 0; i < n; i++) {
    if (max < array[i]) {
      max = array[i];
    }
    if (min > copyArray[i]) {
      min = copyArray[i];
    }
  }
  std::cout << ", Second Min " << min << ", Second Max " << max;
}
