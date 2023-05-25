#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - Return the sum of two numbers
  * @a: the first value
  * @b: the second value
  *
  * Return: the sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Return the difference of two numbers
  * @a: the first value
  * @b: the second value
  *
  * Return: the difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Return the product of two numbers
  * @a: the first value
  * @b: the second value
  *
  * Return: the product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Return the quotient of two numbers
  * @a: the first value
  * @b: the second value
  *
  * Return: the quotient of a and b
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - Returns the reminder of the modulus of two numbers
  * @a: the first value
  * @b: the second value
  *
  * Return: the reminder of the division of a by b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
