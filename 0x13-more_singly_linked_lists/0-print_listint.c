#include "lists.h"

/**
* print_listint - prints the nodes in a linked list
* @h: pointer to head
* Return: number of elements
*/

size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    const listint_t *node;
    node = &h;
    
    while (node){
        printf("%d\n", node->n);
        node = node->next;
        count++;
    }
    return (count);
}
