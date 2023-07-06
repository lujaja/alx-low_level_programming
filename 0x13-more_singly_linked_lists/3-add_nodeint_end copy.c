#include "lists.h"
/**
 * Author Lujaja
 * add_nodeint_end - add node int end appends a new node to the linked list
 * @head: pointer to listint_t literal
 * @n: parameter
 * Return: address to the new node appended
 * 
 * Description: a function that add a new node at the end of the list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *tail;

    tail = *head;

    new_node = (listint_t *) malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);
    new_node -> n = n;
    new_node -> next = NULL;
    if (!*head)
        *head = new_node;
    else
    {
        while (tail -> next)
            tail = tail -> next;
        tail -> next = new_node;
        tail = new_node;
    }
    return (new_node);
}