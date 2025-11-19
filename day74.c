// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *fp, *fptr;
    char sourceFile[100], destFile[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    fp = fopen(sourceFile, "r");
    if (fp == NULL) {
        printf(" Cannot open source file\n");
        return 1;
    }

    fptr = fopen(destFile, "w");
    if (fptr == NULL) {
        printf("Cannot create destination file\n");
        fclose(fp);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, fptr);
    }

    printf("File copied");

    fclose(fp);
    fclose(fptr);

    return 0;
}
