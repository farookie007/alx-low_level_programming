#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of command line arguments
 * @argv: the array of the command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
