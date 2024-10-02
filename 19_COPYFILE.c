#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destFile;
    char ch;

    // Check if the number of arguments is correct
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    // Open the source file in read mode
    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s.\n", argv[1]);
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(argv[2], "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file %s.\n", argv[2]);
        fclose(sourceFile);
        return 1;
    }

    // Copy the content from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
