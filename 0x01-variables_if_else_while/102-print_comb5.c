#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
int first_numb, second_numb;

for(first_numb = 0; first_numb <= 98; first_numb++)
{
for (second_numb = first_numb + 1; second_numb <= 99; second_numb++)
{

putchar (first_numb / 10 + '0');
putchar (first_numb % 10 + '0');

putchar (' ');

putchar (second_numb / 10 + '0');
putchar (second_numb % 10 + '0');

if (first_numb == 98 && second_numb == 99)
{
break;
}

putchar(',');
putchar(' ');

} 

}

putchar('\n');

return (0);
}

