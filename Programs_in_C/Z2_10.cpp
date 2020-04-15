#include <stdio.h>
#include <math.h>

char vchar();

int binary(unsigned long long data, bool which)
{
	//printf("%llu", data);
	int the_youngest = -1;
	int the_oldest = 0;

	for (int i = 31; i >= 0; i--)
	{

		if (data & 1)
		{
			//printf("1[%d]", i);
			the_oldest = 31 - i;
		}
		else
		{
			if (the_youngest == -1) the_youngest = 31 - i;
			//printf("0[%d]", i);

		}
		data >>= 1;
	}

	//printf("\n%llu   %d  %d\n", data, the_youngest, the_oldest);

	if (which == true) return the_oldest;
	else return the_youngest;

}

int Z2_10()
{
	bool dalej = true;
	char opcja;
	unsigned long long section;
	bool provided_data = false;

	while (dalej)
	{
		opcja = vchar();

		switch (opcja & 0x5F) //0x5F powoduje zamiana kodów ASCII małych liter na duże
		{
		case 'N':
		{
			printf("Reading data: ");
			scanf_s("%llu\n", &section);
			provided_data = true;
			break;
		}

		case 'L':
		{
			if (provided_data == false)
			{
				printf("Provide data first!\n");
				break;
			}
			printf("The oldest binary digit '1' is in position: %d\n", binary(section, true));
			//printf("Yours data: %llu\n", section);
			break;
		}

		case 'R':
		{
			if (provided_data == false)
			{
				printf("Provide data first!\n");
				break;
			}

			printf("The youngest binary digit '0' is in position: %d\n", binary(section, false));
			//printf("Yours data: %llu\n", section);
			break;
		}


		default:
		{
			dalej = false;
			break;
		}

		}
	}
	return 1;
}