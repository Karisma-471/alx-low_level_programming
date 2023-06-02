#include "lists.h"

/**
  * before_main - a function that prints a string
  * before the main function is executed
  *
  * Return: Always 0 on success
  */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
