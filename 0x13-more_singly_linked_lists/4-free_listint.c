#include "lists.h"
/**
 * free_listint - lett free a linked list
 * @head: list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *mj;
	while (head)
	{
		mj = head->next;
		free(head);
		head = mj;
	}
}
