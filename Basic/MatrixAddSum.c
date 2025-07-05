#include <stdio.h>
int main() {
    int rows, cols;
    // Input the number of rows and columns
    printf("Enter the number of rows ");
    scanf("%d", &rows);
    printf("Enter the number of columns ");
    scanf("%d", &cols);
    int M1[10][10], M2[10][10], sum[10][10], sub[10][10];

    // Input elements for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element M1[%d][%d]: ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }
    // Input elements for the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("enter the element [%d][%d]" ,i,j);
            scanf("%d", &M2[i][j]);
        }
    }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum[i][j] = M1[i][j] + M2[i][j];
            }
        }
        printf("Sum of matrices:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
            printf("\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sub[i][j] = M1[i][j]  -M2[i][j];
            }
        }
        printf("Sub of matrices:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d\t", sub[i][j]);
            }
            printf("\n");
        }
       
    return 0;
}