#include "main.h"
/**
 * print_alphabet_x10 - Function to print abc 10 times
 *
 * Return: Always 0 (Sucess/correct)
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char c;

	while (count++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
