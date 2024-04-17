#include "hash_tables.h"

/**
 * key_index - returns the index of a key.
 * @ky: key.
 * @sz: size of the array of the hash table.
 * Return: index.
 */
unsigned long int key_index(const unsigned char *ky, unsigned long int sz)
{
	unsigned long int index = hash_djb2(ky) % sz;

	return (index);
}

