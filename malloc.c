#include <stdio.h>
#include <stdlib.h>

int main() {

    // malloc() = A function in C that dynamically allocates a specified number
    //            of bytes from HEAP memory

    // char grades[5] = {0}; // fixed size array

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char)); // bytes

    // segmentation fault = try to access  not allowed
    if (grades == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter grade #%d: ", i + 1);

        // space before taking input to ignore new-line char or whitespace
        scanf(" %c", &grades[i]);
    }

    for (int i = 0; i < number; i++) {
        printf("%c ", grades[i]);
    }

    free(grades);  // returning the rented space from HEAP to OS
    grades = NULL; // aovids dangling pointers by resetting pointer

    return 0;
}
