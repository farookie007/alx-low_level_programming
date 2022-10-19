#include "main.h"
/**
 * print_alphabet - prints all letters of the English
 * alphabet in lowercase
 *
 * Return: Void (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int counter = 1;
	
	while (counter <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		counter++;
	}
}
