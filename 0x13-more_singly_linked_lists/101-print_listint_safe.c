#include <stdlib.h>
#include "lists.h"

/**
  * print_listint_safe - A function that prints a listint_t linked list
  * @head: A pointer that points the head of the list
  *
  * Return: 0 on success
  */
size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
		return (0);

	size_t count = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
			count++;
			break;
		}

	}

	if (fast == NULL || fast->next == NULL)
	{
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;
		}
	}

	return (count);
}
