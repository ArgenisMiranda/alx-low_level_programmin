#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - simple aritmetic operation
 * @arg: the number of arguments
 * @arv: containing command line arguments
 *
 * Return: Always 0 (Successful)
 */
int main(int arg, char *arv[])
{
	int n1, n2, result;
	char op;
	int (*f)(int, int);

	if (arg != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(arv[1]);
	n2 = atoi(arv[3]);
	f = get_op_func(arv[2]);
	if (f == NULL || arv[2][1] != 0)
	{
		printf("Error\n");
		return (99);
	}

	op = *arv[2];
	if ((op == '/' || op == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = f(n1, n2);
	printf("%d\n", result);
	return (0);
}
