#include "main.h"

/**
* _strdup - duplicates given string, mallocs(str)
* @str: pointer to string
* Return: NULL if NULL
* else, pointer to new memory address (str2)
*/

int **alloc_grid(int width, int height)
{
char *str2;

int i, length = 0;

if (*str == NULL)
return (NULL);
while (*str != '\0')
{
length++;
str++;
}

str2 = malloc(sizeof(char) * length);
if (str2 = NULL)
return (NULL);

while (i < length)
{
str2[i] = str[i];
i++;
}
str2[i] = '\0';
return (str2);
}
