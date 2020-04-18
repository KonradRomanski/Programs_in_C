#include <stdio.h>
#include <math.h>


int Z5_05()
{
    int N = 0, M = 0, X = 0, sum = 0, result = 0;
    scanf_s("%d %d %d", &N, &M, &X);
    double** tab = new double*[N];
    for (int i = 0; i < N; i++) tab[i] = new double[M];

    //printf("1. data %d\n2. data %d ", N, M);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf_s("%lf", &tab[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%lf ", tab[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            //printf("%lf ", tab[j][i]);
            sum += tab[j][i];
        }
        if (sum > X) 
            result++;
        sum = 0;
        
        //printf("\n");
    }

    printf("%d", result);

    return 1;
}