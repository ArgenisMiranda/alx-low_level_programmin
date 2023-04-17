#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: struc dog to be free
 */
void free_dog(dog_t *d)
{
	if (d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
	}
