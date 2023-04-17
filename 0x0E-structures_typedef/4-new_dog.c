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
	 *
	 * Return: pointer to the new dog (Success), NULL otherwise
	 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)

	free(dog);
	return (NULL);

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)

	free(dog);
	free(dog->name);
		return (NULL);

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

		return (dog);
	}
