#ifndef HEADER_FILE
#define HEADER_FILE
/*
 *header file containing all the function prototpyes
 *of functions used in this prject
 */
#include <stdbool.h>
#include "stdio.h"
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap(listint_t **head, listint_t *l, listint_t *r);
void quick_sort(int *array, size_t size);
void sort(int *arr, int left, int right, size_t size);
int split(int *arr, int left, int right, size_t size);
#endif /* HEADER_FILE */
