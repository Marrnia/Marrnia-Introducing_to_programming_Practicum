#include <iostream>

int main() {
  int num = 0;
  std::cin >> num;
  int copyNum = num;
  int newNum = 0;
  while (num) {
    newNum = (newNum * 10) + num % 10;
    num /= 10;
  }
  if (copyNum == newNum) {
    std::cout << "YES" << '\n';
  } else
    std::cout << "NO" << '\n';
  return 0;
}
