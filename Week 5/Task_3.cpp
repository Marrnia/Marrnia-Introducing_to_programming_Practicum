#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  if (n <= 3)
    std::cerr << "Invalid input" << '\n';
  else {
    int stars = 1;
    for (int row = 0; row < n; row++) {
      for (int col = 0; col < n * 2 - 1; col++) {
        if (col == n - 1 - row) {
          for (int i = 0; i < stars; i++) {
            std::cout << "*";
          }
          stars += 2;
        } else
          std::cout << " ";
      }
      std::cout << "\n";
    }
    stars -= 4;
    for (int row = 0; row < n - 1; row++) {
      for (int col = 0; col < n * 2 - 1; col++) {
        if (col == row + 1) {
          for (int i = 0; i < stars; i++) {
            std::cout << "*";
          }
          stars -= 2;
        } else
          std::cout << " ";
      }
      std::cout << "\n";
    }
  }
  return 0;
}
