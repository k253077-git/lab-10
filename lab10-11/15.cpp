#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *file3;
    char ch;

    file1 = fopen("f1.txt", "r");
    file2 = fopen("f2.txt", "r");
    file3 = fopen("f3.txt", "w");

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

    printf("Files merged successfully");
    
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}

