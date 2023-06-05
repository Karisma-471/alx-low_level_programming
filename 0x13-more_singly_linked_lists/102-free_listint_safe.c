#include <stdlib.h>
#include "lists.h"

/**
  * free_listint_safe - a function that finds the start node of a loop
  * @head: the pointer that points to the head of the list
  *
  * Return: the size of the list that was freed
  */
size_t free_listint_safe(listint_t **h)
{
	if (h == NULL || *h == NULL)
		return (0);

	size_t size = 0;
	listint_t *slow = *h;
	listint_t *fast = *h;
	listint_t *temp;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			while (*h != slow)
			{
				temp = *h;
				*h = (*h)->next;
				free(temp);
				size++;
			}

			while (slow->next != *h)
			{
				temp = slow;
				slow = slow->next;
				free(temp);
				size++;
			}

			temp = slow;
			slow = slow->next;
			free(temp);
			size++;

			*h = NULL;
			break;
		}
	}

	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		size++;
	}

	return (size);
}

