#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * @n: start number
 * Return: 0 or 1
 */

void print_to_98(int n)
{

while (n < 98)
{
	printf("%i, ", n);
	n++;
}
while (n > 98)
{
	printf("%i, ", n);
	n--;
}

printf("98");
putchar('\n');
}
