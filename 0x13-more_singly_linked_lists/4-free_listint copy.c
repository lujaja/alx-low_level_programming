#include "lists.h"
/**
 * Author lujaja
 * free_listint - free linked list
 * @head: pointer to listint_t literal
 * Return: Nothing
 * 
 * Description: frees listint_t list
*/
void free_listint(listint_t *head)
{
    listint_t *current; /* pointer declaration*/

    if (!head)
        return;
    while (head)/* not null*/
    {
        current = head;
        head = head -> next;
        free(current);        
    }
}