#include "lists.h"

/**
 * listint_len - returns the n elements in a linked lists
 * @h: A pointer to the linked listse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
