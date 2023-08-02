#include "lists.h"

/**
* print_listint_safe - Prints int linked list
* @head: pointer to the head
* Return: number of nodes printed
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *seen[1024];
size_t num = 0, i;

while (head != NULL && num  < 1024)
{

for (i = 0; i < num; i++)
{
if (head == seen[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
return (num);
}
}

seen[num++] = head;
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;

}

return (num);
}
