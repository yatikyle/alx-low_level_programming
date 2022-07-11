#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}
		printf("\n");
}
