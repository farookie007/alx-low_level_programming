#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the pointer to the function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	/* if the function or name is undefined */
	if (!f || !name)
		return;
	/* calling the function */
	f(name);
}
