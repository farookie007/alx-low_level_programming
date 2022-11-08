#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of command line arguments passed
 * @argv: the array of the command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
