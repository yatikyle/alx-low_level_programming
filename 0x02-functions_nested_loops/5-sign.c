#include "main.h"
/**
 * print_sign - Function that prints the sign of the number
 * @n: The variable that will be printed in execution
 *
 * Return: 1 if number is greater than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
