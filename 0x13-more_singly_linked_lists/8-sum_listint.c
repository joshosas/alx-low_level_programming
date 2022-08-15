#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all elements in a list.
 * @head: address of the first node of the list.
 * Return: Int (total)
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
