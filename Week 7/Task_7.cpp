#include <iostream>

const int MAX_ARRAY_SIZE = 100;

int main() {
    char sentence[MAX_ARRAY_SIZE];
    int n;
    bool bad_input;
    do {
        std::cout << "Enter a sentence: ";
        n = 0;
        bad_input = false;
        std::cin.get(sentence, MAX_ARRAY_SIZE);
        while (sentence[n] != '\0') {
            n++;
        }
        if (!std::cin ||
                !(sentence[n - 1] == '.' ||
                 sentence[n - 1] == '!' ||
                  sentence[n - 1] == '?') ||
                (sentence[0] < 'A' || sentence[0] > 'Z')) {
            bad_input = true;
            std::cin.clear();
            std::cin.ignore(0x7fffffff, '\n');
            std::cerr << "Invalid input." << std::endl;
        }
    } while (bad_input);

    int countWords = 0;
    int longestWord = -0x80000000;
    int shortestWord = 0x7fffffff;
    for (int i = 0; i < n; i++) {
        int letter = 0;
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            letter++;
            i++;
        }
        if (shortestWord > letter) {
            shortestWord = letter;
        }
        if (longestWord < letter) {
            longestWord = letter;
        }
        countWords++;
    }
    std::cout << countWords;
    countWords > 1 ? std::cout << " words\n" : std::cout << " word\n";
    std::cout << "Longest word has " << longestWord;
    longestWord > 1 ? std::cout << " letters.\n" : std::cout << " letter.\n";
    std::cout << "Shortest word has " << shortestWord;
    shortestWord > 1 ? std::cout << " letters." << std::endl : std::cout << " letter." << std::endl;
    return 0;
}
