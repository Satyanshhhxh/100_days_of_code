// Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find ceil for: ");
    scanf("%d", &x);

    int ans = -1; 
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1; 
        } else {
            low = mid + 1;
        }
    }
    if (ans != -1)
        printf("Ceil of %d is %d at index %d\n", x, arr[ans], ans);
    else
        printf("No ceil found for %d in the array.\n", x);
    return 0;
}
