#include <stdio.h>

/**
 * main - Entery point
 *
 * Description:  prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
