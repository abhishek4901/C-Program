#include <stdio.h> 
int callByValue(int a, int b) // Function using Call by Value
{
return a + b;
}

void callByReference(int *a, int *b, int *sum)// Function using Call by Reference
{
    *sum = *a + *b;  // Directly modifying sum using pointers
}
int main() {
    int num1, num2, result1, result2;
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result1 = callByValue(num1, num2);// Call by Value
    printf("Sum using Call by Value: %d\n", result1);
    
    printf("Sum using Call by Reference: %d\n", result2);
    callByReference(&num1, &num2, &result2);   // Call by Reference
    return 0;
}
