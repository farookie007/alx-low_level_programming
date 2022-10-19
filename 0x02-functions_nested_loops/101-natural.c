#include <stdio.h>
#include "main.h"

int _is_3x(int);
int _is_5x(int);

/**
 * main - prints all multiple of 3 or 5 less than 1024
 *
 * Return: int
 */
int main(void)
{
	int i;
	int result = 0;

	for (i = 0; i < 1024; i++)
	{
		if (_is_3x(i) || _is_5x(i))
		{
			result += i;
		}
	}

	return (0);
}

/**
 * _is_3x - checks if a number is multiple of 3
 * @n: parameter to be checked
 *
 * Return: boolean
 */
int _is_3x(int n)
{
	return (!(n % 3));
}

/**
 * _is_5x - checks if a number is multiple of 5
 * @n: parameter to be checked
 *
 * Return: boolean
 */
int _is_5x(int n)
{
	return (!(n % 5));
}
