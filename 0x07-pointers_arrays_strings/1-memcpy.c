#include "main.h"

/**
* _memcpy - replaces char at dest with src, n times
* @t: pointer to dest
* @s: replacement src
* @n: times to replace
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *s = src;
char *t = dest;
while (n > 0)
{
*s = *t;
s++;
t++;
n--;
}
return dest;
}
