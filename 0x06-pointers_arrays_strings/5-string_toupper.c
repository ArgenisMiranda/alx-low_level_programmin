#include "main.h"
/**
 * string_toupper - uppercase all lower case letters in a string.
 * @s: string to process.
 *
 * Return: a pointer.
 */
char *string_toupper(char *a)
{
	char *ptr = a;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (a);
}
