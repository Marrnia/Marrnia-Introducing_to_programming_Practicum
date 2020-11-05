#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  srand(time(NULL));
  int answer = (rand() % 1001);
  std::cout << answer << "\n";
  int num = 0, attempts = 0;
  while (1) {
    std::cin >> num;
    if (num >= 0 && num <= 1000) {
      attempts++;
      if (num == answer) {
        std::cout << "Congrats! You did it! It took you " << attempts
                  << " attempts to guess the number.";
        break;
      } else if (num > answer) {
        std::cout << "Try with a smaller number.\n";
      } else {
        std::cout << "Try with a bigger number.\n";
      }
    } else {
      std::cerr << "Invalid input";
      break;
    }
  }
  return 0;
}
