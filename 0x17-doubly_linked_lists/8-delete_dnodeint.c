#include "lists.h"
/**
 * delete_dnodeint_at_index - function
 * @head: pointer pointer to head dnodeint
 * @index: integer
 *
 * Return: 1 on success, -1 on failure
 * Description: deletes node at index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *store_next, *store_prev, *temp;
	unsigned int size = 0, pos = 0;

	p = temp = *head;
	while (temp->next)
	{
		size++;
		temp = temp->next;
	}
	if ((index > (size - 1)) || !p)
		return (-1);
	else if ((index == (size - 1)) && (index != 0))
	{
		while (p->next)
		{
			p = p->next;
		}
		store_prev = p->prev;
		store_prev->next = NULL;
		free(p);
		return (1);
	}
	else if ((index == 0) && p->next)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(p);
	}
	else if (pos < index && p->next != NULL)
	{
		while (pos < index)
		{
			p = p->next;
			pos++;
		}
		store_next = p->next;
		store_prev = p->prev;
		store_prev->next = store_next;
		store_next->prev = store_prev;
		free(p);
	}
	return (1);
}
