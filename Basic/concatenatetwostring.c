#include <stdio.h>
#include <string.h>

void concatenateStrings(char str1[], char str2[], char result[]) {
    int i, j;

    // Copy first string to result
    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    // Append second string to result
    for (j = 0; str2[j] != '\0'; j++, i++) {
        result[i] = str2[j];
    }

    // Null-terminate the result string
    result[i] = '\0';
    printf("Concatenated String: %s\n", result);
}

int main() {
    char str1[100], str2[100], result[200];

    // Input two strings
    printf("Enter first string: ");
   
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Concatenate the strings
    concatenateStrings(str1, str2, result);

    // Output the concatenated result

    return 0;
}