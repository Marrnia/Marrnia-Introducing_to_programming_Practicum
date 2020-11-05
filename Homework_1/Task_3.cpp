#include <cmath>
#include <iostream>

bool isPrime(int num) {
  if (num == 1)
    return false;
  for (int i = 2; i < num / 2; i++) {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main() {
  int year = 0, days = 0;
  double averageGrade = 0.0;
  std::cin >> year;
  bool isLeapYear = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);

  if (isLeapYear)
    days = 29;
  else
    days = 28;

  for (int day = 1; day <= days; day++) {
    if (day % 2 == 0) { // Even day
      averageGrade += 2.99;
    } else if (isPrime(day)) { // Prime day
      averageGrade += 2.00;
    } else {
      averageGrade += 3.00; // Odd day
    }
  }
  double answer = floor(averageGrade / days * 100 + 0.5) / 100.0;
  std::cout << answer;
  return 0;
}
