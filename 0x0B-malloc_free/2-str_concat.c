#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: paramater for string 1
 * @s2: parameter for string 2
 * Return: Always 0 (null).
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	char *m, *ret;

	m = s1;
	if (s1)
		while (*m++)
			size1++;
	else
		s1 = "";

	m = s2;
	if (s2)
		while (*m++)
			size2++;
	else
		s2 = "";

	ret = malloc(size1 + size2 + 1);
	if (!ret)
		return (NULL);

	m = ret;
	while (*s1)
		*m++ = *s1++;
	while (*s2)
		*m++ = *s2++;
	*m = 0;

	return (ret);
}
