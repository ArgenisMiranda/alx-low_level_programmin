#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0  successfull
 */
int main(int argc, char **argv)
{
	int num_bytes, i;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

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
