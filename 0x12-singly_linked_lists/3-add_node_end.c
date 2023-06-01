#include "lists.h"

/**
  * add_node_end - a function that adds a new node at the end of a linked list
  * @head: a pointer pointer that points to the head of the linked list
  * @str: the string to be used
  *
  * Return: the address of the new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *temp = *head;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
