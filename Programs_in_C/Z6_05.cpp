#include <stdio.h>
#include <math.h>

char vchar();

double Op1(double* TT, int n)
{
    double max = -99999;

    for (int i = 0; i < n; i++)
    {
        if (TT[i] > max) max = TT[i];
    }

    return max;
}

double Op2(double* TT, int n)
{
    double min = 99999;

    for (int i = 0; i < n; i++)
    {
        if (TT[i] < min) min = TT[i];
    }

    return min;
}

double Op3(double* TT, int n)
{
    double avg = 0;

    for (int i = 0; i < n; i++)
    {
        avg += TT[i];
    }

    return avg/n;
}


double(*TF[])(double*, int) = { Op1, Op2, Op3 }; // typ wyniku i sygnatura


int Z6_05()
{
	int opcja = 0, n = 0;

    printf("Podaj rozmiar tablicy: ");
    scanf_s("%d", &n);

    double* TT = new double[n];

    for (int i = 0; i < n; i++)
    {
        printf("[%d] element tablicy: ", i);
        scanf_s("%lf", &TT[i]);
    }

    printf("Wybierz opcje (0/1/2): ");
    scanf_s("%d", &opcja);

    //for (int i = 0; i < n; i++)
    //{
    //    printf("[%d] element tablicy: %lf\n", i, TT[i]);
    //}

    while (opcja >= 0 && opcja <= 2)
    {
        //printf("opcja %d, rozmiar %d\n", opcja, n);

        if (opcja >= 0 && opcja <= 2) printf("Wynik: %lf\n", TF[opcja](TT, n));

        printf("Wybierz opcję (0/1/2): ");
        scanf_s("%d", &opcja);
    }

    printf("Koniec programu :)");


    return 1;
}