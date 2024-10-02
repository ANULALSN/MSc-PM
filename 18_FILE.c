#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // Writing to a file
    file = fopen("example.txt", "w");  // Open file in write mode
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter some text to write to the file: ");
    fgets(text, sizeof(text), stdin);  // Read input from user

    fprintf(file, "%s", text);  // Write the text to the file
    fclose(file);  // Close the file after writing
    printf("Text written to file successfully.\n");

    // Reading from a file
    file = fopen("example.txt", "r");  // Open file in read mode
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Reading from the file:\n");
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);  // Print the content of the file
    }

    fclose(file);  // Close the file after reading

    return 0;
}
