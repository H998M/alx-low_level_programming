#include"main.h"

/**
 * main - Entery point
 *
 * Description: print_alphapet using the _putchar function to print alphabet
 *
 * Return: 0 (succes)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
