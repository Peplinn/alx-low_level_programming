#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: Pointer to the string
*
* Return: The converted integer
*/

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int digit;

if (*s == '-')
{
sign = -1;
s++;
}

while (*s)
{

if (*s >= '0' && *s <= '9')
{

digit = *s - '0';
result = result * 10 + (sign * digit);
}

else
{
break;
}
s++;
}
return (result);
}
