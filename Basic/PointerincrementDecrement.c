#include <stdio.h>

int main() {
    float arr[] = {1.5, 2.5, 30.5, 4.5, 5.5};
    float *ptr = arr;  // Pointer to the first element of the array

    // Pointer increment (move to next element)
    printf("Original Value: %.2f\n", *ptr);
    ptr++; // Increment the pointer
    printf("After Increment: %.2f\n", *ptr);

    // Pointer decrement (move to previous element)
    ptr--; // Decrement the pointer
    printf("After Decrement: %.2f\n", *ptr);

    // Pointer addition (add a certain number of elements)
     // Reset pointer to start
    ptr = ptr + 2; // Move pointer 2 positions ahead
    printf("After Adding 2: %.2f\n", *ptr);

    // Pointer subtraction (subtract a certain number of elements)
    // Pointer at the 5th element
    ptr = ptr - 1; // Move pointer 1 position back
    printf("After Subtracting 1: %.2f\n", *ptr);

    return 0;
}
