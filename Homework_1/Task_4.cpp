#include <iostream>

int main() {
  unsigned int n = 0;
  std::cin >> n;
  if (n > 1 && n % 2 != 0) {
    for (int row = 0; row < n; row++) {
      for (int col = 0; col < n; col++) {
        if (row == 0 || row == n - 1) // First and last row
          std::cout << "*";
        else if (row == col ||       // Primary diagonal
                 row + col == n - 1) // Secondary diagonal
          std::cout << "*";
        else
          std::cout << " ";
      }
      std::cout << "\n";
    }
  } else
    std::cerr << "Invalid input";
  return 0;
}
