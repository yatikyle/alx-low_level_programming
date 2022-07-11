#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *@c: The character to print
 *
 * Return: Always 1 (Success/correct).
 * On error, -1 is returned, and error is there returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
