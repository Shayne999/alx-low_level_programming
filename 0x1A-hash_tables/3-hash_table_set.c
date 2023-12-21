#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key.
 * Return: 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *valueCpy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valueCpy = strdup(value);
	if (valueCpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valueCpy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(valueCpy);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		free(valueCpy);
		return (0);
	}

	new->value = valueCpy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
