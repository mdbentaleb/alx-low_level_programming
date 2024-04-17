#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing the djb2 algorithm.
 * @str: string
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int e;

	hash = 5381;
	while ((e = *str++))
	{
		hash = ((hash << 5) + hash) + e;
	}
	return (hash);
}

