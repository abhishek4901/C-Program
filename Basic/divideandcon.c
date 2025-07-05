#include <stdio.h>

// Divide and Conquer approach: Recursive sum of array
int sum(int arr[], int left, int right) {
    if (left > right) {
        return 0; // Base case: No elements to sum
    }
    if (left == right) {
        return arr[left]; // Base case: One element, return it
    }
    // Divide: Find the middle index
    int mid = (left + right) / 2;
    
    // Conquer: Sum the left half and right half
    int left_sum = sum(arr, left, mid);
    int right_sum = sum(arr, mid + 1, right);
    
    // Combine: Return the sum of both halves
    return left_sum + right_sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the divide and conquer function to sum the array
    int result = sum(arr, 0, n - 1);
    
    printf("Sum of array elements: %d\n", result);
    return 0;
}
