#include <stdio.h>
#include <math.h>

void bin2hex(int *bindata, char *hexval)
{
    int decval = 0;
    int a = 1;
    char p[] = "0123456789ABCDEF";

    for (int i = 0; i < 8; i++) decval = (decval * 2) + bindata[i];

    while (decval != 0)
    {
        hexval[a] = p[decval % 16];
        decval /= 16;
        a--;
    }

}

int hex2bin()
{

    return 1;
}

int Z_67()
{
    char code[4];
    char hexcode[2] = {'0', '0'};
    int bincode[8] = {0};
    FILE* file_in;
    FILE* file_out;
    fopen_s(&file_in, "Z_67_in.txt", "r");
    fopen_s(&file_out, "Z_67_out.txt", "w");

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

        bin2hex(bincode, hexcode);

        printf("%c%c\n", hexcode[0], hexcode[1]);
        printf("\n");

        fgetc(file_in);
        for (int i = 0; i < 4; i++) code[i] = fgetc(file_in);

        if (feof(file_in) == 0) fprintf(file_out, "%c%c ", hexcode[0], hexcode[1]);
        else fprintf(file_out, "%c%c\n", hexcode[0], hexcode[1]);

    }

    fclose(file_in);
    fclose(file_out);
    return 1;
}