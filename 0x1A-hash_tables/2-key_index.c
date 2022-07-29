#include "hash_tables.h"

/**
 * key_index - gives hash index of key
 * @key: string key
 * @size: size of hash array
 * Return: hashed index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
		return (0);
	return (hash_djb2(key) % size);
}
