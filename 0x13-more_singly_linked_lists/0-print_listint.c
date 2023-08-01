#include "lists.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints the elements of a linked list and returns n of nodes.
 * @h: pointer to the head of the linked list.
 * Return: the number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
