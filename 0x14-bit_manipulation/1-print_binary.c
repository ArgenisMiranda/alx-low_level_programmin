#include "main.h"

/**
 * print_binary - converts the decimal format number into binary
 * @n: decimal number
 */


void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1 || mask == 1)
		{
			putchar('0');
		}

		mask >>= 1;
	}

	if (n == 0)
		putchar('0');
}
