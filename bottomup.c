#include <stdio.h>

// Bottom-up approach: Iterative summing
int sum_bottom_up(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total = total+ arr[i];  // Add each element to the total
    }
    return total;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum using bottom-up approach: %d\n", sum_bottom_up(arr, n));
    return 0;
}
