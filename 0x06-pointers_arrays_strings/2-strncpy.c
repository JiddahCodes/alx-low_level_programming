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
int i = 0;
int src_len = 0;
while (src[i++])
src_len++;

for (i = 0; src[i++] && i < n; i++)
dest[i] = src[i];

for (i = src_len; i < n; i++)
dest[i] = '\0';
return (dest);

}

