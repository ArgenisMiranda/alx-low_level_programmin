#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - simple aritmetic operation
 * @argc: count of command line arguments
 * @argv: vector containing command line arguments
 *
 * Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char op;
	int (*f)(int, int);
	{
	printf("Error\n");
		exit(98);
		}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
	printf("Error\n");
	exit(99);
		}

	op = *argv[2];
	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
