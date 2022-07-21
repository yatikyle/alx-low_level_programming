#include "main.h"

/**
 * is_divisible - Checks if number is divisble.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: 0 if number is divisble, return 1 otherwise.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}


/**
 * is_prime_number - Checks if a number is a prime numbe.
 * @n: Number to be checked.
 *
 * Return: 0 if interger is not prime, return 1 otherwise.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
