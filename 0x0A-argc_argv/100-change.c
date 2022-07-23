#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * @argc: The number of arguements supplied tto the program.
 * @argv: An array of pointers to the arguements.
 *
 * Return: If the number of arguements is not exactly 1.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(arv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}

		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
