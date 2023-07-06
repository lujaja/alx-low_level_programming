#include "lists.h"
/**
 * Author Lujaja
 * delete_nodeint_at_index - function
 * @head: pointer
 * @index: position
 * Return: 1 success
 * 
 * Description: function to delete a node at a given index
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp,*temp1;
    unsigned int i = 0;

    temp = (*head);

    if (!(*head))
        return (-1);
    if (!(*head) -> next)
    {
        head = NULL;
        return (1);
    }
    if (index == 0)
    {
        temp = *head;
        *head = (*head) -> next;
        free(temp);
        return (1);
    }
    else
    {
        while (i < index && temp -> next != NULL)
        {
            temp1 = temp;
            temp = temp -> next;
            i++;
        }
        temp1 -> next = temp -> next;
        free(temp);
        return (1);
    }
    return (-1);
}