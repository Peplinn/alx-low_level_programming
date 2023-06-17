#include <stdio.h>
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
