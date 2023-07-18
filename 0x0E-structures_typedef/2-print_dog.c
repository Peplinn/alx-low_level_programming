#include "dog.h"

/**
* print_dog - prints struct dog
* @d: pointer to struct dog to print
*/

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
}
