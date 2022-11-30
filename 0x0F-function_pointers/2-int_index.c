#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* returns -1 if size is less than or equal to 0 */
	if (size <= 0)
		return (-1);
	
	/* looping to check each element of the array */
	for (i = 0; i < size; i++)
	{
		/* returns i if cmp is not equal to 0 */
		if (cmp(array[i]) != 0)
			return i;
	}
	/* returns -1 if no element matches */
	return (-1);

}
