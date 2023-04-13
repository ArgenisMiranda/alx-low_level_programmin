#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: On success,created array,or NULL.
 */
int *array_range(int min, int max)
{
	int *arr, my;

	if (min > max)
		return (NULL);
	my = max - min + 1;
	arr = malloc(sizeof(*arr) * my);
	if (!arr)
		return (NULL);
	while (my--)
		p[my] = max--;
	return (arr);
}
