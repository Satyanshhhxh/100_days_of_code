// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    char bin[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", bin);

    printf("1st complement: ");
    for(i = 0; bin[i] != '\0'; i++) {
        if(bin[i] == '0')
            printf("1");
        else
            printf("0");
    }

    printf("\n");
    return 0;
}
