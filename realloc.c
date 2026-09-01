#include <stdio.h>
#include <stdlib.h>

int main() {

    // realloc() == Reallocation.
    //              Resize previously allocated memory
    //              realloc(ptr, bytes)

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if (prices == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    /* Change amount or prices with realloc() */

    int new_number = 0;

    printf("Enter a new number of prices: ");
    scanf("%d", &new_number);

    float *temp = realloc(prices, new_number * sizeof(float));

    if (temp == NULL) {
        printf("Failed to reallocate memory!\n");
        // return 1; // will lose the previous data
    } else {
        // points to new mem addr
        prices = temp;

        // if new_number is smaller the it will print number of prices starting
        // from front
        for (int i = number; i < new_number; i++) {
            printf("Enter price #%d: ", i + 1);
            scanf("%f", &prices[i]);
        }

        for (int i = 0; i < new_number; i++) {
            printf("$%.2f ", prices[i]);
        }
    }

    free(prices);
    prices = NULL;

    return 0;
}
