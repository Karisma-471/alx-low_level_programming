#include "main.h"

/**
  * _strpbrk - check string for any set of value
  * @s: the string to search
  * @accept: the string containing the character
  * Return: null
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int o, t;

	for (o = 0; s[o] != '\0'; o++)
	{
		for (t = 0; accept[t] != '\0'; t++)
		{
			if (s[o] == accept[t])
				return (&s[o]);
		}
	}
	return ('\0');
}
