#include <stdio.h>

int main() {
    // 2nd arg "w" == write mode
    FILE *p_file = fopen("output.txt", "w");

    char text[] = "Tities are the men's best friend.\nFoobar.";

    if (p_file == NULL) {
        printf("Error opening file\n");

        return 1; // returning none 0 value means error
    }

    fprintf(p_file, "%s", text);
    printf("File was written successfully\n");

    // if not closed other program won't be able to edit
    fclose(p_file);

    return 0;
}
