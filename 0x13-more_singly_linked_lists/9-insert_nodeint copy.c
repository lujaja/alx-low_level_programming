#include "lists.h"
/**
 * Author Lujaja
 * insert_nodeint_at_index - function
 * @head: pointer
 * @idx: index to insert node
 * @n: member n value
 * 
 * Description: function to insert no0de at a given position
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *temp;
    unsigned int i = 0;

    new_node = (listint_t *) malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);
    new_node -> n = n;
    new_node -> next = NULL;
    if (!(*head))
    {
        (*head) = new_node;
        return (new_node);
    }

    temp = (*head);

    if (idx == 1)
    {
        new_node -> next = (*head);
        (*head) = new_node;
        return (new_node);
    }
    else
    {
        while (i < idx - 1 && temp != NULL)
    {
        temp = temp -> next;
        i++;
    }
    new_node -> next = temp -> next;
    temp -> next = new_node;
    return (new_node);
    }
    
}