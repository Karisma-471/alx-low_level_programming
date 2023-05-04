#include "main.h"

/**
  * _strcmp - a function that compares two strings
  * @s1: value to be used
  * @s2: value to be used
  *
  * Return: 0
  */
int _strcmp(char *s1, char *s2)
{
	int o;

	o = 0;
	while (s1[o] != '\0' && s2[o] != '\0')
	{
		if (s1[o] != s2[o])
		{
			return (s1[o] - s2[o]);
		}
	o++;
	}
	return (0);
}
