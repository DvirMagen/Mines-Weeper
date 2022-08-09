#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define FIRST_OPT '1'
#define SECOND_OPT '2'
#define THIRD_OPT '3'
#define FOURTH_OPT '4'

char* onetwothreeCol(char arr[][9], int col)
{
	int i, j, k = 48, mines, num1 = 10, num2 = 10, counter = 0;

	mines = rand();
	mines = mines % 10;
	mines = mines + 7;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			arr[j][i] = ' ';
		}
	}
	for (i = 1; i < 9; i++)
	{
		arr[i][0] = i + k;
	}
	for (i = 1; i < 9; i++)
	{
		arr[i][0] = i + k;
	}
	for (i = 1; i < 9; i++)
	{
		for (j = 1; j < 9; j++)
		{
			arr[j][i] = ' ';
		}
	}

	while (mines != 0)
	{
		while ((num1 > 8) && (num1 > 0))
		{
			num1 = rand() % 10;
		}
		while ((num2 > 8) && (num2 > 0))
		{
			num2 = rand() % 10;
		}
		arr[num1 + 2][num2 + 1] = '*';
		mines--;
		num1 = 10;
		num2 = 10;
	}

	for (i = 1; i < 9; i++)
	{
		for (j = 1; j < 9; j++)
		{
			if (arr[i][j] == ' ')
			{
				if (arr[i + 1][j] == '*')
				{
					counter++;
				}
				if (arr[i][j + 1] == '*')
				{
					counter++;
				}
				if (arr[i + 1][j + 1] == '*')
				{
					counter++;
				}
				if (arr[i][j - 1] == '*')
				{
					counter++;
				}
				if (arr[i - 1][j - 1] == '*')
				{
					counter++;
				}
				if (arr[i - 1][j] == '*')
				{
					counter++;
				}
				if (arr[i - 1][j + 1] == '*')
				{
					counter++;
				}
				if (arr[i + 1][j - 1] == '*')
				{
					counter++;
				}
				if (counter != 0)
				{
					arr[i][j] = counter + k;
				}
				counter = 0;
			}
		}
	}
	printf("\n");
	printf("   ");
	for (i = 0; i < 33; i++)
	{
		printf("-");
	}
	return arr;
}

char* firstGame(char arr[][9], int col)
{
	int i, j, k = 48;
	char firstGame[9][9];
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			firstGame[j][i] = ' ';
		}
	}
	for (i = 1; i < 9; i++)
	{
		firstGame[i][0] = i + k;
	}
	for (i = 1; i < 9; i++)
	{
		firstGame[i][0] = i + k;
	}
	for (i = 1; i < 9; i++)
	{
		for (j = 1; j < 9; j++)
		{
			firstGame[j][i] = 'X';
		}
	}
	printf("  ");
	for (i = 0; i < 9; i++)
	{
		printf("%4c", firstGame[i][0]);
	}
	printf("\n");
	printf("   ");
	for (i = 0; i < 33; i++)
	{
		printf("-");
	}
	for (i = 0; i < 9; i++)
	{
		printf("\n");
		for (j = 0; j < 9; j++)
		{
			printf(" %c", firstGame[i][j]);
			if (i >= 1)
			{
				printf(" |");
			}
		}
	}
	return firstGame;
}

void main()
{
	int a = 0, b = 0, i, j, k = 49, add;
	char userChoice;

	printf("Welcome To MinesWeeper!\n");
	scanf("%c", &userChoice);

	if (userChoice == FIRST_OPT)
	{
		char firstGame1[9][9];
		char firstCopyGame[9][9];
		firstGame(firstCopyGame, 9);
		onetwothreeCol(firstGame1, 9);
		printf("\n");
		while (firstGame1[a][b] != '*')
		{
			scanf("%d%d", &a, &b);
			firstCopyGame[a][b] = firstGame1[a][b];
			for (j = 0; j < 9; j++)
			{
				firstCopyGame[j][0] = j + k;
			}
			for (i = 0; i < 9; i++)
			{
				firstCopyGame[i][0] = i + k;
			}
			for (i = 0; i < 9; i++)
			{
				for (j = 0; j < 9; j++)
				{
					printf("%c", firstCopyGame[i][j]);
					printf("|");
				}
				printf("\n");
			}
		}
		printf("\nYou Fail");
	}
	if (userChoice == '0')
	{
		printf("Bye Bye!");
	}
}