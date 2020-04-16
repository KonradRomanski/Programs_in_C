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
	int dana = 0;


	fopen_s(&file_in, "Z7_5_out.txt", "r");


	if (dana > 137)
	{
		//printf("__|%d|__  ", dana);
		fprintf(file_in, "%d ", dana);

	}

	fclose(file_in);

	return 1;
}