#include "function_pointers"

/**
 * print_name - prints a name
 * @name: string to add
 * @f: function that takes a char pointer as argument
 *
 * return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
	}
