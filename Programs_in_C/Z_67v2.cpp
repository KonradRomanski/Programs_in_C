#include <stdio.h>
#include <string.h>


char rechar()
{
    char cc;
    while ((cc = getchar()) <= ' ');
    return cc;
}

int Z_67v2()
{
    unsigned char byte;
    int byte2;
    char code[4] = { 'A', 'A', 'A', 'A' };
    FILE* file_in = NULL;
    FILE* file_out = NULL;
    char data[32];
    char result[32];
    char opcja = ' ';
    bool ok = true;

    while (!(opcja == 'K' || opcja == 'D') && opcja != 'W')
    {
        ok = true;
        printf("Wybierz opcje kodowanie/dekodowanie/wyjscie [k/d/w]: ");
        opcja = rechar();
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
                    fclose(file_in);
                    opcja = 'A';
                }
                else
                {
                    fopen_s(&file_out, result, "w");
                    ok = true;
                }
            }
        }

        if (ok)
        {
            switch (opcja)
            {
            case 'K':
            {
                printf("CODE - HEX\n-----------\n");

                for (int i = 0; i < 4; i++) code[i] = fgetc(file_in);
                while (feof(file_in) == 0)
                {


                    byte = 0;
                    for (int i = 0; i < 4; i++)
                    {
                        byte <<= 2;
                        switch (code[i])
                        {
                        case 'A': break;
                        case 'C': byte |= 1; break;
                        case 'G': byte |= 2; break;
                        case 'T': byte |= 3; break;
                        }
                    }


                    for (int i = 0; i < 4; i++) printf("%c", code[i]); printf(" - ");
                    printf("%.2X\n", byte);

                    fgetc(file_in);
                    for (int i = 0; i < 4; i++) code[i] = fgetc(file_in);

                    if (feof(file_in) == 0) fprintf(file_out, "%.2X ", byte);
                    else fprintf(file_out, "%.2X\n", byte);
                }
                fclose(file_in);
                fclose(file_out);
                break;
            }
            case 'D':
            {
                printf("HEX - CODE\n-----------\n");

                byte2 = 0;
                fscanf_s(file_in, "%X", &byte2);
                fgetc(file_in);
                while (feof(file_in) == 0)
                {
                    printf("%.2X - ", byte2);
                    for (int i = 3; i >=0; i--)
                    {
                        switch (byte2 & 0x3)
                        {
                        case 0: code[i] = 'A'; break;
                        case 1: code[i] = 'C'; break;
                        case 2: code[i] = 'G'; break;
                        case 3: code[i] = 'T'; break;
                        }
                        byte2 >>= 2;

                    }

                    for (int i = 0; i < 4; i++) printf("%c", code[i]); printf("\n");

                    for (int i = 0; i < 4; i++) fprintf(file_out, "%c", code[i]);
                    fprintf(file_out, "\n");

                    byte2 = 0;
                    fscanf_s(file_in, "%X", &byte2);
                    fgetc(file_in);
                }

                fclose(file_in);
                fclose(file_out);

                break;
            }
            case 'W': break;
            default:
            {
                printf("Wybrano bledna opcje :( , sprobuj jeszcze raz\n\n");
                break;
            }
            }
        }
    }

    printf("Konczenie pracy programu...\n");
    return 1;
}