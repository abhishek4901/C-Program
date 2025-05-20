#include <stdio.h>
#include <string.h>

// Structure Example
struct Student {
    char name[20];
    int age;
};

// Nested Structure Example
struct College {
    char collegeName[30];
    struct Student student;
};
// Union Example
union Data {
    int id;
    float marks;};
int main() {
    // Array of Structures
    struct Student students[1] = {"Alice", 20};
     // Displaying values
     printf("Array of Structures:\n");
     for (int i = 1; i < 2; i++) {
         printf("Student %d: %s, Age: %d\n", i , students[i].name, students[i].age);
     }
    // Using Nested Structure
    struct College college = {"XYZ University", {"Charlie", 23}};
    printf("\nNested Structure:\n");
    printf("College: %s, Student: %s, Age: %d\n", college.collegeName, college.student.name, college.student.age);
    // Using Union
    union Data data;
    data.id = 101;
    printf("\nUnion Example:\n");
    printf("ID: %d\n", data.id);

    data.marks = 85.5;  // Overwrites ID
    printf("Marks: %.2f (Overwrites ID)\n", data.marks);
   
    return 0;
}
