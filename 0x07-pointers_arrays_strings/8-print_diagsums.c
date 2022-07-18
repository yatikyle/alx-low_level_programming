#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d arra of chars
 * @size: number matrix
 *
 * Return: Always 0 (Sucess/correct).
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum, sum1;

	sum = 0;
	sum1 = 0;

	i = 0;
	while (i < size)
	{
		sum = sum + *(a + 1 * size + i);
		sum1 = sum1 + *(a + i * size + size - i - 1);

		i++;
	}

	printf("%i. %i\n", sum, sum1);
}
