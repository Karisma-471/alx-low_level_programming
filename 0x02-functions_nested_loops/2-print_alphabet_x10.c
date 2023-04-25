#include "main.h"
/**
  * Print_alphabet_x10 - Print the alphabet 10 times on a new line
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	int n;
	int o;

	for (n = 0; n < 10; n++)
	{
		for (o = 'a'; o <= 'z'; o++)
		{
			_putchar(o);
		}
		_putchar('\n');
	}
}
