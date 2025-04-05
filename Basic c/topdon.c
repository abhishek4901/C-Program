#include <stdio.h>

// Top-down approach: Recursive summing
int sum_top_down(int arr[], int n) {
    if (n == 0) {
        return 0;  // Base case: empty list sums to 0
    } else {
        return arr[0] + sum_top_down(arr + 1, n - 1);  // Add first element and recurse on the rest
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum using top-down approach: %d\n", sum_top_down(arr, n));
    return 0;
}
