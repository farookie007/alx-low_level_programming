#include "function_pointers.h"

/**
 * array_iterator - executes a function on every element of an array
 * @array: the array to be operated on
 * @size: the size of the array
 * @action: the function to be executed on each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	/* if array or action is undefined */
	if (!array || !action)
		return;
	/* executing the function on each element of the array */
	for (i = 0; i < size; i++)
		action(array[i]);
}
