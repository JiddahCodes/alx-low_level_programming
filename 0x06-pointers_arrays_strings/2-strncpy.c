#include "main.h"

/**
 * _strncpy - Copies an inputted number
 * @dest: the buffer storing the string
 * @src: the source string
 * @n: the max number of bytes from to be copied from src
 * Return: A pointer to the result dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

