#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed.
 *
 * return: 0 for sucess.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv[argc - 1]);
	return (0);
}

