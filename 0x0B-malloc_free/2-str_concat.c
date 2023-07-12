#include "main.h"

/**
* str_concat - concats given strings, mallocs(str)
* @s1: pointer to string1
* @s2: pointer to string2
* Return: NULL if NULL
* else, pointer to new memory address (strNew)
*/

char *str_concat(char *s1, char *s2)
{
char *s1tmp = s1;
char *s2tmp = s2;
char *strNew;
int i, length = 0;
int length1 = 0;
int length2 = 0;
if (s1 == NULL)
return (NULL);
while (*s1tmp != '\0')
{
length1++;
s1tmp++;
}
if (s2 == NULL)
return (NULL);
while (*s2tmp != '\0')
{
length2++;
s2tmp++;
}
length = length1 + length2;
strNew = malloc(sizeof(char) * length + 1);
if (strNew == NULL)
return (NULL);
while (i < length1)
{
strNew[i] = s1[i];
i++;
}
i = 0;
while (i < length2)
{
strNew[length1 + i] = s2[i];
i++;
}
strNew[length] = '\0';
return (strNew);
}
