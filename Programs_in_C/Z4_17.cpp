#include <stdio.h>
#include <math.h>


int Z4_17()
{
	int lotto[50][50] = {0};
	int W = 0, K = 0;
	int x = 0, y = 0;

	scanf_s("%d %d %d %d", &W, &K, &x, &y);
	//printf("%d %d %d %d", W, K, x, y);

	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < K; j++)
		{
			scanf_s("%d", &lotto[i][j]);
		}
	}


	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < K; j++)
		{
			//printf("f");
			if (j >= x && j <= y)
			{
				printf("%d ", lotto[i][j]);
				//printf("X");
			}
		}
	}

	return 1;
}