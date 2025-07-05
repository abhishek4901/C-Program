// Function to check if a number is even or odd
// void oddeven(int n){
//     // for (int i = 0; i <= n; i++) {
//         if (n % 2 == 0){
//             printf("%d is even\n", n); // Print if the number is even
//         }else{
//         printf("%d is odd\n", n); // Print if the number is odd 
//         }}
//     int main(){
//         int n;
//         printf("Enter a number: ");
//         scanf("%d", &n);
//         oddeven(n);
//         return 0;
//     }   
    
//find out the sum and total of even, sumand total of   odd numbers from 1 to n
#include <stdio.h>
int main() {
    int a,sumeven=0,sumodd=0,counteven=0,countodd=0;
printf("enter the number");
scanf ("%d", &a);
for (int i = 0; i <= a; i++) {
        if(i%2==0){
            // printf("even number %d\n", i);
            sumeven+=i;
            counteven++;
        } else{
        // printf(" odd number %d\n", i);
        sumodd+=i;
        countodd++;
    } }
     printf("sum of even number %d\n", sumeven);
    printf("total even number %d\n", counteven);
     printf("sum of odd number %d\n", sumodd);
    printf("total odd number %d", countodd);
    return 0;
}