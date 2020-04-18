#include <stdio.h>
#include <math.h>
#include <string.h>


int Z3_05()
{
    char text[16][16] = { {""} };
    char exchange1[16][16] = { {""} };
    char exchange2[16][16] = { {""} };
    int i = 0;

    //reading text
    do scanf_s("%s", &text[i], 15);
    while (text[i++][0] != '@');

    //reading data to replace
    do
    {
        if (exchange1[i][0] != '@') scanf_s("%s", &exchange1[i], 15);
        if (exchange1[i][0] != '@') scanf_s("%s", &exchange2[i], 15);
    }
    while (exchange1[i++][0] != '@');

    ////showing  text array
    //for (int i = 0; i < 16; i++)
    //{
    //    for (int j = 0; j < 16; j++)
    //    {
    //        printf("%c",text[i][j]);
    //    }
    //    printf("##");
    //}

    ////showing  exchange1 array
    //printf("\n\n$$\n");
    //for (int i = 0; i < 16; i++)
    //{
    //    for (int j = 0; j < 16; j++)
    //    {
    //        printf("%c", exchange1[i][j]);
    //    }
    //    printf("##");
    //}

    ////showing  exchange2 array
    //printf("\n\n$$\n");
    //for (int i = 0; i < 16; i++)
    //{
    //    for (int j = 0; j < 16; j++)
    //    {
    //        printf("%c", exchange2[i][j]);
    //    }
    //    printf("##");
    //}

    //replacing
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (strcmp(text[i], exchange1[j]) == 0)
            {
                //for (int k = 0; k < 16; k ++) text[i][k] = exchange2[j][k];
                strcpy_s(text[i], exchange2[j]);
            }
        }
    }


    //showing text array
    //printf("\n\n\n");
    for (int i = 0; i < 16; i++)
    {
        printf("%s ", text[i]);

    }
    printf("\n");
    return 1;
}