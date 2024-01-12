#include "main.h"
#include <"string.h">
/* comments
 *
 *
 */
int main(int argc, char *argv[])
{
	char *prompt = ":) Woozah>$  ", *buffer, *cpy_buff, *token;
	size_t size = 0;
	ssize_t num_chars;
	const char *delim = " \n";
	int num_token = 0;
	while (1)
	{
		printf("%s",prompt);
		num_chars = getline(&buffer, &size, stdin);
		if(num_chars == -1){
			printf("Bye Amigos> $ ....\n");
			return (-1);
		}
		cpy_buff = malloc(sizeof(char)* num_chars);
		if (cpy_buff == NULL){
			perror("Memory Allocation failed\n");
			return (-1);
		}
		strcpy(cpy_buff, buffer);
		token  = strtok(buffer,delim);
		while(token != NULL){
			num_token++;
			token = strtok(NULL,delim);
		}
		num_token++;
		argv = malloc(sizeof(char *)* num_token);
		token = strtok(cpy_buff, delim);


		printf("%s\n",buffer);
	}
	free(buffer);
	free(cpy_buff);
	return (0);
}

