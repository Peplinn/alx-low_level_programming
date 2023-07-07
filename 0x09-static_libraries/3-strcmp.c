#include "main.h"

/**
* _strcmp - Compares str at s1 to that at s2
*
* @s1: Pointer to first compared string
* @s2: Pointer to second compared string
* Return: 0 if s1 = s2,
* >0 if s1 > s2,
* <0 if s1 < s2
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*(char *)s1 - *(char *)s2);

}
