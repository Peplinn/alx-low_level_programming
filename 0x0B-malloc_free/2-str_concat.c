#include "main.h"

/**
* _strdup - concats given strings, mallocs(str)
* @s1: pointer to string1
* @s2: pointer to string2
* Return: NULL if NULL
* else, pointer to new memory address (strNew)
*/

char *str_concat(char *s1, char *s2)
{
char *strNew;
int i, length, length1, length2 = 0;
if (s1 == NULL)
return (NULL);
while (*s1 != '\0')
{
length1++;
s1++;
}
if (s2 == NULL)
return (NULL);
while (*s2 != '\0')
{
length2++;
s2++;
}
length = length1 = length2;
strNew = malloc(sizeof(char) * length);
if (strNew = NULL)
return (NULL);
while (i < length1)
{
strNew[i] = s1[i];
i++;
}
i = 0;
while (i < length2)
{
strNew[i] = s2[i];
i++;
}
strNew[i] = '\0';
free(strNew);
return (strNew);
}
