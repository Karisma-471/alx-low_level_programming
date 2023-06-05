#include "lists.h"

/**
  * find_listint_loop - a function that finds the loop in a linked list
  * @head: the pointer that points to the head of the list
  *
  * Return: 0 on success
  */
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL || head->next == NULL)
		return (NULL);

	listint_t *slow = head;
	listint_t *fast = head;
	int loopFound = 0;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loopFound = 1;
			break;
		}
	}

	if (!loopFound)
		return (NULL);

	slow = head;

	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (fast);
}
