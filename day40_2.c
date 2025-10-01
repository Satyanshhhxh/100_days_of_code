// Multiply two matrices.

#include <stdio.h>

int main() {
    int p, q, r, i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &p, &q);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &q, &r);  
    int A[p][q], B[q][r], C[p][r];

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < q; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            for (k = 0; k < q; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
