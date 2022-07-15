#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination 
 * @src: source
 * @n: limiter
 *
 * Return: Always 0 (Sucess/correct).
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}

	j = 0;
	while (src[j] && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;

	}
	dest[i] = '\0';
	return (dest);
}
