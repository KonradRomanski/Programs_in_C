#include <stdio.h>
#include <math.h>


int Z3_5()
{
    char tekst[16][16] = { {"0"} };
    int i = 0;

    do scanf_s("%s", tekst[i], 15);
    while (tekst[i++][0] != '@');

    return 1;
}