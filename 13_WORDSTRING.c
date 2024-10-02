#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[50];
    int i, j, strLen, wordLen, count = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the string if present
    str[strcspn(str, "\n")] = 0;

    // Input the word to search for
    printf("Enter the word to search: ");
    scanf("%s", word);

    strLen = strlen(str);
    wordLen = strlen(word);

    // Loop through the string to search for the word
    for (i = 0; i <= strLen - wordLen; i++) {
        // Check if the current part of the string matches the word
        for (j = 0; j < wordLen; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }

        // If the word is found and it's surrounded by spaces or start/end of the string
        if (j == wordLen && (i == 0 || str[i - 1] == ' ') && (str[i + wordLen] == ' ' || str[i + wordLen] == '\0')) {
            count++;
        }
    }

    // Print the result
    printf("The word '%s' occurred %d times in the string.\n", word, count);

    return 0;
}
