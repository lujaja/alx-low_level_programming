#include "lists.h"
/**
 * Author Lujaja
 * get_nodeint_at_index - get node at index
 * @head: pointer
 * @index: node position
 * Return: node address
 * 
 * Description: get address of node at a given index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *temp;
    int i;

    temp = head;

    if (!head)
        return (NULL);
    else if (index == 1)
        return (head);
    else
    {
        for (i = 0; i < index; i++)
            temp = temp -> next;
    }
    return (temp);
}