#include <stdio.h>

int main() {
    int arr[63] = {10, 20, 30, 40, 50}; // Array declaration
    int *ptr = arr; // Pointer pointing to the first element of the array
    // int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int sum = 0;

    // Traverse the array using the pointer
    for (int i = 0; i < 3; i++) {
        sum =  sum +(*ptr ++); // Access array elements using the pointer
    }

    // Display the result
    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}
