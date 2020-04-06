#include <stdio.h>
#include <math.h>


int Test_1()
{
    double H[100][100];
    int W, K, i, j;
    printf("Podaj W i K (mniejsze od 50):\n");
    scanf_s("%d\n%d", &W, &K);
    
    for (i = 0; i < W; i++) {
        for (j = 0; j < K; j++) {
            printf("Podaj %d%d: ", i, j);
            scanf_s("%lf", &H[i][j]);
        }
    }
    double max;
    for (j = 0; j < K; j++) {
        max = H[0][j];
        for (i = 0; i < W; i++) {

            if (max < H[i][j]) {
                printf("%lf", H[i][j]);
                max = H[i][j];
            }
        }
        printf("\nMaksymalna liczba w kolumnie %d to %lf", j, max);
    }

    return 1;
}