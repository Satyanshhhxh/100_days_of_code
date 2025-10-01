// Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = 0; 
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric)
        printf("The matrix is Symmetric.\n");
    else
        printf("The matrix is NOT Symmetric.\n");

    return 0;
}
