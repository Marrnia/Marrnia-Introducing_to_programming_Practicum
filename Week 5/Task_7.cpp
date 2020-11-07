#include <iostream>

void removeHundredDigit(int &num) {
  num = (num - (num % 1000)) / 10 + num % 100;
}

int main() {
  int m = 0, n = 0;
  std::cin >> n >> m;
  if (m < 1000 || n > 9999) {
    std::cerr << "Invalid input." << '\n';
  } else {
    if (n < 1000 && m > 9999) {
      for (int i = 1000; i <= 9999; i++) {
        int num = i;
        removeHundredDigit(num);
        if (num % 11 == 0) {
          std::cout << num << " ";
        }
      }
    } else if (n < 1000) {
      for (int i = 1000; i < m; i++) {
        int num = i;
        removeHundredDigit(num);
        if (num % 11 == 0) {
          std::cout << num << " ";
        }
      }
    } else if (m > 9999) {
      for (int i = n; i <= 9999; i++) {
        int num = i;
        removeHundredDigit(num);
        if (num % 11 == 0) {
          std::cout << num << " ";
        }
      }
    } else {
      for (int i = n; i < m; i++) {
        int num = i;
        removeHundredDigit(num);
        if (num % 11 == 0) {
          std::cout << num << " ";
        }
      }
    }
  }
  return 0;
}
