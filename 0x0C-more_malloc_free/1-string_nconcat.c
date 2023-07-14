#include "main.h"

/**
* string_nconcat - concats given strings, mallocs(str)
* @s1: pointer to string1
* @s2: pointer to string2
* @n: number of chars (of s2)
* Return: NULL if NULL
* else, pointer to new memory address (str)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
int i, len1 = 0, len2 = 0, m = n;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
len1++;
for (i = 0; s2[i]; i++)
len2++;
if (n >= len2)
str = malloc(sizeof(char) * (len1 + len2 + 1));
else
str = malloc(sizeof(char) * (len1 + n + 1));
if (str == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
str[i] = s1[i];
if (n >= len2)
{
for (i = 0; s2[i]; i++)
str[len1 + i] = s2[i];
str[len1 + len2] = '\0';
}
else
{
i = 0;
while (m > 0)
{
str[len1 + i] = s2[i];
i++;
m--;
}
str[len1 + n] = '\0';
}
return (str);
}
