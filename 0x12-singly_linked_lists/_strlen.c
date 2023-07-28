#include "lists.h"

/**
* _strlen - Calculate string length
* @str: String passed to the function.
* Return: String length
*/

int _strlen(char *str)
{
int len;
for (len = 0; str[len]; len++)
;

return (len);
}
