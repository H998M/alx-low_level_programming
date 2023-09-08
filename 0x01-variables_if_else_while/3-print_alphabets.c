#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print alphapbet letters in upper and lower case
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a -z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		ch++;
	}
	putchar('\n');

	return (0);
}
