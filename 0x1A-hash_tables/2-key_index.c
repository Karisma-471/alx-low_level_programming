#include "hash_tables.h"

/**
 * key_index - Get the index for a key in the hash table's array
 * @key: The key to hash
 * @size: The size of the hash table's array
 *
 * Return: The index where the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	 unsigned long int hash_value;

	 /* Calculate the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Use modulo to map the hash value to an index in the array size */
	return (hash_value % size);
}
