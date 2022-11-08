#include <stdio.h>

/**
 * main - Program to prints its name
 * @argc: the number of command line arguments
 * @argv: the array of command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);

	return (0);
}
