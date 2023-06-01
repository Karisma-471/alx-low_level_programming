#include <stdlib.h>
#include "lists.h"

/**
  * free_list - a function that free a linked list
  * @head: a pointer that points to the head of a linked list
  *
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
