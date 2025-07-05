// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "hello";
//     printf("Length of string is %zu\n", strlen(str));
//     return 0;
// }
/**/
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "hello";
    char destination[20]; // Ensure the destination array is large enough to hold the source string

    // Copy the source string to the destination string
    strcpy(destination, source);

    // Print the copied string
    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}