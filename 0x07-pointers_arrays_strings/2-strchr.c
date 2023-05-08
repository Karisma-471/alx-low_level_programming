#include "main.h"

/**
  * _strchr - find a character in a string
  * @s: the string
  * @c: the character
  *
  * Return: Always 0
  */
char *_strchr(char *s, char c)
{
	int o = 0;

	for (; s[o] >= '\0'; o++)
	{
		if (s[o] == c)
			return (&s[o]);
	}
	return (0);
}
