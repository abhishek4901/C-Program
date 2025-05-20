// C Program for Dynamic Memory Allocation to Store N Numbers,
// and Find the Sum and Average:
#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int *numbers;  // Pointer for dynamic memory allocation
    int i, n;
    float average, sum = 0;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Input numbers from the user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];  // Add each number to sum
    }

    // Calculate the average
    average = sum / n;

    // Display the sum and average
    printf("Sum of numbers: %.2f\n", sum);
    printf("Average of numbers: %.2f\n", average);

    // Free the dynamically allocated memory
    free(numbers);

    return 0;
}