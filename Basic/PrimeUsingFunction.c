 //Write a program  in c by using user define function to check given number is prime or not. 
 // Porotype of function should be like this int is_prime(int
#include <stdio.h>
int is_prime(int n);// Function prototype
// Function to check if a number is prime     
int is_prime(int n) {
    if (n <= 1) return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0; // If divisible, not a prime number
    }
    return 1; // Prime number
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    // Check if the number is prime
    if (is_prime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
    return 0;
}
