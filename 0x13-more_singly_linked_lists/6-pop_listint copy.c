#include "lists.h"
/**
 * Author lujaja
 * pop_listint - function to delete first node
 * @head: pointer to literal listsint_t
 * Return: member n
 * 
 * Description: deletes first node and return member n of structure
 * 
*/
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int n;

    if (!(*head))
        return (0);
    else if (!((*head) -> next))
    {
        n = (*head) -> n;
        (*head) = NULL;
    }
    else
    {
        temp = (*head);
        n = (*head) -> n;
        (*head) = (*head) -> next;
        temp = NULL;
    }
    return (n);
}