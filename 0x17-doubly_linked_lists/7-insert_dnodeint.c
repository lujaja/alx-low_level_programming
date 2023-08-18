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
	dlistint_t *new_node, *temp, *temp1;
	unsigned int i, size = 0;

	temp = temp1 = *h;

	while (temp1)
	{
		size++;
		temp1= temp1->next;
	}

	if (idx > (size - 1))
		return (NULL);

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!(*head))
		head = new_node;
	else if (idx == 0)
	{
		new_node->next = head;
		head->prev = new_node;
		head = new_node;
	}
	else if (idx == (size - 1))
		add_dnodeint+end(*h, n);
	else
	{
		for (i = 0; i < idx; i++)
			temp = temp->next;


