#include "lists.h"

/**
* add_nodeint - adds node to head
* @head: pointer to pointer to head
* @n: value to be added
* Return: pointer to added node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
    int number = n;
    listint_t *node;
    node = malloc(sizeof(listint_t));

    if (node == NULL)
    return (NULL);

    node->next = *head;
    node->n = number;
    *head = node;
    return (node);
}
