#include <iostream>

int main() {
  int num = 0, rev = 0;
  std::cin >> num;

  bool evenInitNum;
  if (num % 2 == 0)
    evenInitNum = 1;
  else
    evenInitNum = 0;

  while (num) {
    rev = rev * 10 + num % 10;
    num /= 10;
  }

  bool evenNewNum;
  if (rev % 2 == 0)
    evenNewNum = 1;
  else
    evenNewNum = 0;

  if (evenNewNum == evenInitNum)
    std::cout << "YES" << '\n';
  else
    std::cout << "NO" << '\n';
  return 0;
}
