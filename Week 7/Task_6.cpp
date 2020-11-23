#include <iostream>

int const MAX_ARRAY_SIZE = 100;

int main () {
    char sentence[MAX_ARRAY_SIZE];
    bool bad_input;
    do {
        bad_input = false;
        std::cin.get(sentence, MAX_ARRAY_SIZE);
        if (!std::cin) {
            bad_input = true;
            std::cin.clear();
            std::cin.ignore(0x7fffffff,'\n');
        }
    }while(bad_input);
    int countFounded = 0;
    char searchSymbol = '\0';
    std::cin >> searchSymbol;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            if (searchSymbol == sentence[i] + ('a' - 'A')) {
                countFounded++;
                sentence[i] = '*';
            }
        }
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            if (searchSymbol == sentence[i] - ('a' - 'A')) {
                countFounded++;
                sentence[i] = '*';
            }
        }
        if (sentence[i] == searchSymbol) {
            sentence[i] = '*';
            countFounded++;
        }
    }
    std::cout << countFounded << " times" << '\n';
    for (int i = 0; sentence[i] != '\0'; i++) {
        std::cout << sentence[i];
    }
    return 0;
}
