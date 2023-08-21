#include "main.h"
/**
  * _islower - check if a character is lowercase
  * @c: the character to be checked in ASCII code
  *
  * Return: 1 for lowercase character, 0 otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
