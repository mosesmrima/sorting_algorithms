#ifndef HEADER_FILE
#define HEADER_FILE
/*
 *header file containing all the function prototpyes
 *of functions used in this prject
 */
#include <stdbool.h>
#include "stdio.h"
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
#endif /* HEADER_FILE */
