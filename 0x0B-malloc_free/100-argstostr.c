#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		size += strlen(av[i]);
	}

	char *str = (char *) malloc(sizeof(char) * (size + 1));
	/* if malloc fails */
	if (str == NULL)
		return NULL;


	k = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
