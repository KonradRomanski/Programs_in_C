#include <stdio.h>

void bin2hex(int *bindata, char *hexval)
{
    int decval = 0;
    int a = 1;
    char p[] = "0123456789ABCDEF";

    for (int i = 0; i < 8; i++) decval = (decval * 2) + bindata[i];

    while (decval != 0)
    {
        hexval[a--] = p[decval % 16];
        decval /= 16;
    }

}

void hex2bin(char *hexval, int *bindata)
{
    int a = 7;
    int b = 0;
    for (int i = 0; i < 2; i++)
    {
        if (hexval[i] < '9') b = b * 16 + int(hexval[i] - '0');
        else b = b * 16 + int(hexval[i] - 'A' + 10);
    }
    //printf("WYNIK: %d\n", b);

    while (b != 0)
    {
        bindata[a] = (b % 2 == 0 ? 0 : 1);
        b /= 2;
        a--;
    }
}

char rchar()
{
    char cc;
    while ((cc = getchar()) <= ' ');
    return cc;
}

int Z_67()
{
    char code[4];
    char hexcode[2] = {'0', '0'};
    int bincode[8] = {0};
    FILE* file_in;
    FILE* file_out;
    char data[32];
    char result[32];
    char opcja = ' ';

    while (!(opcja == 'K' || opcja == 'D') && opcja != 'W')
    {
        printf("Wybierz opcje kodowanie/dekodowanie/wyjscie [k/d/w]: ");
        opcja = rchar();
        opcja &= 0x5F;
        if (opcja == 'K' || opcja == 'D')
        {
            printf("Wpisz nazwe pliku wejsciowego: ");
            scanf_s("%s", &data, 32);
            printf("Wpisz nazwe pliku wyjsciowego: ");
            scanf_s("%s", &result, 32);

        }

        fopen_s(&file_in, "Z_67_out.txt", "r");
        fopen_s(&file_out, "Z_67_out2.txt", "w");

        //fopen_s(&file_in, data, "r");
        //fopen_s(&file_out, result, "w");

        if (file_in == NULL && (opcja == 'K' || opcja == 'D'))
        {
            printf("Plik o nazwie  %s  nie istnieje, sprobuj jeszcze raz\n\n", data);
            opcja = 'A';
        }
        else
        {
            switch (opcja)
            {
            case 'K':
            {
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

                    for (int i = 0; i < 4; i++) printf("%c", code[i]); printf("\n");
                    for (int i = 0; i < 8; i++) printf("%d", bincode[i]); printf("\n");

                    bin2hex(bincode, hexcode);

                    printf("%c%c\n", hexcode[0], hexcode[1]); printf("\n");

                    fgetc(file_in);
                    for (int i = 0; i < 4; i++) code[i] = fgetc(file_in);

                    if (feof(file_in) == 0) fprintf(file_out, "%c%c ", hexcode[0], hexcode[1]);
                    else fprintf(file_out, "%c%c\n", hexcode[0], hexcode[1]);

                }

                break;
            }
            case 'D':
            {
                for (int i = 0; i < 2; i++) hexcode[i] = fgetc(file_in);
                fgetc(file_in);
                while (feof(file_in) == 0)
                {
                    hex2bin(hexcode, bincode);

                    printf("Hexcode: ");
                    for (int i = 0; i < 2; i++) printf("%c", hexcode[i]); printf("\n");
                    printf("Bincode: ");
                    for (int i = 0; i < 8; i++) printf("%d", bincode[i]); printf("\n");
                    printf("----\n");

                    for (int i = 0; i < 2; i++) hexcode[i] = fgetc(file_in);
                    fgetc(file_in);
                }

                break;
            }
            case 'W':
            {
                printf("Konczenie pracy programu...\n");
                break;
            }
            default:
            {
                printf("Wybrano bledna opcje :( , sprobuj jeszcze raz\n\n");
                break;
            }
            }

            if (file_in != NULL)
            {
                fclose(file_in);
                fclose(file_out);
            }
        }
    }




    return 1;
}