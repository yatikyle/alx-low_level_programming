#include "main.h"

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory.
 * @str: The string to be copied
 *
 * Return: A string pointer.
 */
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
