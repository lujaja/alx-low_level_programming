#include "lists.h"
/**
 * Author Lujaja
 * free_listint2 - free list function
 * @head: pointer to listint_t literal
 * Return: Nothing
 * 
 * Description: free linked list
*/
void free_listint2(listint_t **head)
{
    listint_t *temp;

    if (!head)
        return;
    while (*head)
    {
        temp = *head;
        *head = (*head) -> next;
        free(temp);
    }
    free(*head); /* not necessary*/
}