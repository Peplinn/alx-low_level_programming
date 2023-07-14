#include "main.h"

/**
* _realloc - reallocates memory using malloc and free
* @ptr: pointer to the old malloc memory
* @old_size: the size, in bytes, of ptr's alloc memory
* @new_size: the size, in bytes of the new memory
* Return: Pointer to the new allocated memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
return (malloc(new_size));

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = *((char *)(ptr) + i);

free(ptr);

return (new_ptr);
}
