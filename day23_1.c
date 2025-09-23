// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = 2 * i;          
        int num1 = 4 * i - 1;      
        sum = sum + (float)num / num1;
    }

    printf("Sum of series up to %d terms = %.2f\n", n, sum);

    return 0;
}
