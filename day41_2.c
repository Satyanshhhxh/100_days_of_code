// Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a lowercase: ");

    while ((ch = getchar()) != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        putchar(ch);
    }

    return 0;
}
