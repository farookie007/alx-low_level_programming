#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	/* declaring the arguments list variable of type `va_list` */
	va_list args_list;
	unsigned int i;
	int sum = 0;

	/*
	 * calling the va_start function with the arguments list and the first
	 * arguments as parameter
	 */
	va_start(args_list, n);

	/* action loop */
	for (i = 0; i < n; i++)
		/* incrementing the sum with each arguments passed as an int */
		sum += va_arg(args_list, int);

	/* calling the va_end function with arguments list as parameter */
	va_end(args_list);
	return (sum);
}
