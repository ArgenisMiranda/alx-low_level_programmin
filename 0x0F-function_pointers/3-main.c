#include "3-calc.h"

/**
 * main - simple aritmetic operation
 * @argc: the number of arguments
 * @argv: containing command line arguments
 *
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char op;
	int (*f)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	op = *argv[2];
	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
