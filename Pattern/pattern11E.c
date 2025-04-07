#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            // Print 1 if (i + j) is even, else 0
            if((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
