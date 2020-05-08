#include <stdio.h>
#include <math.h>


int Z7_11()
{
    int TL[26] = { 0 };
    int max_quantity = 0;
    FILE* file_in;
    fopen_s(&file_in, "Eden.txt", "r");

    char temp_data;
    double temp_number;

    while (feof(file_in) == 0)
    {
        temp_data = fgetc(file_in);

        if (int(temp_data & 0x5F) >= 65 && int(temp_data & 0x5F) <= 90)
        {
            //printf("%d,%c|", int(temp_data & 0x5F) - 65, temp_data & 0x5F);
            TL[int(temp_data & 0x5F) - 65]++;
            max_quantity++;
        }

    }

    for (int i = 0; i < 26; i++)
    {
        //printf("Number of occurrences of the '%c' character: %d\n", char(i + 65 + 32), TL[i]);
        temp_number = (TL[i] / double(max_quantity)) * 100;
        printf("%c : %7d => %1.2lf%s\n", char(i + 65 + 32), TL[i], temp_number, "%");
    }

    printf("sum: %d\n", max_quantity);
    printf("\n");

    for (int i = 0; i < 26; i++)
    {
        //printf("Number of occurrences of the '%c' character: %d\n", char(i + 65 + 32), TL[i]);
        temp_number = (TL[i] / double(max_quantity)) * 1000;
        printf("%c | ", char(i + 65 + 32));
        for (int j = 0; j < temp_number; j++) printf("*");
        printf("\n");
    }

    fclose(file_in);
    return 1;
}