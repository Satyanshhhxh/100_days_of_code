// Find the transpose of a matrix.

#include <stdio.h>

int main() {
    int r, c;
    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);

    int a[10][10], t[10][10];

    printf("Enter matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            t[j][i] = a[i][j];

    printf("Transpose:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
}
