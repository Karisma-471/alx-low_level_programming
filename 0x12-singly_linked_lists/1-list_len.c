#include "lists.h"

/**
  * list_len - a function that returns a number of elements in a linked list_t
  * @h: pointer that points to the head of the linked list
  *
  * Return: number of elements in linked list
  */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	for (element = 0; h != NULL; h = h->next)
		element++;

	return (element);
}
