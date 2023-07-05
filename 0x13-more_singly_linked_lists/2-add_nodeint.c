#include "lists.h"
/**
 * Author Lujaja
 * add_nodeint - add node function add new node at the begining 
 * of the list
 * @head: pointer to listint_t literal
 * @n: parameter
 * Return: addrress of the new element
 * 
 * Description: add a new node at the beginning of the listint_t list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    new_node = (listint_t *) malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);
    new_node -> n = n;
    new_node -> next = NULL;
    if (!*head)
        *head = new_node;
    else
    {
        new_node -> next = *head;
        *head = new_node;
    }
    return (new_node);
}