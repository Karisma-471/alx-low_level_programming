#include "main.h"

/**
  * _pow_recursion - the function that returns the value of x raised to y
  * @x: the base value
  * @y: the exponent value
  *
  * Return: the value
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
