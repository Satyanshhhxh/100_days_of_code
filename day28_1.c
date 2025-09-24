/* Write a program to print all the prime numbers from 1 to n. */

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int primenmb = 1;  
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                primenmb = 0;
                break;
            }
        }
        if (primenmb) {
            printf("%d ", i);
        }
    }

    return 0;
}
