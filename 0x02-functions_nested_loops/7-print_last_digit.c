#include "main.h"

/**
 * print_last_digit - Prints the last digit of the number
 * @n: The number in question
 *
 * Return: Always return the value of the last digit
 */

int print_last_digit(int n)
{
int last_digit = n % 10;

if (last_digit < 0)
last digit *= -1;

_putchar(last_digit + '0');

return (last_digit);

}
