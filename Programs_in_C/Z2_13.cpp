#include <stdio.h>
#include <math.h>


int Z2_13()
{
	char tab[16];

	while (tab[0] != 'B' && tab[0] != 'D') scanf_s("%s", tab, 15);

	int i = 1;
	unsigned int wartosc = 0;
	while (tab[i] != 0)
	{
		if (tab[0] == 'D') wartosc = wartosc * 10 + tab[i] - '0';
		if (tab[0] == 'B') wartosc = wartosc * 2 + tab[i] - '0';
		i++;
	}


	char signs[32];
	if (tab[0] == 'D')
	{
		for (int i = 31; i >= 0; i--)
		{

			if (wartosc & 1)
			{
				//printf("1");
				signs[i] = '1';
			}
			else
			{
				//printf("0");
				signs[i] = '0';

			}
			wartosc >>= 1;
		}
	}
	unsigned int dzielnik = 1000000000;
	char znak;


	if (tab[0] == 'D') for (int i = 0; i < 32; i++) printf("%c", signs[i]);
	else if (tab[0] == 'B')
	{
		while (wartosc > 0)
		{
			znak = wartosc / dzielnik + '0';
			wartosc %= dzielnik;
			dzielnik /= 10;
			printf("%c", znak);
		}
	}

	return 1;
}