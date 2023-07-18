#include "dog.h"

/**
* free_dog - free a dog_t struct
* @d: pointer to struct dog_t.
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
