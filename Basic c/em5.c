#include <stdio.h>
#include <string.h>

// Define a structure for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[5]; // Array to store details of 5 employees

    // Input employee details
    printf("Enter details of 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i+1 );
        printf("ID: ");
        scanf("%d", &employees[i].id);
        getchar();  // Consume newline left by scanf()

        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = 0; // Remove newline character

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display employee details
    printf("\nEmployee Details:\n");
    // printf("-----------------------------------------\n");
    printf("ID\tName\t\t\tSalary\n");
    // printf("-----------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t%-20s%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    return 0;
}
