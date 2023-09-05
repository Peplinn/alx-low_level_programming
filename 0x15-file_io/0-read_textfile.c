#include "main.h"

/**
* read_textfile - Reads txt file and prints it to stdo
* @filename: Name of the file to read
* @letters: Number of letters to read and print.
* Return: The number of letters it could read and print,
* ELSE, 0 if file can't be opened or read, or filename
* is NULL or write fails.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t desc, bytesRead, bytesWrote;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters + 1);

if (buffer == NULL)
return (0);

desc = open(filename, O_RDONLY);
bytesRead = read(desc, buffer, letters);
bytesWrote = write(STDOUT_FILENO, buffer, bytesRead);

free(buffer);

if (desc == -1 || bytesRead == -1 || bytesWrote == -1)
return (0);

close(desc);
return (bytesWrote);
}
