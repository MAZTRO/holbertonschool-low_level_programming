#include "hash_tables.h"

/**
 * key_index - check the code for Holberton School students.
 * @key: The word to convert in an index
 * @size: of the array of the Hash table.
 * Return: The Index number.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0, hash = 0;

	hash = hash_djb2(key);
	idx = hash % size;
	return (idx);
}
