#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table
 * Return: Nothing only print
 */

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *cpy;
    unsigned long int count;
    int flag = 0;

    if (ht != NULL)
    {
        printf("{");
        count = 0;
        while (count < ht->size)
        {
            cpy = ht->array[count];
            while (cpy)
            {
                if (flag != 0)
                {
                    printf(", ");
                }
                flag = 1;
                printf("'%s': '%s'", cpy->key, cpy->value);
                cpy = cpy->next;
            }
            count++;
        }
        printf("}\n");
    }
}
