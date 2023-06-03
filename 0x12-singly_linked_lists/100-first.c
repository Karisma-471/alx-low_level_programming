#include "lists.h"
#include <stdio.h>

/**
  * before_main - a function that a string before the main
  *
  * Return: Always 0 on success
  */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
