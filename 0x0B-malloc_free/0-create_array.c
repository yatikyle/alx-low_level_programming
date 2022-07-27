#include "main.h"

/**
 * create_array - Creates an array of chars and intializes.
 * @size: The size of the array to be intialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: A pointer to an array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
