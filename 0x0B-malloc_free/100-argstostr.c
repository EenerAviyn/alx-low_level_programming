#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all arguments
 * of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int h, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (h = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			h++;
		h++;
	}

	aout = malloc((h + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = ia = 0; ia < h; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			aout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < h - 1)
			aout[ia] = av[i][j];
	}
	aout[ia] = '\0';

	return (aout);
}

