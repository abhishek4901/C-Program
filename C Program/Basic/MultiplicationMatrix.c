#include <stdio.h>
#define MAX 10
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
int main() {
    int rowsA, colsA, rowsB, colsB;
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];

    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rowsA);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &colsA);

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rowsB);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &colsB);

    if (colsA == rowsB) {
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
}
    else {
        printf("Matrix multiplication is not possible.\n");
    
    }

    multiplyMatrices(A, B, result, rowsA, colsA, colsB);
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}