#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: the command line arguments count
 * @argv: the array of command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cents, count, i;
	int denominations[5] = {25, 10, 5, 2, 1};

	count = 0;
	/* i.e. must get only one argument */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* converts the argument to an integer */
	cents = atoi(argv[1]);
	/* if the change is negative */
	if (cents < 0)
		printf("%d\n", 0);

	while (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			count += cents / denominations[i];
			cents %= denominations[i];
		}
	}
	printf("%d\n", count);

	return (0);
}
