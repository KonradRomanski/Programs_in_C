#include <stdio.h>
#include <math.h>

struct Pracownik
{
    char Nazwisko[32];
    double Pensja;
};

char vchar();

void opcja_R(Pracownik* TabPrac, int &pozycja)
{
    char nazwa_pliku[32] = "";
    FILE* file_in = NULL;
    Pracownik temp;


    
    while (file_in == NULL)
    {
        printf("Podaj nazwe pliku: ");
        scanf_s("%s", &nazwa_pliku, 31);
        fopen_s(&file_in, nazwa_pliku, "r");
    }

    while (!feof(file_in))
    {
        fscanf_s(file_in, "%s", &temp.Nazwisko, 31);
        fscanf_s(file_in, "%lf", &temp.Pensja);

        TabPrac[pozycja] = temp;
        pozycja++;
    }

    fclose(file_in);
}

void opcja_N(Pracownik* TabPrac, int &pozycja)
{
    Pracownik nowy = {"", 0};
    printf("Podaj Nazwisko i Pensje nowego pracownika: \n");
    scanf_s("%s", &nowy.Nazwisko, 31);
    scanf_s("%lf", &nowy.Pensja);
    TabPrac[pozycja] = nowy;
    pozycja++;
}

void opcja_W(Pracownik* TabPrac, int pozycja)
{
    printf("[Numer na liscie] Nazwisko - Pensja\n");
    for (int i = 0; i < pozycja; i++)
    {
        printf("[%d] %s - %lf\n", i + 1, TabPrac[i].Nazwisko, TabPrac[i].Pensja);
    }
}

void opcja_Z(Pracownik* TabPrac, int pozycja)
{
    char nazwa_pliku[32];
    FILE* file_out = NULL;
    Pracownik temp;

    while (file_out == NULL)
    {
        printf("Podaj nazwe pliku: ");
        scanf_s("%s", &nazwa_pliku, 31);
        fopen_s(&file_out, nazwa_pliku, "w");
    }

    for (int i = 0; i < pozycja; i++)
    {
        fprintf(file_out, "%s ", TabPrac[i].Nazwisko, 31);
        fprintf(file_out, "%lf\n", TabPrac[i].Pensja);
    }

    fclose(file_out);
}

int Z7_01()
{
    Pracownik Pracownicy[50] = {"",0};
    int ilosc = 0;
    char opcja;
    bool end = false;


    while (!end)
    {
        printf("\nPodaj symbol opcji [R/N/W/Z/K]: ");
        opcja = vchar();
        opcja &= 0x5F;

        switch (opcja)
        {
        case 'R':
        {
            opcja_R(Pracownicy, ilosc);
            break;
        }
        case 'N':
        {
            opcja_N(Pracownicy, ilosc);
            break;
        }
        case 'W':
        {
            opcja_W(Pracownicy, ilosc);
            break;
        }
        case 'Z':
        {
            opcja_Z(Pracownicy, ilosc);
            break;
        }
        case 'K':
        {
            end = true;
            break;
        }
        default:
            break;
        }

    }

    return 1;
}