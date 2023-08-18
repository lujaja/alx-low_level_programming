#include "lists.h"
/**
 * free_dlistint - function
 * @head: pointer
 *
 * Return: Nothing
 * Description: frees a dlistint_t list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
