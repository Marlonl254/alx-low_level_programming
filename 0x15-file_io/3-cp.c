#include "main.h"

/**
 * main - this functn copies content of file to another
 *
 * @argc: int
 *
 * @argv: double pntr
 *
 * Return: Copy of file
 */

int main(int argc, char **argv)
{
	int file_d, file_d2, filecheck;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_d = open(argv[1], O_RDONLY);
	if (file_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_d2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_d2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((filecheck = read(file_d, buffer, 1024)) > 0)
	{
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		filecheck = write(file_d2, buffer, filecheck);
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (filecheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_d) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", file_d), exit(100);
	if (close(file_d2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", file_d2), exit(100);

	return (0);
}
