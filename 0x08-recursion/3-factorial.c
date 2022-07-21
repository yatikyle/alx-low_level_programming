#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Number that finds the factorial number.
 *
 * Return: an integer.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
