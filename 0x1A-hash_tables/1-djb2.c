#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing the djb2 algorithm.
 * @s: string
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *s)
{
	unsigned long int hash;
	int e;

	hash = 5381;
	while ((e = *s++))
	{
		hash = ((hash << 5) + hash) + k;
	}
	return (hash);
}

