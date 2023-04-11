#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars with a specific char.
 *
 * @size: The size of the array to be created.
 * @c: The character to initialize the array with.
 *
 * Return: Returns an array or 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arra;

	if (size <= 0)
		return (0);
	arra = malloc(size);
	if (arra == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		arra[i] = c;
		i++;
	}
	return (arra);
}
