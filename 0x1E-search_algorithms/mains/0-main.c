#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    clock_t t;
    double time_taken;
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);
    t = clock();
    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    t = clock() - t;
    time_taken = ((double)t)/(CLOCKS_PER_SEC/1000);
    printf("linear_search() took %f milliseconds to execute \n", time_taken);
    return (EXIT_SUCCESS);
}
