#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		va_arg(list, char *);

		/* if str is NULL */
		if (!str)
			str = "(nil)";
		printf("%s", str);
		/* if separator is pressent and it is the last element */
		if (separator && i != (n-1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
