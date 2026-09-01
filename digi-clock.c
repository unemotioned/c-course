#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    
    /*  DIGITAL CLOCK */
    
    time_t rawtime = 0; // time passed since: 1970 Jan 1st (Epoch)

    struct tm *p_time = NULL;
    bool is_running = true;

    printf("DIGITAL CLOCK\n\n");

    while (is_running) {
        time(&rawtime);

        // printf("%ld\n", rawtime);

        p_time = localtime(&rawtime);

        // arrow == dereference the pointer and give the hour
        // \r == carriage return: puts the cursor back to place
        printf("\r%02d:%02d:%02d", p_time->tm_hour, p_time->tm_min,
               p_time->tm_sec);

        fflush(stdout);
        sleep(1);
    }

    return 0;
}
