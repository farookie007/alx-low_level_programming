int _prime(int n, int i);
int is_prime_number(int n);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number
 *
 * Return: 1 if the number is a prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(n, 2));
}

/**
 * _prime - checks for a prime number
 * @n: the number
 * @i: the factor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _prime(int n, int i)
{
	if (n == 2 || n == 3)
		return (1);
	if ((n % i == 0) || (i > n / 2))
		return (0);
	return (_prime(n, ++i));
}
