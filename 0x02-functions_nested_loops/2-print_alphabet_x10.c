#include "main.h"

/**
  * print_alphabet_x10 -  Make print_alphabet_x10
  * Return: void
  */

void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i < 10)
	{
		for (alpha = 'a'; alpha < 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}
}
