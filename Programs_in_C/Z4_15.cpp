#include <stdio.h>
#include <math.h>


int Z4_15()
{
	int n = 0;
	scanf_s("%d",&n );
	double A[100] = { 0 }, B[100] = { 0 }, C[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf_s("%lf", &A[i]);

	}
	for (int i = 0; i < n; i++)
	{
		scanf_s("%lf", &B[i]);
	}


	for (int i = 0; i < n; i++)
	{
		if ((cos(B[i]) - A[i]) == 0)
		{
			C[i] = -1;
		}

		else
		{
			C[i] = ((sin(A[i]) + i) / (cos(B[i]) - A[i]));
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%lf %lf %lf\n", A[i], B[i], C[i]);
	}

	return 1;
}