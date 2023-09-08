#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int comma = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");
		}
		temp = ht->array[i];

		while (temp)
		{
			if (ht->array)
			{
				while (temp)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					temp = temp->next;
					if (temp)
						printf(", ");
				}
				comma = 1;
			}
		}
	}
	printf("}\n");
}
