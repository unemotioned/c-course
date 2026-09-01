#include <stdio.h>

// first value starts with 0 by default
typedef enum {
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;

typedef enum {
    SUCCESS,
    FAILURE,
    PENDING
} Status;

// function prototype: if the function is declared after the main function
void connect_status(Status status);

int main() {

    // enum == A user-defined data type that consists
    //         of a set of named integer constants
    //         Benefit: Replaces numbers with readable names

    Day today = TUESDAY;
    // printf("%d\n", today);
    if (today == SUNDAY || today == SATURDAY) {
        printf("It's the weekend\n");
    } else {
        printf("It's a weekday\n");
    }

    Status status = PENDING;

    connect_status(status);

    return 0;
}

void connect_status(Status status) {
    switch (status) {
    case SUCCESS:
        printf("Connection was successful\n");
        break;
    case FAILURE:
        printf("Could not connect\n");
        break;
    case PENDING:
        printf("Connecting ...\n");
        break;
    }
}
