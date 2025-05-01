#include <stdio.h>
#define max 10

 void addMatrix(int matrix1[max][max], int matrix2[max][max], int sum[max][max], int rows, int cols) {
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
}
}
int main() {
    int rows, cols;
    int matrix1[max][max], matrix2[max][max], sum[max][max];

    // Input the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);


    // Input elements for first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    addMatrix(matrix1, matrix2, sum, rows, cols);
    // Print the sum matrix
    printf("Sum of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
