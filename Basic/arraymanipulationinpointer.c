#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        *(ptr + i) = *(ptr + i) * 2; // Double each element using pointer
        printf("%d ", *(ptr + i));   // Print each element
                                     // Print modified array
    }
    return 0;
}
