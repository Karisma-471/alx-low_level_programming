#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - a function that adds a new node
  * at the end of a listint_t list
  * @head: pointer that points the head of the list
  * @n: the value to be used
  *
  * Return: address of the new node or NULL if it fails
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *node = *head;

		while (node->next != NULL)
		{
			node = node->next;
		}

		node->next = new_node;
	}

	return (new_node);
}
