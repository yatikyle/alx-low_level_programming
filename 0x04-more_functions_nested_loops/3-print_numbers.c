#include "main.h"

/**
 * print_numbers - Print the numbers from (0-9).
 * Return: Always 0 (Success/correct).
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}
_putchar('\n');
}
