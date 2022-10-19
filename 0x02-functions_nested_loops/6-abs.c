#include "main.h"
/**
 * _abs - Return the absolute value of an integer
 * @n: parameter to be evaluated
 *
 * Return: a +ve integer value always
 */
int _abs(int n)
{
	return (((n < 0) && (n * -1)) || n);
	/* don't ask me how it did the job *smiles* */
}
