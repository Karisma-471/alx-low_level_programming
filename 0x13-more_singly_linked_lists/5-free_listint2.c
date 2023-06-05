#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - a function that frees a lists and set the head to NULL
  * @head: the pointer that points to the head of the list
  *
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *current;

	listint_t *temp;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
