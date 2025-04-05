#include <stdio.h>
// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 )  // Base case
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}
int main() {
    int n;//variabme different no matter
    printf("Enter a number: ");
    scanf("%d", &n);
     if ( n>0)
     printf("Factorial = %d\n", factorial(n)); // Function call
 else
     printf("Factorial is not defined for negative numbers.\n");
    return 0;
}


/*
#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of is: %d",fact);    
return 0;  
}   */ 