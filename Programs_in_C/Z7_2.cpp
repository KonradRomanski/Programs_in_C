#include <stdio.h>
#include <math.h>

//Python function  for random digits import random;[print(f"{random.randint(1, 274)}", end=" ", sep = "") for i in range(100)];

int Z7_2()
{
	char file_in_name[32], file_out_name[32];
	FILE *file_in;
	FILE *file_out;
	int dana = 0;


	//Z7_2_in.txt
	//Z7_2_out.txt

	printf("Podaj nazwe pliku, ktory chcesz wczytac: ");
	scanf_s("%s", file_in_name, 31);
	printf("Podaj nazwe pliku, do któregi chcesz zapisać: ");
	scanf_s("%s", file_out_name, 31);
	
	fopen_s(&file_in, file_in_name, "r");
	fopen_s(&file_out, file_out_name, "w");


	fscanf_s(file_in, "%d", &dana);
	while (feof(file_in) == 0)
	{
		// przetwarzanie danej

		if (dana > 137)
		{
			//printf("__|%d|__  ", dana);
			fprintf(file_out, "%d ", dana);

		}
		//printf("%d  ", dana);

		fscanf_s(file_in, "%d", &dana);
	}

	fclose(file_in);
	fclose(file_out);

    return 1;
}