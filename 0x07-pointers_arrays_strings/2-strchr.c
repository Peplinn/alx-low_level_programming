#include "main.h"

/**
* _strchr - displays occurence of c
* @s: pointer to string
* @c: sought character
* Return: pointer to occurence
* else, NULL
*/

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return (s);
        else
            s++;
    }
    return (NULL);
}
