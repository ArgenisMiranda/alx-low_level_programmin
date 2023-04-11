#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 * Return: On success a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dupl;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dupl = malloc(sizeof(char) * (len + 1));

	if (dupl == NULL)
		return (NULL);

	while ((dupl[i] = str[i]) != '\0')
		i++;

	return (dupl);
	}
