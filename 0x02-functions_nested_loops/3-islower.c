#include "main.h"

/**
  * _islower - check my code for lower case
  * @c: The character to be checked
  * Return: 1 for lowercase character and 0 for any other thing
  */

	int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}

