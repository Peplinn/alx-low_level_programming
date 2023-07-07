#include "main.h"

/**
* _strstr - locates a substring
*
* @haystack: string to search
* @needle: string to search for
*
* Return: pointer to start of substring
* else, NULL
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*haystack == '\0' && *needle == '\0')
return (NULL);

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (needle[j] != haystack[i + j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
return (NULL);
}
