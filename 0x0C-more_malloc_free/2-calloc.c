#include "main.h"

/**
 * _calloc - allocate mem for an array, set to 0
 * @nmemb: number of elements
 * @size: size of element
 * Return: NULL if nmemb or size is 0 or malloc fails
 * else, ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;

return (ptr);
}
