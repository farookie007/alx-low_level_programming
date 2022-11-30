#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation asked
 * @s: the character representing operation to be performed
 *
 * Return: pointer to the function that corresponds to the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	/* Boilerplate */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	/* Main code */
	i = 0;
	while (ops[i].op)
	{
		/* checking if the op_t type op matches the operator passed */
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}
	/* if s does not match any of the expected operators */
	return (NULL);
}
