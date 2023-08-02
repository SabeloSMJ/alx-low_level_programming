#include "lists.h"

/**
 * add_nodeint - adds a new node for list
 * @head: pointer to the first node t
 * @n: data to insert in that new node
 *
 * Return: pointer or 0 if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *smj;

	smj = malloc(sizeof(listint_t));

	if (!smj)

	return (0);
	smj->n = n;
	smj->next = *head;
	*head = smj;

	return (smj);
}
