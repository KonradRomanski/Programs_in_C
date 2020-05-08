#include <stdio.h>
#include <math.h>

#define pq 4

struct pomiar
{
    int numer;
    double pomiar[pq];
    int kod_sposobu_przetwarzania;
};

double O1(pomiar data)
{
    double result = 0;

    for (int i = 0; i < pq; i++)
    {
        result += data.pomiar[i];
    }

    result /= pq;

    return result;
}

double O2(pomiar data)
{
    double result = -999999;

    for (int i = 0; i < pq; i++) if (data.pomiar[i] > result) result = data.pomiar[i];

    return result;
}

double O3(pomiar data)
{
    double result = 999999;

    for (int i = 0; i < pq; i++) if (data.pomiar[i] < result) result = data.pomiar[i];

    return result;
}

double (*f_table[])(pomiar) = {O1, O2, O3};

int Z7_08()
{
    FILE* file_in;
    FILE* file_out;
    fopen_s(&file_in, "Pomiary.txt", "r");
    fopen_s(&file_out, "Wyniki.txt", "w");
    pomiar temporary;
    int quantity = fgetc(file_in) - 48;
    //printf("%d\n\n", quantity);
    fprintf(file_out, "%d\n", quantity);
    while (quantity > 0)
    {
        fscanf_s(file_in, "%d", &temporary.numer);
        for (int j = 0; j < pq; j++)
        {
            fscanf_s(file_in, "%lf", &temporary.pomiar[j]);
        }
        fscanf_s(file_in, "%d", &temporary.kod_sposobu_przetwarzania);

        //printf("%d\n", temporary.numer);
        //for (int j = 0; j < pq; j++)
        //{
        //    printf("%lf\n", temporary.pomiar[j]);
        //}
        //printf("%d\n\n", temporary.kod_sposobu_przetwarzania);

        fprintf(file_out, "%d\n%lf\n%d\n", temporary.numer, f_table[temporary.kod_sposobu_przetwarzania](temporary) , temporary.kod_sposobu_przetwarzania);
        quantity--;
    }

    fclose(file_in);
    fclose(file_out);
    return 1;
}