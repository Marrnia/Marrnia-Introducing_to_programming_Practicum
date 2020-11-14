#include <iostream>

int main() {
  const int SIZE = 100;
  double array[SIZE];
  int n = 0;
  do {
    std::cout << "n = ";
    std::cin >> n;
  } while (n < 0 || n > 100);
  for (int i = 0; i < n; i++) {
    std::cin >> array[i];
    if (!std::cin) {
      std::cerr << "Invalid input." << '\n';
      return 1;
    }
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      std::cout << "[" << array[i] << ",";
    } else if (i == n - 1) {
      std::cout << array[i] << "] ";
    } else {
      std::cout << array[i] << ",";
    }
    sum += array[i];
  }
  std::cout << (double)sum / n << '\n';
  return 0;
}
