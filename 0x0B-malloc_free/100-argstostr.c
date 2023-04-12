#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 *
 * @ac: Number of arguments passed to the program.
 * @av: Array of arguments passed to the program.
 *
 * Return: Pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *args;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
		j = 0;
		while (av[i][j])
			size++;
			j++;
		size++;
		i++;
	args = malloc((sizeof(char) * size) + 1);
	if (args == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
		j = 0;
		while (av[i][j])
			args[k] = av[i][j];
			j++;
			k++;
		args[k] = '\n';
		k++;
		i++;
	args[k] = '\0';
	return (args);
}

