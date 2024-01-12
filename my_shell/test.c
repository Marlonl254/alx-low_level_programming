#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[] = "Banana, Orange, Apple";
    char *token;

    token = strtok(input, ",");

    while (token != NULL){
    	printf("Token: %s\n",token);
	token = strtok(NULL, ",");
    }
    return 0;
}
