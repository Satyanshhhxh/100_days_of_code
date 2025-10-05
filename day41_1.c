// Count characters in a string without using built-in length functions.


#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    printf("Enter string: ");
    while ((ch = getchar()) != '\n') {
        count++;  
    }
    printf("Total characters: %d\n", count);

    return 0;
}

