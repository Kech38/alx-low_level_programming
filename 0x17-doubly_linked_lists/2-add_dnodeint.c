#include "lists.h"

/**
 * add_dnodeint - Add a node in the head of the list
 * @head: Memory of the Head of the linked list
 * @n: Integer data
 *
 * Return: Head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (!head)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;

if (*head)
(*head)->prev = new;

*head = new;

return (new);
}
