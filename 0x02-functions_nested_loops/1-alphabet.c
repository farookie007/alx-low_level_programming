#include "main.h"
/**
 * print_alphabet - prints all letters of the English
 * alphabet in lowercase
 *
 * Return: Void (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
