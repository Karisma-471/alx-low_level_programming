#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
	return;

	/* Free each linked list in the array */
	for (i = 0; i < ht->size; i++)
	{
		 node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}


	/* Free the array of pointers and the hash table structure itself */
	free(ht->array);
	free(ht);
}
