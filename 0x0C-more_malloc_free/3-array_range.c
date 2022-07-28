#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - range printer.
 * @min: minimum
 * @max: maximum
 *
 * Return: Integer array
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int *) * size);
	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
