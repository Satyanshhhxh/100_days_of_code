// Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num,num1, digit, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    num1 = num;

    while (num1 > 0) {
        digit = num1 % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        num1 = num1 / 10;
    }

    if (sum == num) {
        printf("%d is a Strong Number\n", num);
    } else {
        printf("%d is not a Strong Number\n", num);
    }

    return 0;
}
