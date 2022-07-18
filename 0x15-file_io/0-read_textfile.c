#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
  * read_textfile - reads a text file and prints it to POSIX standard output
  * @filename: the file to read
  * @letters: number of letters to read and print
  *
  * Return: actual number of letters it could read and print
            0 if file cannot be read or opened or filename NULL
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int let;
	ssize_t lenrd, lenwr;
	char *buffer;

	if (filename == NULL)
		return (0);
	let = open(filename, O_RDONLY);
	if (let == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(let);
		return (0);
	}
	lenrd = read(let, buffer, letters);
	close(let);
	if (lenrd == -1)
	{
		free(buffer);
		return (0);
	}
	lenwr = write(STDOUT_FILENO, buffer, lenrd);
	free(buffer);
	if (lenrd != lenwr)
		return (0);
	return (lenwr);
}
