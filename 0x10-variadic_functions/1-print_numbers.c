#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args_list;

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args_list, int));

		/* checks if there's a separator and not the last argument */
		if (separator && (i != n - 1))
			printf("%s", separator);
	}

	va_end(args_list);

	printf("\n");
}
