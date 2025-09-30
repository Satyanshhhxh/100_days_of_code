// Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int r, c, sum = 0;
    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);

    int a[10][10];

    printf("Enter matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);
}
