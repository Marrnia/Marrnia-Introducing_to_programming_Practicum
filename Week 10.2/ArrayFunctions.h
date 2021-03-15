#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H

template <typename T>
T *getArray(T *,const size_t &);

template <typename T>
T *deallocateArray(T *);

char *readText(char *,const size_t);
char *formatText(char *);
size_t getSize(const char *);
void removeSpaces(char *, size_t &);

template <typename T>
void removeElement(T *const, size_t &, size_t &);

void toLowerCase(char *,const size_t &);

char *getFirstWord(char *);

void getWord(const char *, char *, const unsigned &);
void getWord(const char *, char *, const unsigned &, size_t &);
void stringToInt(char *,const size_t &, int &);
void stringToInt(char *,const size_t &, size_t &);
bool isValidNumber(char *, const size_t &);
void insertElement(int *, size_t &, const int &,const size_t &);
void printArray(const int *const , const size_t &);
bool compareStrings(const char *, const char *);

#endif
