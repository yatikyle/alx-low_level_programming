#include "main.h"
/**
 * _memset - This memory set function
 * @s: Is a string
 * @b: Is a character
 * @n: An integer
 *
 * Return: A string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
