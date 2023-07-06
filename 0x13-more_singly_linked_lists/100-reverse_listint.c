#include "lists.h"
/**
 * Author Lujaja
 * reverse_listint - function
 * @head: pointer
 * Return: reversed listint
 * 
*/
listint_t *reverse_listint(listint_t **head)
{
    listint_t *current = *head, *prev, *next;

    prev = next = NULL;

    while (current != NULL)
    {
        /* store next*/
        next = current -> next;
        /* reverse current nodes pointer*/
        current -> next = prev;
        /* move pointer one position ahead*/
        prev = current;
        current = next;
    }
    *head = prev;
    return (*head);
    
}