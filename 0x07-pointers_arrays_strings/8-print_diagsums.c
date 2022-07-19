#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - Prints the sum of two diagonals of a matrix
 * @a: Matrix of integers
 * @size: The size pf the matrix
 */
void print_diagsums(int *a, int size)
{
	int index;
	int i = 0, j = 0;

	for (index = 0; index < size; index++)
	{
		i += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		j += a[index];
		a -= size;
	}

	printf("%d, %d\n", i, j);
}

