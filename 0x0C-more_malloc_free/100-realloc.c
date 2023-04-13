#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the reallocated memory block, or NULL if realloc failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
}
	char *my;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	my = malloc(new_size);
	if (!my)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		my[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (my);
}
