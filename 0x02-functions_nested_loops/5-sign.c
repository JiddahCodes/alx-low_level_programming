#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: number to be check
 * Return: 0 or 1
 */

int print_sign(int n)
{
int test;

if (n > 0)
{
	test = 1;
	_putchar('+');
}
else if (n == 0)
{
	test = 0;
	_putchar('0');
}
else
{
	test = -1;
	_putchar('-');
}

return (test);
}

