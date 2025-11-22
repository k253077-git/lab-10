#include <stdio.h>
#include <time.h>

int main() {
    FILE *file;
    char filename[] = "log.txt";

    // Open file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Cannot open file %s\n", filename);
        return 1;
    }

    // Get current time
    time_t t;
    struct tm *tm_info;
    time(&t);
    tm_info = localtime(&t);

    // Format time as HH:MM:SS
    fprintf(file, "Program executed at: %02d:%02d:%02d\n",
            tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);

    fclose(file);

    printf("Execution time added to '%s'\n", filename);

    return 0;
}

