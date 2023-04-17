#include "dog.h"

/**
 * _strcopy - copy read only data to mutatable.
 * @dst: pointer to copy char to.
 * @src: read only data.
 */
void _strcopy(char *dst, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dst[i] = src[i];
	dst[i] = '\0';
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(nd);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(nd);
		free(name);
		return (NULL);
	}
	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
