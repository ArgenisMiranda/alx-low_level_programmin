#include "dog.h"
#include <stdio.h>

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: pointer to a dog_t structure
 */
void free_dog(dog_t *d)
{
	if (d)
	free(d->name);
	free(d->owner);
	free(d);
	}
