#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: integer array
 * @n: number of array elements to reverse
 *
 * return: nothing
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int *ptr = a;

	while (&a[n--] > ptr)
	{
		tmp = *ptr;
		*ptr = a[n];
		a[n] = tmp;
		ptr++;
	}
}
