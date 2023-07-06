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
    unsigned int i = 0;

    if (!head )
        return (NULL);

    while (i < index && head != NULL)
    {
        head  = head -> next;
        i++;
    }
    return (head);  
}