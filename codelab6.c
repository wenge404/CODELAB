#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to extract the third letters of the input string
char* extractThirdLetters(const char* input) {
    if (strlen(input) < 3) {
        printf("Error: The input text is too short to extract the third letters.\n");
        return NULL;
    }

    int numThirdLetters = strlen(input) / 3 + (strlen(input) % 3 ? 1 : 0);
    char* thirdLetters = (char*)malloc(numThirdLetters + 1);

    if (thirdLetters == NULL) {
        printf("Error: Memory allocation failed.\n");
        return NULL;
    }

    int thirdLetterIndex = 0;
    for (int i = 2; input[i] != '\0'; i += 3) {
        thirdLetters[thirdLetterIndex++] = input[i];
    }
    thirdLetters[thirdLetterIndex] = '\0';

    return thirdLetters;
}

int main() {
    char input[100];

    printf("Enter a text: ");
    fgets(input, sizeof(input), stdin);

    char* thirdLetters = extractThirdLetters(input);

    if (thirdLetters != NULL) {
        printf("The third letters of the text are: %s\n", thirdLetters);
        free(thirdLetters); // Freeing the allocated memory
    }

    return 0;
}
