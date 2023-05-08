#include "main.h"

/**
  * print_chessboard - Function that prints the chessboard
  * @a: the value to be used
  *
  * Return: 0
  */
void print_chessboard(char (*a)[8])
{
	int o, t;

	for (o = 0; o < 8; o++)
	{
		for (t = 0; t < 8; t++)
			_putchar(a[o][t]);


		_putchar('\n');
	}
}
