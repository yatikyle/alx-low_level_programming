#include "main.h"

/**
 * swap_int - swap the values of the two integers a and b
 *@a: A pointer to an int that will be updated
 *@b: B pointer to an int that will be updated
 * Return: Always return void (SUceess/correct).
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
