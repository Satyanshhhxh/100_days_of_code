// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, max, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;
    lcm = max;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}
