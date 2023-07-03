#include "main.h"

/**
* _memset - replaces char at s with b, n times
* @s: memory area
* @b: constant char
* @n: number of bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
char *t = s;
while (n > 0)
{
*t = b;
t++;
n--;
}
return (*t);
}
