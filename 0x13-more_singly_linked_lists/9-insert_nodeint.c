#include "lists.h"

/**
* insert_nodeint_at_index - Insert node at index
* @head: Pointer to pointer to head
* @idx: Node index
* @n: Value of new node
* Return: The new node,
* ELSE, NULL if failure
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *position;
unsigned int index = 0;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

position = *head;
while (position != NULL && index < idx - 1)
{
position = position->next;
index++;
}

if (index != idx - 1)
{
free(new_node);
return (NULL);
}

new_node->next = position->next;
position->next = new_node;

return (new_node);
}
