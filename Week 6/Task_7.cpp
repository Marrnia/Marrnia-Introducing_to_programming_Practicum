#include <iostream>

int main() {
  const int SIZE = 50;
  char firstName[SIZE], lastName[SIZE];
  std::cin >> firstName >> lastName;
  int fnSize = 0, lnSize = 0;
  bool fnFlag = 1, lnFlag = 1;
  while (fnFlag) {
    if (firstName[fnSize++] == '\0') {
      fnSize--;
      fnFlag = false;
    }
  }
  while (lnFlag) {
    if (lastName[lnSize++] == '\0') {
      lnSize--;
      lnFlag = false;
    }
  }
  for (int i = 0; i < fnSize; i++) {
    if (firstName[i] >= 'A' && firstName[i] <= 'Z') {
      firstName[i] |= ' ';
    }
  }
  for (int i = 0; i < lnSize; i++) {
    if (lastName[i] >= 'A' && lastName[i] <= 'Z') {
      lastName[i] |= ' ';
    }
  }
  int fullNameSize = fnSize + lnSize + 1;
  char fullName[SIZE * 2] = {'\0'};
  for (int i = 0, j = 0; i < fullNameSize; i++) {
    if (i < fnSize) {
      fullName[i] = firstName[i];
    } else if (i == fnSize) {
      fullName[i] = '_';
    } else {
      fullName[i] = lastName[j++];
    }
  }
  std::cout << fullName << '\n';
  return 0;
}
