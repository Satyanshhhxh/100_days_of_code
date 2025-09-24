// Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("even element %d\n", evenCount);
    printf("odd elements = %d\n", oddCount);

    return 0;
}
