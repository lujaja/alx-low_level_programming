#include "lists.h"
/**
 * Author Lujaja
 * print_listint_safe - function
 * @head: pointer
 * @Return: number of elements in a linked list
 * 
*/
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;

    while (head -> next != NULL)
    {
        printf("[%p] %d\n", (void *) head, head -> n);
        count++;
        head = head -> next;
    }
    return (count);
}