#include "main.h"

void _checker(char *file1, char *file2);
void read_err(char *file);
void write_err(char *file);
void close_err(int fd);
int main(int argc, char *argv[]);

/**
  *
  *
  */

void _checker(char *file1, char *file2)
{
	if (file1 == NULL)
		read_err(file1);

	if (file2 == NULL)
		write_err(file2);
}

/**
  *
  *
  */

void read_err(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit (98);
}

/**
  *
  *
  */

void write_err(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit (99);
}

/**
  *
  *
  *
  */

void close_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit (100);
}

/**
  *
  *
  */

int main(int argc, char *argv[])
{
	int file_i, file_o, file_i_read, file_o_write;
	int file_i_close, file_o_close;
	char *buffer;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit (97);
	}
	_checker(argv[1], argv[2]);
	file_i = open(argv[1], O_RDONLY);
	if (file_i == -1)
		read_err(argv[1]);
	file_o = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file_o == -1)
		write_err(argv[2]);
	buffer = malloc(BUFSIZ * sizeof(char));
	if (buffer == NULL)
		return (1);
	file_i_read = read(file_i, buffer, BUFSIZ);
	if (file_i_read == -1)
		read_err(argv[1]);
	while (file_i_read > 0)
	{
		file_o_write = write(file_o, buffer, file_i_read);
		if (file_o_write == -1)
			write_err(argv[2]);
		file_i_read = read(file_i, buffer, BUFSIZ);
		if (file_i_read == -1)
			read_err(argv[2]);
	}
	file_i_close = close(file_i);
	if (file_i_close == -1)
		close_err(file_i_close);
	file_o_close = close(file_o);
	if (file_o_close == -1)
		close_err(file_o_close);
	free(buffer);
	return (0);
}
