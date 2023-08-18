#include "lists.h"
/**
 * sum_dlistint - function
 * @head: pointer
 *
 * Return: sum or zero if list is empty
 * Description: sum of all integers
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (!head)
		return (sum);

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
