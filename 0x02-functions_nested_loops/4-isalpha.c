#include "main.h"
/**
 * _isalpha - Function checks if c is alphabetic
 * @c: is if the variable is lowercase or UPPERCASE
 *
 * Return: Always 1 if character is letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
