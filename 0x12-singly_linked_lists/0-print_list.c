#include "lists.h"

/**
  * print_list - write a function that prints all elements of a list_t list
  * @h: a pointer that points to the head of the list
  *
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	for (n = 0; h != NULL; h = h->next, n++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	}
	return (n);
}
