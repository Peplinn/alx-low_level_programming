#include "lists.h"

/**
* add_nodeint_end - adds node to end
* @head: pointer to pointer to head
* @n: value to be added
* Return: pointer to added node
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{

int number = n;
listint_t *node, *position;

node = malloc(sizeof(listint_t));

if (node == NULL)
return (NULL);

node->next = NULL;
node->n = number;
if (*head == NULL)
{
*head = node;
return (node);
}

position = *head;

while (position->next != NULL)
position = position->next;

position->next = node;
return (node);
}
