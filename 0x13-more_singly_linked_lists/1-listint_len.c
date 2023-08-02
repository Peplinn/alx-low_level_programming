#include "lists.h"

/**
* listint_len - prints the length of a linked list
* @h: pointer to head
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *node;

node = h;

while (node)
{
node = node->next;
count++;
}
return (count);
}
