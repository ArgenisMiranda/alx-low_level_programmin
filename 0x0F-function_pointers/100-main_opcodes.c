#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @arg: the number of arguments
 * @arv: the array of arguments
 *
 * Return: 0  successfull
 */
int main(int arg, char **arv)
{
	int num_bytes, i;
	char *main_ptr;

	if (arg != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(arv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", main_ptr[i]);
	}

	printf("\n");

	return (0);
}
