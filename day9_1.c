// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>

int main() {
    int a, b, c;
    int discriminant;

    printf("Let's find the type of roots for a quadratic equation ax^2 + bx + c = 0\n");

    printf("Enter coefficient a: ");
    scanf("%d", &a);

    printf("Enter coefficient b: ");
    scanf("%d", &b);

    printf("Enter coefficient c: ");
    scanf("%d", &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        printf("The roots are real and different (distinct).\n");
    }
    else if (discriminant == 0) {
        printf("The roots are real and equal.\n");
    }
    else {
        printf("The roots are complex (cannot calculate exact value with integers).\n");
    }

    printf("Thank you for using this program!\n");

    return 0;
}
