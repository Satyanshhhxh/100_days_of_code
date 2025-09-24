// Find the sum of array elements.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("The numbers are:");
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of elements is %d", sum);

    return 0;
}
