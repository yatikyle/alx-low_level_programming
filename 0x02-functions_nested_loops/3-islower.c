#include "main.h"

/**
 * _islower - Entry point
 * @c: contains ASCII code
 * Return: Always 0 (Sucess)
 */

int _islower(int c)

{
if (c > 'a' && c < 'z')
{
return (1);
}

else
{
return (0);
}
}
