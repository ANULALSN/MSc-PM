#include<stdio.h>
#include<string.h>

int main() {
    char str1[50], str2[20];
    int l1, l2, n, i;

    // Input string 1
    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character

    // Input string 2
    printf("Enter string 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character

    l1 = strlen(str1);  // Length of string 1
    l2 = strlen(str2);  // Length of string 2

    // Input the position to insert string 2 into string 1
    printf("Enter the position where string 2 is to be inserted: ");
    scanf("%d", &n);

    // Check for valid insertion position
    if(n > l1 || n < 0) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift characters in str1 to the right to make space for str2
    for(i = l1; i >= n; i--) {
        str1[i + l2] = str1[i];
    }

    // Insert str2 into str1
    for(i = 0; i < l2; i++) {
        str1[n + i] = str2[i];
    }

    // Null-terminate the result string
    str1[l1 + l2] = '\0';

    // Display the result
    printf("After inserting, the string is: %s\n", str1);

    return 0;
}
