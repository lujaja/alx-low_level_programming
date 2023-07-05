#include "lists.h"
/**
 * Author Lujaja
 * listint_len - listint legnth function
 * @h: pointer to listint_t literal
 * Return: number of elements in linked list
 * 
 * Description: function to return number of elements in a list
*/
size_t listint_len(const listint_t *h)
{
    size_t length;
    /*listint_t *temp;*/

    length = 0;
    /*temp = h;*/

    if (!h)
        return (length);
    else
    {
        while (h)
        {
            length++;
            h = h -> next;
        }
    }
    return (length);
}