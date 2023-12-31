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
char *str;
int i, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
len1++;
for (i = 0; s2[i]; i++)
len2++;

str = malloc(sizeof(char) * (len1 + len2 + 1));
if (str == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
str[i] = s1[i];

for (i = 0; s2[i]; i++)
str[len1 + i] = s2[i];

str[len1 + len2] = '\0';

return (str);
}
