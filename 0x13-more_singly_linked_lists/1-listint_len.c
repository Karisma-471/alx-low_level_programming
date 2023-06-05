#include <stdlib.h>
#include "lists.h"

/**
  * listint_len - a function that returns the number of elements
  * in a linked listint_t list
  * @h: pointer that points to the head of the list
  *
  * Return: the number of elements in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	const listint_t *head;

	for (head = h; head != NULL; head = head->next)
	{
		count++;
	}

	return (count);
}
