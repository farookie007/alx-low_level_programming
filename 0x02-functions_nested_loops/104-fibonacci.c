#include <stdio.h>


void fib(int n);

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	fib(95);

	return (0);
}

/**
 * fib - Prints certain amount of the fibonacci sequence
 * @n: the number of fibonacci sequence to be generated
 *
 * Return: void
 */
void fib(int n)
{
	int i;
	long int val;
	long int values[2] = {1, 2};

	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			printf("%ld", values[0]);
		} else if (i == 2)
		{
			printf("%ld", values[1]);
		}
		else
		{
			val = values[0] + values[1];
			printf("%ld", val);
			values[0] = values[1];
			values[1] = val;
		}

		if (i == n)
			printf("\n");
		else
			printf(", ");
	}
}
