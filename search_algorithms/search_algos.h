#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
size_t rec_binary(int *array, int left, int right, size_t size, int v);

#endif /* SEARCH_ALGOS_H */
