#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - A function that sums all the data of a listint linked list
  * @head: a pointer that points to the head of the list
  *
  * Return: sum of all data or an empty list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *current;

	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}

	return (sum);
}
