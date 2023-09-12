#include <main.h>
/**
 * main - Entery point
 *
 * Description: function that checks for lowercase character
 *
 * Return: returns 1 if 'c' is lowercase
 *	otherwise always 0 (success)
*/

int _islower(int c);
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
