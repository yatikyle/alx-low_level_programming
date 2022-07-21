#include "main.h"

/**
 * _print_rev_recursion - Prints strinf in reverse using recursion
 * @s: String to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);

	s--;
	_putchar (*s);
}
