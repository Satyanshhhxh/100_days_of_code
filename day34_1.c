// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100], n, position, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert: ");
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for(int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = value;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
