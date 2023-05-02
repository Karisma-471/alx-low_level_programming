#include "main.h"

/**
  * rev_string - A function that reverses a string
  * @s: the string to be reversed
  * Return: void
  */
void rev_string(char *s)
{
	char rev = s[10];
	int number = 0;
	int i;

	while (s[number] != '\0')
	number++;
	for (i = 0; i < number; i++)
	{
		number--;
		rev = s[i];
		s[i] = s[number];
		s[number] = rev;
	}
}
