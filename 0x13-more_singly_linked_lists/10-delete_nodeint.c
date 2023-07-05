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
    int i;

    temp = *head;

    if (!(*head))
        return (-1);
    else if (index == 0)
    {
        temp = *head;
        *head = (*head) -> next;
        free(temp);
        return (1);
    }
    else
    {
        for (i = 0; i < index; i++)
            temp1 = temp;
            temp = temp -> next;
        temp1 -> next = temp -> next;
        if (!temp -> next)
            temp = temp;
        free(temp);
        return (1);
    }
    return (-1);
}