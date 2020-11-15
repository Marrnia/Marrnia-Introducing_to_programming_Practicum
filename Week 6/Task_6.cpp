#include <iostream>

#define FOR(x) for (int i = 0; i < x; i++)
#define ERROR_MESSAGE std::cerr << "Invalid input." << '\n';

const int MAX_ARRAY_SIZE = 100;

// Декларация на функции
bool input(char[], int &);
void solve(char[], int);
void removeWhitespace(char[], int, int &);

int main() {
    char array[MAX_ARRAY_SIZE];
    int n = MAX_ARRAY_SIZE;
    if (!input(array, n)) {
        ERROR_MESSAGE
        return 1;
    }
    solve(array, n);
    return 0;
}

// Функция, в която въвеждаме низ
bool input(char array[MAX_ARRAY_SIZE], int &sizeArr) {
    std::cin.getline(array, sizeArr);
    if (!std::cin) {
        return false;
    }
    int lenght = 0;
    while (array[lenght++] != '\0')
        ;
    sizeArr = lenght;
    return true;
}

// Функцията, в която е логиката на самата задача
void solve(char array[MAX_ARRAY_SIZE], int n) {
    FOR(n) { //Променя буквите в главни и заменя някои в "хакерски"
        if (array[i] >= 'a' && array[i] <= 'z') {
            array[i] -= 32;
        }
        if (array[i] == 'A') {
            array[i] = '4';
        }
        if (array[i] == 'E') {
            array[i] = '3';
        }
        if (array[i] == 'I') {
            array[i] = '1';
        }
        if (array[i] == 'O') {
            array[i] = '0';
        }
    }
    //Премахва интервалите преди първата дума, ако има такива
    if (array[0] == ' ') {
        int j = 0;
        while (array[j] == ' ') {
            removeWhitespace(array, j, n);
        }
    }
    //Премахва интервалите след последната дума, ако има такива
    if (array[n - 1] == ' ') {
        int j = n - 1;
        while (array[j] == ' ') {
            removeWhitespace(array, j, n);
        }
    }
    FOR(n) { // Замества интервалите с долна черта
        if (array[i] == ' ') {
            array[i] = '_';
        }
    }
    FOR(n) {
        std::cout << array[i];    // Печата крайния резултат
    }
}
// Функция, която премахва елемент от масива
void removeWhitespace(char a[MAX_ARRAY_SIZE], int index, int &size) {
    FOR(size - 1) {
        a[i] = a[i + 1];
    }
    size--;
}
