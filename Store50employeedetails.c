//Write a C program to store employee details such as Empid, Name, Salary and Age
#include <stdio.h>
#include <string.h>

// Defining structure for employee details
struct Employee {
    int empid;
    char name[50];
    float salary;
    int age;
};

int main() {
    struct Employee employees[50];  // Array for 50 employees

    // Input employee details
    for (int i = 1; i < =50; i++) {  // Loop for 50 employees
        printf("Enter details for employee %d\n", i);
        printf("Empid: ");
        scanf("%d", &employees[i].empid);
       printf("Name: ");
scanf(" %[^\n]", employees[i].name);// Remove newline character from name
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("\n");
    }

    // Display employee details who have salary more than 15000
    printf("Employees with salary more than 15000:\n");
    for (int i = 1; i <= 50; i++) {
        if (employees[i].salary > 15000) {
            printf("Empid: %d\n", employees[i].empid);
            printf("Name: %s\n", employees[i].name);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("Age: %d\n\n", employees[i].age);
        }
    }

    return 0;
}
