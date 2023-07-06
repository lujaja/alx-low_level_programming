#include "lists.h"
/**
 * Author Lujaja
 * sum_listint - sums all member n of linked list
 * @head: pointer to user defined literal
 * Return: sum
 * 
 * Description: sum all member n in linked list
*/
int sum_listint(listint_t *head)
{
    listint_t *temp;
    int sum;

    temp = head;
    sum = 0;

    if (!head)
        return (0);
    else
    {
        while (temp)
        {
            sum += temp -> n;
            temp = temp -> next;
        }
    }
    return (sum);
}