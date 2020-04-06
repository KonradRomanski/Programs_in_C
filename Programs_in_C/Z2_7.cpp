#include <stdio.h>
#include <math.h>

int Z2_7()
{
	double x = 0;
	int numer = 7;

	do
	{
		printf("Podaj liczbe: ");
		scanf_s("%lf", &x);
		printf("Podaj numer funkcji: ");
		scanf_s("%d", &numer);

		switch (numer)
		{
		case 0:
		{
			printf("%lf\n", sin(x));
		}
		break;

		case 1:
		{
			if ((x / (asin(1) / 2)) != int(x / (asin(1) / 2)))
			{
				printf("%lf\n", tan(x));
			}
			else
			{
				printf("Blad\n");
			}
		}
		break;

		case 2:
		{
			if (x > -1 && x < 1)
			{
				printf("%lf\n", asin(x));
			}
			else
			{
				printf("Blad\n");
			}
		}
		break;

		case 3:
		{
			if (x >= 0)
			{
				printf("%lf\n", sqrt(x));
			}
			else
			{
				printf("Blad\n");
			}
		}
		break;

		case 4:
		{
			if (x > 0)
			{
				printf("%lf\n", log(x));
			}
			else
			{
				printf("Blad\n");
			}
		}
		break;

		case 5:
		{
			if (x != 0)
			{
				printf("%lf\n", 1 / x);
			}
			else
			{
				printf("Blad\n");
			}
		}
		break;

		case 6:
		{
			printf("%lf\n", x * x);
		}
		break;
		}
	} while (numer == 0 || numer == 1 || numer == 2 || numer == 3 || numer == 4 || numer == 5 || numer == 6);

	return 0;
}