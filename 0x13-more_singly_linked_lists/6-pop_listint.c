#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - a function that deletes the head node of a listint_t
  * @head: A pointer that points to the head of the list
  *
  * Return: 0 on success
  */
int pop_listint(listint_t **head)
{
	struct listint_s *next;

	int n;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;

	next = (*head)->next;

	free(*head);

	*head = next;

	return (n);
}
