int _sqrt(int n, int i);

/**
 * _sqrt_recursion - calculates the square root recursively
 * @n: the number
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return _sqrt(n, 0);
}

/**
 * _sqrt - calculates square root
 * @n: the number
 * @i: the base number to start the calculations
 *
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	/* confirms that the factor is less than half of the number */
	/* also confirms that the square of the factor is less than the number */
	if ((i > n / 2) || (i * i > n))
		return (-1);
	/* returns the factor if it's the square root */
	if ((i * i) == n)
		return (i)
	return _sqrt(n, ++i);
}
