#include "lists.h"

/**
* free_list - Frees linked list
* @head: Pointer to head
*/

void free_list(list_t *head)
{
list_t *current;

if (head == NULL)
return;

while (head != NULL)
{
current = head->next;
free(head->str);
free(head);
head = current;
}
}
