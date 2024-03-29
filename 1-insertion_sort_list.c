#include "sort.h"

/**
 * swap - swaps two nodes of a doubly linked list
 * @head: first node of the list
 * @l: The first node to swap
 * @r: the second node to swap
 *
 * return: void
 */
void swap(listint_t **head, listint_t *l, listint_t *r)
{
	listint_t *prev, *next;

	prev = l->prev;
	next = r->next;

	if (prev != NULL)
		prev->next = r;
	else
		*head = r;
	l->prev = r;
	l->next = next;
	r->prev = prev;
	r->next = l;
	if (next)
		next->prev = l;
}



/**
 *insertion_sort_list - function to sort a doubly linked list in
 *                      ascending order using insertion sort
 *@list: pointer to the array to sort
 *return - void
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *tmp;
	/* check for null linked list */
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i && i->prev; i = i->next)
	{
		for (; i && i->prev && i->n < i->prev->n;
		     i = i->prev)
		{
			tmp = i->prev;
			swap(list, tmp, i);
			print_list(*list);
			i = i->next;
		}
	}
}

