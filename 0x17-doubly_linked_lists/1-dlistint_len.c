#include "lists.h"
/**
 * dlistint_len - function
 *
 * @h: pointer
 * Return: number of nodes
 *
 * Description: count elements in dlinked list
 * 
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);
	else
	{
		while (h)
		{
			size++;
			h = h->next;
		}
	}

	return (size);
}
