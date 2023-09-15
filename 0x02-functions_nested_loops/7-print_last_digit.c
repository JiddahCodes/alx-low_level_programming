#include "main.h"

/**
  * print_last_digit - function that prints the last digit of a number
  * @n: The number to be computed
  * Return: return the last digit of a number
  */

int print_last_digit(int n)
{
	int last_num;

	last_num = n % 10;
	if (last_num < 0)
	{
	last_num = last;
	}
	_putchar(last_num + '0');
	return (last_num);
}
