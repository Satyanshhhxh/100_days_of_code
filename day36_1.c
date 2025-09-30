// Read and print a matrix.

#include <stdio.h>

int main()
{
    int r, c;
    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);

    int a[10][10];

    printf("Enter matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
