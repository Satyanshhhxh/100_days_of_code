// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0}; 
    int d, i, max = 0, ans = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n > 0) {
        d = n % 10;      
        freq[d]++;       
        n = n / 10;      
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            ans = i;
        }
    }

    printf("repeated digit is %d it comes %d times.\n", ans, max);

    return 0;
}
