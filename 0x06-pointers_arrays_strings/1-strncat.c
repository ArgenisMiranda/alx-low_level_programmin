#include "main.h"

/**
 * @src does not need to be null-terminated
 * @dest: destination array 
 * @n: number of characters
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;
	while (n-- > 0)
		*ptr++ = *src++;
	*ptr = 0;

	return (dest);
}
