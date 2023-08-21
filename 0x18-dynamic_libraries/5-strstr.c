#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *g = needle;

		while (*k == *g && *g != '\0')
		{
			k++;
			g++;
		}

		if (*g == '\0')
			return (haystack);
	}
	return (0);
}
