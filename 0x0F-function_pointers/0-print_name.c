#include "main.h"

/**
 * print_name - prints a name
 * @name: string to print
 * @f: function that takes a char pointer as argument
 *
 * return: NOTHING
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		return;
	f(name);
	}
