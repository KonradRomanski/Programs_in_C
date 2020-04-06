#include <stdio.h>
#include <math.h>

int Z2_5()
{
	int kierunek = 2;
	printf("Podaj kierunek konwersji (C->F/F->C = 1/0): ");
	scanf_s("%d", &kierunek);

	double temp = 0;
	printf("Podaj wartosc temperatury : ");
	scanf_s("%lf", &temp);
	double wynik = 0;

	if (kierunek == 1)
	{
		wynik = (((9 / 5.0) * temp) + 32);
		printf("%lf", wynik);
	}
	else if (kierunek == 0)
	{
		wynik = ((5 / 9.0) * (temp - 32));
		printf("%lf", wynik);
	}
	else
	{
		printf("Niepoprawne dane");
	}

	return 0;
}