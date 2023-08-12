#include "main.h"

/**
* append_text_to_file - Appends text at the end of file.
* @filename: Name of file
* @text_content: NULL terminated string to add at EOF
* Return: 1 on success,
* ELSE, -1 if failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
ssize_t desc, bytesWrote;

if (filename == NULL)
return (-1);

desc = open(filename, O_RDWR | O_APPEND);

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
