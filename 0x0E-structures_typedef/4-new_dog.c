#include <stdlib.h>
#include "dog.h"

/**
* _strlen - the func returns the length of a string
* @s: str.
*
* Return: string
*/
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	return (m);
}

/**
* *_strcpy - this func copies the string pointed to by src
* incl. the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer str.
* @src: str. copied
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int l, k;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (k = 0; k < l; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}

/**
* new_dog - new dog that will be created
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: ptr new dog (Success), else NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

