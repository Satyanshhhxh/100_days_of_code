// Merge two arrays.

#include <stdio.h>

int main() {
    int arr[100];
    int n1, n2, i;

    printf("size of first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("size of second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr[n1 + i]);
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
