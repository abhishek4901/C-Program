#include <stdio.h>

int main() {
    int sum;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
          sum = i+j-1;
            printf("%d ", sum);
        }
        printf("\n");
    }

    //  printf(" %c",i+64); 
    return 0;
}

    
  