#include "lists.h"

/**
* free_listint - frees nodes in linked list
* @head: pointer to head
* Return: Nothing
*/

void free_listint2(listint_t **head)
{

listint_t *position;

if (head == NULL)
return;

while (*head != NULL)
{
position = (*head)->next;
free(*head);
*head = position;

}
*head = NULL;
return;

}
