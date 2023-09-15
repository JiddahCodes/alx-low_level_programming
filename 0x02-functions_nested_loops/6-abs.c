#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @c: The number to be computed
  * Return: Absolute number of integer or zero
  */

int _abs(int c)
{
	if (c < 0)
	{
		int val;

		val = c * -1;
		return (val);
	}
	return (c);
}
