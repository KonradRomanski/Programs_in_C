#include <stdio.h>
#include <string.h>

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
    FILE* file_in = NULL;
    FILE* file_out = NULL;
    char data[32];
    char result[32];
    char opcja = ' ';
    char letter[2];
    bool ok = true;

    while (!(opcja == 'K' || opcja == 'D') && opcja != 'W')
    {
        ok = true;
        printf("Wybierz opcje kodowanie/dekodowanie/wyjscie [k/d/w]: ");
        opcja = rchar();
        opcja &= 0x5F;
        if (opcja == 'K' || opcja == 'D')
        {
            ok = false;
            printf("Wpisz nazwe pliku wejsciowego: ");
            scanf_s("%s", &data, 32);
            fopen_s(&file_in, data, "r");

            if (file_in == NULL)
            {
                printf("Plik o nazwie  %s  nie istnieje lub jest pusty, sprobuj jeszcze raz\n\n", data);
                opcja = 'A';
            }
            else
            {
                printf("Wpisz nazwe pliku wyjsciowego: ");
                scanf_s("%s", &result, 32);
                if (strcmp(data, result) == 0)
                {
                    printf("Nazwy pliku wejsciowego i wyjsciowego musza byc rozne, sprobuj jeszcze raz\n\n");
                    opcja = 'A';
                }
                else
                {
                    fopen_s(&file_out, result, "w");
                    ok = true;
                }

            }
        }

        //fopen_s(&file_in, "w", "r");
        //fopen_s(&file_out, "w", "w");


        if (ok)
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
                fclose(file_in);
                fclose(file_out);
                break;
            }
            case 'D':
            {
                for (int i = 0; i < 2; i++) hexcode[i] = fgetc(file_in);
                fgetc(file_in);
                while (feof(file_in) == 0)
                {
                    hex2bin(hexcode, bincode);

                    for (int i = 0; i < 4; i++)
                    {
                        letter[0] = bincode[i * 2];
                        letter[1] = bincode[(i * 2) + 1];

                        switch (letter[0])
                        {
                        case 0:
                        {
                            switch (letter[1])
                            {
                            case 0:
                            {
                                code[i] = 'A';
                                break;
                            }
                            case 1:
                            {
                                code[i] = 'C';
                                break;
                            }
                            }
                            break;
                        }
                        case 1:
                        {
                            switch (letter[1])
                            {
                            case 0:
                            {
                                code[i] = 'G';
                                break;
                            }
                            case 1:
                            {
                                code[i] = 'T';
                                break;
                            }
                            }
                            break;
                        }
                        }
                    }

                    printf("Hexcode: ");
                    for (int i = 0; i < 2; i++) printf("%c", hexcode[i]); printf("\n");
                    printf("Bincode: ");
                    for (int i = 0; i < 8; i++) printf("%d", bincode[i]); printf("\n");
                    for (int i = 0; i < 4; i++) printf("%c", code[i]); printf("\n");
                    printf("----\n");

                    for (int i = 0; i < 4; i++) fprintf(file_out, "%c", code[i]);
                    fprintf(file_out, "\n");

                    for (int i = 0; i < 2; i++) hexcode[i] = fgetc(file_in);
                    fgetc(file_in);
                }

                fclose(file_in);
                fclose(file_out);

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
        }

    }
    return 1;
}