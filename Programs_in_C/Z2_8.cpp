#include <stdio.h>
#include <math.h>


int Z2_8()
{
	unsigned int data = 0;
	scanf_s("%d", &data);
    
    int result = 0;

    for (int i = 31; i >= 0; i--)
    {
        //printf("XDD %d\n", data);

        if (data & 1)
        {
            //printf("1");
            result++;
        }
        //else
            //printf("0");
        data >>= 1;
    }

    printf("%d", result);

	return 1;
}