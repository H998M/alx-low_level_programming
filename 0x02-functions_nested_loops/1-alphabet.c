#include"main.h"

/**
 * print_alphapet - using the _putchar function to print alphabet from a - z
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}