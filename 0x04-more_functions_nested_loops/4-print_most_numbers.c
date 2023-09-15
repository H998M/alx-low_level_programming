#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num >= 0 && num <= 9)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
		num++;
	}
	_putchar('\n');
}

