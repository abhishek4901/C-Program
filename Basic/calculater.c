#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;
    // Input numbers
    printf("Enter 1st operands: ");
    scanf("%d", &num1);
    printf("Enter 2nd operands: ");
    scanf("%d",&num2);

    // Input operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    // Perform calculation based on the operator
    switch (operator) {
        case '+':
        result=num1+num2;
            printf("%d\n", result);
            break;
            case '-':
            printf("%d\n", num1 - num2);
            break;
            case '*':
            printf("%d\n", num1 *num2);
            break;
            case '/':
            if (num2 != 0) {
                printf("%d\n", num1 /num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            break;
    }

    return 0;
}