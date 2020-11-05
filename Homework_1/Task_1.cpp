#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  srand(time(NULL));
  bool goodMood = (rand() % 2) - 1, paidFeePassed = (rand() % 2) - 1,
       paidFeeOnTime = (rand() % 2) - 1; // Random boolean
  int takenExams = 0;
  std::cin >> takenExams;
  if (takenExams >= 4) {
    std::cout << "Good job, you passed!";
  } else if (goodMood && paidFeePassed && paidFeeOnTime) {
    std::cout << "Good job, you passed!";
  } else if (takenExams >= 2 && goodMood) {
    std::cout << "Good job, you passed!";
  } else if (takenExams == 1 && goodMood && paidFeeOnTime) {
    std::cout << "Good job, you passed!";
  } else
    std::cout << "September is a fun month!";
  return 0;
}
