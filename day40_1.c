// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("number of rows: ");
    scanf("%d", &n);
    printf("number of columns: ");
    scanf("%d", &m);

    int A[n][m];

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");
    for (int sum = 0; sum <= n + m - 2; sum++) {
        for (i = 0; i < n; i++) {
            j = sum - i;
            if (j >= 0 && j < m) {
                printf("%d ", A[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
