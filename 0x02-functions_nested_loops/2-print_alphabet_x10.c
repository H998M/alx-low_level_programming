#include <main.h>

/**
 * main - Entery point
 *
 * Description:  print 10 times alphabet, in lowercase,followed by a newline
 *
 * Return: Always 0 (succes)
*/

void print_alphabet_x10(void);
{
        int line, ch;

        for (line = 0; line <= 9; line++)
        {
                for (ch = 'a'; ch <= 'z'; ch++)
                        _putchar(ch);
                _putchar('\n');
        }
}