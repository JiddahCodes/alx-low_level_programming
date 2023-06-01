#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: the string to be appended
 * @src: the string to append to dest
 * @n: the number of bytes from src to be appended to dest
 * Return: A pointer to the result dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int dest_len = 0;
while (dest[i++])
dest_len++;
for (i = 0; src[i] && i < n; i++)
dest[dest_len++] = src[i];
return (dest);
}
