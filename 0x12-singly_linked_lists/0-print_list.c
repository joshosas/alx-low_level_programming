#include <stdio.h>
#include "lists.h"

/**
 * print_list - function prints elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return:No. of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
