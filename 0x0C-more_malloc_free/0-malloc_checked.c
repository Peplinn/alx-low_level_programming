#include "main.h"

/**
* malloc_checked - creates memory
* @b: size of memory
* Return: 98 if NULL
* else, mem
*/

void *malloc_checked(unsigned int b)
{
char *mem;

mem = malloc(b);
if (mem == NULL)
exit(98);
return (mem);
}
