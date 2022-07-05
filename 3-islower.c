#include "main.h"

/**
 * _islower - S Entry point
 * @c: ASCII code
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

if ( c  <= 'z' && c >= 'a')
{

return (1);
}
else
{
return (0);
}
_putchar ('\n');
}
