#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
    size_t i = 0;
    int *p = array;

    if (!array)
        return (-1);

    while (size)
    {
        printf("Searching in array: ");
        for (i = 0; i < size; i++)
        {
            if (i == size - 1)
                printf("%d\n", p[i]);
            else
                printf("%d, ", p[i]);
        }
        if (p[size / 2] == value)
            return (p + (size / 2) - array);
        else if (p[size / 2] > value)
            size /= 2;
        else
        {
            p += size / 2 + 1;
            size = (size - 1) / 2;
        }
    }
    return (-1);
}
