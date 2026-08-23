#include <stdio.h>

// Synopsis: typedef existing_type new_name;
typedef int Number;
typedef char String[50]; // 50 bytes
typedef char Initials[3];

int main() {

    // typedef = A reserved keyword that gives an existing datatype a "neckname"
    //       helps simplify complex types and improves code readability

    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d\n", z);

    /* char name[] = "Daniel"; */
    String name = "Bro Code";
    printf("%s\n", name);

    Initials user1 = "BC";
    Initials user2 = "SS";
    Initials user3 = "PS";
    Initials user4 = "ST";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}
