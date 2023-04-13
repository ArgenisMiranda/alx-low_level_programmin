#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Amount of memory to allocate
 * Return: Pointer to the allocated memory
 *         or exit with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
	}
