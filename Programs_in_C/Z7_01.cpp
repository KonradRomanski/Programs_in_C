#include <stdio.h>
#include <math.h>

struct Pracownik
{
    char Nazwisko[32];
    int Pensja;
};

char vchar();

void opcja_N(Pracownik* TabPrac, int pozycja)
{
    Pracownik nowy = {"", 0};
    printf("Podaj Nazwisko i Pensje nowego pracownika: \n");
    scanf_s("%s", &nowy.Nazwisko, 31);
    scanf_s("%d", &nowy.Pensja);
    TabPrac[pozycja] = nowy;
}

void opcja_W(Pracownik* TabPrac, int ilosc)
{
    printf("[Numer na liscie] Nazwisko - Pensja\n");
    for (int i = 0; i < ilosc; i++)
    {
        printf("[%d] %s - %d\n", i + 1, TabPrac[i].Nazwisko, TabPrac[i].Pensja);
    }
}

int Z7_01()
{
    Pracownik Pracownicy[50] = {"",0};
    int ilosc = 0;
    char opcja;
    bool end = false;


    while (!end)
    {
        printf("\nPodaj symbol opcji: \n");
        opcja = vchar();
        opcja &= 0x5F;

        switch (opcja)
        {
        case 'R':
        {
            break;
        }
        case 'N':
        {
            opcja_N(Pracownicy, ilosc);
            ilosc++;
            break;
        }
        case 'W':
        {
            opcja_W(Pracownicy, ilosc);
            break;
        }
        case 'Z':
        {
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