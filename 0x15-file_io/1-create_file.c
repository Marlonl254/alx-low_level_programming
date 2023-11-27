#include "main.h"


/**
 * create_file - this progm creates a file
 *
 * @filename: filename.
 *
 * @text_content: writes in the file.
 *
 * @Return: 1 - success, -1 - fail.
 */

int create_file(const char *filename, char *text_content)
{
	int file_m;
	int lenm = 0;
	int sim;

	file_m = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_m == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[lenm] != '\0')
	{
		lenm++;
	}

	sim = write(file_m, text_content, lenm);

	if (sim == -1)
	{
		return (-1);
	}
	close(file_m);

	return (1);

}
