#include "main.h"

/**
 * _pow_recurion - search a string for any set of bytes
 * @x: base
 * @y: exponant
 * Return: pointer to the type in s that matches on of the bytes in accept
 * or NULL if no such byte is found
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 1)
		return (x);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}


