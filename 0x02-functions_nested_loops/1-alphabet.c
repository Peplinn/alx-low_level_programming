#include "main.h"

/**
 * print_alphabet - prints all letters in lowercase
 * prints _putchar
 * 
 */

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}

