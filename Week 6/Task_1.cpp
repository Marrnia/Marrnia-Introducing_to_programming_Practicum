#include <iostream>

int main() {
  const int SIZE = 100;
  int arr[SIZE];
  int n = 0;
  do {
    std::cin >> n;
  } while (n < 0 || n > 100);
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
    if (!std::cin) {
      std::cerr << "Invalid input." << '\n';
      return 1;
    }
  }
  while (n--) {
    std::cout << arr[n] << ' ';
  }
  return 0;
}
