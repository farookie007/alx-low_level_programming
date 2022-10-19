#include <stdio.h>

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
			result += i
		}
	}

	
	return (0);
}

