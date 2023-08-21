#include "main.h"
/**
  * _isalpha - check to see if character is uppercase or lowercase
  * @c: the character to check in ASCII code
  *
  * Return: 1 for letters, 0 otherwise
  */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
