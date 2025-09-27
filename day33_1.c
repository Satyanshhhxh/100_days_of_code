// Search in a sorted array using binary search.

#include <stdio.h>

int main()
{
    int arr[50], n, x, low, high, mid;
    int found = 0;
    printf("Size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("element to search: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            printf("Found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if (x > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (!found)
    {
        printf("Element not found in the array.\n");
    }
    return 0;
}
