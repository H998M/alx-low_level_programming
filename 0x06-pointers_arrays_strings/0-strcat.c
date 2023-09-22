#include "main.h"

/**
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 10;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];

	return (dest);
}
