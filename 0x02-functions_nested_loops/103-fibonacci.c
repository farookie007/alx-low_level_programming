#include <stdio.h>


void fib(void);

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	fib();

	return (0);
}

/**
 * fib - Prints certain amount of the fibonacci sequence
 *
 * Return: void
 */
void fib(void)
{
	int i;
	long int val;
	long int result = 0;
	long int values[2] = {1, 2};

	for (i = 1; i; i++)
	{
		val = values[0] + values[1];
		values[0] = values[1];
		values[1] = val;
		if (val % 2 == 0)
		{
			if (val <= 4000000)
				result += val;
			else
				break;
		}
	}
	printf("%ld\n", result);
}
