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
        listint_t *new_node, *traverse;
        unsigned int i = 0;
        /* if there is no list return null */
        if (head == NULL)
                return (NULL);
        /* create the new node */
        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
                return (NULL);
        /* access the n field of the new_node and initialize it as n */
        new_node->n = n;
        /* check if idx = 0 */
        if (idx == 0)
        {
                /* access the next field of new_node and assign it as first node */
                new_node->next = *head;
                *head = new_node;
                return (new_node);
        }
        /* make traverse be the value at head */
        traverse = *head;
        while (i != idx - 1 && traverse != NULL)
        {
                traverse = traverse->next;
                i++;
        }

        if (i == idx - 1 && traverse != NULL)
        {
                new_node->next = traverse->next;
                traverse->next = new_node;
                return (new_node);
        }
        return (NULL);
}
