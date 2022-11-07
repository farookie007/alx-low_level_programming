/**
 * _isalpha - Function to check if the parameter is an alphabet
 * @c: parameter checked to confirm it is an alphabet
 *
 * Return: 1 if c is an alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
