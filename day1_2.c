//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product, quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = num1 / num2; 
    } else {
        printf("Division by zero is not allowed!\n");
        return 0;
    }

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);

    return 0;
}
