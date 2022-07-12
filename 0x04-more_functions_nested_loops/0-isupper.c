#include "main.h"

/**
 * _isupper - evalue if letter is uppercase
 * @c: print int
 *
 * Return: Always 0 (Success/correct).
 */

int _issupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
