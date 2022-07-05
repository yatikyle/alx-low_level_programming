/**
 * print_sign - must return function to check sign of a number
 * @n: integer that will print
 * Return: 0 Awlways (Success)
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}

}
