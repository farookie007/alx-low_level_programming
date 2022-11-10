#include <stdio.h>

/**
 * main - finds and print the largest prime factor of 612852475143
 *
 * Return: 0 (Success), 1 otherwise
 */
int main(void)
{
	long int i;
	long int x = 612852475143;

	for (i = 2; i <= x; i += 2)
	{
		/*
		 * if x is divisible by the factor i
		 * continuously divide x by i and assigns the result to x
		 */
		while (x % i == 0)
		{
			x /= i;
			/*
			 * if the result of the division is 1
			 * i.e. no more factor
			 */
			if (x == 1)
			{
				/*
				 * prints i which will be the last and largest
				 * factor
				 */
				printf("%ld\n", i);
			}
		}
		/*
		 * optimizes the algo so that the next factor will be a an odd
		 * number and the for loop can take over incrementation
		 * onward
		 */
		if (i == 2)
			i--;
	}

	return (0);
}
