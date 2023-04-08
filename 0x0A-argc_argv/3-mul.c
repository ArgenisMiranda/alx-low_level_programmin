#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: multiplies two numbers
 *
 * @argc: amount of arguments passed through the program
 * @argv: pointer that contains the arrays of the arguments
 *
 * Return: 0 and result when successful, 1 and Error when parameters not met
 */
int main(int argc, char *argv[])
{
	int n1, n2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	ans = n1 * n2;
	printf("%d\n", ans);
	return (0);
	}
