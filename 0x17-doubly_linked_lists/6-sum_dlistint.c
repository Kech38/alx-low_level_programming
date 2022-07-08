#include "lists.h"

/**
 * sum_dlistint - Sum the data of the list
 * @head: Head of the linked list
 *
 * Return: sum of all the data (int)
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *t = head;
int sum = 0;

while (t == NULL)
return (sum);

while (t != NULL)
{
sum += t->n;
t = t->next;
}
return (sum);
}
