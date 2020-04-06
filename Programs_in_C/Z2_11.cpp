#include <stdio.h>
#include <math.h>


int Z2_11()
{
	unsigned int alfa;
	scanf_s("%u", &alfa);

	char signs[32];

	for (int i = 31; i >= 0; i--)
	{

		if (alfa & 1)
		{
			//printf("1");
			signs[i] = '1';
		}
		else
		{
			//printf("0");
			signs[i] = '0';

		}
		alfa >>= 1;
	}


	for (int i = 0; i < 32; i++) printf("%c", signs[i]);

	bool first_one_sign = false;
	bool second = true;

	for (int i = 0; i < 32; i++)
	{
		if (first_one_sign == false && i <= 28 && signs[i] == '1' && signs[i + 1] == '0' && signs[i + 2] == '1' && signs[i + 3] == '1')
		{
			first_one_sign = true;
		}
		else if (signs[i] == '1' && first_one_sign == false)
		{
			second = false;
		}
	}
	printf("\n");
	if (first_one_sign && second) printf("TAK, wzorzec 1011 wystepuje na najstarszych pozycjach w binarnej reprezentacji liczby %d", alfa);
	else printf("NIE, wzorzec 1011 nie wystepuje na najstarszych pozycjach w binarnej reprezentacji liczby %d", alfa);
	return 1;
}