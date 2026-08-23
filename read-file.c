#include <stdio.h>

int main() {

    /* Read a file */

    // 1st arg = relative or absolute file path
    FILE *p_file = fopen("input.txt", "r");

    // buffer = temporary stores the data to use later
    char buffer[1024] = {
        0}; // 1kB, clear it by initializing with 0 to not read it before ready

    if (p_file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), p_file) != NULL) {
        printf("%s", buffer);
    }

    fclose(p_file);

    return 0;
}
