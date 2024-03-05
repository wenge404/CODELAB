#include <stdio.h>

#define MAX_BATCHES 2
#define MAX_BATCH_SIZE 10

int main() {
    int batches[MAX_BATCHES][MAX_BATCH_SIZE] = {0};  // Initialize the array to zero
    int i, j, batchNumber, batchSize;

    // Taking input for the first batch
    printf("Enter the number of elements in the first batch: ");
    scanf("%d", &batchSize);

    printf("Enter batch 1 numbers separated by spaces:\n");
    for (i = 0; i < batchSize && i < MAX_BATCH_SIZE; ++i) {
        scanf("%d", &batches[0][i]);
    }

    // Taking input for the second batch
    printf("Enter the number of elements in the second batch: ");
    scanf("%d", &batchSize);

    printf("Enter batch 2 numbers separated by spaces:\n");
    for (i = 0; i < batchSize && i < MAX_BATCH_SIZE; ++i) {
        scanf("%d", &batches[1][i]);
    }

    // Displaying the contents of the two-dimensional array
    printf("\nEntered batches:\n");

    printf("Batch 1: ");
    for (i = 0; i < MAX_BATCH_SIZE; ++i) {
        if (i < batchSize) {
            printf("%d ", batches[0][i]);
        } else {
            printf("- ");
        }
    }
    printf("\n");

    printf("Batch 2: ");
    for (i = 0; i < MAX_BATCH_SIZE; ++i) {
        if (i < batchSize) {
            printf("%d ", batches[1][i]);
        } else {
            printf("- ");
        }
    }
    printf("\n");

    // Printing the two-dimensional array
    printf("\nTwo-dimensional array:\n");
    for (i = 0; i < MAX_BATCHES; ++i) {
        
        for (j = 0; j < MAX_BATCH_SIZE; ++j) {
            printf("%d ", batches[i][j]);
        }
        printf("\n");
    }

    return 0;
}