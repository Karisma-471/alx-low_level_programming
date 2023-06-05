#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - a function that inserts a new node
  * at a given position
  * @head: a pointer to point to the head of the list
  * @n: the value to be used
  * @idx: the index to be used
  *
  * Return: Address of the new node or NULL if it fails
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;

	unsigned int count = 0;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
