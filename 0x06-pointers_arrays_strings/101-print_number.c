#include "main.h"

/**
 * print_number - Converts integer to string
 * @n: input integer
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	int i;
	int len;
	int j;
	int max;
	int out;

	len = 0;
	if (n < 0)
	{
		_putchar('-');
		n *= 1;
	}
	i = n;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while(i / 10 != 0)
		{
			len++;
			i /= 10;
		}
	max = 1;
	for (j = 1; j <= len; j++)
		max *= 10;
	for (j = 0; j <= len; j++)
	{
		out = n / max;
		_putchar(out + '0');
		n -= (max * out);
		max /= 10;
	}
	}
}

