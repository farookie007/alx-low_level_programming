#include "3-calc.h"

/**
 * main - Entry point of the program
 * Description: Program that perform an operation on two operands passed to
 * it as an argument with certain operator
 * @argc: the number of arguments passed
 * @argv: an array of the arguments' values
 *
 * Return: 0 - Success, otherwise - Error
 */
int main(int argc, char argv[])
{
	int (*f)(int, int);
	char operator;
	int a, b;

	/* if invalid number of arguments is passed */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Assigning the variables */
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];
	f = get_op_func(operator);

	/* if f is NULL */
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	/* if user is tries '/' or '%' with b equals 0 */
	if (((strcmp("/", operator) != 0) && (strcmp("%", operator) != 0)) || b != 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));


	return (0);
}
