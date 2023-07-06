#include "main.h"

/**
* is_palindrome - gives string and range to helper.
* @s: string to check.
* Return: 1 if the string is palindrome
* else: 0.
*/

int is_palindrome(char *s)
{
return (palindrome_helper(s, 0, _strlen_recursion(s) - 1));
}

/**
* palindrome_helper - check if string is palindrome.
* @s: string to check.
* @start: start index.
* @end: end index.
* Return: 1 if palindrome 0 if not.
*/

int palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (palindrome_helper(s, start + 1, end - 1));
}

/**
* _strlen_recursion - prints string length
* @s: pointer to string
* Return: length
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
