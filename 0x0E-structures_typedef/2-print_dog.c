#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a dog struct
 * @d: pointer to the struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	char *name = d->name != NULL ? d->name : "(nil)";
	float age = d->age;
	char *breed = d->breed != NULL ? d->breed : "(nil)";

	printf("Name: %s\nAge: %.6f\nBreed: %s\n", name, age, breed);
}
