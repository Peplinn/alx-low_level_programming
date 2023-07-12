#include "main.h"

/**
* _strdup - duplicates given string, mallocs(str)
* @str: pointer to string
* Return: NULL if NULL
* else, pointer to new memory address (str2)
*/

char *_strdup(char *str)
{
char *str2;
char *strTmp = str;

int i, length = 0;

if (str == NULL)
return (NULL);
while (*strTmp != '\0')
{
length++;
strTmp++;
}

str2 = malloc(sizeof(char) * length + 1);
if (str2 == NULL)
return (NULL);

while (i < length)
{
str2[i] = str[i];
i++;
}
str2[i] = '\0';
return (str2);
}
