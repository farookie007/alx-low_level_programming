#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *arr;
	int i, bytes;

	/* if invalid number of arguments is provided */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	/* if number of bytes is negative */
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", arr[i]);

		/* ends the last opcode with a newline, otherwise a whitespace */
		i == bytes - 1 ? printf("\n") : printf(" ");
	}
	return (0);
}
