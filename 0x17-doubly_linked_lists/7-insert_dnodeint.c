#include "lists.h"
/**
 * insert_dnodeint_at_index - function
 * @h: pointer pointer
 * @idx: size_t integer
 * @n: integer
 *
 * Return: new_node or NULL if it fails
 * Description: insert new node at a given position
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *store_next, *p, *temp;
	unsigned int pos, size;

	p = temp = *h;
	pos = size = 0;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	if (((size - 1) < idx) || (!p && idx > 0))
		return (NULL);
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	while (pos < idx - 1)
	{
		p = p->next;
		pos++;
	}
	store_next = p->next;
	p->next = new_node;
	new_node->prev = p;
	new_node->next = store_next;
	store_next->prev = new_node;
	return (new_node);
}
