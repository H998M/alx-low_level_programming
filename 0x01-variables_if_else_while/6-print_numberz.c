#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ACII representattion*/
		putchar(digit + '0');
		digit++;
	}
	printf("\n");

	return (0);
}
