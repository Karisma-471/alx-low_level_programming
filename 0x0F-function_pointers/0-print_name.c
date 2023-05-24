#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - a function that prints a name using pointer to function
  * @name: the string to be used
  * @f: the pointer to the function
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
