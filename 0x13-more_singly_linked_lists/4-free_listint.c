#include "lists.h"

/**
* free_listint - frees nodes in linked list
* @head: pointer to head
* Return: Nothing
*/

void free_listint(listint_t *head)
{

listint_t *position, *next_node;

if (head == NULL)
return;

position = head;

while (position->next != NULL)
{
next_node = position->next;
free(position);
position = next_node;

}
return;

}
