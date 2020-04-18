#include <stdio.h>
#include <math.h>

struct Zodiak
{
    char nazwa [16];
    int dzien;
}
Dane[] =
{ {"Wodnik", 20},
    {"Ryby", 19},
    {"Baran", 21},
    {"Byk", 20},
    {"Bliźnięta", 21},
    {"Rak", 21},
    {"Lew", 23},
    {"Panna", 23},
    {"Waga", 23},
    {"Skorpion", 23},
    {"Strzelec", 22},
    {"Koziorożec", 22} };

int Z6_09()
{
    int day, month;
    scanf_s("%d %d", &day, &month);
    month--;

    if (day < Dane[month].dzien) month--;

    if (month == -1) month = 11;

    printf("Twoj znak zodiaku: %s", Dane[month].nazwa);

    return 1;
}