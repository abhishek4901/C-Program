#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;    // p holds the address of a
    
    printf("Address of a: %p\n", &a);
    printf("Value of a through pointer p: %d\n", *p);
    
    return 0;
}
