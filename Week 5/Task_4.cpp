#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  if (n < 1)
    std::cerr << "Invalid input" << '\n';
  else {
    for (int row = 0; row < n; row++) {
      for (int col = 1; col <= row + 1; col++) {
        std::cout << col << " ";
      }
      std::cout << "\n";
    }
  }
  return 0;
}
