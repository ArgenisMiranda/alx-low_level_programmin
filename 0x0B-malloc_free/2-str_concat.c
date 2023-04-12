#include <stdio.h>
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
	int a, b, c;
	char *conc_str;

	c = 0;
	conc_str = malloc(sizeof(*s1 + *s2));

	if (conc_str == NULL)
		return (NULL);

	a = 0;
	while (s1[a] != '\0')
{
		conc_str[c] = s1[a];
		a++;
		c++;
}
	b = 0;
	while (s2[b] != '\0')
{
		conc_str[c] = s2[b];
		b++;
		c++;
}
	return (conc_str);
}
