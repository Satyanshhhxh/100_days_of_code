// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int arr[50], n, x, i, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    pos = n;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = x;
    n++;

    printf("After insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
