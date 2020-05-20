#include <stdio.h>
#include <math.h>


int Z_67()
{
    char code[4];
    FILE* file_in;
    fopen_s(&file_in, "Z_67_in.txt", "r");

    for (int i = 0; i < 4; i++) code[i] = fgetc(file_in);

    while (feof(file_in) == 0)
    {
        for (int i = 0; i < 4; i++) printf("%c", code[i]);
        printf("\n");



        fgetc(file_in);
        for (int i = 0; i < 4; i++) code[i] = fgetc(file_in);

    }

    fclose(file_in);
    return 1;
}