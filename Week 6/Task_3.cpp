#include <iostream>

int main() {
  const int SIZE = 5;
  int arr[SIZE];
  for (int i = 0; i < SIZE; i++) {
    std::cin >> arr[i];
  }
  int num = 0;
  std::cin >> num;
  int newArr[SIZE], size = 0;
  bool isEmpty = true;
  for (int i = 0, j = 0; i < SIZE; i++) {
    if (num == arr[i] && ++size) {
      newArr[j++] = i;
      isEmpty = false;
    }
  }
  if (isEmpty) {
    std::cout << "Number isn't in the array.\n";
  } else {
    std::cout << size << " Positions are: ";
    for (int i = 0; i < size; i++) {
      std::cout << newArr[i] << " ";
    }
  }
  return 0;
}
