#include "lists.h"
/**
 * get_dnodeint_at_index - function
 * @head: pointer
 * @index: unsigned integer
 *
 * Return: nth dnode of dlistint_t linked list
 * Description: return nth node of dlinked dlistint_t
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *temp1;

	unsigned int i, size = 0;

	if (!head)
		return (NULL);

	temp1 = temp = head;

	while (temp1)
	{
		size++;
		temp1 = temp1->next;
	}

	if (index > (size - 1))
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
