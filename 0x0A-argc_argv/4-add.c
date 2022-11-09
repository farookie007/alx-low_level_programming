#include <stdio.h>
#include <stdlib.h>


int _is_digit(char *s);

/**
 * main - adds two numbers
 * @argc: the arguments count
 * @argv: the array of arguments
 *
 * Return: 0 (Success), 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	/*
	 * never going to happen but I have to use the argc variable
	 * to silent the compiler
	 */
	if (argc < 1)
		return (1);
	for (i = 1; argv[i]; i++)
	{
		if (!(_is_digit(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * _is_digit - checks if a string is digit
 * @s: the string
 *
 * Return: 1 (Success), 0 otherwise
 */
int _is_digit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}
