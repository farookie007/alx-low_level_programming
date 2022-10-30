#include <stdio.h>

/**
 * main - the fizzbuzz program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		/* checks if i is divisible by 3 or 5 */
		if (!(i % 3) || !(i % 5))
		{
			if (!(i % 3))
				printf("Fizz");
			if (!(i % 5))
				printf("Buzz");
		} else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return (0);
}
