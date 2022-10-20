#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated withkey
 * @ht: hash table pointer
 * @key: key pointer
 * Return: value, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *temp = NULL;

	if (key == NULL)
		return (NULL);

	if (ht != NULL)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		temp = ht->array[idx];
		/* Look for key and return value if found */
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
