#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
char lett = 'a';
while (lett <= 'z')
{
if (lett != 'e' && lett != 'q')
{
putchar(lett);
}
lett++;
}
putchar('\n');
return (0);
}
