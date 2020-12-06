#include <iostream>

const int MAX_ARRAY_SIZE = 100;

void inputCharArray(char[]);
void validationEmail(const char*);
bool checkName(const char *);
bool checkEmailSymbol(const char*);
bool checkSpaces(const char*);
bool checkDomain(const char*);

int main (){
    char email[MAX_ARRAY_SIZE];
    inputCharArray(email);
    validationEmail(email);
    return 0;
}

void inputCharArray(char array[]) {
    std::cin.getline(array,MAX_ARRAY_SIZE);
    if (!std::cin || array[0] == '\0') {
        std::cin.clear();
        std::cin.ignore(0x7fffffff,'\n');
        throw std::invalid_argument("Invalid input.");
    }    
}

void validationEmail(const char *email) {
    if (checkEmailSymbol(email) && checkName(email) && checkSpaces(email) && checkDomain(email)) {
        std::cout << "Valid email." << '\n';
    }
}

bool checkEmailSymbol(const char *email) {
    for (int i = 0; email[i] ; i++) {
        if (email[i] == '@') {
            return true;
        }
    }
    std::cerr << "Missing @" << '\n';
    return false;
}

bool checkName(const char *email) {
    int i = 0;
    while(email[i] != '@') {
        i++;
    }
    if (i >= 6) {
        return true;
    }
    std::cerr << "Email name is not long enough." << '\n';
    return false;
}

bool checkSpaces(const char *email) {
    for (int i = 0; email[i]; i++) {
        if (email[i] == ' ') {
            std::cerr << "There must be no empty spaces." << '\n';
            return false;
        }
    }
    return true;
}

bool checkDomain(const char *email) {
    int i = 0, count = 0;
    while (email[i] != '@') {
        i++;
    }
    if (email[i+1] == '.') {
        std::cerr << "Invalid domain name." << '\n';
        return false;
    }
    while (email[i]) {
        i++;
        count++;
    }
    if (email[i-1] == '.') {
        std::cerr << "Invalid domain name." << '\n';
        return false;
    }
    if (count < 6) {
        std::cerr << "Email domain is not long enough." << '\n';
        return false;
    }
    return true;
}
