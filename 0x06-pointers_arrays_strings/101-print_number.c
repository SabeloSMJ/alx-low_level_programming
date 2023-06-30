#include "main.h"

/**
 * print_number - take a variable integer for print
 * @n: An integer variable
 * Return: print integer and returns pointer to 0
 */

void print_number(int n)
{
	unsigned int nn;

	nn = n;

	if (n < 0)
	{
		_putchar('-');
		nn = -n;
	}

	if (nn / 10 != 0)
	{
		print_number(nn / 10);
	}
	_putchar((nn % 10) + '0');
}
