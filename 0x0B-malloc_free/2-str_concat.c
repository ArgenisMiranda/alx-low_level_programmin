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
	char *str, *con;

	ptr = s1;
	if (s1)
		while (*str++)
			size1++;
	else
		s1 = "";

	ptr = s2;
	if (s2)
		while (*str++)
			size2++;
	else
		s2 = "";

	con = malloc(size1 + size2 + 1);
	if (!con)
		return (NULL);

	str = ret;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = 0;

	return (con);
}
