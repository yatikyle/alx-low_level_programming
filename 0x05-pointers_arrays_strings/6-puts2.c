#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: A pointer to an in that will be changed
 *
 * Return: A pointer to be changed to a string
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar (str[a]);
	}
	_putchar ('\n');
}
