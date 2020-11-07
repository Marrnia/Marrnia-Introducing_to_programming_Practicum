#include <cmath>
#include <iostream>

int main() {
  int num = 0;
  std::cin >> num;
  num = abs(num);
  int sum = 0;
  for (int i = 1; i <= num / 2; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }
  if (sum == num) {
    std::cout << "Perfect!" << '\n';
  } else
    std::cout << "Not perfect!" << '\n';
  return 0;
}
