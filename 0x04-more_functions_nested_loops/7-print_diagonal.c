#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *	should be printed
 * Return: Always 0 (success)
*/

void print_diagonal(int n)
{
	int postn, spaces;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (spaces = 1; spaces <= postn; spaces++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
		}	
		_putchar('\n');
	
	}
}
