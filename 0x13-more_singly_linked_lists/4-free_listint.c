#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - a function that frees a listint_t list
  * @head: pointer that points to the head of the list
  *
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *current;

	listint_t *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
