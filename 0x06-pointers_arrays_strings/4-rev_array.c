#include "main.h"

/**
 * reverse_array - reverse array of integers 
 * @a: array
 * @n: number of elements of array 
 *
 * Return: Always 0 (Sucess/correct).
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
