#include "lists.h"

/**
* pop_listint - Deletes head node
* @head: Pointer to pointer to head
* Return: Int value of head
*/

int pop_listint(listint_t **head)
{
listint_t *position;

int head_val;

if (*head == NULL)
return (NULL);

position = *head;
head_val = *head->n;
*head = *head->next;
free(position);

return (head_val);
}
