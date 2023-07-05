#include "lists.h"
/**
 * Author Lujaja
 * print_listint - print list of integers
 * @h: pointer to listint_t datatype
 * Return: number of nodes in linked list
 * 
 * Descritption: function to prints int member of 
 * a linked list and return number of nodes in th list
*/
size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    /*listint_t *temp;*/

    /*temp = h;*/
    
    if (!h)
        return (count);
    else
    {
        while (h)
        {
            printf("%d\n", h -> n);
            h = h -> next;
            count++;
        }
    }
    return (count);
}