// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n;
    printf("enter the number of element: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("The number is: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("reading elements are %d ", arr[i]);
    }

    return 0;
}
