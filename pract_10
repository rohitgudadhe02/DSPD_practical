#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile == NULL) {
        printf("Cannot open input file\n");
        return 1;
    }

    if(outputFile == NULL) {
        printf("Cannot create output file\n");
        fclose(inputFile);
        return 1;
    }

    while((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);
    }

    printf("File copied successfully\n");

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
