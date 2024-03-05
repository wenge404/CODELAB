#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparison function for sorting strings in ascending order
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int numNames;

    printf("Enter the number of names: ");
    scanf("%d", &numNames);
    getchar();  // Consume the newline character left in the input buffer

    char **names = (char**)malloc(numNames * sizeof(char*));
    if (names == NULL) {
        printf("Memory allocation failed. Exiting.");
        return 1;
    }

    // Input for names
    for (int i = 0; i < numNames; i++) {
        char temp[100];  // Assuming maximum length of each name is 100
        printf("Enter name %d: ", i + 1);
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = 0;  // Remove newline characters from input

        names[i] = (char*)malloc((strlen(temp) + 1) * sizeof(char));  // Allocate memory for each name
        if (names[i] == NULL) {
            printf("Memory allocation failed. Exiting.");
            return 1;
        }
        strcpy(names[i], temp);
    }

    // Sorting the names using qsort
    qsort(names, numNames, sizeof(char*), compareStrings);
    
    // Displaying the sorted names
    printf("\nSorted names:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    // Freeing allocated memory
    for (int i = 0; i < numNames; i++) {
        free(names[i]);
    }
    free(names);

    return 0;
}
