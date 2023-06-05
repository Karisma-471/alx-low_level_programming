#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index - a function that returns the nth node of a listint_t
  * @head: a pointer that points to the head of the list
  * @index: the index of the node
  *
  * Return: the nth node or NULL if the node does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	for (current = head; current != NULL; current = current->next)
	{
		if (index == 0)
			return (current);

		index--;
	}

	return (NULL);
}
