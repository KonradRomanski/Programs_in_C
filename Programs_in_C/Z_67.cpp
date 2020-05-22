#include <stdio.h>
#include <math.h>

int bin2hex()
{

    return 1;
}

int hex2bin()
{

    return 1;
}

int Z_67()
{
    char code[4];
    int bincode[8] = {0};
    FILE* file_in;
    fopen_s(&file_in, "Z_67_in.txt", "r");

    for (int i = 0; i < 4; i++) code[i] = fgetc(file_in);

    while (feof(file_in) == 0)
    {


        for (int i = 0; i < 4; i++)
        {
            switch (code[i])
            {
            case 'A':
            {
                bincode[i * 2] = 0;
                bincode[(i * 2) + 1] = 0;
                break;
            }
            case 'C':
            {
                bincode[i * 2] = 0;
                bincode[(i * 2) + 1] = 1;
                break;
            }
            case 'G':
            {
                bincode[i * 2] = 1;
                bincode[(i * 2) + 1] = 0;
                break;
            }
            case 'T':
            {
                bincode[i * 2] = 1;
                bincode[(i * 2) + 1] = 1;
                break;
            }
            }
        }

        for (int i = 0; i < 4; i++) printf("%c", code[i]);
        printf("\n");
        for (int i = 0; i < 8; i++) printf("%d", bincode[i]);
        printf("\n");

        fgetc(file_in);
        for (int i = 0; i < 4; i++) code[i] = fgetc(file_in);

    }

    fclose(file_in);
    return 1;
}