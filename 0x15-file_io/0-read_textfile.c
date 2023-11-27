#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * read_textfile - this functn reads a text file
 * and prints it to the POSIX stdo
 *
 * @filename: the file name that is read
 *
 * @letters: nr of letters that should be read and printed
 *
 * @Return: the nr of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_m;
	ssize_t lenm, lens;
	char *masilela;

	if (filename == NULL)
		return (0);
	file_m = open(filename, O_RDONLY);
	if (file_m == -1)
		return (0);
	masilela = malloc(sizeof(char) * letters);
	if (masilela == NULL)
	{
		close(file_m);
		return (0);
	}
	lenm = read(file_m, masilela, letters);
	close(file_m);
	if (lenm == -1)
	{
		free(masilela);
		return (0);
	}
	lens = write(STDOUT_FILENO, masilela, lenm);
	free(masilela);
	if (lenm != lens)
		return (0);
	return (lens);
}
