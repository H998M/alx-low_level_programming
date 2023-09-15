#include "maim.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int num, row, count;

	for (row = 0; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
	}	_putchar('\n');
}

