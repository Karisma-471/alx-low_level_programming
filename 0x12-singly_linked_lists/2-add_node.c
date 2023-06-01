#include "lists.h"

/**
  * add_node - a function that adds a new node at the beginning
  * @head: double pointer pointing to the head of the linked lish
  * @str: the string to be stored in the new node
  *
  * Return: address of the new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
