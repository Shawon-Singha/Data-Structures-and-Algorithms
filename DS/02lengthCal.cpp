#include <iostream>
using namespace std;

int stringLength(const char* str) {
    int length = 0;
    while (*str !=0) {
        length++;
        str++;
    }
    return length;
}

int main() {
    const int MAX_LENGTH = 100;
    char userInput[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(userInput, MAX_LENGTH, stdin);

    int len = stringLength(userInput);
    if (len > 0 && userInput[len - 1] == '\n') {
        userInput[len - 1] = '\0';
    }

    int length = stringLength(userInput);

    printf("Length of the string: %d\n", length);

    return 0;
}
