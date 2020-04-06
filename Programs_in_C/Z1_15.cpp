
#include <stdio.h>
#include <math.h>

int Z1_15()
{
	double T = 0;
	double x = 0;
	double y = 0;
	scanf_s("%lf", &x);
	scanf_s("%lf", &y);
	x -= 5;
	y -= 3;
	if (x > 0 && y > 0)
	{
		T = (log(x) + 1) / (sqrt(y));
		printf("%lf", T);
	}
	else
	{
		printf("Brak rozwiazania");
	}
	return 0;
}
