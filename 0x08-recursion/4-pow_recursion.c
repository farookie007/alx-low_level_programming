/**
 * int _pow_recursion - calculates x raised to the power of y recursively
 * @x: the number
 * @y: the power
 *
 * Return: the result of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, --y));
}
