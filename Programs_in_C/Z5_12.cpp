#include <stdio.h>
#include <math.h>


struct Towar
{
	char NazwaTowaru[32];
	int LiczbaSztuk;
	double Cena1Sztuki;
};


char vchar();

int Z5_12()
{
	Towar TabTow[50];
	int Wolny = 0;
	char opcja = 'N';
	double Suma = 0;


	//printf("%c", opcja);

	while (opcja == 'N' || opcja == 'W' || opcja == 'R')
	{
		opcja = vchar();
		opcja &= 0x5F;

		switch (opcja)
		{
		case 'N':
		{
			printf("Podaj nazwe towaru: ");
			scanf_s("%s", &TabTow[Wolny].NazwaTowaru, 31);
			printf("Podaj liczbe sztuk towaru: ");
			scanf_s("%d", &TabTow[Wolny].LiczbaSztuk);
			printf("Podaj cene 1 sztuki: ");
			scanf_s("%lf", &TabTow[Wolny].Cena1Sztuki);
			Wolny++;
			break;
		}
		case 'W':
		{
			for (int i = 0; i < Wolny; i++)
			{
				printf("Towar %d : ", i);
				printf("%s ", TabTow[i].NazwaTowaru);
				printf("%d ", TabTow[i].LiczbaSztuk);
				printf("%lf\n", TabTow[i].Cena1Sztuki);
			}
			break;
		}
		case 'R':
		{
			Suma = 0;
			for (int i = 0; i < Wolny; i++)
			{
				Suma += TabTow[i].LiczbaSztuk * TabTow[i].Cena1Sztuki;
			}
			printf("%lf\n", Suma);
		}
		break;
		}
	}

    return 1;
}