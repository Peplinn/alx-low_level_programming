#include "dog.h"

/**
* new_dog - create new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: NULL
* else, pointer to the new dog info
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *dog_name, *dog_owner;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog_name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog_name == NULL)
{
free(dog);
return (NULL);
}
dog_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dog_owner == NULL)
{
free(dog_name);
free(dog);
return (NULL);
}
_strcpy(name, dog_name);
_strcpy(owner, dog_owner);

dog->name = dog_name;
dog->owner = dog_owner;
dog->age = age;

return (dog);
}

/**
* _strlen - calculate string length
* @str: string
* Return: str length
*/

int _strlen(char *str)
{
int len;

for (len = 0; str[len]; len++)
;
return (len);
}

/**
* _strcpy - copy a string
* @src: source
* @dst: destination
*/

void _strcpy(char *src, char *dst)
{
int i;

for (i = 0; src[i]; i++)
dst[i] = src[i];
dst[i] = '\0';
}
