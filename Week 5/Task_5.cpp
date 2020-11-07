#include <iostream>

int main() {
  double money = 0.0;
  int weekDay = 0;
  std::cout << "How much money do you have?\n";
  std::cin >> money;
  if (money < 0) {
    std::cerr << "Invalid input." << '\n';
  } else {
    std::cout << "Which day of the week is it?[1-7]\n";
    std::cin >> weekDay;
    if (weekDay < 1 || weekDay > 7)
      std::cerr << "Invalid input." << '\n';
    else {
      int choice = 0;
      std::cout << "Pick a food.[1-4]\n";
      std::cout << "1 - meatball" << '\n';
      std::cout << "2 - pickle" << '\n';
      std::cout << "3 - salad" << '\n';
      std::cout << "4 - beer" << '\n';
      std::cin >> choice;
      if (choice < 0 || choice > 4)
        std::cerr << "Invalid input." << '\n';
      else {
        double meatball = 2.0, pickle = 3.0, salad = 3.50, beer = 6.66;
        double discount = 0.0;
        if (weekDay <= 3) {
          discount = (double)1 / 4;
          meatball *= discount;
          pickle *= discount;
          salad *= discount;
          beer *= discount;
        } else if (weekDay > 3 && weekDay <= 5) {
          discount = (double)1 / 10;
          meatball *= discount;
        } else {
          discount = (double)3 / 10;
          meatball += meatball * discount;
          pickle += pickle * discount;
          salad += salad * discount;
          beer += beer * discount;
        }

        int warnings = 0;
        while (choice) {
          if (choice == 1) {
            money -= meatball;
          } else if (choice == 2) {
            money -= pickle;
          } else if (choice == 3) {
            money -= salad;
          } else {
            money -= beer;
          }
          std::cout << "You have " << money << "$.\n";

          if (money <= 0) {
            std::cout << "The money is gone.\n";
            warnings++;
            if (warnings == 3) {
              std::cout << "You got kick out." << '\n';
              break;
            }
          }
          std::cout << "Pick a food.[1-4]\n";
          std::cin >> choice;
        } // End while
        std::cout << "You left MacDonald's." << '\n';
      }
    }
  }
  return 0;
}
