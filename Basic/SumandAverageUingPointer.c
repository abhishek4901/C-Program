#include <stdio.h>
#include <stdlib.h>  // Required for malloc and free
int main() {
    int n, i;
    float sum = 0, avg;
    int *arr;
    // Input: Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Dynamic memory allocation for n integers
    arr = (int *)malloc(n * sizeof(int));
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error
    }
    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) { //with pointer
        scanf("%d", arr + i);  // Using pointer notation
        sum += *(arr + i);  // Summing elements using pointer
        // scanf("%d", &arr[i]);  // Using array indexing(without pointer)
        // sum += arr[i];  // Summing elements using array notation
    }
    printf("Sum = %.2f\n", sum);
    // Calculate and display average
    avg = sum / n;
    printf("Average = %.2f\n", avg);
    // Free allocated memory
    free(arr);
    return 0;
}
