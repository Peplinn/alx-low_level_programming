#include "main.h"

/**
* _strncat - Appends string at src to that at dest
* @dest: Pointer to destination string
* @src: Pointer to source string
* @n: Number of chars to copy
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int length = 0;
int i = 0;
char *originalDest = dest;
char *originalSrc = src;
while (*dest != '\0')
dest++;

while (*src != '\0')
{
src++;
length++;
}

if (length >= n)
{

while (i < n)
{
*dest = *originalSrc;
dest++;
originalSrc++;
i++;
}
}
else
{
while (i < n && *originalSrc != '\0')
{
*dest = *originalSrc;
dest++;
originalSrc++;
i++;
}
}

*dest = '\0';
return (originalDest);

}
