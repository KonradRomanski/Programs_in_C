#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define tab_size_X 41
#define tab_size_Y 16

//universal clear method
void clear()
{
	printf("\033[2J"); //clears the screen
	printf("\033[0;0f"); //sets the coursor in the upper left corner
	// \033  sends ESC key and then the command
}

void display(char tab[tab_size_X][tab_size_Y])
{
	for (int i = 0; i < tab_size_X; i++)
	{
		for (int j = 0; j < tab_size_Y; j++)
		{
			printf("%c ", tab[i][j]);
		}
		printf("\n");
	}
}

void fill(char tab[tab_size_X][tab_size_Y])
{
	for (int i = 0; i < tab_size_X; i++)
	{
		for (int j = 0; j < tab_size_Y; j++)
		{
			tab[i][j] = '_';
		}
	}
}


void update(int x, int y, char tab[tab_size_X][tab_size_Y])
{
	for (int i = 0; i < tab_size_X; i++)
	{
		for (int j = 0; j < tab_size_Y; j++)
		{
			tab[i][j] = '_';
			if (i == x && j == y)
			{
				tab[i][j] = '*';
			}
		}
	}
}



int Z4_18()
{
	srand(time(NULL));
	//The way rand() works
	//<a, b> -> rand() % (b - a + 1) + a
	int rand_number_X = rand() % 31 + 10; //<10, 40>
	int rand_number_Y = rand() % 11 + 5; //<5, 15>	
	int X = 10;
	int Y = 5;

	//rand_number_X = rand() % 11;
	//rand_number_Y = rand() % 11;

	while (!(X != rand_number_X && Y != rand_number_Y))
	{
		rand_number_X = rand() % 31 + 10;
		rand_number_Y = rand() % 11 + 5;

		//rand_number_X = rand() % 11;
		//rand_number_Y = rand() % 11;
	}

	char tab[tab_size_X][tab_size_Y];

	printf("Welcome to the game!\nYou move using the arrows.\nGood luck!\nPS. It is recommended to enlarge the terminal window.\n\nPress any key to start the game...\n");
	_getch();


	fill(tab);
	update(X, Y, tab);
	clear();
	display(tab);
	printf("Actual position:  %d, %d\n", X, Y);
	printf("INFO: To quit game press ESC/ENTER\n");

	int key = _getch();
	while ((key != 27) && !(X == rand_number_X && Y == rand_number_Y) && (key != 13))
	{
		key = _getch();
		//printf("%c\n", c);
		//printf("%d\n", key);
		switch (key)
		{
		case  75: //left arrow
		{
			//printf("left arrow");
			if (Y > 5) Y--;
			break;
		}
		case  77: //right arrow
		{
			//printf("right arrow");
			if (Y < 15) Y++;
			break;
		}
		case  72: //up arrow
		{
			//printf("up arrow");
			if (X > 10) X--;
			break;
		}
		case  80: //down arrow
		{
			//printf("down arrow");
			if (X < 40) X++;
			break;
		}

		}
		update(X, Y, tab);
		clear();
		display(tab);
		printf("Actual position:  %d, %d\n", X, Y);
		//printf("Position to find: %d, %d\n", rand_number_X, rand_number_Y);
		printf("INFO: To quit game press ESC/ENTER\n");

	}
	if (key != 27 && key != 13)
	{
		printf("\nCongratulations!!! You won!!!");
		printf("\nPress ESC/ENTER to quit the game\n");

	}
	else
	{
		printf("\nBye!!! Maybe next time you will succeed!!!");
		printf("\nPress ESC/ENTER to quit the game\n");

	}

	int u = _getch();
	while (u != 27 && u != 13) u = _getch();
	
	return 1;
}