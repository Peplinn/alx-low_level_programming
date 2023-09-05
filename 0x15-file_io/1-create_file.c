#include "main.h"

/**
* create_file - Creates file
* @filename: Name of file to create
* @text_content: NULL terminated string to write to file
* Return: 1 if success,
* ELSE, -1 if failure
*/

int create_file(const char *filename, char *text_content)
{
ssize_t desc, bytesWrote;

if (filename == NULL)
return (-1);

desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (desc == -1)
return (-1);

if (text_content != NULL)
{
bytesWrote = write(desc, text_content, _strlen(text_content));
if (bytesWrote == -1)
{
close(desc);
return (-1);
}
}

close(desc);

return (1);
}

/**
* _strlen - Calculate the length of a string.
* @str: String
* Return: Length of str
*/

int _strlen(char *str)
{
int len;

for (len = 0; str[len]; len++)
;

return (len);
}
