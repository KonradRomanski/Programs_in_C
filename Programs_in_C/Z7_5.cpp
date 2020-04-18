#include <stdio.h>
#include <math.h>

//Python impor random;nominaly = ['c', 't', 'f', 'd', 'q', 'h', 'K', 'D', 'F'];[print(f"{nominaly[random.randint(0, 8)]}", end="") for i in range(100)];

struct nominal
{
	double moneta;
	char znak;
}
nominaly[9] = 
{
	{0.01, 'c'},
	{0.02, 't'},
	{0.05, 'f'},
	{0.1, 'd'},
	{0.2, 'q'},
	{0.5, 'h'},
	{1, 'K'},
	{2, 'D'},
	{5, 'F'}
};

int Z7_5()
{
	FILE* file_in;
	char dana = 0;
	double full_sum = 0;
	double particular_sum[9] = { 0 };

	fopen_s(&file_in, "Z7_5_in.txt", "r");

	dana = fgetc(file_in);

	printf("Reading data: \n");
	while (dana != EOF)
	{
		for (int i = 0; i < 9; i++)
		{
			if (nominaly[i].znak == dana)
			{
				full_sum += nominaly[i].moneta;
				particular_sum[i] += nominaly[i].moneta;
			}
		}

		printf("%c  ", dana);
		dana = fgetc(file_in);
	}

	printf("\nStats ([ value | sign ] sum - quantity): \n");
	for (int i = 0; i < 9; i++)
	{
		printf("[ %lf | %c ] %lf - %d\n", nominaly[i].moneta, nominaly[i].znak, particular_sum[i], int(round(particular_sum[i]/nominaly[i].moneta)));
	}
	printf("Full sum: %lf", full_sum);

	fclose(file_in);

	return 1;
}