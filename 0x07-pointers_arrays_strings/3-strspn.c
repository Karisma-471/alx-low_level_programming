#include "main.h"

/**
  * _strspn - check the length of a prefix substring
  * @s: the string to be checked
  * @accept: the characters to be match
  * Return: the number of bytes in initial segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int o, t;

	for (o = 0; s[o] != '\0'; o++)
	{
		for (t = 0; accept[t] != '\0'; t++)
		{
			if (s[o] == accept[t])
				break;
		}
		if (accept[t] == '\0')
			return (o);
	}
	return (o);
}
