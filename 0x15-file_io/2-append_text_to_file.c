#include "main.h"

/**
 * append_text_to_file - this progm appends text at the end of a file
 *
 * @filename: name.
 *
 * @text_content: added content
 *
 * @Return: 1 if file exists, -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_m;
	int sime;
	int len = 0;

	if (filename == NULL)
		return (-1);

	file_m = open(filename, O_WRONLY | O_APPEND);

	if (file_m == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
	{
		len++;
	}

	sime = write(file_m, text_content, len);

	if (sime == -1)
		return (-1);

	close(file_m);

	return (1);
}
