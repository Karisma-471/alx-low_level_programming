#include <stdio.h>
#include "main.h"

/**
  * _strstr - A function that locates a substring
  * @haystack: the string to search
  * @needle: the substring to search for
  *
  * Return: Always 0
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
