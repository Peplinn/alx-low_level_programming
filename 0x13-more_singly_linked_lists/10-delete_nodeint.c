#include "lists.h"

/**
* delete_nodeint_at_index - delete node at index
* @head: pointer to pointer to head
* @index: index to remove
* Return: 1 if it succeeded,
* ELSE, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *position, *next_node;
unsigned int i = 0;

if (*head == NULL)
return (-1);
position = *head;

if (index == 0)
{
*head = (*head)->next;
free(position);
return (1);
}

while (position != NULL && i < index - 1)
{
position = position->next;
i++;
}

if (i != index - 1)
return (-1);

next_node = position->next;
position->next = position->next->next;
free(next_node);

return (1);
}
