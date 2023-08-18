#include "lists.h"
/**
 * add_dnodeint_end - function
 *
 * @head: pointer pointer
 * @n: integer
 *
 * Description: add to dlisint_t at end
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;
		temp = new_node;
	}

	return (new_node);
}
