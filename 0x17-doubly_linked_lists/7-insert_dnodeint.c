#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node into a doubly-linked list
 * @h: head of the node
 * @idx: index to insert the node
 * @n: node's value
 *
 * Return: the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev = NULL, *current = NULL,
		*node = malloc(sizeof(dlistint_t) * 1);

	node->n = n, node->prev = NULL, node->next = NULL;
	if (h == NULL || node == NULL)
		return (free(node), NULL);
	current = *h;
	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;
	if (!idx)
		return (node->next = *h, *h = node);
	while (current != NULL && idx)
		--idx, prev = current, current = prev->next;
	if (idx != 0 || prev == NULL)
		return (free(node), NULL);
	return (node->next = current, prev->next = node);
}
