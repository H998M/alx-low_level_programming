#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle in the string
 * haystack the terminating null bytes (\0) are not compared.
 *@haystack: A pointer to the string to be searched.
 *@needle: A pointer to the substring to be found.
 *Return: pointer to the beginning of the located substring,
 Or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		if (haystack[i] == needle[j])
		{
			i += 1;
			j += 1;
		}

		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return (NULL);
}


