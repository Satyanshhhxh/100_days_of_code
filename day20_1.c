// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, i, num;
    long long product = 1;
    int odd = 0;

    printf("Enter the total number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);
        if (num % 2 != 0) {
            product *= num;
            odd = 1;
        }
    }

    if (odd)
        printf("Product of odd numbers is: %lld\n", product);
    return 0;
}
