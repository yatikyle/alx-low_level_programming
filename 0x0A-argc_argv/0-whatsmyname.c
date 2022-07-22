#include <stdio.h>
/**
 * main - writes program name
 * @argc: arguement count
 * @argv: an array of pointers to CLI arguement
 *
 * Return: Always 0 (Sucess/correct).
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
