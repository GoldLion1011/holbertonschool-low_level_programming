#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_binary(int *array, size_t l, size_t r, int value);
int advanced_binary(int *array, size_t size, int value);



#endif /* SEARCH-ALGOS_H */
