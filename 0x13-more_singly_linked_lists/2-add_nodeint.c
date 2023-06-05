#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - a function that adds a new node
  * at the beginning of a listint_t list
  * @head: pointer that points to the head of the list
  * @n: the value for the new node
  *
  * Return: the address of the new node or NULL if it fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = *head;

	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		return (NULL);
	}

	(*head)->n = n;
	(*head)->next = new_head;

	return (new_head);
}
