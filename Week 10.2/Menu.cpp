#include <iostream>

void start() {
    size_t capacity = 50;
    const size_t MAX_SIZE_COMMAND = 100;
    size_t sizeArray = 0;
    char *command;
    int *array;
    bool isOpen = true;
    array = getArray(array, capacity);
    while (isOpen) {
        command = getArray(command, MAX_SIZE_COMMAND);
        command = readText(command, MAX_SIZE_COMMAND);
        command = formatText(command);
        unsigned words = 1;
        size_t size = getSize(command);
        for (size_t index = 0; index < size; index++) {
            if (command[index] == ' ') {
                words++;
            }
        }
        switch (words) {
            case 1: {
                if (compareStrings(command,"help")) {
                    showHelp();
                }
                else if (compareStrings(command,"exit")) {
                    isOpen = false;
                    break; // exit(1)
                }
                else if (compareStrings(command,"array")) {
                    if (sizeArray == 0) {
                        std::cerr << "Not existing array!" << '\n';
                        break;
                    }
                    printArray(array,sizeArray);
                }
                else {
                    std::cerr << "Invalid command!" << '\n';
                }
                break;
            }
            case 2: {
                char *mainCommand, *commandFunction;
                mainCommand = getArray(mainCommand,MAX_SIZE_COMMAND);
                getWord(command,mainCommand,words);
                if (compareStrings(mainCommand,"array")) {
                    commandFunction = getArray(commandFunction,MAX_SIZE_COMMAND);
                    getWord(command,commandFunction,words);
                    if (compareStrings(commandFunction,"pop_front")) {
                        if (sizeArray == 0){
                            std::cerr << "Not existing array!" << '\n';
                            break;
                        }
                        pop_front(array, sizeArray, capacity);
                    }
                    else if (compareStrings(commandFunction,"pop_back")) {
                        if (sizeArray == 0) {
                            std::cerr << "Not existing array!" << '\n';
                            break;
                        }
                        pop_back(array, sizeArray, capacity);
                    }
                    else {
                        std::cerr << "Invalid command!" << '\n';
                    }
                }
                else if (compareStrings(mainCommand,"create")) {
                    size_t countDigits = 0;
                    sizeArray = 0;
                    commandFunction = getArray(commandFunction,MAX_SIZE_COMMAND);
                    getWord(command,commandFunction,words);
                    countDigits = getSize(commandFunction);
                    if (isValidNumber(commandFunction,countDigits)) {
                        stringToInt(commandFunction,countDigits, sizeArray);
                        create(array,sizeArray,capacity);
                    }
                    else {
                        std::cerr << "Invalid number!" << '\n';
                    }
                }
                else {
                    std::cerr << "Invalid command!" << '\n';
                }
                mainCommand = deallocateArray(mainCommand);
                commandFunction = deallocateArray(commandFunction);
            }break;
            case 3: { //done
                char *mainCommand, *commandFunction, *numberString;
                mainCommand = getArray(mainCommand,MAX_SIZE_COMMAND);
                //mainCommand = new char[MAX_SIZE_COMMAND];
                getWord(command,mainCommand,words);
                if (compareStrings(mainCommand,"array")) {
                    commandFunction = getArray(commandFunction,MAX_SIZE_COMMAND);
                    //commandFunction = new char[MAX_SIZE_COMMAND];
                    getWord(command,commandFunction,words);
                    std::cout << "commandFunction = " << commandFunction << '\n';
                    if (compareStrings(commandFunction,"push_back")) {
                        size_t countDigits = 0;
                        int number = 0;
                        numberString = getArray(numberString,MAX_SIZE_COMMAND);
                        //numberString = new char[MAX_SIZE_COMMAND];
                        getWord(command,numberString,words);
                        countDigits = getSize(numberString);
                        if (isValidNumber(numberString, countDigits)){
                            stringToInt(numberString,countDigits,number);
                            if (!std::cin) std::invalid_argument("Invalid number!");
                            push_back(array, sizeArray, number, capacity);
                        }
                        else std::cerr << "Invalid number!" << '\n';
                    }
                    else if (compareStrings(commandFunction,"push_front")) {
                        size_t countDigits = 0;
                        int number = 0;
                        numberString = getArray(numberString,MAX_SIZE_COMMAND);
                        getWord(command,numberString,words);
                        countDigits = getSize(numberString);
                        if (isValidNumber(numberString, countDigits)){
                            stringToInt(numberString,countDigits,number);
                            if (!std::cin) std::invalid_argument("Invalid number!");
                            push_front(array, sizeArray, number, capacity);
                        }
                        else std::cerr << "Invalid number!" << '\n';
                    }
                    else {
                        std::cerr << "Invalid command!" << '\n';
                    }
                }
                else {
                    std::cerr << "Invalid command!" << '\n';
                }
                mainCommand = deallocateArray(mainCommand);
                commandFunction = deallocateArray(commandFunction);
            }break;
            default: std::cerr << "Invalid command!" << '\n';
        }

        command = deallocateArray(command);
    }
    printArray(array,sizeArray);
    array = deallocateArray(array);
    std::cout << "End of the program." << '\n';
}
