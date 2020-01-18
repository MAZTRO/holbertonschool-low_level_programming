#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *h_t;

    h_t = malloc(sizeof(hash_table_t));
    if (h_t == NULL)
    {return (NULL); }

    h_t->array = malloc(8 * size);
    if (h_t->array == NULL)
    {return (NULL); }

    return (h_t);
}
