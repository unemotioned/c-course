#include <stdio.h>
#include <stdlib.h>

int main() {

    // calloc() = Contiguous Allocation
    //            Allocates memory dynamically, sets all allocated bytes to 0.
    //            malloc() is faster, but calloc() leads to less bugs

    //            malloc(bytes)
    //            calloc(#, size)

    int number = 0;

    printf("Enter the number of players: ");
    scanf("%d", &number);

    // will contain garbage values since it's not cleared
    // int *scores = malloc(number * sizeof(int));
    int *scores = calloc(number, sizeof(int));

    if (scores == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < number; i++) {
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;

    return 0;
}
