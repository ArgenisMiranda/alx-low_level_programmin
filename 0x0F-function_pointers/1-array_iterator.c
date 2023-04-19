#include "function_pointers"
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to a function that takes an int as argument
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;

	while (size--)
	action(*array++);
}
