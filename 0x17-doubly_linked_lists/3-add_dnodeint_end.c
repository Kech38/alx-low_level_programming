#include "lists.h"

/**
 * add_dnodeint_end - Add node in the end of the list
 * @head: Memory address of the head of the list
 * @n: Integer data
 *
 * Return: Head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *temp = *head;

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
new->prev = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next != NULL)
temp = temp->next;

temp->next = new;
new->prev = temp;
return (new);
}
