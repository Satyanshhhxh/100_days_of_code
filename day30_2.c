// Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, j = 0, k = 0, l = 0; // j = + , k = - , l = 0

    printf("Enter the number of element: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the numbers:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0)
            j++;
        else if(arr[i] < 0)
            k++;
        else
            l++;
    }

    printf("Positive number%d\n", j);
    printf("Negative number%d\n", k);
    printf("Zero%d\n", l);

    return 0;
}
