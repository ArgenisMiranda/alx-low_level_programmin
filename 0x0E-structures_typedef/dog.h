#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - a dog's info
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

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
