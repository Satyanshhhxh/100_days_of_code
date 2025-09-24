// Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    int arr[50];

    printf("Enter numberof arrays: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found %d\n", i + 1);
            found = 1;
            break;
        }
    }
    return 0;
}
